#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeduplicates(int* a, int size) {
    vector<int> arr;
    unordered_map<int, bool> map;
    for(int i=0; i<size; i++)
    {
        if(map.count(a[i]) > 0) {
            continue;
        }
        map[a[i]]= true;
        arr.push_back(a[i]);
    }
    return arr;
}
int main() {
    int a[]= {1,2,3,3,4,5,5,6,7};
    vector<int> arr= removeduplicates(a,9);
    for(int i=0; i<9; i++) {
        cout<< arr[i]<< endl;
    }
}