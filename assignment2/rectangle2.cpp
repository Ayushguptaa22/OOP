//question-5

#include<iostream>
using namespace std;
class Rectangle2
{
private:
    double X,Y,X1,Y1,l,w;
    int flag;
public:
    Rectangle2(double x[4], double y[4])
    {
        int t=0,j,q=0,i;
        for(i=0;i<4;i++)
        {
            X=x[0];
            X1=X;
            Y=y[0];
            Y1=Y;

                if(X==x[i])
                    t++;
                if(Y==y[i])
                    q++;
                    if(x[i]>X1)
                    X1=x[i];
                    if(y[i]>Y1)
                    Y1=y[i];
        }
        if(t==2&&q==2)
        flag=1;
    }
    int verify()
    {
        if(flag==1)
        {
            cout<<"RECTANGLE\n";
        }
        else
            cout<<"NOT RECTANGLE\n"<<endl;
    }
    double len()
    {
        l=X1-X;
        return l;
    }
    double wid()
    {
        w=Y1-Y;
        return w;
    }
    double area()
    {
        double a=l*w;
        return a;
    }
    double peri()
    {
        double pe=2*(l+w);
        return pe;
    }
    int ver2()
    {
        if(l==w)
            cout<<"SQUARE\n"<<endl;
        else
            cout<<"NOT SQUARE\n"<<endl;
    }

};
int main()
{

    int i;
    double x[4],y[4];
    cout<<"ENTER THE 4 COORDINATES \n";
    for(i=0;i<4;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    Rectangle2 rect(x,y);
    cout<<"\n VERIFYING RECTANGLE :";
    cout<<rect.verify();
    cout<<"\nLENGTH OF RECTANLE : "<<rect.len();
    cout<<"\nWIDTH OF RECTANLE : "<<rect.wid();
    cout<<"\n AREA OF RECTANGLE : "<<rect.area();
    cout<<"\n PERIMETER OF RECTANGLE : "<<rect.peri();
    cout<<"\t VERIFYING SQUARE : ";
    cout<<rect.ver2()<<endl;
}
