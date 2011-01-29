// Alexander Katz
// Professor Souvaine
// Comp 160 - Algorithms
// December 2, 2009
//                            Programming Project
#include <iostream>
#include <fstream>
#include "naive.h"
using namespace std;


int main(){
    // Text to be searched
    fstream file;
    
    string fileName;
    cout << "Please enter the name of the file to be searched:" << endl;
    getline(cin, fileName);
    file.open(fileName.data(), ios::in);
    if (file.fail()){
        cerr << "Error: " << fileName << " failed to open." << endl;
        exit(1);
    }

    // Pattern being searched for
    string search;
    cout << "Please enter the string of text that you are searching for:" << endl;
    getline(cin, search);
   
    time_t start,end;
    time (&start);
    naive_compare(file, search);
    time (&end);
    
    double diff = difftime (end,start);
    cout << endl << "Naive ran in " << diff << " seconds" << endl;  
}

