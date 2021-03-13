#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;long l;char c;float f;double lf;
    scanf("%d %li %c %f %lf",&i,&l,&c,&f,&lf);
    printf("%d\n%li\n%c\n%3f\n%9lf",i,l,c,f,lf);
    return 0;
}