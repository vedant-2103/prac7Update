#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
#include "Sort.h"

class QuickSort: public Sort
{
    public:
    std::vector<int> sort(std::vector<int> list);
    void quicksort(std::vector<int>& list, int low, int high);
    int pivotFinder(std::vector<int>&arr,int lowestIndex,int highestIndex);

};

#endif