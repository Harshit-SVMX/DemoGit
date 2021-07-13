//
//  main.cpp
//  All_In_One_C++
//
//  Created by Harshit Srivastava on 14/05/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n=5;
    int value=1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i ;j++){
            std::cout<<value;
            value = value +1;
        }
        std::cout<<"\n";
    }
    
    
    return 0;
}
