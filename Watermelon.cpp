#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    string ans=(n&1)?"NO":"YES";
    if(n==2)
        ans="NO";
    cout<<ans<<"\n";
    return 0;
}