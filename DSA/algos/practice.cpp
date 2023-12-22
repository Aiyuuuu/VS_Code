#include <iostream>
#include <vector>

// void cpu(){
//     while(true){
//         std::cout<<"PRANKED!"<<std::endl;
//     }}

void memory(){
    std::vector<long long int> A;
    long long int size = 700000000LL;
    for (long long int i = 0; i < size; ++i) {
        A.push_back(size - i);
    }
}




int main() {
    
    std::cout<<"loading...";
    memory();
    


    

    return 0;
}
