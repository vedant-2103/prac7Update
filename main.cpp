#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <string>
#include <sstream>

int main()
{
    QuickSort objectQuick;
    RecursiveBinarySearch objectRecursive;

    
    std::vector<int> integerList;
    std::string integer;
    std::string temporary_string;
    std::getline(std::cin, integer);
    std::stringstream temp1;
    temp1<<integer;


    while(!temp1.eof())
    {
        temp1>>temporary_string;
        integerList.push_back(stoi(temporary_string));
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