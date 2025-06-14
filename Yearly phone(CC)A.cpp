#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int newYear= year/10;
    newYear= newYear*10;
    int lastdigit= year - newYear;
    //-------------------------------------------------------//
    year = year/10;
    newYear = year/10;
    newYear = newYear*10;
    int secondlastdigit = year - newYear;
    //-----------------------------------------------------------//
    cout<<"k"<<secondlastdigit<<lastdigit;
}
