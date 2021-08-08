#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;

    FILE *fp;
    fp = fopen ("data.txt","w");
    
    printf("Amount of Random Number: ");
    scanf("%d",&n);
    
    srand(time(0));

    for(int i = 0; i<n; i++)
    {
        fprintf(fp, " %d \n", rand()%1000);
        
    }
    fclose(fp);
    return(0);
}