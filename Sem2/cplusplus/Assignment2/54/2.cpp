/**
 * ASSIGNMENT – 2
 * Q : 2
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/
#include <iostream>
using namespace std;
#define N 100
struct product
{
    string Product_ID;
    double Rating;
};
int check(double &r)
{
    if (r >= 4)
        return 2;
    if (r >= 3 && r < 4)
        return 1;
    if (r < 3)
        return 0;
}
int main()
{
    product info[N];
    cout << "-------------------------\n";
    int n;
    cout << "Enter number of member : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Data of No " << i + 1 << " product";
        cout << "\nProfuct ID : ";
        cin >> info[i].Product_ID;
        cout << "Rating : ";
        cin >> info[i].Rating;
    }
    cout << "-------------------------\n";
    int TOP = 0, AVERAGE = 0, LOW = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = check(info[i].Rating);
        if (temp == 2)
            TOP++;
        else if (temp == 1)
            AVERAGE++;
        else
            LOW++;
    }
    cout << TOP << " Products are top rated\n";
    cout << AVERAGE << " Products are average rated\n";
    cout << LOW << " Products are low rated\n";
    cout << "-------------------------";
    return 0;
}
