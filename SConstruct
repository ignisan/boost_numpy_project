# SConstruct

env = Environment(
    SHLIBPREFIX="",
	CXXFLAGS=["-O2","-std=c++14"],
	CPPPATH=[
            "/usr/include/eigen3",
            "/usr/include/python3.5m",
            "/home/ignis/local/include",
        ],
    LIBPATH=["/home/ignis/local/lib64",]
)


env.SharedLibrary(
	"cppmod",
	source=["cppmod.cpp",],
    LIBS=["boost_numpy",]
)
