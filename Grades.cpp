#include <iostream>
using namespace std;

int main(){

    float grade;
    cout<<"Input grade: ";
    cin>>grade;

    if (grade>=90)
    cout<<"A";
    else if (grade>=80 && grade<90)
    cout<<"B";
    else if (grade>=70 && grade<80)
    cout<<"C";
    else
    cout<<"D";

    return 0;


} 