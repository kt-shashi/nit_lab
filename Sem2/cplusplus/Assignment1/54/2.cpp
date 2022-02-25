/**
 * ASSIGNMENT – 1
 * Q : 2
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#include <iostream>
#include <iomanip>
using namespace std;

// Structure product
struct Product
{
    string Product_Id;
    string Product_Name;
    double Current_Discount_Percentage;
    double Product_Label_Price;
    string User_Rating;
};

// Input product data
void input_detail(Product &product)
{
    cout << "-------Fill Product Details-------\n";

    cout << "Enter Product Id : ";
    cin >> product.Product_Id;

    cout << "Enter Product Name : ";
    cin >> product.Product_Name;

    cout << "Enter Discount Percentage : ";
    cin >> product.Current_Discount_Percentage;

    cout << "Enter Product Label Price : ";
    cin >> product.Product_Label_Price;

    cout << "Enter User Rating : ";
    cin >> product.User_Rating;
}

// Find sales price
double computesalesprice(double Current_Discount_Percentage,double Product_Label_Price)
{
    double AfterDiscount = Product_Label_Price - ((Current_Discount_Percentage / 100) * Product_Label_Price);
    double gst=Product_Label_Price*18/100;
    return AfterDiscount + gst;
}

// Output product data
void output_detail(Product &product)
{
    cout << "---------Product Details---------";
    cout << "\nProduct Id : " << product.Product_Id;

    cout << "\nProduct Name : " << product.Product_Name;
    
    cout << "\nDiscount : " << product.Current_Discount_Percentage << "%";
    
    cout << "\nLabeled Price : Rs." << product.Product_Label_Price;
    
    cout << "\nUser Rating : " << product.User_Rating;
    
    // compute sales price of the product
    cout << "\nThe sales price of product : Rs." 
    << fixed << setprecision(2) 
    << computesalesprice(product.Current_Discount_Percentage,product.Product_Label_Price)<<"\n";
}

int main()
{
    Product products[5];
    // Loop for user input
    for (int i = 0; i < 5; i++)
    {
        // input products details
        input_detail(products[i]);
        // output products details
        output_detail(products[i]);
    }
}
