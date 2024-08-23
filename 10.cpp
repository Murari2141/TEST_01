// 10] Write a function in C that takes an array of integers and its size as input and returns the sum of all elements in the array.

#include<stdio.h>

int sum(int num[],int size){
	int i;
	int sum =0;
	for(i=0;i<size;i++){
		sum += num[i];
	}
	return sum;
}

int main(){
	int num[]={1,2,3,4,5,6};
	
	int size=sizeof (num)/sizeof(num[0]);
	
	int total= sum(num,size);
	
	printf("sum =%d",total);
}
