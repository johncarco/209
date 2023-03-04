#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float Mass, Density, Volume;

    cout<<"Mass = ";
    cin>>Mass;

    cout<<"Density = ";
    cin>>Density;

    Volume=Mass/Density;

    cout<<"Volume = "<<fixed<<setprecision(2)<<Volume;

    return 0;

}   
    var test = "yes"