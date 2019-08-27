#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

bool searchArray(int arr[], int element, int N){
  for(int i=0; i < N; i++){
    if(arr[i]==element){
      return true;
    }
  }
  return false;
}


bool binarySearchHelper(int arr[], int element, int lo, int hi){
	if (hi <lo)
		return false;
	int mid = (lo+ hi)/2;
	if(arr[mid] == element)
		return true;
	if(arr[mid] < element)
       return binarySearchHelper(arr, element, mid +1 , hi);
    else
       return binarySearchHelper(arr, element, lo , mid-1);

}

bool binarySearch(int arr[], int element, int N){
//Precondition: input array arr is sorted in ascending order
	return binarySearchHelper(arr, element, 0, N-1);
}



int main(int argc, char *argv[]){
  if(argc < 2){
    cerr<<"Usage : "<<argv[0] <<" sequence of numbers"<<endl;
    exit(1);
  }
  int *arr = new int[argc-1];
  int searchElem;
  for(int i = 0 ; i < argc -1; i++)
    arr[i] = atoi(argv[i+1]);
  
  cout<<"Enter an element to search for: ";
  cin>>searchElem;

  string result = binarySearch(arr, searchElem, argc-1)? " exists": " does not exist";

  cout <<searchElem<< result  << " in the array"<<endl;
  return 0;

}
