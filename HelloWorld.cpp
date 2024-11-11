#include<iostream>
int main(int argc, char * argv[]){
    // std::cout<<"Hello, World\n";
    // return 0;

    std::cout<<"Here are"<<argc <<"Parameter"<<std::endl;
    for(int i = 0;i<argc;++i){
        std::cout<<argv[i]<<std::endl;
    }



}
