#include <stdio.h>
#include <math.h>

int main() {
    
    float L = 7, area, peri;
    
    peri = M_PI * L /2 + 3 * L / 5 + 4 * L;
    
    area = M_PI * pow(L/2 ,2)/2 + (L/5) * (3 * L/5) * 2
    + pow(L,2) + pow(L/5,2) * 2;  

    printf("Peri total: %.4f\n", peri);
    printf("Área total: %.4f\n", area);

    return 0;
}
