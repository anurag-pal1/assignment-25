#include<iostream>
using namespace std;
class Area{
public:
    int x;
    int area()
    {
        return x*x;
    }
};
int main()
{
    Area a;
    cout<<"Enter side of square: "<<endl;
    cin>>a.x;
    int r=a.area();
    cout<<"Area = "<<r<<endl;
    return 0;
}
