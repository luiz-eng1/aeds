#include <stdio.h>



int main(){

    int x[10]= {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int y[10]= { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int z[20];
    int j=0;
    for(int i=0; i<10; i++){
        z[j] = x[i];  
        j++;

        z[j] = y[i];  
        j++;  
    }

return 0;
}