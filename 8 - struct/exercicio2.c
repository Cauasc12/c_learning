#include <stdio.h>

struct st_vetor{
    float x;
    float y;
    float z;
};

int main(){
    
    struct st_vetor vetores[3];

    for(int i = 0; i < 2; i++){
        printf("Vetor %d\n", i+1);
        printf("Coordenada x: ");
        scanf("%f", &vetores[i].x);
        printf("Coordenada y: ");
        scanf("%f", &vetores[i].y);
        printf("Coordenada z: ");
        scanf("%f", &vetores[i].z);
    }

    vetores[2].x = vetores[0].x + vetores[1].x;
    vetores[2].y = vetores[0].y + vetores[1].y;
    vetores[2].z = vetores[0].z + vetores[1].z;

    printf("Vetor 1 + Vetor 2 = (%.2f, %.2f, %2.f)", vetores[2].x, vetores[2].y, vetores[2].z);

    return 0;
}