#include<iostream>
using namespace std;

class books
{
public:
   int bookname;
   int price;
   string authorname;
   string bookid;

   void librarybooks()
   {
      cout << "bookname: " << bookname << endl;
      cout << "price: " << price << endl;
      cout << "authorname: " << authorname<< endl;
      cout << "bookid: " << bookid << endl;
   }
};

int main()
{
   books b1;

   b1.bookname = "Homosapiens";
   b1.price = 420;
   b1.authorname = "Yuval Noah Harari";
   b1.bookid= 24;

   b1.librarybooks();

   return 0;
}