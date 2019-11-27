#include<iostream>
#include<string>
using namespace std;
class Bank{
  
private:
    int a,b,c;
public:
    
    void Input_Amount()
	{
    cout<<"Enter the Deposite Amount:";
    cin>>a;
    }
    void Output_Amount()
	{
        cout<<"Enter the Withdraw Account:";
        cin>>b;
    }
   void condition()
   {
    if(b>a)
    {
        cout<<"===>Error"<<endl<<"===>Error" <<endl<<"===>Error"<<endl<<"===>Error"<<endl<<endl;
        cout<<"Withdrawal amount exceeded Account Balance$\n\n"<<endl;
        cout<<"You Enter the Correct Amount#\n"<<endl;
        cout<<"Your Remaining Amount is#: \n"<<a<<endl;
    }
    else
        c=a-b;
        cout<<"\nYour Remaining Amount is \n"<<c<<endl;
        cout<<"Thanks for using Our Bank \n"<<endl;
        }
};
int main()
{
    cout<<"Welcome the Bank \n"<<endl;// Bank Limited
    Bank a;
    a.Input_Amount();
    a.Output_Amount();
    a.condition();
    
    return 0;
}
