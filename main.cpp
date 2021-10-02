#include <iostream>

using namespace std;

int main()
{
int a,b,c,d;
cout<<"a=";
cin>>a;
d=0;
b=a;
{
    while(b>a)
    {
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
    if(a==d)
    {
        cout<<"palindrome";
    }else{
    cout<<"nem palindrome";
    }
    }

return 0;
}

