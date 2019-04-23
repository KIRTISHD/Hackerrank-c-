#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    int temp;

    cin>>size;
    vector<int> vc;
/*
    for(int i=0;i<size;i++){
        cin>>temp;
        vc.push_back(temp);
    }  */

    while(cin>>temp)
        vc.push_back(temp);

    sort(vc.begin(), vc.end());

    for (auto i=vc.begin(); i!= vc.end(); i++)
        cout<<*i<<" ";
    return 0;
}
