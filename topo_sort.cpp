#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pi       acos(-1)
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define F first
#define S second
#define ppb pop_back
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) (m*n)/GCD(m,n)
#define rep(i,a,n)  for(int i=a ; i<n ; i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
////-------------------------------------------------------------------------
#define ld long double 
#define int long long 
////define ll long long
////--------------------------------------------------------------------------
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef vector<pii > vpii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;
typedef map<char,int> mci;

struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15; x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9; 
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);}

size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};

typedef unordered_map<int, int, custom_hash> safe_map;
typedef gp_hash_table<int, int, custom_hash> safe_hash_table;
////--------------------------------------------------------------------------
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(ALL(container),element) != container.end())
#define  lb(v,val)  lower_bound(ALL(v), val)
#define  ub(v,val)  upper_bound(ALL(v), val)
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define maxc(v) *max_element(ALL(v))
#define minc(v) *min_element(ALL(v))
#define isvowel(a) (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
////--------------------------------------------------------------------------

#define nl "\n"
#define vin(v,n)   vi v(n); rep(i,0,n)  cin>>v[i]
#define dbg cerr <<"At line "<<__LINE__<<" move "<<nl
#define dbg1(x) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<nl
#define dbg2(x,y) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<nl
#define dbg3(x,y,z) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<nl
#define prv(v)     rep(i,0,sz(v))  cerr<<v[i]<<" "; cerr<<endl
#define sz(s)         (int)((s).size())
#define coutsp(k)   cout<<setprecision(k)  //set precision (total length k icluding decimal and non decimal)
#define coutfsp(k)   cout<<fixed<<setprecision(k)  //fixed set precision(after decimal fixing)
#define trav(a, x) for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl
#define displaycerr(x) trav(a,x) cerr<<a<<" ";cerr<<endl

#define MOD 1000000007   
#define POD 998244353    
#define INF   (int)2e18   //------

const int N = 2e5+5;


void dfsc(int v){
  color[v] = 1; // GREY
  for(int w : adj[v]){
    if(color[w] == 1){
      // you found a cycle, it's easy to recover it now.

        cout<<"cycle";

    }
    if(color[w] == 0) dfsc(w);
  }
  color[v] = 2; // BLACK
}

// And then just call it from any white node.

for(int i = 0; i < n; i++)
  if(color[i] == 0) dfs(i, -1); // IF NODE IS WHITE, START NEW DFS

vector<bool> visited;
vector<int> ans;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}

void topological_sort() {
    visited.assign(n+1, false);
    ans.clear();
    for (int i = 1; i <= n; ++i) {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}



//-------------------------------------------------------------------------------
void solve(int test)
{ 
  int n; cin>>n;


}
//-------------------------------------------------------------------------------
 
signed main()
{

   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt","w", stderr);
   #endif

   // #ifndef ONLINE_JUDGE
   //  cerr<<(1000*clock())/CLOCKS_PER_SEC<<"ms";
   // #endif      

   FAST; 
   cout<<fixed<<setprecision(20);

   //  Pre Calculations

   //


   int test=1;    
   
   cin>>test;   // test input     

    for(int i=1;i<=test;i++)
    {
       // cout<<"Case #"<<i<<": ";

      solve(i);
      cout<<nl;   //  IMPORTANT FOR NEXT LINE     
    }

   return 0;
}
