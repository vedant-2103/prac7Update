#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch
{
    public:
    bool search(std::vector<int> vector, int requiredNumber);
    bool boolSearchFunction(std::vector<int>& vector,int &requiredNumber, int& lowestIndex, int pivot, int& highestIndex);
};

#endif