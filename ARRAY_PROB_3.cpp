//C program to find the element occurring odd number of times
/*int ar[] = {2, 3, 5, 3, 2, 5, 3, 4};
0^2=2
2^3=1
1^5=4
4^3=7
7^2=5
5^5=0
0^3=3
3^4=7
XOR idea is not working in thos example*/
#include<iostream>
using namespace std;

// first use sorting to sort all the elements 
int findOdd(int a[],int n){
int odd_no=a[0];
int count=1;
for(int i=1;i<n;i++){
	if(a[i]==odd_no){
		count++;
	}
	else{
	     if(count%2==1){
	     	return odd_no;
		 }
		 else{
		 	count=1;
		 	odd_no=a[i];
		 }
	}
}	

}

int main(){
	// here we have taken an array already sorted
	// sorting takes nlogn time
	int a[]={1,1,1,1,4,4,4,5,5,5,5};
	int n=sizeof(a)/sizeof(int);
	cout<<findOdd(a,n);

	return 0;
}
