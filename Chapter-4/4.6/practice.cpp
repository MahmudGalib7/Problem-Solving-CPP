#include <cstdint> // for fixed-width integers
#include <iostream>

// int main()
// {
//    std::int16_t i{5};
//    std::cout << i << '\n';
//    return 0;
// }
int main()
{
/*
  std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
*/
  
  std::uint_fast16_t sometype { 0 };
  sometype = sometype - 1; // intentionally overflow to invoke wraparound behavior

  std::cout << sometype << '\n';

	return 0;
}
