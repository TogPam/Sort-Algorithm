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

int parttion(int a[],int left, int right){
	int pivot = a[left];
	
	int count = 0;
	for(int i=left+1;i<=right;i++){
		if(a[i]<=pivot) count++;
	}
	
	int pivotIndex = left + count;
	
	swap(a[left],a[pivotIndex]);
	
	int i = left;
	int j = right;
	while(i<pivotIndex && j > pivotIndex){
		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<pivotIndex && j>pivotIndex){
			swap(a[i],a[j]);
		}
	}
	return pivotIndex;
}

void quickSort(int a[], int left, int right){
	if(left>=right) return;
	
	int pivot = parttion(a, left , right);
	
	quickSort(a,0,pivot-1);
	
	quickSort(a,pivot+1,right);
	
}

int main(){
	
	int n;
	ifstream file("input.txt");
	file>>n;
	int a[n];
	for(int i=0;i<n;i++){
		file>>a[i];
	}
	quickSort(a,0,n-1);
	output(a,n);
	return 0;
}