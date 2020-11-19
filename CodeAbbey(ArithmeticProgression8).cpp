#include<bits/stdc++.h>
using namespace std;
int sum_Of_int(int F,int I,int NumOfLimit){
	int sum = 0;
	for(int i =0;i<NumOfLimit;i++){
		sum = sum+F;
		F = F+I;
	}

	return sum;

}

int main(){

    int a,b,c;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<sum_Of_int(a,b,c)<<" ";
        }
    }
