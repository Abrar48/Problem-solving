#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,d1,d2;
    cin>>r1>>r2;
    cin>>d1>>d2;
    int dominater = r1+d1;
    int everule = r2+d2;
    if(dominater>everule)
    {
        cout<<"Dominater";
    }
    else{
        cout<<"Everule";
    }
    return 0;
}
