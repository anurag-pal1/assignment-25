#include<iostream>
using namespace std;
class Rectangle{
public:
    int l,b;
    int area()
    {
        return l*b;
    }
};
int main()
{
    Rectangle r;
    cout<<"Enter length and breadth of rectangle: "<<endl;
    cin>>r.l>>r.b;
    int z=r.area();
    cout<<"Area of rectangle is: "<<z<<endl;
    return 0;
}
