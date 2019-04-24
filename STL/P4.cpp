#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int query;
    int choice;
    int marks;string name;
    cin>>query;

    map <string,int> m;   

    for (int i=0;i<query;i++){
        cin>>choice;
        if (choice==1){
            cin>>name>>marks;
            m.insert(make_pair(name,marks));
        }
        if (choice==2){
            m.erase(name);
        }
        if (choice == 3) {
          map<string, int>::iterator it = m.find(name);
           if (it!=m.end()) {
            cout << it->second << endl;
          }
          else {
            cout <<"0" << endl;
          }
        }
    }

    return 0;
}



