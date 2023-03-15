#include <iostream>
using namespace std;
int main()
{
    int N, ctr=1;
    float work_hrs, payrate,pay;
    cout<<"Input number of employees: ";
    cin>>N;
    while (ctr<=N)
    {
        cout<<"\nInput work hours of Employee Number "<<ctr<<": ";
        cin>>work_hrs;
        cout<<"Input rate of Employee Number "<<ctr<<": ";
        cin>>payrate;
        pay = work_hrs*payrate;
        cout<<"Pay of Employee Number "<<ctr<<" is "<<pay<<". \n";
        ctr++;
    }
    return 0;
}