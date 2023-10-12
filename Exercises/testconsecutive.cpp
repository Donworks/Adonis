#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void findRepeat(int arr[],int n){
   int count=0;
    int value=0;
    for(int i=0; i<n;i++){
       if(arr[i]==arr[i+1]){
           count++;
	   value=arr[i];
       }
    }
    count++;
    cout << "The repeated element:" << value;
    cout << endl << "Number of ocurrences:" << count;
}
int main(){
    int Arr[]={ 2,3,4,5,5,5,6,7,8 };
    int len=sizeof(Arr)/sizeof(Arr[0]);
    findRepeat(Arr,len);
    return 0;
}
