#include<boost/python.hpp>
#include<boost/numpy.hpp>
namespace py = boost::python;
namespace np = boost::numpy;
#define MODNAME cppmod

BOOST_PYTHON_MODULE(MODNAME) {
	Py_Initialize();
	np::initialize();

	/*
		py::def("func",  func);
		py::class_<SomeClass>(
			"ClassName", py::init<arg>())
			.def("method", &SomeClass::method);
	*/
}
