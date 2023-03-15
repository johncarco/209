#include <iostream>
using namespace std;

int main(){

    int month;
    cout <<"Enter month value: ";
    cin>>month;

    switch (month)
    {
        case 1:
        cout<<"month "<<month<<" is January\n";
        break;
        case 2:
        cout<<"month "<<month<<" is February\n";
        break;
        case 3:
        cout<<"month "<<month<<" is March\n";
        break;
        case 4:
        cout<<"month "<<month<<" is April\n";
        break;
        case 5:
        cout<<"month "<<month<<" is May\n";
        break;
        case 6:
        cout<<"month "<<month<<" is June\n";
        break;
        case 7:
        cout<<"month "<<month<<" is July\n";
        break;
        case 8:
        cout<<"month "<<month<<" is August\n";
        break;
        case 9:
        cout<<"month "<<month<<" is September\n";
        break;
        case 10:
        cout<<"month "<<month<<" is October\n";
        break;
        case 11:
        cout<<"month "<<month<<" is November\n";
        break;
        case 12: 
        cout<<"month "<<month<<" is December\n";
        break;
        default:
        cout<<"month "<<month<<" is not a valid month \n";

    }
    return 0;
}