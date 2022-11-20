#include "Fixed.hpp"


// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }

int	main(void)
{
	Fixed	a(23.41f);
	Fixed	a1(23.4f);
	Fixed	b1(0.000001f);
	Fixed	b2(200);
	Fixed	b3(-0.1234f);
	Fixed	b4(0.1f);
	Fixed	b5(9.1258f);
	Fixed	a2(23.41f);
	Fixed	a3(23.00f);
	Fixed	a4(23);
	Fixed	a5(0);
	Fixed	a6(-1);
	Fixed	a7(46.82f);

	// >
	std::cout << "Test00: \">\"" << std::endl;
	std::cout << a << " > " << a1 << "? " << (a > a1) << std::endl;
	std::cout << a << " > " << a2 << "? " << (a > a2) << std::endl;
	std::cout << a3 << " > " << a4 << "? " << (a3 > a4) << std::endl;
	std::cout << a6 << " > " << a5 << "? " << (a6 > a5) << std::endl << std::endl;
	
	// <
	std::cout << "Test01: \"<\"" << std::endl;
	std::cout << a << " < " << a1 << "? " << (a < a1) << std::endl;
	std::cout << a << " < " << a2 << "? " << (a < a2) << std::endl;
	std::cout << a3 << " < " << a4 << "? " << (a3 < a4) << std::endl;
	std::cout << a6 << " < " << a5 << "? " << (a6 < a5) << std::endl << std::endl;

	// >=
	std::cout << "Test02: \">=\"" << std::endl;
	std::cout << a << " >= " << a1 << "? " << (a >= a1) << std::endl;
	std::cout << a << " >= " << a2 << "? " << (a >= a2) << std::endl;
	std::cout << a3 << " >= " << a4 << "? " << (a3 >= a4) << std::endl;
	std::cout << a6 << " >= " << a5 << "? " << (a6 >= a5) << std::endl << std::endl;

	// <=
	std::cout << "Test03: \"<=\"" << std::endl;
	std::cout << a << " <= " << a1 << "? " << (a <= a1) << std::endl;
	std::cout << a << " <= " << a2 << "? " << (a <= a2) << std::endl;
	std::cout << a3 << " <= " << a4 << "? " << (a3 <= a4) << std::endl;
	std::cout << a6 << " <= " << a5 << "? " << (a6 <= a5) << std::endl << std::endl;

	// ==
	std::cout << "Test04: \"==\"" << std::endl;
	std::cout << a << " == " << a1 << "? " << (a == a1) << std::endl;
	std::cout << a << " == " << a2 << "? " << (a == a2) << std::endl;
	std::cout << a3 << " == " << a4 << "? " << (a3 == a4) << std::endl;
	std::cout << a6 << " == " << a5 << "? " << (a6 == a5) << std::endl << std::endl;

	// !=
	std::cout << "Test05: \"!=\"" << std::endl;
	std::cout << a << " != " << a1 << "? " << (a != a1) << std::endl;
	std::cout << a << " != " << a2 << "? " << (a != a2) << std::endl;
	std::cout << a3 << " != " << a4 << "? " << (a3 != a4) << std::endl;
	std::cout << a6 << " != " << a5 << "? " << (a6 != a5) << std::endl << std::endl;

	// +
	std::cout << "Test06: \"+\"" << std::endl;
	std::cout << a << " + " << a1 << " = " << (a + a1) << std::endl;
	std::cout << a6 << " + " << a2 << " = " << (a6 + a2) << std::endl;
	std::cout << a6 << " + " << a5 << " = " << (a6 + a5) << std::endl << std::endl;

	// -
	std::cout << "Test07: \"-\"" << std::endl;
	std::cout << a << " - " << a1 << " = " << (a - a1) << std::endl;
	std::cout << a6 << " - " << a2 << " = " << (a6 - a2) << std::endl;
	std::cout << a5 << " - " << a6 << " = " << (a5 - a6) << std::endl << std::endl;

	// *
	std::cout << "Test08: \"*\"" << std::endl;
	std::cout << a << " * " << a1 << " = " << (a * a1) << std::endl;
	std::cout << a6 << " * " << a2 << " = " << (a6 * a2) << std::endl;
	std::cout << a5 << " * " << a6 << " = " << (a5 * a6) << std::endl << std::endl;
	std::cout << b1 << " * " << b2 << " = " << (b1 * b1) << std::endl;
	std::cout << b3 << " * " << b4 << " = " << (b2 * b3) << std::endl;
	std::cout << b4 << " * " << b5 << " = " << (b4 * b5) << std::endl;
	std::cout << b2 << " * " << b4 << " = " << (b2 * b4) << std::endl;

	// /
	std::cout << "Test09: \"/\"" << std::endl;
	std::cout << a7 << " / " << a << " = " << (a7 / a) << std::endl;
	std::cout << a2 << " / " << a6 << " = " << (a2 / a6) << std::endl;
	std::cout << a5 << " / " << a6 << " = " << (a5 / a6) << std::endl << std::endl;
	//std::cout << a7 / a5 << std::endl;
}