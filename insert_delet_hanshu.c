#include <stdio.h>
#include "insert.h"
#include "delet.h"
int Count = 10;
void insert(int a[],int value);
void delet(int a[], int value);
void select(int choice,int a[],int value);
int main()
{
	int i, choice, a[100], value;

	printf("insert fanction:1\n");
	printf("delet fanction:2\n");
	printf("[Other option] End\n");
	printf("Input the number of array elements:");
	scanf_s("%d", &Count);
	printf("Input an ordered array elements:");
	for (i = 0; i < Count; i++) {
		scanf_s("%d", a + i);
	}
	printf("value:");
	scanf_s("%d", &value);
	printf("Input the function of your choice:");
	scanf_s("%d", &choice);
	select(choice,a,value);

	return 0;
}
void select(int choice, int a[],int value)
{
	switch (choice) {
	case 1:insert(a, value); break;
	case 2:delet(a, value); break;
	}
}