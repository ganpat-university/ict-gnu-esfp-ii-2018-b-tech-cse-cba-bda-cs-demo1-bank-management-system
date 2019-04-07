#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class bank_mgmt
{
        public :
        int account_no,acc_opening_date,minimum_amount_in_account,a;
        int contact_no,choice1,choice2,member,i,debit_card_issued_date;
        string     customer_id,customer_name,customer_location,temp;
        string nominee_registered,debit_card_issued_on,account_type,multiple_acc;
    
        void get_data()
        {
            a:    cout << "Enter customer ID : ";
                cin >> customer_id;
                temp=validatenum(customer_id);
                if(temp=="a"){goto a;}

            d:    cout<< "Enter cudtomer name :";
                cin >> customer_name;
                temp=validatealpha(customer_name);
                if(temp=="a"){goto d;}

                cout << "Enter account type : ";
                cin >> account_type;
                
                cout << "Enter customer_location: ";
                cin >> customer_location;
            
                cout << "Enter contact no :";
                cin >> contact_no;

                cout << "Enter account opening date : ";
                cin >> acc_opening_date;

            b:    cout << "Enter debit card issued (y/n): ";
                cin >> debit_card_issued_on;
                if(debit_card_issued_on=="N" || debit_card_issued_on=="n" || debit_card_issued_on=="Y" ||                     debit_card_issued_on=="y"){}else{goto b;}
            
            c:    cout << "Enter nominee registered (y/n):";
                cin >> nominee_registered;
                temp=validatealpha(nominee_registered);
                if(temp=="a"){goto c;}
                
                cout << "Enter minimum amount of balance in account:";
                cin >> minimum_amount_in_account;

                cout << "You have Multiple Account (yes/no):";
                cin >> multiple_acc;  
        }
        string validatenum(string sa)
        {
            int i,k;
            k=sa.length();
            for(i=0;i<k;i++)
            {
                if(sa[i] >= 65 && sa[i] <= 122 || sa[i]=='*' || sa[i]=='?'|| sa[i]=='!')
                {
                    cout<<"Wrong input:";
                    return "a";    
                }
            return "s";
            }
        }
        string validatealpha(string sa)
        {
            int i,k;
            k=sa.size();
            for(i=0;i<k;i++)
            {
                if(sa[i] >33 && sa[i] < 63)
                {
                    cout<<"Wrong input:";
                    return "a";
                    break;
                }
            }
            return "s";
        }
        //void show_data()will show the data.
        void show_data()
        {
                cout << "Customer ID : " << customer_id << "\n";
                cout << "Customer name : " << customer_name << "\n";
                cout << "Account type : " << account_type << "\n";
                cout << "Customer Location : " << customer_location << "\n";
                cout << "Customer contact no  : " << contact_no << "\n";
                cout << "Account Opening Date : " << acc_opening_date << "\n";
                cout << "Debit Card issued : " << debit_card_issued_on<< "\n";
                cout << "Debit card issued date : " << debit_card_issued_date << "\n\n";
                cout << "Enter nominee registered : " << nominee_registered << "\n";
                cout << "Minimum amount of balance in account : " << minimum_amount_in_account << "\n";
                cout << "You have multiple account  : " << multiple_acc << "\n";
            
        }
        void display(int member)
        {
            if(member == 1)
            {
                    if(account_type.compare("saving")==0)
                    {
                        ofstream ob("project1.txt",ios::out|ios::app);
                        ob<<customer_id<<"\t";
                        ob<<customer_name<<"\t";
                        ob<<account_type<<"\t";
                        ob<<contact_no <<"\t";
                        ob<<acc_opening_date<<"\t";
                        ob<<nominee_registered<<"\t";
                        ob<<debit_card_issued_on<<"\t";
                        ob<<minimum_amount_in_account<<"\t";
                        ob<<multiple_acc<<"\t\n";
			ob.close();
                        cout.width(10);
                        cout<<left<<customer_id ;
                        cout.width(10);
                        cout<<left<<account_type;
                        cout.width(10);
                        cout<< left<<contact_no;
                        cout.width(10);
                        cout<<left<< account_type;
                        cout.width(15);
                        cout<< left<<acc_opening_date;
                        cout.width(10);
                        cout<< left<<nominee_registered;
                        cout.width(10);
                        cout<< left<<debit_card_issued_on;
                        cout.width(10);
                        cout<< left<<minimum_amount_in_account;
                        cout.width(10);
                        cout<< left<<multiple_acc  << "\n";
                    }
            }        
            else if(member == 2)
            {
                    if(nominee_registered== "y")
                    {
                        cout.width(10);
                        cout<<left<<customer_id ;
                        cout.width(10);
                        cout<<left<<account_type;
                        cout.width(10);
                        cout<< left<<contact_no;
                        cout.width(10);
                        cout<<left<< account_type;
                        cout.width(15);
                        cout<< left<<acc_opening_date;
                        cout.width(10);
                        cout<< left<<nominee_registered;
                        cout.width(10);
                        cout<< left<<debit_card_issued_on;
                        cout.width(10);
                        cout<< left<<minimum_amount_in_account;
                        cout.width(10);
                        cout<< left<<multiple_acc  << "\n";    
                    }
            }
            else if(member == 3)
            {            
                    if(debit_card_issued_on== "y")
                    {
                        cout.width(10);
                        cout<<left<<customer_id ;
                        cout.width(10);
                        cout<<left<<account_type;
                        cout.width(10);
                        cout<< left<<contact_no;
                        cout.width(10);
                        cout<<left<< account_type;
                        cout.width(15);
                        cout<< left<<acc_opening_date;
                        cout.width(10);
                        cout<< left<<nominee_registered;
                        cout.width(10);
                        cout<< left<<debit_card_issued_on;
                        cout.width(10);
                        cout<< left<<minimum_amount_in_account;
                        cout.width(10);
                        cout<< left<<multiple_acc  << "\n";    
                    }
        }
        }
};
int main()
{
    int i,member;
    bank_mgmt ob[10];
    for(i=0;i<1;i++)
    {
    ob[i].get_data();
    }
    cout << "Enter The Member Number to Perform The Task : ";
    cin >> member;
    cout.width(10);
    cout <<left<<"ID";
    cout.width(10);
    cout << left<<"Type";
    cout.width(10);
    cout << left<<"Category";
    cout.width(10);
    cout <<left<< "Price";
    cout.width(15);
    cout << left<<"Avaibility";
    cout.width(10);
    cout <<left<< "Gender"<<endl;
    for(i=0;i<1;i++)
    {
        ob[i].display(member);
    } 
    return 0;
