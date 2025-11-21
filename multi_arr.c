#include <stdio.h>
void main()
{
    int arr[4][3] = { {3,4,2} ,{5,6,9}, {2,7,8}, {3,4,5}};
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}
