```c
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

```