#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <string>
#include <sstream>

int main()
{
    BubbleSort objectBubble;
    QuickSort objectQuick;
    RecursiveBinarySearch objectRecursive;
    std::vector<int> integerList;
    std::string in;
    std::string temp;
    std::getline(std::cin, in);
    std::stringstream temp1;
    temp1<<in;
    while(!temp1.eof())
    {
        temp1<<temp;
        integerList.push_back(stoi(temp));
    }

    integerList=objectQuick.sort(integerList);
    bool findorNot;
    findorNot=objectRecursive.search(integerList,1);

    if(findorNot==0)
    {
        std::cout <<"false ";
    }

    if(findorNot==1)
    { 
        std::cout <<"true ";
    }

    int size=integerList.size();
    for (int i=0;i<size;i++)
    {
        std::cout << integerList[i]<<" ";
    }
    return 0;
}