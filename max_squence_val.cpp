#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define fast                ios_base::sync_with_stdio(0);cin.tie(0)
#define M                   1000000007
long long inf = 1e18;
 
using namespace std;

int dp[100005][2];
int arr[100005];
int n;

int fun(int pos,int stat,bool prv){
	//0 means not taken
	//1 means taken
	if(pos==n) return 0;
	if(dp[pos][stat]!=-1) return dp[pos][stat];
	if(stat==0){
		//taking present value
		int val1,val2;
		if(prv){
			val1 = fun(pos+1,1,!prv)+arr[pos];
		}
		else{
		    val1 = fun(pos+1,1,!prv)-arr[pos];
		}
		//ignoring present value
		val2 = fun(pos+1,0,prv);
		return dp[pos][stat] = max(val1,val2);
	}
	else{
		return dp[pos][stat] = fun(pos+1,0,prv);
	}
}
 
int main(){
	for(int i=0;i<100005;i++){
		dp[i][0] = -1;
		dp[i][1] = -1;
	}
	// int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<fun(0,0,1)<<endl;
return 0;
}
