// Assignment 1 Program 2
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#include <iomanip>

#define MAXSIZE 5
#define SGST 9.0
#define CGST 9.0

using namespace std;

// Structure product
struct Product
{
    int productId;
    string productName;
    double currentDiscountPercentage;
    double productLabelPrice;
    double userRating;
};

// Input Kyc data
void input_detail(struct Product &product)
{

    cout << endl
         << "Enter product details: " << endl
         << endl;
    cout << "Enter Product Id: ";
    cin >> product.productId;
    cout << "Enter Product Name: " << endl;
    cin >> product.productName;
    cout << "Enter Current Discount Percentage: ";
    cin >> product.currentDiscountPercentage;
    cout << "Enter Product Label Price: ";
    cin >> product.productLabelPrice;
    cout << "Enter User Rating: ";
    cin >> product.userRating;
}

// Output Kyc data
void output_detail(struct Product &product)
{
    cout << endl
         << "Vewing product details" << endl
         << endl;
    cout << "Product Id: " << product.productId << endl;
    cout << "Product Name: " << product.productName << endl;
    cout << "Current Discount Percentage: " << fixed << setprecision(2) << product.currentDiscountPercentage << "%" << endl;
    cout << "Product Label Price: Rs." << fixed << setprecision(2) << product.productLabelPrice << endl;
    cout << "User Rating: " << fixed << setprecision(2) << product.userRating << endl;
}

// Find sales price
double computesalesprice(struct Product &product)
{

    // Find discount
    double discount = (product.currentDiscountPercentage / 100) * product.productLabelPrice;

    // Subtract discont from Label Price
    double discountedPrice = product.productLabelPrice - discount;

    // Add GST ( 9% SGST and 9% CGST )
    double priceWithGST = discountedPrice + (product.productLabelPrice * (SGST / 100)) + (product.productLabelPrice * (CGST / 100));

    return priceWithGST;
}

int main()
{

    int n = MAXSIZE;
    struct Product products[n];

    // Loop for user input
    for (int i = 0; i < n; i++)
    {
        // input products details
        input_detail(products[i]);
        // output products details
        output_detail(products[i]);
        // compute sales price of the product
        cout << "The sales price of a product is Rs." << fixed << setprecision(2) << computesalesprice(products[i]) << endl;
    }
}