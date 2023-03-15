#include<iostream>
using namespace std;
class Square{
public:
    static int cou;
    int x;
    int square()
    {
         cou++;
        return x*x;

    }
};
int Square:: cou=0;
int main()
{
    Square s;
    cout<<"Enter a number: "<<endl;
    cin>>s.x;
    int r=s.square();
    cout<<"Number of times function is called: "<<s.cou<<endl;
    cout<<"Square of number is: "<<r<<endl;
    return 0;
}
