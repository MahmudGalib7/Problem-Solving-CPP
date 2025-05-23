/* 
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31
*/

// #include <iostream>
//
// using namespace std;
//
// double calculation(double num1, double num2, char operation) {
// switch(operation) {
//     case '+':
//       cout << num1 << " + " << num2 << " is " << num1 + num2 << endl;
//       break;
//     case '-':
//       cout << num1 << " - " << num2 << " is " << num1 - num2 << endl;
//       break;
//     case '*':
//       cout << num1 << " * " << num2 << " is " << num1 * num2 << endl;
//       break;
//     case '/':
//       if (num2 != 0) {
//         cout << num1 << " / " << num2 << " is " << num1 / num2 << endl;
//       } else {
//         cout << "Division by zero is not allowed." << endl;
//       }
//       break;
//     default:
//       cout << "Invalid operation." << endl;
//       break;
//   }
//   return 0;
// }
//
// int main() {
//   double num1, num2;
//   char operation;
//
//   cout << "Enter two double value: " << endl; 
//   cin >> num1 >> num2;
//   cout << "Enter +, -, *, or /: " << endl;
//   cin >> operation;
//
//   calculation(num1, num2, operation);
// }

/* 
Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Expected output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

Note: Depending on the height of the tower, the ball may not reach the ground in 5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.
Note: The ^ symbol isn’t an exponent in C++. Implement the formula using multiplication instead of exponentiation.
Note: Remember to use double literals for doubles, e.g. 2.0 rather than 2.
*/

#include <iostream>
using namespace std;

double getTowerHeight() {
  cout << "Enter the height of the tower in meters: "; 
  double height {};
  cin >> height;
  return height;
}

double calculateBallHeight(double height, int time) {
  double gravity { 9.8 };

  double fallDistance { gravity * time * time / 2 };
  double ballHeight { height - fallDistance };

  if (ballHeight < 0) {
    return 0.0;
  }

  return ballHeight;
}

void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	double towerHeight{ getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight, 0);
	calculateAndPrintBallHeight(towerHeight, 1);
	calculateAndPrintBallHeight(towerHeight, 2);
	calculateAndPrintBallHeight(towerHeight, 3);
	calculateAndPrintBallHeight(towerHeight, 4);
	calculateAndPrintBallHeight(towerHeight, 5);

	return 0;
}
