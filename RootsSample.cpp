#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //ROOTS EXAMPLES
    //DON'T FORGET to include #include <cmath>
    
    float x, sqrt_sample, sqrt_sample2, cube_root, N_root ;
    // sqrt of numbers
    x=49;
    sqrt_sample = sqrt(x);
    cout<<"x = "<<sqrt_sample;
    
    x=100;
    sqrt_sample2 = pow(x,(1/2.0));
    cout<<"\nx = "<<sqrt_sample2;
    
    x=81;
    cube_root = pow(x,(1/3.0)); //cube root of 81
    cout<<"\nx = "<<cube_root;
    
    x=32;
    N_root = pow(x,(1/5.0)); //5th root of 32
    cout<<"\nx = "<<N_root;

return 0;
}