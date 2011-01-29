// Alexander Katz
// Professor Souvaine
// Comp 160 - Algorithms
// December 2, 2009
//                            Programming Project
#include <iostream>
#include <fstream>
using namespace std;

#ifndef knp
#define knp

void KNP_Matcher(fstream &T, string P);
int* COMPUTE_PREFIX_FUNCTION(string P, int *pi, int m);

void KNP_Matcher(fstream &T, string P){
    int n, m, q;
    T.seekg(0, ios::end);        // Length of the text file
    n = T.tellg();
    T.seekg(0, ios::beg);

    m = P.size();                // Length of the pattern
    
    int *pi;                     // Dynamically set the size of the array by allocating
    pi = new int[P.size()];      // the memory for it and using a pointer.
    
    pi = COMPUTE_PREFIX_FUNCTION(P, pi, m); // Create the Prefix table
  
    q = 0;                       // Keep track of the # of characters matched
    char ch;
    for(int i=0; i < n; i++){
        T.seekg(i, ios::beg);    // Run through the text file linearly technically T.seekg
        T.get(ch);               // isn't needed but included since the book has T[i]
                              
        while(q>0 && P[q] != ch){
           q = pi[q-1];          // If the next character does not match
        }
        if (P[q] == ch){         // If the next character matches
             q=q+1;
        }
        if (q == m){            // If the entire pattern is matched
             cout << "'"<< P << "' occurs with shift " << i-m + 1 << endl;
             q = pi[q];         // Look for the next match of the pattern
        }
        
    }
    delete [] pi;
}

int* COMPUTE_PREFIX_FUNCTION(string P, int *pi, int m){
    pi[1] = 0;                          // pi[1] is always 0.
    int k = 0;                          // index within the pattern

    for (int q = 1; q < m; q++){
        while (k > 0 && P[k] != P[q]){  // Move index in the pattern backwards
            k = pi[k-1];                // when next character isn't found
        }
        if (P[k] == P[q]){              // When next character in pattern matches
            k = k+1;                    // move the index foward
        }
        pi[q] = k;                      // set the # of characters matched
    }
    return pi;                          // Not needed since I'm using pointers but
                                        // included to make it similar to the book's
                                        // pseudo-code.
}
#endif
