int selection_sort(int *arr, int size)
{
    int i, j, min_i, swap;
    for (i = 0; i < size - 1; i++)
    {
        min_i = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_i])
            {
                min_i = j;
            }
        }
        swap = arr[min_i];
        for (j = min_i; j > i; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[i] = swap;
    }
}
