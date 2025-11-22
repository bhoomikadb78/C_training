#include <stdio.h>
struct score
{
    float marks;
    int rank;
};
void edit(struct score s1)
{
    printf("brfore change in fn:%f\n", s1.marks);
    s1.marks = 56.8;
    printf("after change in fn:%f\n", s1.marks);

}
void main()
{
    struct score s1 = {78.9,5};
    edit(s1);
    printf("after change in main %f\n", s1.marks);
}
