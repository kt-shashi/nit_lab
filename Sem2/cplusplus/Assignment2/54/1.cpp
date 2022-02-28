/**
 * ASSIGNMENT – 2
 * Q : 1
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/
#include <iostream>
using namespace std;
class pattern
{
private:
    int number_of_lines;
    int difference;
    int print_number = 1;

public:
    void input();
    void output();
};

void pattern::input()
{
    cout << "Enter number of line : ";
    cin >> number_of_lines;
    cout << "Enter the difference : ";
    cin >> difference;
}
void pattern::output()
{
    cout << "\tPattern\n";
    cout << "-------------------------\n";

    for (int i = 0; i < number_of_lines; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << print_number << " ";
            print_number = print_number + difference;

            if (print_number == 10)
                print_number = 1;
        }
        cout << "\n";
    }
}
int main()
{
    pattern data;
    cout << "-------------------------\n";
    data.input();
    cout << "-------------------------\n";
    data.output();
    cout << "-------------------------";
    return 0;
}
