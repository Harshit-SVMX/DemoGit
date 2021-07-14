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
    for(int i =1; i<=N;i++)
    {
        int x =65;
        char ch;
        for(int j =1;j<=N;j++){
           // ch=x;
           // std::cout<<ch;
           // x++;   ch = 'A'+1
            //ch = 'A'+j-1;
            ch = 'A'+i+j-2;
            std::cout<<ch;
        }
        std::cout<<"\n";
    }
    
    return 0;
}
