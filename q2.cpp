#include <iostream>
using namespace std;

int main()
{
    int n, reversed, last_digit;
    reversed = 0;

    cout << "Enter the number: ";
    cin >> n;

    while (n > 0)
    {
        last_digit = n % 10;
        reversed = 10 * reversed + last_digit;
        n /= 10;
    }
    cout << "Reversed number: " << reversed ;
    return 0;
}