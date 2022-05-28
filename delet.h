extern Count;
void delet(int a[], int value)
{
	int i, j;

	for (i = 0; i < Count; i++) {
		if (a[i] == value) {
			break;
		}
	}
	for (j = i; j < Count; j++) {
		a[j] = a[j + 1];
	}
	Count--;
	for (i = 0; i < Count; i++) {
		printf("%d ", *(a + i));
	}
}
