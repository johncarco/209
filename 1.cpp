#include <cstring>
#include <iostream>
using namespace std;

int main(){

    int Premium=250, Box=100, Sideline=50, GenAd=25, Total=0, Amount1, Amount2, Amount3, Amount4, TotalTix, TotalPremium, TotalBox, TotalSideline, TotalGenAd;

    cout<<"Ticket Prices"<<endl;
    cout<<"\nPremium: $"<<Premium<<endl;
    cout<<"Amount: ";
    cin>> Amount1;

    TotalPremium=Amount1*Premium;

    cout<<"Box: $"<<Box<<endl;
    cout<<"Amount: ";
    cin>> Amount2;

    TotalBox=Amount2*Box;

    cout<<"Sideline: $"<<Sideline<<endl;
    cout<<"Amount: ";
    cin>> Amount3;

    TotalSideline=Amount3*Sideline;

    cout<<"General Ad: $"<<GenAd<<endl;
    cout<<"Amount: ";
    cin>> Amount4;

    TotalGenAd=Amount4*GenAd;

    TotalTix=Amount1+Amount2+Amount3+Amount4;

    Total=TotalPremium+TotalBox+TotalSideline+TotalGenAd;

    cout<<"\nTotal Premium Tickets Sold: $ "<<TotalPremium<<endl;
    cout<<"\nTotal Box Tickets Sold: $"<<TotalBox<<endl;
    cout<<"\nTotal Sideline Tickets: $"<<TotalSideline<<endl;
    cout<<"\nTotal General Ad Tickets: $"<<TotalGenAd<<endl;
    cout<<"\nTotal Ticket Sales: $"<<Total<<endl;
    cout<<"\nOverall Tickets Purchased: "<<TotalTix<<" Tickets"<<endl;

    return 0;

}