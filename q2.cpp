#include <iostream>
using namespace std;

int main()
{
    int tmp, n, reversed, last_digit;
    reversed = 0;

    cout << "Enter the number: ";
    cin >> tmp;

    n = tmp < 0 ? -tmp : tmp; 

    while (n > 0)
    {
        last_digit = n % 10;
        reversed = 10 * reversed + last_digit;
        n /= 10;
    }
    reversed = tmp < 0 ? -reversed : reversed;
    cout << "Reversed number: " << reversed ;
    return 0;
}