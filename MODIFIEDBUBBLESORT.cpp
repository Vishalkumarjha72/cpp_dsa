#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
	int round,temp ,i,flag;
	for(round = 1; round<=n-1; round++){
		flag = 0;
		for(i=0; i<n-1-round ; i++){
			if(a[i]>a[i+1]){
				flag =1;
				temp = a[i];
				a[i]= a[i+1];
				a[i+1]= temp ;
			}
			
		}
		if(flag ==0){
			cout<<round<<endl;
			return;
		}
		
	}
}

int main(){
	int i;
	int a[]={35,23,34,43};
	bubble_sort(a,4);
	for(i=0;i<4; i++){
		cout<<a[i]<<" ";
	}
}


