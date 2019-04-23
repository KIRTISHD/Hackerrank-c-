#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long lg;
    char ch;
    float fl;
    double db;

    cin>>i>>lg>>ch>>fl>>db;
    printf("%d\n", i);
    printf("%ld\n", lg);
    printf("%c\n", ch);
    printf("%.3f\n", fl);
    printf("%.9f\n",db);
    return 0;
}

