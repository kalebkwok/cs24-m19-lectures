#include <iostream>
#include <vector>
#include "sample.template"
using namespace std;


int main() {
    vector<int> v1{64, 128, 8, 512, 256, 32, 16, 4};
    vector<std::string> v2{"Banana", "Orange", "Apple", "Grapes"};
    
    getMax(v2[0], v2[1]); // string parameters
    getMax(v1[0], v1[1]); //integer parameters

    return 0;
}

