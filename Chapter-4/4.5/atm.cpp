#include <iostream>
#include <map>
#include <string>
#include <iomanip> // for std::fixed and std::setprecision
#include <limits>

using namespace std;

class Account
{
public:
    int accNum;
    string accHolderName;
    double balance;

    // Default constructor
    Account() : accNum(0), accHolderName("Unknown"), balance(0.0) {}

    // Constructor with parameters
    Account(int accNum, string accHolderName, double balance)
        : accNum(accNum), accHolderName(accHolderName), balance(balance) {}

    // Function to deposit money
    void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount! Please enter a positive value.\n";
            return;
        }
        balance += amount;
        cout << "Deposited $" << amount << " successfully.\n";
    }

    // Function to withdraw money
    bool withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount! Please enter a positive value.\n";
            return false;
        }
        if (amount > balance)
        {
            cout << "Insufficient balance!\n";
            return false;
        }
        balance -= amount;
        cout << "Withdrew $" << amount << " successfully.\n";
        return true;
    }

    // Function to display account details
    void display()
    {
        cout << fixed << setprecision(2); // Ensures fixed notation with 2 decimal places
        cout << "Account Number: " << accNum << "\n";
        cout << "Account Holder: " << accHolderName << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

// Global map to hold accounts
map<int, Account> accounts;

// Function to create an account
void createAccount()
{
    int accNum;
    string name;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNum;

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (balance < 0)
    {
        cout << "Initial balance cannot be negative!\n";
        return;
    }

    accounts.emplace(accNum, Account(accNum, name, balance));
    cout << "Account created successfully!\n";
}

// Function to deposit money into an account
void depositMoney()
{
    int accNum;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNum;

    auto it = accounts.find(accNum);
    if (it != accounts.end())
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;

        // Check for input errors
        if (cin.fail() || amount < 0)
        {
            cin.clear();                                         // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input! Please enter a valid positive number.\n";
        }
        else
        {
            it->second.deposit(amount);
        }
    }
    else
    {
        cout << "Account not found!\n";
    }
}

// Function to withdraw money from an account
void withdrawMoney()
{
    int accNum;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNum;

    auto it = accounts.find(accNum);
    if (it != accounts.end())
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        // Check for input errors
        if (cin.fail() || amount < 0)
        {
            cin.clear();                                         // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input! Please enter a valid positive number.\n";
        }
        else
        {
            it->second.withdraw(amount);
        }
    }
    else
    {
        cout << "Account not found!\n";
    }
}

// Function to display account details
void displayAccount()
{
    int accNum;

    cout << "Enter Account Number: ";
    cin >> accNum;

    auto it = accounts.find(accNum);
    if (it != accounts.end())
    {
        it->second.display();
    }
    else
    {
        cout << "Account not found!\n";
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n*** ATM Machine ***\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        // Check for input errors
        if (cin.fail())
        {
            cin.clear();                                         // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid choice! Please enter a number between 1 and 5.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            displayAccount();
            break;
        case 5:
            cout << "Thank you for using the ATM!\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}
