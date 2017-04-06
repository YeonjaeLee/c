int BubbleSort1(int arr[], int len)
{
	int temp = 0, loop, i;

	for (loop = 0; loop < len - 1; loop++) {
		for (i = 0; i < len - 1 - loop; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	return arr;
}