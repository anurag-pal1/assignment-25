#include<iostream>
using namespace std;
class Complex{
int x,y;
public:
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setX(int a)
    {
        x=a;
    }
    void setY(int b)
    {
        y=b;
    }
};
int main()
{
    int r,i;
    cout<<"Enter real part of complex number"<<endl;
    cin>>r;
    cout<<"Enter imaginary part of complex number"<<endl;
    cin>>i;
    Complex c;
    c.setX(r);
    c.setY(i);
    cout<<"Complex number is: "<<c.getX()<<" + "<<c.getY()<<"i"<<endl;
    return 0;
}

