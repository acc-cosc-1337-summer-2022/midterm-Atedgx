#include "question4.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int books_sold;
    auto again = 'Y';
    while(again == 'Y' || again == 'y'){
        cout<<"\nWelcome to the sales points calculator"<<"\n";
        cout<<"\nPlease input your total wigits sold"<<"\n";
        cin>>books_sold;
        cout<<"\nPress Enter to Continue\n";
        cin.get();
        cin.get();
        auto books_sold_total = get_earned_points(books_sold);
        cout<<"\nYour total points this month are: "<<books_sold_total<<"\n";
        cout<<"\nWould you like to continue (Y/N)?"<<"\n";
        cin>>again;
    }

    return 0;
}