#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int sortArr(vector<int> & arr){
     sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){

    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout<<"the smallest element in array 1 is "<<sortArr(arr1)<<endl;
    cout<<"the smallest element in array 2 is "<<sortArr(arr2)<<endl;

    return 0;
}
