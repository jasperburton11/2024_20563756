#ifndef MATHSLIB_ADDER_H //prevents adder.h from being included more than once in a single file
#define MATHSLIB_ADDER_H //defines the MATHSLIB_ADDER_H symbol, which is used to prevent the adder.h header file from being included more than once in a single file.
#if defined(WIN32) || defined(_WIN32)  //checks if the build is for Windows
#ifdef maths_STATIC //checks if the build is for a static library
#define MATHSLIB_API //if the build is for a static library, the MATHSLIB_API macro is not defined.
#else //if the build is for a shared library
#ifdef maths_EXPORTS //checks if the build is for a shared library
#define MATHSLIB_API __declspec(dllexport) //if the build is for a shared library, the MATHSLIB_API macro is defined as __declspec(dllexport).
#else //if the build is for a shared library
#define MATHSLIB_API __declspec(dllimport) //if the build is for a shared library, the MATHSLIB_API macro is defined as __declspec(dllimport).
		#endif //maths_EXPORTS
	#endif // maths_STATIC
#else
#define MATHSLIB_API //if the build is not for Windows, the MATHSLIB_API macro is not defined.
#endif //WIN32
// The above will define the MATHSLIB_API macro to either import or export specifier depending on whether the build is a static or shared library.
// The MATHSLIB_API macro is used to specify the visibility of the add() function when the library is built as a shared library.
// The add() function is declared with the MATHSLIB_API macro, which will be defined as __declspec(dllexport) when building the library, and __declspec(dllimport) when using the library.
// The add() function is declared in the header file adder.h, and defined in the source file adder.cpp.
// The add() function takes two integers as arguments, and returns the sum of the two integers.
MATHSLIB_API int add(int a, int b);
#endif // MATHSLIB_ADDER_H
