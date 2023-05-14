    #include <iostream>
    #include <cmath>
    #include <iomanip>

    using namespace std;
    class employee 
    {
	    public:
	    string empNAME;

    };
  
    void INVENTORY()
    {
        cout<<"\n\n///////////////INVENTORY SYSTEM///////////////";
	    cout<<"\n1. SET PRICE";
	    cout<<"\n2. SET INITIAL QUANTITY";
	    cout<<"\n3. STOCK AVAILABILITY";
	    cout<<"\n//////////////////////////////////////////////";
    }
    void SET_PRICE(float& rice, float& bread, float& eggs, float& biscuit, float& pork, float& chicken, float& beef, float& fish, float& coffee, float& juice, float& apple, float& banana, float& grapes, float& orange)
    {
	    cout<<"\n///////////////////////PRICE/////////////////////\n"; 
	    cout<<"Enter price for rice:      Php ";
        cin>>rice;
        cout<<"Enter price for bread:     Php ";
        cin>>bread;
        cout<<"Enter price for eggs:      Php ";
        cin>>eggs;
        cout<<"Enter price for biscuit:   Php ";
        cin>>biscuit;
        cout<<"Enter price for pork:      Php ";
        cin>>pork;
        cout<<"Enter price for chicken:   Php ";
        cin>>chicken;
        cout<<"Enter price for beef:      Php ";
        cin>>beef;
        cout<<"Enter price for fish:      Php ";
        cin>>fish;
        cout<<"Enter price for coffee:    Php ";
        cin>>coffee;  
        cout<<"Enter price for juice:     Php ";
        cin>>juice;
        cout<<"Enter price for apple:     Php ";
        cin>>apple;
        cout<<"Enter price for banana:    Php ";
        cin>>banana;
        cout<<"Enter price for grapes:    Php ";
        cin>>grapes;
        cout<<"Enter price for orange:    Php ";
        cin>>orange;
	    cout<<"\n/////////////////////////////////////////////////\n";
    }
    void SET_QTY(int& erice, int& ebread, int& eeggs, int& ebiscuit, int& epork, int& echicken, int& ebeef, int& efish, int& ecoffee, int& ejuice, int& eapple, int& ebanana, int& egrapes, int& eorange)
    {
        cout<<"\n/////////////////////QUANTITY////////////////////\n";
	    cout<<"\n\nKilograms of Rice Stocked:    ";
        cin>>erice;
	    cout<<"Quantity of Bread Stocked:    ";
        cin>>ebread;
        cout<<"Quantity of Eggs Stocked:     ";
        cin>>eeggs;
        cout<<"Quantity of Biscuit Stocked:  ";
        cin>>ebiscuit;
        cout<<"Kilograms of Pork Stocked:    ";
        cin>>epork;
        cout<<"Kilograms of Chicken Stocked: ";
        cin>>echicken;
        cout<<"Kilograms of Beef Stocked:    ";
        cin>>ebeef;
        cout<<"Kilograms of Fish Stocked:    ";
	    cin>>efish;
        cout<<"Quantity of Coffee Stocked:   ";
        cin>>ecoffee;
        cout<<"Quantity of Juice Stocked:    ";
        cin>>ejuice;
        cout<<"Quantity of Apples Stocked:   ";
        cin>>eapple;
        cout<<"Quantity of Bananas Stocked:  ";
        cin>>ebanana;
        cout<<"Quantity of Grapes Stocked:   ";
        cin>>egrapes;
        cout<<"Quantity of Oranges Stocked:  ";
        cin>>eorange;	
    }
    void PURCHASED(int& nrice, int& nbread, int& neggs, int& nbiscuit,int& ncoffee,int& njuice, int& npork, int& nchicken, int& nbeef, int& nfish, int& napple, int& nbanana, int& ngrapes, int& norange, int& subtotal, int& discounted)
    {
	    cout<<"\n//////////////////BILLING SYSTEM/////////////////\n";
	    cout<<"Kilograms of Rice Purchased:    ";
	    cin>>nrice;
        cout<<"Quantity of Bread Purchased:    ";
        cin>>nbread;
        cout<<"Quantity of Eggs Purchased:     ";
        cin>>neggs;
        cout<<"Quantity of Biscuit Purchased:  ";
        cin>>nbiscuit;
        cout<<"Kilograms of Pork Purchased:    ";
        cin>>npork;
        cout<<"Kilograms of Chicken Purchased: ";
        cin>>nchicken;
        cout<<"Kilograms of Beef Purchased:    ";
        cin>>nbeef;
        cout<<"Kilograms of Fish Purchased:    ";
        cin>>nfish;
        cout<<"Quantity of Coffee Purchased:   ";
        cin>>ncoffee;
        cout<<"Quantity of Juice Purchased:    ";
        cin>>njuice;
        cout<<"Quantity of Apples Purchased:   ";
        cin>>napple;
        cout<<"Quantity of Bananas Purchased:  ";
        cin>>nbanana;
        cout<<"Quantity of Grapes Purchased:   ";
        cin>>ngrapes;
        cout<<"Quantity of Oranges Purchased:  ";
        cin>>norange;
	    cout<<"\n/////////////////////////////////////////////////\n";   
    }

    void EMPLOYEE_REPORT(int& IDn, int& empTIM, int& empTIH, int& OptEmp, int& empDAT, int& empMON, int& empYER, int& empTOM, int& empTOH)
    {

	    cout<<"\n/////////////////EMPLOYEE REPORT////////////////\n";
	    cout<<"\nWelcome Student #"<<IDn<<"\n";	
	    cout<<"\nATTENDANCE:\n";
	    cout<<"\n1. DATE";
	    cout<<"\n2. TIME-IN";
	    cout<<"\n3. TIME-OUT";
	    cout<<"\n\nOption: ";
	    cin>>OptEmp;
	    switch(OptEmp)	
	    {
		    case 1: cout<<"\n\n/////////////////////////////////////////////////\n";
				    cout<<"\nDate: ";
				    cin>>empDAT;
				    cout<<"\nMonth: ";
				    cin>>empMON;
				    cout<<"\nYear: ";
				    cin>>empYER;
				    break;
		    case 2: cout<<"\n/////////////////////////////////////////////////\n";
				    cout<<"\nTime-in HOUR/s: ";
				    cin>>empTIH;
				    cout<<"\nTime-in MINUTES/s: ";
				    cin>>empTIM;
				    break;
		    case 3: cout<<"\n/////////////////////////////////////////////////\n";
				    cout<<"\nTime-out HOUR/s: ";
				    cin>>empTOH;
				    cout<<"\nTime-out MINUTES/s: ";
				    cin>>empTOM;
				    break;
		    default: cout<<"Invalid INput!";
				    break;
	    }
	    cout<<"\n/////////////////////////////////////////////////\n";
	    cout<<"\nDATE: "<<empMON<<"/"<<empDAT<<"/"<<empYER;
	    cout<<"\nTime-in:  "<<empTIH<<":"<<empTIM;
	    cout<<"\nTime-out: "<<empTOH<<":"<<empTOM;
    }
    int main()
    {
        
        employee emp1;
	    emp1.empNAME="RALPH BUCSIT!";
	    employee emp2;
	    emp2.empNAME="NICOS CAYABYAB!";
	    employee emp3;
	    emp3.empNAME="LORENZO CRUZADO!";
	    employee emp4;
	    emp4.empNAME="JOHN HERICO!";
	    employee emp5;
	    emp5.empNAME="LANCE MONTENEGRO!";
	    employee emp6;
	    emp6.empNAME="ALTHEA PEQUE!";

    

	    int IDn,option,optinv,empTIM,empTIH,empDAT,OptEmp,empMON,empYER,empTOH,empTOM;
        int optbill, bill, billCARD, billOP, discTYPE, discVAL, ds, payment, change, discCODE;
	    float rice, bread, eggs, biscuit, pork, chicken, beef, fish, coffee, juice, apple, banana, grapes, orange;
	    int erice, ebread, eeggs, ebiscuit, epork, echicken, ebeef, efish, ecoffee, ejuice, eapple, ebanana, egrapes, eorange;
	    int nrice, nbread, neggs, nbiscuit,ncoffee,njuice, npork, nchicken, nbeef, nfish, napple, nbanana, ngrapes, norange, subtotal, discounted;
	    cout<<"\n\n\nEnter ID Number: ";
	    cin>>IDn;
	    switch(IDn)
	    {
		    case 2022166723: {cout<<"\nWelcome "<<emp1.empNAME;
				    break;
		    }
		    case 2022667231: {cout<<"\nWelcome "<<emp2.empNAME;
				    break;
		    }
		    case 2022672316: {cout<<"\nWelcome "<<emp3.empNAME;
				    break;
		    }
		    case 2022723166: {cout<<"\nWelcome "<<emp4.empNAME;
				    break;
		    }
		    case 2022166735: {cout<<"\nWelcome "<<emp5.empNAME;
				    break;
		    }			
		    case 2022316672: {cout<<"\nWelcome "<<emp6.empNAME;
				    break;
		    }			default: {cout<<"\nInvalid Input";
				     break;
		    }
	    }
	    for(;;)
	    {
            cout<<"\n\n//////////////////MAIN MENU///////////////////";
            cout<<"\n1. INVENTORY SYSTEM";
            cout<<"\n2. BILLING SYSTEM";
            cout<<"\n3. EMPLOYEE REPORT";
            cout<<"\n4. EXIT PROGRAM";
            cout<<"\n//////////////////////////////////////////////";
            cout<<"\n\nOption: ";
            cin>>option;
            switch(option)
            {
                case 1: INVENTORY();
                        cout << "\n\nOption: ";
                        cin >> optinv;
                        switch(optinv)
                        {
                            case 1: SET_PRICE(rice, bread, eggs, biscuit, pork, chicken, beef, fish, coffee, juice, apple, banana, grapes, orange);
                                    break;
                            case 2: SET_QTY(erice, ebread, eeggs, ebiscuit, epork, echicken, ebeef, efish, ecoffee, ejuice, eapple, ebanana, egrapes, eorange);
                                    break;
                        }
                        break;
                case 2: PURCHASED(nrice, nbread, neggs, nbiscuit,ncoffee,njuice, npork, nchicken, nbeef, nfish, napple, nbanana, ngrapes, norange, subtotal, discounted);
                        
                        subtotal=(nrice*rice)+(nbread*bread)+(neggs*eggs)+(nbiscuit*biscuit)+(npork*pork)+(nchicken*chicken)+(nbeef*beef)+(nfish*fish)+(ncoffee*coffee)+(njuice*juice)+(napple*apple)+(nbanana*banana)+(ngrapes*grapes)+(norange*orange);
                        
                        

					    cout << "\n/////////////////////////////////////////////////";
					    cout << "\nSUBTOTAL:  Php " <<fixed<<setprecision(2)<< subtotal << endl;
					    cout << "\n/////////////////////////////////////////////////";

                        cout << "\nMode of Payment: \n(1) Credit Card\n(2) Online\n(3) Cash\nInput: ";
                        cin >> bill;
                            switch (bill)
                            {


                                case 1:
                                    cout << "\nPlease indicate from which bank: \n(1) BPI\n(2) Metrobank\n(3) BDO\n(4) Chinabank\nInput: ";
                                    cin >> billCARD;
                                    {   
                                        
                                        switch(billCARD)
                                        {
                                            case 1: cout<<"\nCredit Card from: BPI";
                                                    break;   
                                            case 2: cout<<"\nCredit Card from: Metrobank";
                                                    break;
                                            case 3: cout<<"\nCredit Card from: BDO";
                                                    break;
                                            case 4: cout<<"\nCredit Card from: Chinabank";
                                                    break;
                                            default:cout<<"\nInvalid Input!";
                                                    cout<<"\nPlease indicate from which bank: \n(1) BPI\n(2) Metrobank\n(3) BDO\n(4) Chinabank\nInput: ";
                                                    cin>>billCARD;
                                                    break;  
                                        }
                                        
                                    }
                                break;

                                case 2: 
                                    cout << "\nPlease indicate from which channel: \n(1) PayMaya\n(2) GCash\nInput: ";
                                    cin >> billOP;
                                    switch(billOP)
                                    {
                                        case 1: cout<<"\nOnline Payment from: PayMaya";
                                                break;

                                        case 2: cout<<"\nError! Servers from GCash are temporarily down.";
                                                break;

                                        default:cout<<"\nInvalid Input!";
                                                cout<<"\nPlease indicate from which channel: \n(1) PayMaya\n(2) GCash\nInput: ";
                                                cin>>billOP;
                                                break;
                                    }
                                break;
                                    
                                case 3:
                                    cout<<"\nPayment Mode Selected: Cash";
                                    break;

                                default:
                                cout<<"\nInvalid Input!";
                                cin>>bill;
                                break;

                            }

                        cout << "\n\nDo you wish for a Discount?\n" << endl;
                        cout << "\n(1) Yes \n(2) No \nInput: " << endl;
                        cin >> ds;
                        

                        if (ds == 1)
                        {
                            cout << "\nPlease input which type of discount will be availed: \n(1) PWD Discount\n(2) Senior Citizen Discount\n(3) Promo Code\nInput: ";
                            cin >> discTYPE;

                            if (discTYPE == 1)
                            {
                                discounted=(subtotal*0.80);
                            }

                            else if (discTYPE == 2)
                            {
                                discounted=(subtotal*0.80);
                            }

                            else if (discTYPE == 3)
                            {
                                discCODE == 012345;

                                cout<<"\nPlease input 6-digit promo code: \n";
                                cin>>discCODE;

                                switch (discCODE)
                                {
                                    case 012345:
                                        discounted = (subtotal * 0.95);
                                        break;
                                    
                                    case 123450:
                                        discounted = (subtotal * 0.95);
                                        break;
                                    
                                    case 234501:
                                        discounted = (subtotal * 0.95);
                                        break;

                                    default:
                                    break;
                                }

                                
                                
                            }


                            cout << "\nTotal: Php " << fixed << setprecision(2) << discounted << endl;
                            cout << "\nAmount received:  Php ";
                            cin >> payment;

                            change = payment - discounted;

                            cout << "\nChange: Php " << change << endl;
                            cout << "\n\n/////////////////////////////////////////////////" << endl;
                            cout << "\n\nThank you for flying with us at SuperMark!" << endl;
                            cout << "\n\n/////////////////////////////////////////////////" << endl;

                        }
                        else
                        {
                            cout << "\nTotal: Php " << fixed << setprecision(2) << subtotal << endl;   
                            cout << "\nAmount received:  Php ";
                            cin >> payment;

                            change = payment - subtotal;

                            cout << "\nChange: Php " << change << endl;
                            cout << "\n\n/////////////////////////////////////////////////" << endl;
                            cout << "\n\nThank you for flying with us at SuperMark!" << endl;
                            cout << "\n\n/////////////////////////////////////////////////" << endl;
                        }
			
					    break;
                case 3: EMPLOYEE_REPORT(IDn,empTIM,empTIH,OptEmp,empDAT,empMON,empYER,empTOH,empTOM);
                        break;
                case 4: cout<<"\n Thank you for using our system STUDENT #"<<IDn;
                        break;
                default: cout<<"Invalid Input!";
                         cout<<"Try Again!";
                        break;
            }
        }

        return 0;
    }
//m