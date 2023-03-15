#include <iostream>
using namespace std;
int main()
{
int month;
cout <<"Enter month value: ";
cin>>month;
switch (month)
{
case 12:
case 1:
case 2:
cout<<"Month "<<month<<" is a Winter Month\n";
break;
case 3:
case 4:
case 5:
cout<<"Month "<<month<<" is a Spring Month\n";
break;
case 6:
case 7:
case 8:
cout<<"Month "<<month<<" is a Summer Month\n";
break;
case 9:
case 10:
case 11: cout<<"Month "<<month<<" is a Fall Month\n";
break;
case 66:
case 99:
default:
cout<<"Month "<<month<<" is not a Valid Month \n";
} return 0;
}