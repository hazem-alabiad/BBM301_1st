#include <stdio.h> 
int test(int a, int b){
    printf("%c",a);
}
int main(int argc, char* argv[]){
    int* malek[] = {1,2,4};
    test(malek);
    return 0;
}