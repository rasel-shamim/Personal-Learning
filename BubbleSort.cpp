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
    printf("Unsorted Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Sorted Array\n");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
return 0;
}
