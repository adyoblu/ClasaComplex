#include <iostream>
#include <math.h>
#include <complex.h>

using namespace std;

int main()
{
    complex a,b,c;
    complex x1,x2,d;
    cout<<"Primul coeficient:"<<endl;
    cin>>a;
    cout<<"Al 2-lea coeficient:"<<endl;
    cin>>b;
    cout<<"Al 3-lea coeficient:"<<endl;
    cin>>c;
    if(a==0)
    {
        if(b==0)
            {
                if(c!=0)
                    cout<<"Ecuatia nu are solutii";
                else
                    cout<<"Ecuatia are o infintate de solutii";
                return 0;
            }
        x1=-c/b;
        cout<<"Radacina ecuatiei X*("<<b<<")+("<<c<< ")=0 este: "<<endl<<x1;
        return 0;
    }
    d=(b^2)-(4*a*c);
    if(d==0)
    {
        x1=-b/(2*a);
        cout<<"Radacinile ecuatiei X^2*("<<a<<")"<<"+X*("<<b<<")+("<<c<< ")=0 sunt ambele egale cu: "<<endl<<x1;
    }
    else
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"Radacinile ecuatiei X^2*("<<a<<")"<<"+X*("<<b<<")+("<<c<< ")=0 sunt: "<<endl<<x1<<" "<<x2;
    }
    return 0;
}
