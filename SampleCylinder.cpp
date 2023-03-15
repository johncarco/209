#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{ 
    //DOUBLE BACKLASH -- COMMENTS
    //THIS PROGRAM FINDS THE VOLUME OF A CYLINDER
    //WITH CYLINDER RADIUS AND HEIGHT AS USER INPUT

    float r, h, Volume; //DECLARE ALL VARIABLES TO BE USED

    cout<<"Input Cylinder Height: ";
    cin>>h;
    cout<<"Input Cylinder Radius: ";
    cin>>r;

    //M_PI is A CONSTANT from library cmath. This is value of pie
    //pow(r,2) is equivalent to r^2 (this is from
    //cmath library)

    Volume = M_PI*(pow(r,2))*h;

    cout<<"The Volume of the Cylinder is: " <<fixed<<setprecision(2)<<Volume;
    //"<<fixed<<setprecision(2)" part is from <iomanip> library
    //this 'manipulates' the output, in this case, limits the result
    //to 2 decimal places

    return 0;
}