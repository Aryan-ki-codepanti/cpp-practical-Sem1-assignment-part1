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

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0){
            sum -= i;
        }
        else{
            sum += i;
        }
    }
    
    cout << "Sum of series: " << sum;

    return 0;
}