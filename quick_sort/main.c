#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void QuickSort(int *array, int front, int end){
	int j;
    if (front < end) {
        int pivot = array[end];
        int i = front -1;
        for (j = front; j < end; j++) {
            if (array[j] < pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
        i++;
        swap(&array[i], &array[end]);
        QuickSort(array, front, i - 1);
        QuickSort(array, i + 1, end);
    }
}

int main(int argc, char *argv[]){
    int arr[10] =  {1,5,9,3,6,8,2,4,7};
    int i;
	for(i = 0; i < 10;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	QuickSort(arr,0,9);
	
	for(i = 0; i < 10;i++){
		printf("%d",arr[i]);
	}
    return 0;
}
