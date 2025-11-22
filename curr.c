
#include <stdio.h>
void fake_swap (int ca, int cb)
{
    float temp;
    temp = 0;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake swap in fn: ca = %f cb = %f\n", ca,cb);
}
void real_swap(int *pca, int *pcb)
{
    float temp;
    temp = 0;
    temp = *pca;
    *pca = *pcb;
    *pcb = temp;
    printf("real swap in fn: ca = %f cb = %f\n", *pca,*pcb);
}

void main()
{
    float ca,cb;
    printf("enter th currency: A");
    scanf("%f",&ca);
    printf("enter the currency: B");
    scanf("%f",&cb);

    fake_swap(ca,cb);
    printf("fake swap : ca = %f cb = %f\n",ca,cb);
    
    real_swap(&ca,&cb);
    printf("real swap in fn: ca = %f cb = %f\n", ca,cb);

}