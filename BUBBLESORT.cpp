#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
	int round,temp ,i;
	for(round = 1; round<=n-1; round++){
		for(i=0; i<n-1-round ; i++){
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i]= a[i+1];
				a[i+1]= temp ;
			}
		}
	}
}

int main(){
	int i;
	int a[]={35, 23,4,43};
	bubble_sort(a,4);
	for(i=0;i<4; i++){
		cout<<a[i]<<" ";
	}
}


