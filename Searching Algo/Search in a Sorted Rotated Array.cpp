//Time complexity: O(logN)

 #include<iostream>

 using namespace std;

 int SortedRotatedArraySearch(int arr[], int n, int searchValue)
 {
     int low=0, high=n-1;

     while(low<=high)
     {
        int mid=(low+high)/2;

        if(arr[mid]==searchValue)
            return mid;
        else if(arr[low]<=arr[mid]) // left side sorted
        {
            if(searchValue>=arr[low] && searchValue<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else //right side is sorted
        {
            if(searchValue>arr[mid] && searchValue<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
     }

    return -1;
 }

 int main()
 {
     int arr[]={10,20,40,60,5,8};
     int n=6;
     int searchValue=5;

     int index=SortedRotatedArraySearch(arr, n, searchValue);
     cout<<index;

     return 0;
 }
