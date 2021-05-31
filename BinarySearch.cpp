#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define pb                  push_back
#define ll                  long long
long long inf = 1e5;

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int value;
    cin>>value;
    int l=0,r=n-1,mid=(r-l+1)/2;
    int address = -1;
    while(l<r){
        if(arr[mid]==value){
            address = mid;
            break;
        }
        else if(arr[mid]>value){
            r=mid;
            mid -= (r-l+1)/2;
        }
        else{
            l = mid;
            mid += (r-l+1)/2;
        }
    }
    if(address!=-1){
        cout<<address<<endl;
    }
    else{
        cout<<"Not Found!!"<<endl;
    }
    return 0;
}
