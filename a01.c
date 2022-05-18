#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMin(int arr1[], int size1);
int findMax(int arr2[], int size2);
void printArr(int size3, int arr3[]);





int main() {
	
	int vals[1000] = {0};
	int i = 0;
	int x = 0;
	int index1 = 0;
	int index2 = 0;
	int fees = 0;
	int sum = 0;
	int min = 0;
	int max = 0;
	int avg = 0;
	
	srand(time(NULL));
	
	printf("%s", "How many transactions to generate?: ");
	scanf("%d", &x);
	
	int arrSize = x;
	
	for (i; i < arrSize; i++) {
		vals[i] = rand() % 200 - 100;
			if(vals[i] <= -1){
			fees = fees + 10;
			}
		sum = vals[i] + sum;
	}
	
	index1 = findMin(vals, x);
	min = vals[index1];
	
	index2 = findMax(vals, x);
	max = vals[index2];
	
	avg = sum / x;
	
	puts("--Summary--");
	printf("Account Balance: $%d", sum - fees);
	puts("");
	printf("Total Fees: $%d", fees);
	puts("");
	puts("");
	
	puts("---Transaction Statistics---");
	printf("Min: %5d Loc: %5d\n", min, index1);
	printf("Max: %5d Loc: %5d\n", max, index2);
	printf("Sum: %5d\n", sum);
	printf("Avg: %5d\n", avg);
	
	puts("");
	puts("");
	puts("Pos | Val");
	puts("----------");
	
	printArr(arrSize, vals);
	

}


int findMin(int arr1[], int size1) {
	
	int i;
	int j = 0;
	
	for (i = 1; i < size1; i++) {
		if (arr1[i] < arr1[j]) {
			j = i;
		}
	}
	return j;
}


int findMax(int arr2[], int size2) {
	
	int i;
	int j = 0;
	
	for (i = 1; i < size2; i++) {
		if (arr2[i] > arr2[j]) {
			j = i;
		}
	}
	return j;
	
}


void printArr(int size3, int arr3[]){
	
	int i; 
	for(i = 0; i < size3; i++){
		printf("%3d | %4d\n", i,  arr3[i]);
	}
	return;
	
}