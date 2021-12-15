#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>vals;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            vals.push_back(val);
        }

        vector<int>dists;

        for(int i=0;i<k;i++)
        {
            int dist;
            cin>>dist;
            dists.push_back(dist);
        }

        sort(vals.begin(),vals.end());
        sort(dists.begin(),dists.end(),greater<int>());

        long long int answer=0;
        int l=0,r=n-k,m=0;
        while(m<k)
        {
           if(dists[m]==1)
           {
               //max and min->twice
               answer=answer+2*(vals[r]);
               r++;
           }
           else
           {
               answer=answer+(vals[l++]+vals[r++]);
               l+=(dists[m]);
               l--;
               l--;

           }
           m++;
           

        }
        

        cout<<answer<<"\n";

    }




    return 0;
}