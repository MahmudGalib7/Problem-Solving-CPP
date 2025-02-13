#include <iostream>

using namespace std;

int main() {
/*
  unsigned short us;
  unsigned int ui;
  unsigned long ul;
  unsigned long long ull;

Size/Type	Range
8 bit unsigned	0 to 255
16 bit unsigned	0 to 65,535
32 bit unsigned	0 to 4,294,967,295
64 bit unsigned	0 to 18,446,744,073,709,551,615
 
An n-bit unsigned variable has a range of 0 to (2n)-1.
*/
 
/*  
  unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
  std::cout << "x was: " << x << '\n';

  x = 65536; // 65536 is out of our range, so we get modulo wrap-around
  std::cout << "x is now: " << x << '\n';

  x = 65537; // 65537 is out of our range, so we get modulo wrap-around
  std::cout << "x is now: " << x << '\n';

  return 0;
*/
/*
    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
*/
	unsigned int x{ 2 };
	unsigned int y{ 3 };

	std::cout << x - y << '\n'; // prints 4294967295 (incorrect!)

	return 0;
}
