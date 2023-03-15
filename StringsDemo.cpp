#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // strcat demo
    cout<<"EXAMPLE 1: "<<endl;
char string_01[50] = "abcd";
char string_02[50] = "edghij";
strcat(string_01, string_02);
cout <<"string_01 = "<< string_01<<endl;

    // strncat demo
    cout<<"\nEXAMPLE 2: "<<endl;
char string_03[50] = "abcd";
char string_04[50] = "efghijkl";
    strncat(string_03, string_04,4);
cout << "string_03 = " <<string_03<<endl;

    // strcmp demo
    cout<<"\nEXAMPLE 3: "<<endl;
    char strcmp_ex1[] ="CAT";
    char strcmp_ex2[] ="CAR";
    // compare str1 and str2 lexicographically
    int res = strcmp(strcmp_ex1, strcmp_ex2);
    cout <<"strcmp output= "<<res;

    // strcpy demo
cout<<"\nEXAMPLE 4: "<<endl;
char string_05[50] = "abcd";
char string_06[50] = "efghijkl";
strcpy(string_05,string_06);
cout <<"string_05 = "<<string_05<<endl;
cout <<"string_06 = "<<string_06<<endl;

    // strncpy demo
cout<<"\nEXAMPLE 5: "<<endl;
char string_07[50] = "abcd";
char string_08[50] = "efghijkl";
strncpy(string_07,string_08,4);
cout <<"string_07 = "<<string_07<<endl;
cout <<"string_08 = "<<string_08<<endl;

    // strlen demo
cout<<"\nEXAMPLE 6: "<<endl;
char string_09[50] = "abcdefghijkl";
int strlen_09 = strlen(string_09);
cout <<"string_09 = "<<strlen_09<<endl;

return 0;

}