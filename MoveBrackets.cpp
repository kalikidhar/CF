#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        //int open=0,close=0;

        stack<char>stk;

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                stk.push(str[i]);
                continue;
            }

            if(!stk.empty() && stk.top()=='(' && str[i]==')')
            {
                stk.pop();
            }
            else
                stk.push(str[i]);
        }

        int ans=0;
        while(!stk.empty())
        {
            ans++;
            stk.pop();
        }
        cout<<ans/2<<"\n";

    }


    return 0;
}