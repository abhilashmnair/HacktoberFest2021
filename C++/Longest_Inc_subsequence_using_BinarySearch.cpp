#include<bits/stdc++.h>
using namespace std;
#define f(a,n) for(ll i=0;i<n;i++)
#define ll long long int
ll binSearch(vector<ll> &dp,ll lo,ll hi,ll key){
    while(hi>lo){
        ll mid=lo+(hi-lo)/2;
        if(dp[mid]>key)
        hi=mid-1;
        else if(dp[mid]==key)
        return mid;
        else
        lo=mid+1;
    }
    return hi;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n,0),dp(n,0);
    f(0,n)
    {
        ll temp;
        cin>>temp;
        a[i]=temp;
    }
    ll length=1;
    // now no need to use set
    //unordered_set<ll> s;
    dp[0]=a[0];
    //s.insert(dp[0]);
    f(1,n){
        if(a[i]<=dp[0])
        {   
      //      s.erase(dp[0]);
            dp[0]=a[i];
        //    s.insert(dp[0]);
        }
        else if(a[i]>dp[length-1])
        {
            dp[length++]=a[i];
          //  s.insert(a[i]);
        }
        else
        {
            //if(s.count(a[i])==0)
            //{
                ll j=binSearch(dp,0,length-1,a[i]);
                // cout<<j<<"  j\n";
              //  s.erase(dp[j]);
                dp[j]=a[i];
                //s.insert(dp[j]);
            //}
        }
        // for(ll j=0;j<length;j++){
        //     cout<<dp[j]<<" ";
        // }
        // cout<<endl;
    }
    cout<<length;

}