//CSC 134
//M2T1
// kogbe
// 2/1/25


#include <iostream>

using namespace std;
int main()
{
    // variables are like mailboxes
    string name = "Fehintola" //replace with your name!
    int num_apples = 10;     // int are whole numbers, so 3, or 1000000, but not 3.5
    double price_each = 0.25; // double stands for floating point, yes thats silly
                              // double are numbers like 3.50 or 11.00000002

                     //think of life an assembly line --put words or numbers on in the order they should print out.

    cout << "Welcome to the " << name << "apple farm!" <<endl;
    cout << "We have" << num_apples << "in stock" << endl ;
    cout << "Each apple costs" << price_each << endl;
   // let's do some moth
   double total_price = num_apples * price_each;
   // finally, we print the answer
   cout << "The total price for all" << num_apples;
   cout << "is: $" << total_price << endl;
   cout << "Thanks for coming by!"<< endl;

   
   return 0;


    cout << endl; //morning class though this looked better
    return 0;
}