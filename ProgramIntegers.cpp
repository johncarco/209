#include <iostream>
using namespace std;

int main()
{
    int pos_ctr=0, div3_ctr=0, input_val, sum_pos=0;
    cout<<"Input a positive integer: ";
    cin>>input_val;
    while (input_val>0)
    {
        pos_ctr++;
        if (input_val%3 == 0)
        div3_ctr++;
        else
        sum_pos = sum_pos + input_val;
        cout<<"Input another positive integer: ";
        cin>>input_val;
    }
    cout<<"Number of positive values divisible by 3: "<<div3_ctr;
    cout<<"\nAverage of the numbers NOT divisible by 3: "<<sum_pos/(pos_ctr-div3_ctr);
    return 0;
}