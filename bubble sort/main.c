#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void bubble_sort(int *arr, int len);

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int *arr, int len){
	int i=0,j=0;
    for(i = 0; i < len; i++) {
        for(j = 0; j < len- 1 - i; j++) {
            if(arr[j+1] < arr[j]) {
            	swap(&arr[j+1],&arr[j]);
 	     	}
	   }
	}
}

int main(int argc, char *argv[]) {
	
	int arr[] = {12, 11, 13, 5, 6, 7};
	int len = sizeof(arr) / sizeof(int);
	bubble_sort(arr,len);
	int i;
	for(i = 0;i < 6;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
	
	