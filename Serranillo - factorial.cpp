#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int z;

    cout << "Enter a positive integer: ";
    cin >> z;

    cout << "Factorial of " << z << " = " << factorial(z);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
