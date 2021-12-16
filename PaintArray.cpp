#include<bits/stdc++.h>
using namespace std;


int main()
{
int t1;
int t;
cin>>t;


while(t--)
{

int  n;

cin>>n;

vector<long long int>v;

for(int i=0;i<n;i++)
{
   long long int ele;
   cin>>ele;
   v.push_back(ele);
}

long long int odd_gcd=0;
long long int even_gcd=0;

for(int i=0;i<n;i+=2)
	odd_gcd=__gcd(odd_gcd,v[i]);

for(int i=1;i<n;i+=2)
	even_gcd=__gcd(even_gcd,v[i]);

long long int ans=0;

bool check=true;


long long int ans_gcd=0;





for(int i=0;i<n;i+=2)
{
   bool temp=(v[i]%even_gcd==0?0:1);
   check=check&(temp);
    
}

if(check==true)
	ans=even_gcd;

//reset check
check=true;
for(int i=1;i<n;i+=2)
{
   bool temp=(v[i]%odd_gcd==0?0:1);
   check=check&temp;


}

if(check==true)
	ans=odd_gcd;



cout<<ans<<"\n";
//cout 0 if no soln exist

}



return 0;
}
