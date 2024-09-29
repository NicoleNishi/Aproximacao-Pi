#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

double x,y;
unsigned long long i, j; 
    
j= 0;
    
srand(time(0));
    
for (i=1; i<=n; i++) {
    
    x = (double) rand() / RAND\_MAX;
    
    y= ;
    
    if(x*x + y*y <= 1) {
    j += 1;
    }
}
    
    return 4 * (double) j/n; 
    
    printf("%1.20f\n", t);