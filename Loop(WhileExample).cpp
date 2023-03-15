#include <iostream>
using namespace std;

int main()
{
    char cReply;
    int iNum, iSquare;
    cout<<"Do you want to find the square of a number (y/n)? ";
    cin>>cReply;
    while (cReply == 'y'|| cReply == 'Y')
    {
        cout<<"Enter a number: ";
        cin>>iNum;
        iSquare=iNum*iNum;
        cout<<"The square of "<<iNum<<"is "<<iSquare<<endl;
        cout<<"Do you want to find the square of another number (y/n)? ";
        cin>> cReply;

    }
    return 0;
}