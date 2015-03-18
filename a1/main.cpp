//
//  main.cpp
//  a1
//
//  Created by hambarkh on 16/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include <fstream>
//#include "Header.h"
#include "merge_sort.h"
using namespace std;

long countInv = 0;
//int a[N] = {9,2,5,6,4};
int b[N];
int a[N];

bool readFromFile();
void divide_merge_sort(int n);

int main(int argc, const char * argv[]) {
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    //int i=0;
    //Read from Files
    if (!readFromFile())
    {
        cout << "Exiting..." << endl;
        return 0;
    }
 
    divide_merge_sort(N);
   // print_arrays(a,"a");
   // print_arrays(b,"b");
    cout << "Inversions = " << countInv << endl;
    return 0;
}
