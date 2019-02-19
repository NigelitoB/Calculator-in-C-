#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double first_num, second_num, x;
    char redo = 'y';
    char math_operator;

    while (redo == 'y' || redo == 'Y')
    {//Start of while loop

    cout << "****** Welcome to the calculator v1.0 ******"<<endl;
    cout << "********************************************"<<endl;
    cout << "Select one of the math operator, +, -, *, /" << endl;
    cin >> math_operator;
    cout << "Please enter your first number: " << endl;
    cin >> first_num;
    cout << "Please enter your second number:" << endl;
    cin >> second_num;
    cout << first_num << math_operator << second_num << " = ";
    switch(math_operator)
    {
    case '+':
        cout << first_num + second_num << endl;
        break;
    case '-':
        cout << first_num - second_num <<endl;
        break;
    case '*':
        cout << first_num*second_num <<endl;
        break;
    case '/':
        if (second_num == 0)
        {
            cout << "Thou shall not divide by zero, Morty! See you broke the universe again." << endl;
        }
        cout << first_num/second_num <<endl;

        break;
    default:
        cout << "Wrong input again Morty." <<endl;
        break;
    }

    cout << "Would you like to go again (y/n):"<<endl;
    cin >> redo;

    }//End of while loop
    return 0;

}
