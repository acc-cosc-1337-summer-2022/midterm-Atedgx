#include "question3.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double sales_total;
    double new_total;
    auto again = 'Y';
    while(again == 'Y' || again == 'y'){
        cout<<"Welcome to the sales commission calculator"<<"\n";
        cout<<"\nPlease input your sales total."<<"\n";
        cin>>sales_total;
        new_total = get_sales_commission(sales_total);
        cout<<"\nYour commission total is: "<<new_total<<"\n";
        cout<<"\nYour sales and commission total is: "<< sales_total+new_total<<"\n";
        cout<<"\nWould you like to input a new sales total? (Y/N)"<<"\n";
        cin>>again;
    }

    return 0;
}