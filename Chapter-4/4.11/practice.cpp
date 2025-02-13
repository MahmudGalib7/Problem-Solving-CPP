#include <iostream>

// int main()
// {
//   char ch{};
//   std::cout << "Enter a character: ";
//   std::cin >> ch;
//
//   std::cout << "The ASCII code for " << ch << " is: " << "in decimal " <<
//   (int)ch << " in hex "<< std::hex << (int)ch << " in octal " << std::oct <<
//   (int)ch << std::endl; return 0;
// }

int main() {
  std::cout << "\"This is quoted text\"\n";
  std::cout << "This string contains a single backslash \\\n";
  std::cout << "6F in hex is char '\x6F'\n";
  return 0;
}
