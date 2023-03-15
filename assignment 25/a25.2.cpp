#include<iostream>
using namespace std;
class Time{
int x,y,z;
public:
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
    void setX(int a)
    {
        if(a<0)
            x=-a;
        else
            x=a;
    }
    void setY(int b)
    {
        if(b<0)
            y=-b;
        else
            y=b;
    }
    void setZ(int c)
    {
        if(c<0)
            z=-c;
        else
            z=c;
    }
};
int main()
{
    int h,m,s;
    cout<<"Enter hour:"<<endl;
    cin>>h;
    cout<<"Enter minute:"<<endl;
    cin>>m;
    cout<<"Enter second:"<<endl;
    cin>>s;
    Time t;
    t.setX(h);
    t.setY(m);
    t.setZ(s);
    cout<<"Time is: "<<t.getX()<<"hours "<<t.getY()<<"minutes "<<t.getZ()<<"seconds"<<endl;
    return 0;

}
