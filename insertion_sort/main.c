#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int len){
	int i, preindex, n;
	for(i = 1; i < len; i++){
		preindex=i-1;
		n=arr[i];
		while(n < arr[preindex] && preindex >= 0){
			arr[preindex+1]=arr[preindex];
			preindex-=1;
		}
		arr[preindex+1]=n;
    }
}

int main(){
    int arr[] = {3,4,5,6,7,8,9,0,1,2};
    int i,len = 10;

    for(i = 0; i!= len; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    insertion_sort(arr,len);

    for(i = 0; i!= len; i++){
        printf("%d",arr[i]);
    }
}