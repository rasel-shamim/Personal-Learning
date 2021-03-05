#include<bits/stdc++.h>
using namespace std;
#define tc()  int t;cin>>t;while(t--)
#define MAX    500000
bool prime[MAX+1];
vector<int> p_number;

void sieve(){
	for(int i=0;i<MAX;i++) prime[i] = true;
	p_number.push_back(2);
	for(int i=3;i*i<=MAX;i++){
		if(prime[i]){
			for(int j=i+i;j<=MAX;j+=i){
				prime[j] = false;
			}
		}
	}
	for(int i=3;i<=MAX;i+=2){
		if(prime[i])
			p_number.push_back(i);
	}
}
void segSieve(long long l,long long r){
	bool status[r-l+1];
	for(int i=0;i<r-l+1;i++) status[i] = true;
	if(l==1) status[0] = false;
	for(int i=0;p_number[i]*p_number[i]<r;i++){
		int cp = p_number[i];
		long long base = (l/cp)*cp;
		if(base<l) base+=cp;
		for(int j=base;j<=r;j+=cp){
			status[j-l] = false;
		}
		if(base==cp)status[base-l] = true;
	}
	for(auto i=l;i<=r;i++){
		if(status[i-l]){
			cout<<i<<endl;
		}
	}
}
int main(){
	sieve();
	tc(){
		long long a,b;
		cin>>a>>b;
		segSieve(a,b);
		cout<<endl;
	}
	return 0;
}
