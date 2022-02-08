#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0){
        cout << "n can not be negative or less than zero";
        exit(1);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2*i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}