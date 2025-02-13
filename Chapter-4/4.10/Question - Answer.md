# QUIZ TIME 

## Question - Answers 

### 1. What is an early return, and what is its behavior?

#### **Answer:** An early return is a return statement that occurs before the last line of a function. It causes the function to return to the caller immediately.

### 2. A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. Write a program that asks the user to enter a number 0 through 9 (inclusive). If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”. Otherwise, print “The digit is not prime”.

#### **Answer:**

```cpp
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
```

### 3. How can the length of the following code be reduced (without changing the formatting)?

```cpp
#include <iostream>

bool isAllowedToTakeFunRide()
{
  std::cout << "How tall are you? (cm)\n";

  double height{};
  std::cin >> height;

  if (height >= 140.0)
    return true;
  else
    return false;
}

int main()
{
  if (isAllowedToTakeFunRide())
    std::cout << "Have fun!\n";
  else
    std::cout << "Sorry, you're too short.\n";

  return 0;
}
```

#### **Answer:** 
```cpp
bool isAllowedToTakeFunRide()
{
  std::cout << "How tall are you? (cm)\n";

  double height{};
  std::cin >> height;

  return height >= 140.0;
}
```
#### We don’t need the if-statement in isAllowedToTakeFunRide(). The expression height >= 140.0 evaluates to a bool, which can be directly returned.
#### You never need an if-statement of the form:
```cpp
if (condition)
  return true;
else
  return false;
```
#### This can be replaced by the single statement return condition
