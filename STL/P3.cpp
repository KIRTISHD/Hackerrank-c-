#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int query;
    int q1,q2;
    cin >>query;

    set<int> s;

    for (int i=0;i<query;i++){
        cin>>q1>>q2;
        if (q1 == 1)
            s.insert(q2);
        if (q1 ==2)
            s.erase(q2);
        if (q1==3){
            if (s.count(q2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}