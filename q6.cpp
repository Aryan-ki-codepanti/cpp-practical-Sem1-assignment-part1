#include <iostream>
using namespace std;

bool is_prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Primes till 100" << endl;
    for (int i = 2; i < 100; i++)
    {
        if (is_prime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}