/**
 * ASSIGNMENT – 1
 * Q : 1
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure KYC
struct KYC
{
    string Name;
    string DateOfBirth;
    string PanNumber;
    string AadharNumber;
    string Address;
    double AnnualIncome;
    double SavingUnderTaxScheme;
};

// Input Kyc data
void input_data(KYC &data)
{
    // User input
    cout << "--------KYC Details--------\n";

    cout << "Enter Name : ";
    ws(cin);
    getline(cin, data.Name);

    cout << "Enter Date of Birth : ";
    getline(cin, data.DateOfBirth);

    cout << "Enter Pan Number : ";
    getline(cin, data.PanNumber);

    cout << "Enter Aadhar Number : ";
    getline(cin, data.AadharNumber);

    cout << "Enter Address : ";
    getline(cin, data.Address);

    cout << "Enter Annual Income : ";
    cin >> data.AnnualIncome;

    cout << "Enter Saving under tax scheme : ";
    cin >> data.SavingUnderTaxScheme;
}

// Output Kyc data
void output_data(KYC &data)
{
    cout << "Your updated KYC details";

    cout << "\nName: " << data.Name;

    cout << "\nDate of Birth : " << data.DateOfBirth;

    cout << "\nPan Number : " << data.PanNumber;

    cout << "\nAadhar Number : " << data.AadharNumber;

    cout << "\nAddress : " << data.Address;

    cout << fixed;

    cout << "\nAnnual Income: Rs.";
    cout << setprecision(2) << data.AnnualIncome;

    cout << "\nSaving under tax scheme : Rs.";
    cout << setprecision(2) << data.SavingUnderTaxScheme;
}

// Find income tax
void computeIncomeTax(KYC &data)
{
    cout << fixed;
    cout << "Income Tax : Rs.";

    if (data.AnnualIncome <= 500000)
        cout << 0.00;

    else if (data.AnnualIncome > 500000 && data.AnnualIncome <= 1000000)
        cout << setprecision(2)
             << (data.AnnualIncome - data.SavingUnderTaxScheme) * 0.1;

    else
        cout << setprecision(2)
             << (data.AnnualIncome - data.SavingUnderTaxScheme) * 0.2;

    cout << "\n";
}

int main()
{
    KYC data[7];

    for (int i = 0; i < 2; i++)
    {
        input_data(data[i]);

        cout << "--------------------------\n";
        output_data(data[i]);

        cout << "\n--------------------------\n";
        computeIncomeTax(data[i]);
        cout << "\n";
    }
}
