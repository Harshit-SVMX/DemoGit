//
//  main.cpp
//  XcodeC++
//
//  Created by Harshit Srivastava on 13/07/21.
//
//
#include <iostream>

int main(int argc, const char * argv[]) {
    int N;
    std::cin>>N;
    int k = N;
    for(int i =1;i<=N;i++){
        for(int j=1;j<=k;j++){
            std::cout<<" ";
        }
            for(int l=1;l<=i;l++){
                std::cout<<"*";
        }
        std::cout<<"\n";
        k=k-1;
    }
    
    return 0;
}
