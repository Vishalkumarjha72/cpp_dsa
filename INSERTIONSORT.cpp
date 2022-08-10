#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp= a[i];
		for(j = i-1;j>=0 && temp<a[j];j--){
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}


int main(){
	int a[]={34,44,64,345,84,664,45,15,55};
	insertion_sort(a,9);
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
}
