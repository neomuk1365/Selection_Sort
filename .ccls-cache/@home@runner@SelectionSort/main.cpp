#include <bits/stdc++.h>
using namespace std;
template <class T>
void selectionSort(T *array,int n){
    T temp;
	for(int i=0;i<n-1;i++){
        // int min=i;
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j])
                {
                    // temp=array[i];
                    // array[i]=array[j];
                    // array[j]=temp;
                    swap(array[i],array[j]);
                }
	    }
	}
}
template <class T1>
void swap(T1 &a,T1 &b){
  T1 temp;
  temp=a;
  a=b;
  b=temp;
}
int main(){
int arr[]={10,5,20,2,8};
int size=sizeof(arr)/sizeof(int );
cout <<size<<endl;
selectionSort(arr,size);
for(int i=0;i<size;i++){
	cout <<arr[i]<<" ";
}
cout <<endl;
}