#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int min(int arr1[], int size1);
//int max(int arr2[], int size2);
//int avg(int arr4[], size4);
void printArr(int size5, int arr5[]);





int main() {
	
	int vals[100] = {0};
	int i = 0;
	int x = 0;
	int fees = 0;
	int sum = 0;
	
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
		
	puts("");
	puts("--Summary--");
	
	printf("Account Balance: $%d", sum - fees);
	puts("");
	printf("Total Fees: $%d", fees);
	puts("");
	puts("");
	
	puts("---Transaction Statistics---");
	//printf("min: %5d loc: %6d\n", min, index);
	//printf("max: %5d loc: %6d\n", max, index);
	printf("Sum: %5d\n", sum);
	//printf("avg: %5d\n", avg);
	
	puts("");
	puts("");
	puts("Pos | Val");
	puts("----------");
	
	printArr(arrSize, vals);
	

}


//int min(arr1[a])


//int max(arr2[b])


//int avg(arr4[d])

void printArr(int size5, int arr5[]){
	
	int i; 
	for(i = 0; i < size5; i++){
		printf("%3d | %4d\n", i,  arr5[i]);
	}
	return;
	
}