#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
    int n;
    cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  int x ;
  cin>>x;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
