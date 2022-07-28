#include <iostream>
using namespace std;

const int N = 1000;

int main()
{

    int a[N][N], b[N][N], sum[N][N];
    int r, c;

    // User input
    cout << "Enter no of rows:";
    cin >> r;
    cout << "Enter no of columns:";
    cin >> c;
    cout << "Enter first matrix: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1;
            cin >> a[i][j];
        }
    cout << "Enter second matrix: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1;
            cin >> a[i][j];
        }

    // calculating sum

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            *(*(sum + i) + j) = (*(*(a + i) + j)) + (*(*(b + i) + j));

    // output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << (*(*(b + i) + j));
        cout << endl;
    }
}
