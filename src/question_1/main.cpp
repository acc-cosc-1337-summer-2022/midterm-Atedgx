#include <iostream>
#include "question1.h"

using std::cin;
using std::cout;

int main (){
auto confirm = 'Y';
while(confirm == 'Y' || confirm == 'y'){
    Rectangle myRectangle;
    int len;
    int wid;
    cout<<"Welcome to the Rectangle Area Program"<<"\n\n";
    cout<<"Please input the length for the rectangle"<<"\n";
    cin>>len;
    cout<<"\n"<<"Thank you so much\n\n";
    cout<<"Now, Please enter the width for the rectangle"<<"\n";
    cin>>wid;
    cout<<"\nPerfect"<<"\n\n";
    cout<<"Now calculating....."<<"\n\n";
    myRectangle.get_length(len);
    myRectangle.get_width (wid);
    cout<<"Your width was: "<<len<<"\n";
    cout<<"Your length was: "<<wid<<"\n\n";
    cout <<"Press Enter to Continue";
    cin.get();
    cin.get();
    cout<<"\nNow calculating your area....."<<"\n";
    cout <<"\nPress Enter to Continue";
    cin.get();
    int area = myRectangle.get_area(len, wid);
    cout<<"\nYour area is: "<<area<<"\n\n";
    cout<<"Would you like to continue? (Y/N)";
    cin>>confirm;
}
    return 0;
}