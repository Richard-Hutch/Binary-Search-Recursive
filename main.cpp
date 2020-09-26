#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int value){

  if (left <= right){
    int mid = (right + left) / 2;
    //value is on the left half
    if (arr[mid] > value){
      return binarySearch(arr, left, mid - 1, value);
    }
    //value is on the right half
    else if (arr[mid] < value){
      return binarySearch(arr, mid + 1, right, value);
    }
    //middle of the array is the desired value
    else if (arr[mid] == value){
      return mid;
    }
  }
  //value not found in array
  return -1;
}


int main() {
  
  int arr[] = {1, 2, 3, 4, 5, 6};
  cout << "Should return 5: ";
  cout << binarySearch(arr, 0, 5, 6) << endl;
  cout << "Should return -1: ";
  cout << binarySearch(arr, 0, 5, 10) << endl;


}