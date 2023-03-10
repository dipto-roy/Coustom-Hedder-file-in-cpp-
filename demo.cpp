#include "arrayHelper_h"
#include<iostream>

int main()

{
   //1D array

   /*int arr[5] = {1, 2, 3, 4, 5};
   int size = 5;
   print1DArray(arr,size);*/


  /*int arr[6] = {1, 2, 3, 4, 5, 8};
  int size = 6;
  reversePrint1DArray(arr1,size);

  int arr[5];
  int size = 5;
  input1DArray(arr,size);

  int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8, 9 , 10};
  int size = 10;
  int searchKey = 7;
  int index = searchIn1DArray(arr,size,searchKey);
  std::cout<<index;

  int arr[10]= {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8, 9 , 10};
  int size = 10;
  int max = findMax1DArray(arr,size);
  std::cout<<"Max : "<<max;*/

  /*int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8, 9 , 10};
  int size = 10;
  int min = findMin1DArray(arr,size);
  std::cout<<"Min : "<<min;*/

  /*int arr[5] = {1, 2, 3, 4, 5};
  int arr1[5];
  int size = 5;
  copy1DArray(arr,arr1,size);
  print1DArray(arr1,size);*/

  /*int arr[10] = {10 , 5 , 7 , 9 , 1 , 2 , 3 , 8 , 6 , 4};
  int size = 10;
  std::cout<<"Given array is: ";
   for (int i = 0; i < size; i++)
   std::cout<< arr[i] <<" ";
   std::cout<<'\n';
   sort1DAarry(arr,size);
   std::cout<<("\nSorted array is: \n");
   for (int i = 0; i < size; i++)
   std::cout<< arr[i] <<" ";
   print1DArray(arr+1,size);*/

   int arr[3][4] = {{1 ,2 ,3 , 4}, {5 , 6, 7, 8}, {9, 10, 11 ,12} };
   print2DArray((int**)arr, 3, 4);

   /*int arr[3][4] = {{1 ,2 ,3 , 4}, {5 , 6, 7, 8}, {9, 10, 11 ,12} };
   reversePrint2DArray((int**)arr, 3,4);*/

   /*int arr[3][4];
   input2DArray((int**)arr, 3, 4);*/

   /*int arr[3][4] =  {{1 ,2 ,3 , 4}, {5 , 6, 7, 8}, {9, 10, 11 ,12} };
   int key = 8;
   int row, col;
   if(searchIn2DArray((int**)arr, 3, 4,key,row,col))
   {
       std::cout<< "key "<<key<< "found at row "<<row << "and column"<<col<<std::endl;

   }
   else{
    std::cout<< "Key"<<key<< "Not found "<<std::endl;
   }*/

   /*int arr[3][4] =  {{1 ,2 ,3 , 4}, {5 , 6, 7, 8}, {9, 10, 11 ,12} };
   int max = findMax2DArray((int**)arr, 3, 4);
   std::cout<< "Max :"<<max<<std::endl;*/

    /*int arr[3][4] =  {{1 ,2 ,3 , 4}, {5 , 6, 7, 8}, {9, 10, 11 ,12} };
   int min = findMin2DArray((int**)arr, 3, 4);
   std::cout<< "Min :"<<min<<std::endl;*/

}


