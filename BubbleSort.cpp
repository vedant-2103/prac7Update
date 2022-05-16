#include <iostream>
#include "BubbleSort.h"
#include "Sort.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    int size=list.size();
    for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(list[j]<list[i])
            {
                std::swap(list[j],list[i]);
            }
        }
    }
    return list;
}