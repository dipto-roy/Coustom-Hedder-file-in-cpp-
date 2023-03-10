#ifndef arrayHelper_h
#define arrayHelper_h
#include <iostream>


//Function For 1D Array

void print1DArray (int* array, int size)
{
    for(int i = 0; i<size; i++)
    {
        std::cout<<array[i]<< " ";
    }
    std::cout<< std::endl;

}

void reversePrint1DArray(int* array, int size)
{
    for(int i = size-1; i>=0; i--)
    {
        std::cout<<array[i]<< " ";
    }
    std::cout<< std::endl;
}
void input1DArray(int* array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout<< "Enter Your Element"<<" "<<i<<" : ";
        std::cin>>array[i];
    }
    std::cout<< std::endl;
}
int searchIn1DArray(int* array, int size, int searchKey)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i]==searchKey)
        {
            return i;
        }
    }
    return -1;
}
int findMax1DArray(int* array, int size)
{
    int max= array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
int findMin1DArray(int* array, int size)
{
    int min= array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return min;
}
void copy1DArray(int* sourceAarry, int* destinationAarry, int size)
{
    for(int i = 0; i < size; i++)
    {
        destinationAarry[i]=sourceAarry[i];
    }

}
void sort1DAarry(int* array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i+1; i < size; j++)
        {
            if(array[i]>array[j])
            {
                int temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
void print2DArray(int** array, int row, int col)
{
    for(int i = 0 ; i < row; i++)
    {
        for(int j = 0; i < col; j++)
        {
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
void reversePrint2DArray(int** array, int row, int col)
{
    for(int i = row-1; i>=0; i--)
    {
        for(int j = col - 1; j>=0; j--)
        {
            std::cout<<array[i][j]<<" ";
        }
         std::cout<<std::endl;
    }
}
void input2DArray(int** array, int row, int col)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; i<col; j++)
        {
            std::cout<< "Enter you Element [" << i <<"][" << j << "]: ";
            std::cin>>array[i][j];
        }
    }
}
int searchIn2DArray(int** array, int row, int col, int searchKey)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(array[i][j]==searchKey)
            {
                return i*col + j;
            }
        }
    }
    return -1;
}
int findMax2DArray(int** array, int row, int col)
{

    int max = array[0][0];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(array[i][j]>max)
            {
                max = array[i][j];
            }
        }
    }
    return max;
}
int findMin2DArray(int** array, int row, int col)
{

    int min = array[0][0];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(array[i][j]<min)
            {
                min = array[i][j];
            }
        }
    }
    return min;
}
void copy2DArray(int** sourceAarry, int** destinationAarry, int row, int col)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            destinationAarry[i][j]=sourceAarry[i][j];
        }
    }
}
void sort2DAarry(int** array, int row, int col)
{
    int size = row * col;
    int* temp = new int [size];
    int index = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            temp[index++] == array[i][j];
        }
    }
    //sort the 1D array
    sort1DAarry(temp,size);
    //place the sorted value back into 2D array
    index = 0;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            array[i][j]=temp[index++];
        }
    }
    //clean up the temporary array
    delete[]temp;
}


#endif // ArrayHelper_h

