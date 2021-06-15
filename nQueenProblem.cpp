#include<bits/stdc++.h>

using namespace std;

int arr[1000][1000];

bool isSafe(int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1) return false;
    }
    int row=x,col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1) return false;
        row--;
        col--;
    }
    row = x;col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int x,int n){
    if(x>=n) return true;
    for(int col=0;col<n;col++){
        if(isSafe(x,col,n)){
            arr[x][col]= 1;
            if(nQueen(x+1,n)) return true;
            else{
                arr[x][col] =0;
            }
        }
    }
    return false;
}



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    if(nQueen(0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    cout<<"-"<<" ";
                }
                else{
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Answer doesn't Exist"<<endl;
    }
}
