#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Array -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_even(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void print_odd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void statistics(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float average = float(sum) / n;
    cout << "Average: " << average << endl;
    cout << "Sum: " << sum << endl;
}

void max_min(int arr[], int n)
{
    int max, min;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;
}

int remove_duplicates(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
        }
    }

    return n;
}

void print_reverse(int arr[], int n)
{
    cout << "Array in reverse -> ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    char choice;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array should have atleast one element" << endl;
        exit(1);
    }

    int arr[n];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        cout << "------MENU------" << endl;
        cout << "1. Print even valued elements" << endl;
        cout << "2. Print odd valued elements" << endl;
        cout << "3. Average and Sum of elements" << endl;
        cout << "4. Maximum and Minimum among the elements" << endl;
        cout << "5. Remove duplicates" << endl;
        cout << "6. Array in Reverse Order" << endl;
        cout << "7. Print Array" << endl;
        cout << "8. EXIT" << endl;
        cout << "Make your choice: ";
        cin >> choice;

        if (choice == '8')
        {
            cout << "Exiting Program" << endl;
            break;
        }

        else if (choice == '1')
        {
            print_even(arr, n);
        }
        else if (choice == '2')
        {
            print_odd(arr, n);
        }
        else if (choice == '3')
        {
            statistics(arr, n);
        }
        else if (choice == '4')
        {
            max_min(arr, n);
        }
        else if (choice == '5')
        {
            cout << "Before duplicate removal" << endl;
            printArray(arr, n);
            n = remove_duplicates(arr, n);
            cout << "After duplicate removal" << endl;
            printArray(arr, n);
        }

        else if (choice == '6')
        {
            print_reverse(arr, n);
        }

        else if (choice == '7')
        {
            printArray(arr, n);
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}