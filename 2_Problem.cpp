#include <iostream>
using namespace std;

int main()
{
    int pos_ctr=0;
    float input_val, sum_pos=0;
    cout<<"Input a positive value: ";
    cin>>input_val;
    while (input_val>0)
    {
        pos_ctr++;
        sum_pos = sum_pos + input_val;
        cout<<"Input another positive value: ";
        cin>>input_val;
    }
    cout<<"Number of positive values typed in: "<<pos_ctr<<endl;
    cout<<"Average of positive values typed in: "<<sum_pos/pos_ctr;
    
    return 0;
}