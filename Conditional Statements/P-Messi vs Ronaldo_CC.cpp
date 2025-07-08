#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int M = (a*2)+(b*1);
    int R = (x*2)+(y*1);
    if(M>R)
    {
        cout<<"Messi";
    }
    else if(M<R)
    {
        cout<<"Ronaldo";
    }
    else
    {
        cout<<"Equal";
    }
    return 0;
}
