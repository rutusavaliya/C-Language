#include<iostream>
using namespace std;
class bat
{
    private: 
    int bcodeno;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calcavg()
    {
        return runs/(innings-notout);
    }

   public:
   void readdata()
   {
     cout<<" enter bcodeno:";
     cin>>bcodeno;
     cout<<" enter bname:";
     cin>>bname;
     cout<<" enter innings:";
     cin>>innings;
     cout<<" enter notout:";
     cin>>notout;
     cout<<" enter runs:";
     cin>>runs;

     batavg= calcavg();
   }
   void displaydata()
   {
      cout<<"bcodeno:"<<bcodeno<<endl;
         cout<<"bname no:"<<bname<<endl;
         cout<<"innings:"<<innings<<endl;
         cout<<"notout:"<<notout<<endl;
         cout<<"runs:"<<runs<<endl;
         cout<<"batavg:"<<batavg<<endl;
   }   
};

int main()
{
    bat r;
    r.readdata();
    r.displaydata();
}