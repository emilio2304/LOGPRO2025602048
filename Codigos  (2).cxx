#include <stdio.h>
#include <math.h>

int main() {
    
    float L = 7.0, area, peri;
    
    peri = M_PI * 3 * L / 2 + sqrt(pow(L,2)+ pow(3 * L, 2)) *2 + 7 * L;
    area = M_PI * pow(3 * L/2 ,2)/2 + 3 * pow(L,2) * 3; 

    printf("Peri total: %.4f\n", peri);
    printf("Área total: %.4f\n", area);

    return 0;
}
