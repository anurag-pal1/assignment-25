#include<iostream>
using namespace std;
class Factorial{
public:
    int n;

    int factorial()
    {
        int i,f=1;
        for(i=n;i>=1;i--)
        {
            f=f*i;
        }
        return f;
    }
};
int main()
{
    Factorial f;
    cout<<"Enter a number: "<<endl;
    cin>>f.n;
    int z=f.factorial();
    cout<<"Factorial is: "<<z<<endl;
    return 0;
}
