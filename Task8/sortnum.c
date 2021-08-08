#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "qsort.c"


int main()
{
    FILE *fp, *qs;
    char num[5];
    int count = 0;

    fp  = fopen ("data.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s", &num);
        //printf("%d\n", atoi(num));
        count++ ;
    }
    fclose(fp);

    fp  = fopen ("data.txt", "r");
    int arr[count],t=0;

    while (!feof(fp)){
        fscanf(fp, "%s", &num);
        arr[t] = atoi(num);
        //printf("%d\n", arr[t]);
        t++ ;
    }
    fclose(fp);

quickSort(arr, 0, count-1);

    qs = fopen("data_sorted.txt", "w");
    for(int n=0; n < count-1; n++){
          fprintf(qs, "%d\n", arr[n]);
    }
    
    fclose(qs);
    return(0);
    
}