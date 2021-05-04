#include<bits/stdc++.h>
 
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define fast                ios_base::sync_with_stdio(0);cin.tie(0)
#define M                   1000000007
#define vl                  int128_t
long long inf = 1e18;
 
using namespace std;
 
int status[400007] = {};
int n;
int arr[200005];
 
 
int main(){
    cin>>n;
    int tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    status[0] =1;
    for(int i=0;i<n;i++){
        for(int j=tot;j>=arr[i];j--){
            status[j] |= status[j-arr[i]];
        }
    }
    for(int i=0;i<=tot;i++){
        cout<<i<<" "<<status[i]<<endl;
    }
 
return 0;
}
