//question-3

#include<iostream>
using namespace std;
class Date
{
private:
    int month;

public:
    Date(int m)
    {
        if(m>=1&&m<=12)
        {
            month=m;
        }
        else
        {
            month=1;
        }
    }
    int displayDate()
    {

        return month;
    }

};

int main()
{
    int d,m,y;
    cout<<"ENTER THE MONTH";
    cin>>m;
    cout<<"ENTER THE DAY";
    cin>>d;
    cout<<"ENTER THE YEAR";
    cin>>y;
    Date date1(m);
    cout<<"DATE IS "<<date1.displayDate()<<"/"<<d<<"/"<<y<<endl;

}

