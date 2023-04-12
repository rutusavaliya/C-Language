#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[20];
    int nocandidate;
    int centerreqd;
    int CALCNTR()
    {
        return (nocandidate/100+1);
    } 

   public:
   void schedule()
   {
     cout<<" enter testcode:";
     cin>>testcode;
     cout<<" enter description:";
     cin>>description;
     cout<<" enter nocandidate:";
     cin>>nocandidate;
     cout<<" enter centerreqd :";
     cin>>centerreqd;
     
      centerreqd = CALCNTR();
   }

   void DISPTEST()
   {
    cout<<"testcode:"<<testcode<<endl;
         cout<<"description:"<<description<<endl;
         cout<<"nocandidate:"<<nocandidate<<endl;
         cout<<"centerreqd:"<<centerreqd<<endl;
         
   } 
};


int main()
{
    test c;
    c.schedule();
    c.DISPTEST();
}