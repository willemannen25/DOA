#include <iostream>
#include <vector>
#include "primeGen.h"
#include "finder.h"
#include "btree.h"

int main(){
    std::vector<int> vec(2);
    genPrime(vec);
    
    btree tree;
    for(auto e: vec){
        // tree.insert(e);
    }
    tree.search(17);

    //linearSearch(vec.begin(),vec.end(),17);
    BinarySearch(vec.begin(),vec.end(),17);  
                            
}  