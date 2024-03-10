#include <bits/stdc++.h>
#include <fstream>
using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a= b;
	b= tmp;
}

void InterchangeSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]) swap(a[i],a[j]);
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
	
	InterchangeSort(a,n);
	output(a,n);
	
}