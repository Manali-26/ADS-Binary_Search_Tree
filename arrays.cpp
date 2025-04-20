#include<iostream>
using namespace std;
void resvrsearr(int arr[],int size)
{
 int start = 0, end =size-1;
 while(start<end){
 swap(arr[start], arr[end]);
 start++;
 end--;
 }
 

}


void sumofarr(int arr[],int size)
{
 int sum=0;
 for( int i=0;i<size;i++) 
 {
    sum += arr[i];
  }

cout << "sum of array is " << sum << endl;
}


void swapmin_max(int arr[],int size)
{
  int smallest=INT_MAX,largest = INT_MIN;
  int a,b; 
  for(int i=0;i<size;i++)
      {
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
      }
     cout << "smallestvalue is "<< smallest << endl;
     cout << "largest value is "<< largest << endl;
  for(int i=0;i<size;i++)
  {
    if (arr[i]== smallest)
    {
     cout << " smallest value index "<< i << endl;
    a= i;
   }
 }
 
 for(int i=0;i<size;i++){
 if (arr[i]== largest){
   cout << " largest value index "<< i << endl;
    b = i;}
 }
 
 
 swap(arr[a],arr[b]);
 
}
int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size =7;
    swapmin_max(arr,size);
  //  sumofarr(arr,size);
 //   resvrsearr(arr,size);
    for(int i= 0; i<size;i++){
     cout << arr[i] << " ";

 }
       return 0;
}