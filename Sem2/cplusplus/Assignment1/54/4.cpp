#include <iostream>
using namespace std;
#define N 100

void input(int (&arr)[N], int &size)
{
    cout << "Enter number of elements : ";
    cin >> size;

    cout << "Enter elements : ";
    for (int index = 0; index < size; index++)
        cin >> arr[index];
}

void count(int (&arr)[N], int &size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j] && arr[j] != -1e9)
            {
                temp++;
                arr[j] = -1e9;
            }
        }
        if (temp != 0)
            count++;
    }
    cout << count << " Numbers have duplicate value!\n";
}

int main()
{
    int arr[N], size;
    cout << "---------------------------\n";
    input(arr, size);
    cout << "---------------------------\n";
    count(arr, size);
    cout << "---------------------------";
    return 0;
}
