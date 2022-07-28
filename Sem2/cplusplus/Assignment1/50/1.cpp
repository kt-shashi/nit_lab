// Assignment 1 Program 1
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#include <iomanip>
#include <string>

#define MAXSIZE 7

using namespace std;

// Structure KYC
struct KYC
{
    string name;
    string dateOfBirth;
    int panNumber;
    int aadharNumber;
    string address;
    double annualIncome;
    double savingUnderTaxScheme;
};

// Input Kyc data
void input_data(struct KYC &kyc)
{

    // User input
    cout << "Complete your KYC" << endl
         << endl;
    cout << "Enter Name: " << endl;
    ws(cin);
    getline(cin, kyc.name);
    cout << "Enter Date of Birth (DD-MM-YYY): ";
    cin >> kyc.dateOfBirth;
    cout << "Enter Pan Number: ";
    cin >> kyc.panNumber;
    cout << "Enter Aadhar Number: ";
    cin >> kyc.aadharNumber;
    cout << "Enter Address: " << endl;
    ws(cin);
    getline(cin, kyc.address);
    cout << "Enter Annual Income: ";
    cin >> kyc.annualIncome;
    cout << "Enter Saving under tax scheme: ";
    cin >> kyc.savingUnderTaxScheme;
}

// Output Kyc data
void output_data(struct KYC &kyc)
{
    cout << endl
         << "Your updated KYC details" << endl
         << endl;
    cout << "Name: " << kyc.name << endl;
    cout << "Date of Birth: " << kyc.dateOfBirth << endl;
    cout << "Pan Number: " << kyc.panNumber << endl;
    cout << "Aadhar Number: " << kyc.aadharNumber << endl;
    cout << "Address: " << kyc.address << endl;
    cout << "Annual Income: Rs." << fixed << setprecision(2) << kyc.annualIncome << endl;
    cout << "Saving under tax scheme: Rs." << fixed << setprecision(2) << kyc.savingUnderTaxScheme << endl;
}

// Find income tax
double computeIncomeTax(struct KYC &kyc)
{
    if (kyc.annualIncome <= 500000)
        return 0;
    else if (kyc.annualIncome > 500000 && kyc.annualIncome <= 1000000)
        return 0.1 * (kyc.annualIncome - kyc.savingUnderTaxScheme);
    else
        return 0.2 * (kyc.annualIncome - kyc.savingUnderTaxScheme);
}

int main()
{

    int n = MAXSIZE;
    struct KYC kyc[n];

    // Loop for user input
    for (int i = 0; i < n; i++)
    {
        // input KYC details
        input_data(kyc[i]);
        
        // output KYC details
        output_data(kyc[i]);

        // output Tax details
        cout << "You have to pay Rs. " << fixed << setprecision(2) << computeIncomeTax(kyc[i]) << " as tax." << endl
             << endl;
    }
}