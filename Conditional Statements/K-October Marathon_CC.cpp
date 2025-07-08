#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<3)
    {
        cout<<"GOLD";
    }
    else if(3<=x && x<6)
    {
        cout<<"SILVER";
    }
    else
    {
        cout<<"BRONZE";
    }
    return 0;
}
