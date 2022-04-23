// Assignment 10 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream fs;
    ofstream ft;
    char ch, fname1[20], fname2[20];
    try
    {
        fs.open("source.txt");
        if (!fs)
        {
            throw 404;
        }
        ft.open("dest.txt");
        try
        {
            if ((!ft))
            {
                cout << "Error in opening file";
            }
        }

        catch (int e)
        {
            cout << "File not found" << e << endl;
        }
        while (fs.eof() == 0)
        {
            fs >> ch;
            ft << ch;
        }
        cout << "File copied successfully";
        fs.close();
        ft.close();
    }
    catch (int a)
    {
        cout << "Source file does not found" << endl;
    }
    return 0;
}