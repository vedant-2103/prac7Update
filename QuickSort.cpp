#include <iostream>
#include "QuickSort.h"
#include "Sort.h"
#include <vector>

int QuickSort::pivotFinder(std::vector<int>&arr,int lowestIndex,int highestIndex)
{
    int pivot=arr[highestIndex];
    int i=lowestIndex;
    for(int j=lowestIndex; j<highestIndex; j++)
    {
        if(arr[j]<pivot)
        {
            i=i+1;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i],arr[highestIndex]);
    return i;
}

void QuickSort::quicksort(std::vector<int>& list, int lowestIndex, int highestIndex)
{
    if (lowestIndex>=highestIndex)
    {
        return;
    }

    int pivotIndex=pivotFinder(list,lowestIndex,highestIndex);
    quicksort(list,lowestIndex,pivotIndex-1);
    quicksort(list,pivotIndex+1,highestIndex);
    return;
}

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    int highestIndex=list.size()-1;
    quicksort(list,0,highestIndex);
    return list;
}