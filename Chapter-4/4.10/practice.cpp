// Write a simple hello world program 


// #include <iostream>
//
// bool isEqual(int x, int y) {
//   return x == y;
// }
// int main() {
//   // std::cout << "Enter a integer: ";
//   // int x{};
//   //
//   // std::cin >> x;
//   //
//   // bool isNegative { x < 0 };
//   // bool isPositive { x > 0 };
//   // // std::cout << (isNegative ? "Negative" : "Positive") << '\n';
//   // if (isNegative) {
//   //   std::cout << "Negative\n";
//   // }
//   // else if (isPositive) {
//   //   std::cout << "Positive\n";
//   // }
//   // else {
//   //   std::cout << "Zero\n";
//   // }
//   // return 0;
//
//   int x{}, y{};
//   std::cin >> x >> y;
//
//   // std::cout << std::boolalpha;
//   //
//   std::cout << x << " and " << y << " are equal? ";
//   // std::cout << isEqual(x , y) << '\n';
//   std::cout << (isEqual(x, y) ? "Yes" : "No") << '\n';
//   return 0;
// }
//

// Practice

#include <iostream>

bool isPrime(int x) {
  if (x <= 1) {
    return false;
  }
  for (int i = 2; i < x; ++i) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  std::cout << "Please Enter a number: ";
  int x {};
  std::cin >> x;

  if (isPrime(x)) {
    std::cout << x << " is a prime number\n";
  }
  else {
    std::cout << x << " is not a prime number\n";
  }

  return 0;
}
