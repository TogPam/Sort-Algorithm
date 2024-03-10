#include <bits/stdc++.h>
#include <fstream>
using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a= b;
	b= tmp;
}

void BubbleSort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]) swap(a[j],a[j-1]);
		}
	}
}

void output(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<< a[i] <<endl;
	}
}

int main(){
	int n;
	ifstream file("input.txt");
	file>>n;
	int a[n];
	for(int i=0;i<n;i++){
		file>>a[i];
	}
	
	BubbleSort(a,n);
	output(a,n);
	
}