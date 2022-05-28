extern Count;
void insert(int a[], int value)
{
	int i, j;

	for (i = 0; i < Count; i++) {
		if (a[i] > value) {
			break;
		}
	}
	for (j = Count - 1; j >= i; j--) {
		a[j + 1] = a[j];
	}
	a[i] = value;
	Count++;
	for (i = 0; i < Count; i++) {
		printf("%d ", *(a + i));
	}
}