//
//  merge_sort.h
//  a1
//
//  Created by hambarkh on 17/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#ifndef a1_merge_sort_h
#define a1_merge_sort_h


#endif

#include <iostream>
#include "Header.h"
using namespace std;

extern int b[N];
extern long countInv;

void merge(int start, int middle, int end)
{
    int i=start,j= middle+1,k;
    for (k=start; k<=end; k++) {
        if ((j <= end && a[i] < a[j] && i <= middle) || (j > end)) {
            b[k] = a[i];
            i++;
        }
        else if (j <= end || i > middle)
        {
            b[k] = a[j];
            j++;
            if (i<=middle) {
                countInv = countInv + middle - i + 1;
            }
            //countInv = countInv + middle - k + 1;
        }
    }
    for (k=start; k<=end; k++) {
        a[k] = b[k];
    }
    //count = c;
}

void divide(int start, int end)
{
    if(end-start < 1)
        return;
    else
    {
        int middle = (end+start)/2;
        divide(start, middle);
        divide(middle + 1, end);
        merge(start,middle,end);
    }
}
void divide_merge_sort(int aInN)
{
    divide(0,aInN-1);
    cout << "DONE!!" << endl;
}