#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    if (n <= 0){
        cout << "n can not be less than or equal to zero";
        exit(1);
    }

    float sum = 1;
    cout << "1";
    for (int i = 2; i <= n; i++)
    {
        cout << " + " << (1.0/i);
        sum += (1.0/i);
    }
    
    cout << " = " << sum;

    return 0;
}