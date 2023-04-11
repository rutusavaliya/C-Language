#include<iostream>
using namespace std;
class student
{
     private:
     int admno;
     char sname[20];
     float eng,sci,maths,total;
     float ctotal()
     {
        return eng+sci+maths;
     }  

        public:
        void takedata()
   {
    cout<<" enter admin no:";
    cin>>admno;
    cout<<" enter name:";
    cin>>sname;
    cout<<" enter science marks:";
    cin>>sci;
    cout<<" enter maths marks:";
    cin>>maths;
    cout<<"enter english marks:";
    cin>>eng;

    total = ctotal();
   }

       void showdata()
     {
         cout<<"admin no:"<<admno<<endl;
         cout<<"name no:"<<sname<<endl;
         cout<<"science:"<<sci<<endl;
         cout<<"maths:"<<maths<<endl;
         cout<<"english:"<<eng<<endl;
         cout<<"total:"<<total<<endl;
    
    
     }
};

int main()
{
    student s;
    s. takedata();
    s. showdata();
}