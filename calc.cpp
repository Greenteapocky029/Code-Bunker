#include <iostream

using namespace std;

int main{

    int num1, num2;
    char op;
    int result;

    cout << "enter the first number";
    cin >> num1;

    cout << "enter the operator";
    cin >> op;

    cout << "enter the first number";
    cin >> num2;

    if(op == '+')
    {
        result = num1 + num2;
        cout << result;

    }
    else if(op == '-')
    {

        result = num1 - num2;
        cout << result;
    }
    else if(op == '*')
    {

        result = num1 * num2;
        cout << result
    }
    else if(op == '/')
    {
        result = num1 / num2;
        cout << result;
    }
    else
    {
        cout << "invalid operator entered"
    }

}
