#include <iostream>
#include <vector>

void genPrime(std::vector<int> &vec){
    
    
    for (int i=2; i<100; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime){
            vec.push_back(i);
        } 
        
    }
}