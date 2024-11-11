#include <iostream>
#include <vector>
using namespace std;

void push_front(vector<int>& vct, int element) {

    vct.push_back(element);
    
    for (size_t i = 0; i < vct.size()-1; i++) {
        std::swap(vct[vct.size()- i-1], vct[vct.size() - i - 2]);
    }

    for (size_t i = 0; i < vct.size(); i++) {
        cout << vct[i] << " ";
    }
}


//int main() {
//
//    vector<int> vct(5);
//
//    for (int i = 0; i < vct.size(); i++) {
//        vct.at(i) = rand() % 20;
//    }
//
//    for (int i = 0; i < vct.size(); i++) {
//        cout << vct[i] << " ";
//    }
//
//    cout << endl;
//
//    push_front(vct, -9);
//
//    cout << endl;
//
//    return 0;
//}