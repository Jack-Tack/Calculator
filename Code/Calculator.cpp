#include <iostream>
#include <cmath>
using namespace std;

//Function to input the first number, includes an ability to save the previous answer
double inputx(double x, double ans, string YN) {
    //Return here if non-valid input
    Choicex:
    if (ans == 0.00000000001) {
        cout << "Second number: ";
        cin >> x;
        return x;
    }
    else {
        cout << "Do you want to use your previous answer? Y/N\n";
        cin >> YN;
        if (YN == "Y") {
            x = ans;
            return x;
        }
        else if (YN == "N") {
            cout << "Second number: ";
            cin >> x;
            return x;
        }
        else {
            cout << "That is not a valid input.\n";
            goto Choicex;
        }
    }
}

//Function to input the second number, includes an ability to save the previous answer
double inputy(double y, double ans, string YN) {
    //Return here if non-valid input
    Choicey:
    if (ans == 0.00000000001) {
        cout << "First number: ";
        cin >> y;
        return y;
    }
    else {
        cout << "Do you want to use your previous answer? Y/N\n";
        cin >> YN;
        if (YN == "Y") {
            y = ans;
            return y;
        }
        else if (YN == "N") {
            cout << "First number: ";
            cin >> y;
            return y;
        }
        else {
            cout << "That is not a valid input.\n";
            goto Choicey;
        }
    }
}

//Function to perform addition
double addition(double x, double y) {
    return y + x;
}

//Function to perform subtraction
double subtraction(double x, double y) {
    return y - x;
}

//Function to perform multiplication
double multiplication(double x, double y) {
    return y * x;
}

//Function to perform division
double division(double x, double y) {
    return y / x;
}

//Function to perform to take a number to a power
double power(double x, double y) {
    return pow(y, x);
}

//Main Function
int main() {
    int choice;
    double x, y;
    string YN;
    double ans = 0.00000000001;
    cout << "Welcome to the calculator! What do you want to do?\n";
    //Return here once chosen function is performed
    Choice:
    //Ask user for input and provide answer
    cout << "1 for +, 2 for -, 3 for *, 4 for /, 5 to ^, 6 to exit.\n";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "What two numbers do you want to add?\n";
            ans = addition(inputx(x, ans, YN), inputy(y, ans, YN));
            cout << ans << "\n";
            goto Choice;
        case 2:
            cout << "What two numbers do you want to subtract?\n";
            ans = subtraction(inputx(x, ans, YN), inputy(y, ans, YN));
            cout << ans << "\n";
            goto Choice;
        case 3:
            cout << "What two numbers do you want to multiply?\n";
            ans = multiplication(inputx(x, ans, YN), inputy(y, ans, YN));
            cout << ans << "\n";
            goto Choice;
        case 4:
            cout << "What two numbers do you want to divide?\n";
            ans = division(inputx(x, ans, YN), inputy(y, ans, YN));
            cout << ans << "\n";
            goto Choice;
        case 5:
            cout << "What number do you want to have as base and what number is the power?\n";
            ans = power(inputx(x, ans, YN), inputy(y, ans, YN));
            cout << ans << "\n";
            goto Choice;
        case 6:
            cout << "Goodbye!";
            break;
        default:
            cout << "That is not a valid input.\n";
            goto Choice;
    }
}
