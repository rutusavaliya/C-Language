#include<iostream>
using namespace std;
int main()
{
    int maths[5],sci[5],eng[5];
    int grade[5],total[5],i;
    int avg[5];

    for(i=0;i<5;i++)
    {
        cout<<" enter the maths[%d]:",i;
        cin>>maths[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<" enter the sci[%d]:",i;
        cin>>sci[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<" enter the eng[%d]:",i;
        cin>>eng[i];
    }

    for(i=0;i<5;i++)
    {
        total[i]=maths[i]+sci[i]+eng[i];
    }

    for(i=0;i<5;i++)
    {
        avg[i]=maths[i]+sci[i]+eng[i]/3;
    }

    cout<<"\n\tmaths\tsci\teng\ttotal\tavg\tgrade:";

    for(i=0;i<5;i++)

    {
        cout<<" \n\t%d\t%d\t%d\t%d\t%d\t",maths[i],sci[i],eng[i],total[i],avg[i];
        if(maths[i]<35||sci[i]<35||eng[i]<35)

        if(avg[i]>=80)
        {
            cout<<" A ";
        }
        else if (avg[i]>=60)
        {
            cout<<" B ";
        }
        else if(avg[i]>=70)
        {
            cout<<" C ";
        }
        else if(avg[i]>=60)
        {
            cout<<" D ";
        }
    }
}