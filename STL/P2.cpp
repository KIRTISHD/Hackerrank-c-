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
    int del1,rn1,rn2;
    cin>>size;

    vector<int> vc;

    for (int i=0;i<size;i++){
      cin >> temp;
      vc.push_back(temp);
    }

    cin>>del1;
    del1-=1;
    vc.erase(vc.begin()+del1);
    cin >> rn1 >> rn2;
    rn1-=1;
    rn2-=1;
    vc.erase(vc.begin() + rn1 , vc.begin() + rn2);

    cout << int(vc.size())<<endl;
    for (auto i=vc.begin(); i!=vc.end();i++)
        cout<<*i<<" ";
    return 0;
}
