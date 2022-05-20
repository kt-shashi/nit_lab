#include <bits/stdc++.h>
using namespace std;

// Abstract class Product
class Product
{
protected:
    string type;
    string name;
    string companyName;
    string tagLine;
    double price;
    int quantity;
    int hour;

public:
    Product()
    {
        price = 0, quantity = 0, hour = 0;
    }
    virtual void setCompanyName(string s) = 0;
    virtual void setTagLine(string s) = 0;
    virtual void checkout() = 0;
    virtual void setQuantity(int n) = 0;
    virtual double getPrice() = 0;
};

// Classes of Social Media

// Instagram ad revenues
// Merket Price : Rs. 8K per 10K impressions
class Instagram : protected Product
{
public:
    Instagram() : Product()
    {
        name = "Instagram";
        type = "Social Media";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;
        cout << "Quantity: " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 8000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

// Facebook ad revenues
// Merket Price : Rs. 9K per 10K impressions
class Facebook : protected Product
{
public:
    Facebook() : Product()
    {
        name = "Facebook";
        type = "Social Media";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Quantity: " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 9000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

// Youtube ad revenues
// Merket Price : Rs. 9K per 1K impressions
class Youtube : protected Product
{
public:
    Youtube() : Product()
    {
        name = "Youtube";
        type = "Social Media";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Quantity: " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 9000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

class VideoAd : protected Product
{
public:
    VideoAd() : Product()
    {
        name = "Video Ad";
        type = "TV";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Time(in seconds): " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 500 * n;
    }

    double getPrice()
    {
        return price;
    }
};

class LBand : protected Product
{
public:
    LBand() : Product()
    {
        name = "L-Band";
        type = "TV";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Time(in days): " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 30000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

class Scroller : protected Product
{
public:
    Scroller() : Product()
    {
        name = "Scroller";
        type = "TV";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Time(in days): " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 40000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

class PosterAd : protected Product
{
public:
    PosterAd() : Product()
    {
        name = "Poster";
        type = "Poster/Billboard";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Unite(Number of pices): " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 1.5 * n;
    }

    double getPrice()
    {
        return price;
    }
};

class BillboardAd : protected Product
{
public:
    BillboardAd() : Product()
    {
        name = "Billboard";
        type = "Poster/Billboard";
    }

    void setCompanyName(string s)
    {
        companyName = s;
    }

    void setTagLine(string s)
    {
        tagLine = s;
    }

    void checkout()
    {
        cout << "Type: " << type << endl;
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Tagline: " << tagLine << endl;

        cout << "Unite(Number of pices): " << quantity << endl;
        cout << fixed << setprecision(2) << "Price: Rs." << price << endl;
    }

    void setQuantity(int n)
    {
        quantity = quantity + n;
        price = price + 45000 * n;
    }

    double getPrice()
    {
        return price;
    }
};

// Main function
int main()
{

    // Vector products to store items in cart
    vector<Product *> products;
    Product *p;

    string companyName, companyTagLine;
    cout << "-------------------------" << endl;
    cout << "Welcome to Grow Ad-Agency" << endl;
    cout << "\"Grow but fast and smart\"" << endl
         << endl;
    cout << "We provide marketing services to help grow your business/companys!" << endl;
    cout << "-------------------------" << endl
         << endl;

    cout << "Your business/companys detail" << endl;
    cout << "Enter Company's Name : " << endl;
    getline(cin, companyName);
    cout << "Enter Company's Tag Line : " << endl;
    getline(cin, companyTagLine);
    cout << endl;
    cout << "-------------------------" << endl;

    int packageLoopControl = 1;
    while (packageLoopControl)
    {

        cout << "Here are the Packages we offer" << endl;
        cout << "-------------------------" << endl;
        cout << "1. View Social Media Marketing Package" << endl;
        cout << "2. Tv Advertising" << endl;
        cout << "3. Poster/Banner Advertising" << endl;
        cout << "4. Checkout/Bill Payment" << endl;
        cout << "5. Exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Enter your choice : ";
        int PackageChoice;
        cin >> PackageChoice;
        cout << "-------------------------" << endl;

        switch (PackageChoice)
        {
        case 1:
        {

            int socialMediaLoopControl = 1;
            while (socialMediaLoopControl)
            {
                cout << endl
                     << "Welcome to the social media marketing package!" << endl;

                cout << "Here are the following deals you can grab-" << endl
                     << endl;
                cout << "1. Instagram deal" << endl;
                cout << " (Rs. 8,000 per 10,000 impressions)" << endl;

                cout << "2. Meta (Facebook) deal" << endl;
                cout << " (Rs. 9,000 per 10,000 impressions)" << endl;

                cout << "3. Youtube deal" << endl;
                cout << " (Rs. 9,000 per 1,000 impressions)" << endl;

                cout << "Which deal are you interested in? " << endl
                     << "(Else press 0 to go back)" << endl
                     << "Enter your choice : ";

                int socialChoice;
                cin >> socialChoice;

                switch (socialChoice)
                {
                case 0:
                    socialMediaLoopControl = 0;
                    break;
                case 1:
                {

                    int quantity = 0;
                    cout << "Enter quantity : ";
                    cin >> quantity;

                    Instagram *productInstagram = new Instagram();

                    p = (Product *)productInstagram;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(quantity);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                case 2:
                {

                    int quantity = 0;
                    cout << "Enter quantity: ";
                    cin >> quantity;

                    Facebook *productFacebook = new Facebook();
                    p = (Product *)productFacebook;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(quantity);

                    cout << endl
                         << "Added to cart:" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                case 3:
                {

                    int quantity = 0;
                    cout << "Enter quantity: ";
                    cin >> quantity;

                    Youtube *productYoutube = new Youtube();
                    p = (Product *)productYoutube;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(quantity);

                    cout << endl
                         << "Added to cart:" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                default:
                    cout << "Seems like you have enterted an invalid choice.\nPlease try again..." << endl;
                    break;
                }
            }
        }
        break;

        case 2:
        {
            int TvLoopControl = 1;
            while (TvLoopControl)
            {
                cout << endl
                     << "Welcome to the Tv marketing package!" << endl;

                cout << "Here are the following deals you can grab-" << endl
                     << endl;
                cout << "1. Video Ad" << endl;
                cout << " (Rs. 500/second)" << endl;

                cout << "2. L-Band Ad" << endl;
                cout << " (Rs. 30,000/day )" << endl;

                cout << "3. Scroller Ad" << endl;
                cout << " (Rs. 40,000/day )" << endl;

                cout << "Which deal are you interested in? " << endl
                     << "(Else press 0 to go back)" << endl
                     << "Enter your choice : ";

                int TvChoice;
                cin >> TvChoice;

                switch (TvChoice)
                {
                case 0:
                    TvLoopControl = 0;
                    break;
                case 1:
                {

                    int sec = 0;
                    cout << "Enter Time(in second) : ";
                    cin >> sec;

                    VideoAd *productVideoAd = new VideoAd();

                    p = (Product *)productVideoAd;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(sec);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                case 2:
                {

                    int day = 0;
                    cout << "Enter Time(in day) : ";
                    cin >> day;

                    LBand *productLBand = new LBand();

                    p = (Product *)productLBand;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(day);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                case 3:
                {

                    int day = 0;
                    cout << "Enter Time(in day) : ";
                    cin >> day;

                    Scroller *productScroller = new Scroller();

                    p = (Product *)productScroller;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(day);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                }
            }
        }
        break;

        case 3:
        {
            int PosterLoopControl = 1;
            while (PosterLoopControl)
            {
                cout << endl
                     << "Welcome to the Poster/Billboard marketing package!" << endl;

                cout << "Here are the following deals you can grab-" << endl
                     << endl;
                cout << "1. Poster" << endl;
                cout << " (Rs. 1.5/piece)" << endl;

                cout << "2. Billboard" << endl;
                cout << " (Rs. 45,000/piece )" << endl;

                cout << "Which deal are you interested in? " << endl
                     << "(Else press 0 to go back)" << endl
                     << "Enter your choice : ";

                int PChoice;
                cin >> PChoice;

                switch (PChoice)
                {
                case 0:
                    PosterLoopControl = 0;
                    break;
                case 1:
                {
                    int unite = 0;
                    cout << "Enter Unite(Number of pices) : ";
                    cin >> unite;

                    PosterAd *productPosterAd = new PosterAd();

                    p = (Product *)productPosterAd;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(unite);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                case 2:
                {
                    int unite = 0;
                    cout << "Enter Unite(Number of pices) : ";
                    cin >> unite;

                    BillboardAd *productBillboardAd = new BillboardAd();

                    p = (Product *)productBillboardAd;

                    p->setCompanyName(companyName);
                    p->setTagLine(companyTagLine);
                    p->setQuantity(unite);

                    cout << endl
                         << "Added to cart :" << endl
                         << endl;

                    p->checkout();
                    products.push_back(p);
                }
                break;
                }
            }
        }
        break;

        case 4:
        {
            cout << endl
                 << "Loading Bill Receipt.." << endl
                 << endl;

            if (products.size() == 0)
                cout << endl
                     << "Cart is empty. Please enter some items." << endl
                     << endl;
            else
            {

                double totalPrice = 0;
                int itemsCount = 0;

                for (int i = 0; i < products.size(); i++)
                {
                    cout << "-----------------------------" << endl;
                    cout << "Item " << i + 1 << "" << endl;
                    cout << "--------" << endl;
                    Product *p = products[i];
                    p->checkout();
                    totalPrice = totalPrice + p->getPrice();
                    itemsCount++;
                }
                cout << "-----------------------------" << endl;
                cout << "Total Items : " << itemsCount << endl;
                cout << fixed
                     << setprecision(2) << "Total amount: Rs. " << totalPrice << endl;
                cout << "-----------------------------" << endl;
                int checkoutLoopControl = 1;
                while (checkoutLoopControl)
                {

                    cout << endl
                         << "1. Buy and Exit" << endl;
                    cout << "2. Add more Products to cart" << endl;
                    cout << "3. Delete Items from cart" << endl;
                    cout << "4. Go Back" << endl;
                    cout << "Enter choice: ";
                    int checkoutChoice;
                    cin >> checkoutChoice;

                    switch (checkoutChoice)
                    {
                    case 1:
                        packageLoopControl = 0, checkoutLoopControl = 0;

                        cout << "--------------------------" << endl;
                        cout << "Order confirmed. Thanks for choosing us." << endl;
                        cout << "--------------------------";
                        break;
                    case 2:
                        checkoutLoopControl = 0;
                        break;
                    case 3:
                    {
                        int deleteItemIndex;
                        cout << endl
                             << "Which item would you like to delete? : ";
                        cin >> deleteItemIndex;

                        deleteItemIndex--;
                        if (deleteItemIndex >= 0 && deleteItemIndex < products.size())
                        {
                            vector<Product *>::iterator it;
                            it = products.begin() + deleteItemIndex;

                            products.erase(it);

                            cout << endl
                                 << "Item has been deleted" << endl
                                 << endl;
                        }
                        else
                            cout << "Invalid item number. \nPlease try again..." << endl
                                 << endl;

                        checkoutLoopControl = 0;
                    }
                    break;
                    case 4:
                        checkoutLoopControl = 0;
                        break;
                    default:
                        cout << "Seems like you have enterted an invalid choice.\nPlease try again..." << endl;
                        break;
                    }
                }
            }
        }

        break;
        case 5:
            packageLoopControl = 0;
            cout << endl
                 << "Hope we could be of help. Thanks for considering us." << endl
                 << endl;
            break;
        default:
            cout << endl
                 << "Seems like you have enterted an invalid choice.\nPlease try again..." << endl
                 << endl;
            break;
        }
    }

    // De allocating
    for (int i = 0; i < products.size(); i++)
        delete products[i];

    return 0;
}
