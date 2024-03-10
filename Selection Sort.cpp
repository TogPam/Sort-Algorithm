#include <bits/stdc++.h>
#include <fstream>
using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a= b;
	b= tmp;
}

void SelectionSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]) min = j; 
		}
		swap(a[min] , a[i]);
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
	
	SelectionSort(a,n);
	output(a,n);
	
}