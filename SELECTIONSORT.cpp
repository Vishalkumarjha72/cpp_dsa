
//NOT CORRECT

#include<bits/stdc++.h>
using namespace std;

int min(int a[], int k, int n){
	int j,loc,MIN;
	MIN = a[k];
	loc =k;
	for(j=k+1; j<=n-1; j++){
		if(MIN>a[j]){
			MIN=a[j];
			loc=j;
		}
	}
	return loc;
}

int main(){
	int a[]={11,44,33,77,99,88,55,66,22,1};
	int loc,k,temp;
	for(k=0;k<9;k++){
		min(a,k,10);
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	
	for(k=0;k<10;k++)
	cout<<a[k]<<" ";
}
