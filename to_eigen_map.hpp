#pragma once
#include<boost/numpy.hpp>

template<class T>
auto to_eigen_map(boost::numpy::ndarray ndarr) {
	namespace np = boost::numpy;
	using value_type = T;
	using Stride = Eigen::Stride<
					Eigen::Dynamic,
					Eigen::Dynamic>;
	using Matrix = Eigen::Matrix<
					value_type,
					Eigen::Dynamic,
					Eigen::Dynamic,
					Eigen::RowMajor>;

	assert(ndarr.get_nd()<=2);
	const auto rows=ndarr.shape(0), cols=ndarr.shape(1);
	const auto stride = Stride(
		ndarr.strides(0)/sizeof(value_type),
		ndarr.strides(1)/sizeof(value_type));
	return Eigen::Map<Matrix, Eigen::Unaligned, Stride>
		(reinterpret_cast<value_type*>(ndarr.get_data()), rows, cols, stride);
}

