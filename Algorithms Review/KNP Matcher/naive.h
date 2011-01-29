#include <iostream>
// Alexander Katz
// Professor Souvaine
// Comp 160 - Algorithms
// December 2, 2009
//                            Programming Project
#include <fstream>
using namespace std;

#ifndef naive
#define naive
void naive_compare(fstream &file, string search){
    file.seekg(0, ios::end);                                    // Length of the text file
    int text_size = file.tellg();
    file.seekg(0, ios::beg);

    int pattern_size = search.size();                           // Length of the pattern
    
    char ch;

    /*****************************************************************************
    * The outer loop searches linearly through the block of text being searched  *
    * while the inner loop attempts to match the string starting at every single *
    * character within the block of text                                         *
    *****************************************************************************/

    for (int i=0; i < text_size; i++){
        for (int j=0; j < pattern_size && i+j < text_size; j++){
            file.seekg(i+j, ios::beg);
            file.get(ch);
            if (ch != search[j]){
                break;
            }
            else if (j == pattern_size-1){
                cout << search << " occurs with shift " << i << endl;
            }
        }  
    }
}

#endif
