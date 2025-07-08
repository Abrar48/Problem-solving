#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int X = pow(a,b);
    int Y = pow(b,a);
    int result = X + Y;
    cout<<result;
    return 0;
}
