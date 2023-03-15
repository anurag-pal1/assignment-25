#include<iostream>
using namespace std;
class Greatest{
public:
    int x,y,z;
    int largest()
    {
        if(x>y&&x>z)
            return x;
        else if(y>z&&y>x)
            return y;
        else
            return z;
    }
};
int main()
{
    Greatest l;
    cout<<"Enter three numbers: "<<endl;
    cin>>l.x>>l.y>>l.z;
    int r=l.largest();
    cout<<"Largest among given three numbers is: "<<r<<endl;
    return 0;
}

