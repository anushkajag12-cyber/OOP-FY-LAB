#include <iostream>
using namespace std;
class books
{
public:
    string book_title;
    string book_author;
    int price;
    int pages;
    // Default Constructor
    books()
    {
        title = "Homosapiens";
        author = "Yuval Noah Harari";
        price = 390;
        pages = 240;
    }
    // Parameterized Constructor
    books(string t, string a, int p, int pg)
    {
        book_title = t;
        book_author = a;
        price = p;
        pages = pg;
    }
    // Function to display book details
    void display()
    {
        cout << "Book_Title : " << title << endl;
        cout << "Book_Author : " << author << endl;
        cout << "Price : " << price << endl;
        cout << "Pages : " << pages << endl;
        cout << "-----------------------" << endl;
    }
};
int main()
{
    // Object using Default Constructor
    books b1;
    // Object using Parameterized Constructor
    books b2("Harry potter", "Pride and prejudice", 500, 300);
    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();
    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();
    return 0;
}