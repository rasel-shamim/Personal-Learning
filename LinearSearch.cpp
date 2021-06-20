#include<bits/stdc++.h>
 
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define fast                ios_base::sync_with_stdio(0);cin.tie(0)
#define M                   1000000007
#define vl                  int128_t
long long inf = 1e18;
 
using namespace std;
  
int main(){
    int arr[] = {5,3,12,5,23,54,9,33,12,34,4,35};
    int n = sizeof(arr)/sizeof(int);
    int val,address=-1;
    printf("Enter the value you ar searching for---\n");
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            address = i+1;
            break;
        }
    }
    if(address!=-1){
        printf("%d is present in the array at position %d\n",val,address);
    }
    else{
        printf("%d is not found\n");
    }
return 0;
}
