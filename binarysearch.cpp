#include<iostream>
using namespace std;

int binary_search(int element,int size, int *arr){
    int low = 0;
    int high = size - 1;
    
    while (low <=high){                                // low<= high for that edge conditions
        int mid = (low + high) / 2;
        if(arr[mid] < element){
            low = mid + 1;
        }else if(arr[mid] > element){
            high = mid - 1  ;
        }
        if(arr[mid] == element){
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int a = binary_search(5, 5, arr);
    cout<< "Element index " << a << endl;
    return 0;
}