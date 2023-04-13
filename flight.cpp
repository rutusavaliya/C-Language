#include<iostream>
using namespace std;
class flight
{
     int flightno;
     char destination[20];
     float distance;
     float fuel;
     float CALFUEL()
     {
        if(distance<=1000)
        {
            return  500;
        }
        else if(distance>=1000 && distance<=2000)
        {
             return 1100;
        }
        else 
        {
            return 2200;
        }
     }

     public:
     void FEEDINFO()
     {
     cout<<" enter flightno:";
     cin>>flightno;
     cout<<" enter destination:";
     cin>>destination;
     cout<<" enter distance:";
     cin>>distance;

        fuel = CALFUEL();
     }

     void SHOWINFO()
     {
         cout<<"flightno:"<<flightno<<endl;
         cout<<"destination:"<<destination<<endl;
         cout<<"distance:"<<distance<<endl;
         cout<<"fuel:"<<fuel<<endl;

     }
};

int main()
{
    flight r;
    r. FEEDINFO();
    r. SHOWINFO();
}