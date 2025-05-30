//Unbounded Array search
//Time Complexity: O(logN)

int searchInUnboundedArray(int arr[], int searchValue)
{
    if(arr[0]==searchValue)
        return 0;

    int i=1;
    while(arr[i]<searchValue)
        i*=2;

    if(arr[i]==searchValue)
        return i;

    return birarySearch(arr, searchValue, (i/2)+1, i-1);
}
