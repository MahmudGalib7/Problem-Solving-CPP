---

# 🎯 **Quiz Time**

---

## ❓ **Question 1: Pick the Appropriate Data Type**

Choose the most appropriate data type for each situation. Be specific!

| Case                                                             | Answer         |
| ---------------------------------------------------------------- | -------------- |
| a) The age of the user (in years), assume size isn’t important   | `int`          |
| b) Pi (3.14159265)                                               | `double`       |
| c) Number of pages in a textbook (assume size is not important)  | `int`          |
| d) Whether the user wants the app to check for updates           | `bool`         |
| e) Length of a couch in feet (to 2 decimal places, size matters) | `float`        |
| f) How many times you’ve blinked (in the millions)               | `std::int32_t` |
| g) A user selecting a menu option by letter                      | `char`         |
| h) Year of birth (size is important)                             | `std::int16_t` |

---

## ✍️ **Question 2: Simple Calculator**

Write a program that accepts two floating-point numbers and a math operation (`+`, `-`, `*`, or `/`), performs the operation, and prints the result.

### ✅ **Example Output**

```bash
Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31
```

### 💡 **Answer**

```cpp
#include <iostream>
using namespace std;

void calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " is " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " is " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " is " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " is " << num1 / num2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter a double value: ";
    cin >> num1;
    cout << "Enter another double value: ";
    cin >> num2;
    cout << "Enter +, -, *, or /: ";
    cin >> operation;

    calculate(num1, num2, operation);
    return 0;
}
```

---

## 🚀 **Question 3: Ball Drop Simulator**

Simulate a ball dropped from a tower under gravity, and print its height at each second for the first 5 seconds.

> 📌 **Formula:**
> `distance = (gravity * time^2) / 2`
> Since `^` isn't exponentiation in C++, use `time * time`.

> 💡 **Note:**
>
> * Use `double` literals (e.g., `2.0` instead of `2`)
> * Don't let the ball go below ground level.

### ✅ **Expected Output**

```bash
Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.
```

### 💡 **Answer**

```cpp
#include <iostream>
using namespace std;

constexpr double gravity { 9.8 };

double getTowerHeight() {
    cout << "Enter the height of the tower in meters: ";
    double height {};
    cin >> height;
    return height;
}

double calculateBallHeight(double initialHeight, int seconds) {
    double distanceFallen = gravity * seconds * seconds / 2.0;
    double currentHeight = initialHeight - distanceFallen;

    return (currentHeight > 0.0) ? currentHeight : 0.0;
}

void printBallStatus(double height, int seconds) {
    if (height > 0.0)
        cout << "At " << seconds << " seconds, the ball is at height: " 
             << height << " meters" << endl;
    else
        cout << "At " << seconds << " seconds, the ball is on the ground." << endl;
}

int main() {
    double towerHeight = getTowerHeight();

    for (int i = 0; i <= 5; ++i) {
        double height = calculateBallHeight(towerHeight, i);
        printBallStatus(height, i);
    }

    return 0;
}
```

---
