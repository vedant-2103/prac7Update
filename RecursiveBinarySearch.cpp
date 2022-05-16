#include <iostream>
#include <vector>
#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::boolSearchFunction(std::vector<int>& vector,int &requiredNumber, int& lowestIndex, int pivot, int& highestIndex)
{
    pivot=lowestIndex+(highestIndex-lowestIndex)/2;
    if(vector[pivot]==requiredNumber)
    {
        return true;
    }
    else if(lowestIndex-highestIndex==0)
    {
        return false;
    }

    else
    {
        if(requiredNumber<vector[pivot])
        {
            highestIndex=pivot-1;
            return boolSearchFunction(vector,requiredNumber,lowestIndex,pivot,highestIndex);
        }
        if(requiredNumber>vector[pivot])
        {
            lowestIndex=pivot+1;
            return boolSearchFunction(vector,requiredNumber,lowestIndex,pivot,highestIndex);
        }
    }
    return true;
}

bool RecursiveBinarySearch::search(std::vector<int> vector, int requiredNumber)
{
    int lowestIndex=0;
    int highestIndex=vector.size()-1;
    int pivot=lowestIndex+(highestIndex-lowestIndex)/2;
    bool result=boolSearchFunction(vector,requiredNumber,lowestIndex,pivot,highestIndex);
    return result;
}