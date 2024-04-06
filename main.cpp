#include "mbed.h"

int n_1 = 0;
int n_2 = 1;
int n_3 = 0;

int max_value =0 ;

int fib(int n){
    if(n ==0 || n == 1){
        printf("*");
        return n;
    }
    else{
        printf("(%d), (%d)", n-1, n-2);
        return (fib(n-1) + fib(n-2));
    }

}


// main() runs in its own thread in the OS
int main()
{
    printf("lab 2 start!!!\r\n");
    printf("series is: ");
    for (int i=0; i<max_value; i++){
        printf("%d, ", fib(i));
    }
    printf("r\n");

while (true) {

    }
}

