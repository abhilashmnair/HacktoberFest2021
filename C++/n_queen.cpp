#include <bits/stdc++.h>
using namespace std;
#define lld long long int

int mat[100][100];
int l_diagonal[20],r_diagonal[20],ro[20];

int safe(int a,int b)
{
    if(!ro[a]&&!r_diagonal[a+b]&&!l_diagonal[a-b+6])
    return 1;
    return 0;
}
int queen(int n,int c)
{
    if(c>=n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<mat[i][j]<<"  ";
            cout<<"\n";
        }
        cout<<"\n\n";
        return 1;
    }
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(safe(i,c))
        {
            //cout<<i<<" "<<c<<"\n";
            l_diagonal[i-c+6]=1;
            r_diagonal[i+c]=1;
            ro[i]=1;
            mat[i][c]=1;
            if(queen(n,c+1))//||res;
            return 1;
            else
            {mat[i][c]=0;
            l_diagonal[i-c+6]=0;
            r_diagonal[i+c]=0;
            ro[i]=0;}
        }
    }
    return 0;
}
int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    memset(mat,0,sizeof(mat));
    memset(l_diagonal,0,sizeof(l_diagonal));
    memset(r_diagonal,0,sizeof(r_diagonal));
    memset(ro,0,sizeof(ro));
    if(!queen(n,0))
    cout<<"NO\n";
}


