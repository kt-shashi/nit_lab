// Assignment 2 Program 2
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

using namespace std;

struct product
{
    int productId;
    short rating;
};

// Returns a number which helps understand the category of product
// 4 : id category is TOP
// 3 : id category is AVERAGE
// 2 : id category is LOW
int findRatingCategory(struct product &prod)
{
    if (prod.rating >= 4)
        return 4;
    else if (prod.rating >= 3 && prod.rating < 4)
        return 3;
    else
        return 2;
}

int main()
{

    // User input
    int n;
    cout << "How many products do you want to enter: ";
    cin >> n;

    struct product *p = new struct product[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Entry for Product " << i + 1 << endl;
        cout << "Enter product id: ";
        cin >> p[i].productId;
        cout << "Enter product rating: ";
        cin >> p[i].rating;
    }

    int top = 0, average = 0, low = 0;
    for (int i = 0; i < n; i++)
    {
        int category = findRatingCategory(p[i]);
        if (category == 4)
            top++;
        else if (category == 3)
            average++;
        else
            low++;
    }

    // Output
    cout << "Number of products that are TOP rated: " << top << endl;
    cout << "Number of products that are AVERAGE rated: " << average << endl;
    cout << "Number of products that are LOW rated: " << low << endl;
}