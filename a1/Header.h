//
//  Header.h
//  a1
//
//  Created by hambarkh on 16/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#ifndef a1_Header_h
#define a1_Header_h


#endif

#include <fstream>
#include <string>
#define N 100000

using namespace std;


extern int a[100000];
//extern int a[5];

bool readFromFile()
{
    int i=0;
    ifstream myfile;
    string line;
    myfile.open ("/Users/hambarkh/Desktop/hitesh/XCode/a1/data.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            //cout << line << '\n';
            a[i] = stoi(line);
            i++;
        }
        myfile.close();
        return true;
    }
    
    else cout << "Unable to open file";
    return false;
}
void print_arrays(int *aInArr,string aInName)
{
    int i;
    cout << "Printing array " << aInName << endl;
    for (i=0; i<N; i++) {
        cout << *aInArr << "\t" ;
        aInArr++;
    }
    cout << endl;
}