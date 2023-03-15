#include<iostream>
using namespace std;
class ReverseNumber{
public:
    int x;
    void rever()
    {
        int i,t;
        while(x!=0)
        {
            t=x%10;
            x=x/10;
            cout<<t;
        }
    }
};
int main()
{
    ReverseNumber r;
    cout<<"Enter a number: "<<endl;
    cin>>r.x;
    r.rever();
    return 0;
}
