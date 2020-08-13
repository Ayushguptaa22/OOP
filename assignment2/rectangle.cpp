//question-4

#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid)
    {
        if(len>=0.0&&len<=20.0)
        {
            length=len;
        }
        if(wid>=0.0&&wid<=20.0)
        {
            width=wid;
        }
    }
    int peri()
    {
        return 2*(length+width);
    }
    int area()
    {
        return length*width;
    }
};

int main()
{

    float len,wid;
    cout<<"ENTER THE LENGTH";
    cin>>len;
    cout<<"ENTER THE WIDTH";
    cin>>wid;
    Rectangle rect(len,wid);
    cout<<"PERIMETER OF RECTANGLE IS "<<rect.peri()<<endl;
    cout<<"AREA OF RECTANGLE IS "<<rect.area()<<endl;
}
