#include <stdlib.h>
#include <stdio.h>
int main(){
        float c0, cdop, k, c;
        printf("Vvedite c0, cdop, k, c dlya svintsa: ");
        scanf("%f %f %f %f", &c0, &cdop, &k, &c);
        float c01, cdop1, k1, c1;
        printf("Vvedite c0, cdop, k, c dlya mishyaka: ");
        scanf("%f %f %f %f", &c01, &cdop1, &k1, &c1);
        float c02, cdop2, k2, c2;
        printf("Vvedite c0, cdop, k, c dlya ftora: ");
        scanf("%f %f %f %f", &c02, &cdop2, &k2, &c2);
        int i = 0;
        int i1 = 0;
        int i2 = 0;

        while(c > cdop){
                printf("%s %d %s %.5f\n", "Sutki =", i + 1, "Soderzhanie svintsa =", c);
                c = c / k;
                i++;
        }
        printf("%s %d\n\n", "Kolichestvo sutok do predelnogo znacheniya =", i);
        while(c1 > cdop1){
                printf("%s %d %s %.5f\n", "Sutki =", i1 + 1, "Soderzhanie mishyaka =", c1);
                c1 = c1 / k1;
                i1++;
        }
        printf("%s %d\n\n", "Kolichestvo sutok do predelnogo znacheniya =", i1);
        while(c2 > cdop2){
                printf("%s %d %s %.5f\n", "Sutki =", i2 + 1, "Soderzhanie ftora =", c2);
                c2 = c2 / k2;
                i2++;
        }
        printf("%s %d\n", "Kolichestvo sutok do predelnogo znacheniya =", i2);
}
