#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram Shyam and Ajay:\n");
    scanf("%d%d%d", &ram, &shyam, &ajay);
    (ram < shyam && ram < ajay) ? printf("Ram is younger") : (shyam < ram && shyam < ajay) ? printf("Shyam is younger"): printf("Ajay is younger");
}