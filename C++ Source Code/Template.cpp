#include<bits/stdc++.h>
using namespace std;
int TEST=0,CASE=1;
#define         pf              printf
#define         si(x)           scanf("%d",&x)
#define         si2(x,y)        scanf("%d %d",&x,&y)
#define         si3(x,y,z)      scanf("%d %d %d",&x,&y,&z)
#define         sl(x)           scanf("%lld",&x)
#define         sl2(x,y)        scanf("%lld %lld",&x,&y)
#define         sl3(x,y,z)      scanf("%lld %lld %lld",&x,&y,&z)
#define         sd(x)           scanf("%lf ",&x)
#define         pb(x)           push_back(x)
#define         mp(x,y)         make_pair(x,y)
#define         clr(x,y)        memset(x,y,sizeof(x))
#define         all(x)          x.begin(),x.end()
#define         MX              4010000
#define         left            (indx<<1)
#define         right           left+1
#define         mid             ((l+r)>>1)
#define         call            left,l,mid
#define         lnd             tree[left]
#define         calr            right,mid+1,r
#define         rnd             tree[right]
#define         cnd             tree[indx]
#define         speed           (ios::sync_with_stdio(false),cin.tie(0))
#define         fpoint(x)       (cout.precision(x),cout<<fixed)
#define         FOR(i,n)       	for(int i=1;i<=n;++i)
#define         FR(i,n)      	for(int i=0;i<n;++i)
#define		dx		xx+dirx[i]
#define		dy		yy+diry[i]
long long int         mod  =    1000000007LL;
const long double     pi   =    2.0*acos(0.0);
typedef long long int ll;
typedef long double ld;
int dirx[9]={0,0,0,-1,+1,+1,+1,-1,-1};
int diry[9]={0,-1,+1,0,0,-1,+1,-1,+1};
struct vpair{
        int a,b;
        vpair(int a,int b){this->a=a,this->b=b;}
};
bool cmp(int &a,int &b){
        return a<b;                ///ascending order
        return a>b;                ///descending order
}
ll n,m,a,b,c,d,k,x,y,z,ans=0,total=0;
ll arr[MX];
string s;
vector<int> v;
int main(void){

        return 0;
}

/**
\*.cpp
**/
