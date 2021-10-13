#include <iostream>

using namespace std;

int main()
{
int szam,oszto;
bool prim=true;
cout<<"szam=";
cin>>szam;
{
    for(oszto=2;oszto<szam/2+1;oszto++)
    {
        if(szam%oszto==0)
        prim==false;
    }
    if(prim==true){
        cout<<"szam prim";
        }else{
        cout<<"szam nem prim";
        }
}
return 0;
}

