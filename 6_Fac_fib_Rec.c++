#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void towerOfHanoi(int n, char word, char don, char boss)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << word << " to " << don << endl;
        return;
    }
    towerOfHanoi(n - 1, word, don, boss);
    cout << "Move disk " << n << " From " << word << " to " << don << endl;
    towerOfHanoi(n - 1, boss, don, word);
}

int main()
{
    int n;

    cout << "Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    cout << "Enter number of terms for Fibonacci Series : ";
    cin >> n;
    cout << "Fibonacci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    cout << "Enter number of disks for tower of hanoi : " << endl;
    cin >> n;
    cout << "Steps tp solve Tower of Hanoi : " << endl;
    towerOfHanoi(n, 'A', 'B', 'C');
}