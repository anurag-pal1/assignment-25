#include<iostream>
using namespace std;
class Circle{
public:
    float r;
    float area()
    {
        return 3.14*r*r;
    }
};
int main()
{
    Circle c;
    cout<<"Enter radius of circle: "<<endl;
    cin>>c.r;
    float z=c.area();
    cout<<"Area of circle is: "<<z<<endl;
    return 0;
}
