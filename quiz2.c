#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumsTo(int x[], int n, int k, int v) { 
    // printf("x[0], n, k, v: %d, %d, %d, %d\n", x[0], n, k, v); 
    if (v == 0 && k == 0){
        return true; 
    }
    if (v!=0 && k == 0) {         
        return false;
    } 
    if (n == 0){              
        return false; 
    }     
    int result1 = 0; 
    if (v >= x[0]) {
        result1 = sumsTo(x + 1, n - 1, k -1, v - x[0]);    
    }
    int result2 = sumsTo(x + 1, n - 1, k, v);          
    if (result1 + result2 > 0){
        return true; 
    }
    return false; 
}