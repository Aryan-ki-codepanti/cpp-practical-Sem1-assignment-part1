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

    int sum = 1;
    cout << "1";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0){
            cout << " - " << i;
            sum -= i;
        }
        else{
            cout << " + " << i;
            sum += i;
        }
    }
    
    cout << " = " << sum;

    return 0;
}