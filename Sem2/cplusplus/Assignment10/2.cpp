// Assignment 10 Program 2
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char data1[100];
    fout.open("read1.txt");
    cout << "Writing unsorted data in first file" << endl;
    cout << "Enter the numbers with spaces: ";
    cin.getline(data1, 100);

    fout << data1 << endl;
    fout.close();
    fin.open("read1.txt");
    vector<int> vi;
    int value;
    while (fin >> value)
        vi.push_back(value);

    fin.close();
    fout.open("read1.txt");

    int i, j, first, temp;
    int numLength = vi.size();
    for (i = numLength - 1; i > 0; i--)
    {
        first = 0;
        for (j = 1; j <= i; j++)
        {
            if (vi[j] > vi[first])
                first = j;
        }
        temp = vi[first];
        vi[first] = vi[i];
        vi[i] = temp;
    }

    cout << "After sorting data is" << endl;
    for (int i = 0; i < vi.size(); i++)
    {
        fout << vi[i] << " ";
        cout << vi[i] << " ";
    }

    cout << endl;
    fout.close();

    char data2[100];
    fout.open("read2.txt");
    cout << "Writing unsorted data in second file" << endl;
    cout << "Enter the numbers with spaces: ";
    cin.getline(data2, 100);

    fout << data2 << endl;
    fout.close();
    fin.open("read2.txt");

    while (fin >> value)
        vi.push_back(value);

    fin.close();
    fout.open("read2.txt");
    numLength = vi.size();
    for (i = numLength - 1; i > 0; i--)
    {
        first = 0;
        for (j = 1; j <= i; j++)
        {
            if (vi[j] > vi[first])
                first = j;
        }
        temp = vi[first];
        vi[first] = vi[i];
        vi[i] = temp;
    }

    cout << "After sorting both file data is" << endl;
    for (int i = 0; i < vi.size(); i++)
    {
        fout << vi[i] << " ";
        cout << vi[i] << " ";
    }
    cout << endl;
    fout.close();
    return 0;
}