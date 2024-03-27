#include <bits/stdc++.h>
#include <fstream>
using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a= b;
	b= tmp;
}
void output(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<< a[i] <<endl;
	}
}

void InsertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int temp = a[i];
		int j = i - 1;
		while(j>=0 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
	a[j+1] = temp;	
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
	
	InsertionSort(a,n);
	output(a,n);
	return 0;
}