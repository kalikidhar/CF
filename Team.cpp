#include<bits/stdc++.h>
using namespace std;


int main()
{
   
   int n;
   cin>>n;
   int res=0;
   while(n--)
   {
      int t=0;
      int a,b,c;
      cin>>a>>b>>c;
      if(a==1)
        t++;

      if(b==1)
        t++;

      if(c==1)
        t++;
     
     if(t>=2)
        res++;


   }

   cout<<res<<"\n";


    return 0;
}