#include <vector>
#include <iostream>

template<typename T>
int linearSearch(T begin,T end, int find){
    for(T it = begin; it != end; it++){
        if(*it == find){
            std::cout << "found: " << *it << std::endl;
            return *it;
        }

    }
    return -1;
}

template<typename T>
T BinarySearch(T begin, T end, int key){
    T lower = begin;
    T upper = end;
    
    while (lower <= upper)
    {
        T mid = lower + ((upper - lower) / 2);
        //std::cout << *mid << "asd ";
        if(key == *mid)
        {
            std::cout << "found match: " << *mid << "   ";
            return mid; 
        }
        if(key < *mid) {
            //std::cout << *mid <<  "   ";
            upper = mid-1;
        }
        else {
            //std::cout << *mid;
            lower = mid+1;
        }
    }

    return end;
}

template<typename T>
T binaryTreeSearch(T begin, T end, int key){

}
