
#include <iostream>
int main() {

    char c = 0; 
    long double d=0.0;
    float f = 0.0f; //f at the end prevents any casting operations. If we put 0.0 
    //it may declare it as double and cast it the as float. It implies that we mean business and it is indeed float
    std::cout<<"size of char is: "<<sizeof(c)<<std::endl;
    std::cout<<"size of double is: "<<sizeof(d)<<std::endl;
}
