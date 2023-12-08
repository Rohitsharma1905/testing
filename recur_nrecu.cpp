#include<iostream>
using namespace std;

//Non-recursive binary search
int binarysearch(int arr[],int left,int right, int item)
 {
  int middle;
  int size=right-left+1;
  while(left<=right)
   {
    middle = ((left + right)/2);
    if(item == arr[middle])
     {
      return(middle);
     }
    if(item > arr[middle])
     {
      left = middle+1;
     }
    else
     {
      right = middle-1;
     }
   }
  return(-1);
 }

//Recursive binary search
int binarysearchrecursive(int arr[],int left,int right, int item)
 {
  int middle;
  int size=right-left+1;
  if(left<=right)
   {
    middle = ((left + right)/2);
    if(item == arr[middle])
     {
      return(middle);
     }
    if(item > arr[middle])
     {
      left = middle+1;
      binarysearchrecursive(arr,left,right,item);
     }
    else
     {
      right = middle-1;
      binarysearchrecursive(arr,left,right,item);
     }
  }
 else
  { 
   return(-1); 
  }
 }


//main() function
int main()
 {
  int arr[20],size,i,j,item,index,choice;
  cout<<"Enter total number of elements of array\n";
  cin>>size;
  cout<<"Enter the elements of array in sorted order:\n";
  for(i=0;i<size;i++)
   {
    cin>>arr[i];
   }
   cout<<"Enter the element to be searched:\n";
   cin>>item;

  //Menu Driven
  cout<<"\nEnter the choice\n"<<"1.Recursive\n"<<"2.Non-Recursive\n";
  cin>>choice;

  //Recursive
  if(choice==1)
  index=binarysearchrecursive(arr,0,size-1,item);

  //Non-recursive
  if(choice==2)
  index=binarysearch(arr,0,size-1,item);

  if(index!=-1)
   {
    cout<<"\n";
    cout<<"The index of element to be searched:";
    cout<<"\n"<<index;
   }
  else
  {
   cout<<"\nThe element to be searched is not found\n";
  }

  cout<<"\n";
}
