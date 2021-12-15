#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int n;
   cin>>n;

   while(n--)
   {
       string str;
       cin>>str;
       if(str.size()<=10)
       {
           cout<<str<<"\n";
       }
       else{
           int count=str.size()-2;
           cout<<(str[0])+to_string(count)+(str[str.size()-1])<<"\n";
       }
   }


    return 0;
}