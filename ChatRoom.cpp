#include<bits/stdc++.h>
using namespace std;


int main()
{

   string str;
   cin>>str;
  
  string pattern="hello";

  int final=0;

  int p=0;

  for(int i=0;i<str.size();i++)
  {
      if(str[i]==pattern[p])
      {
          p++;
          final++;
      }
      if(final==5)
        break;
  }

  if(final==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";


    return 0;
}