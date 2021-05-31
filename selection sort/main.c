#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int *arr, int len){
	int i=0, j=0, min,k;
	for(i=0;i<len-1;i++){
		min=i;
		for(j=i;j<len;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(i!=min){
			swap(&arr[min],&arr[i]);
		}
	}
}

