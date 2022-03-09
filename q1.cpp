#include <iostream>
using namespace std;

int main()
{
    int tmp, last_digit, product, sum;
    product = 1;
    sum = 0;
    cout << "Enter a number: " << endl;
    cin >> tmp;

    int n = tmp < 0 ? (-tmp) : tmp;

    while (n > 0)
    {
        last_digit = n % 10;
        product *= last_digit;
        sum += last_digit;

        n /= 10;
    }

    cout << "Product of digits: " << product << endl;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}