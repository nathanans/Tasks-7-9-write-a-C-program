#include <stdio.h>
#include <string.h>

int main()
{
    char hex_digits[] = "0123456789abcdef";
    unsigned long long shift;
    int value;
    
    printf("\nPut an integer :");
    scanf("%d", &value);
    if (value < 0){   
        shift = 1ULL<<32;
        shift += value;
    }
    else{
        shift = value;
    }
    int x;
    char t[] = "0x",y[10],rev[10];
    char d[2]="\0";
    while(shift!=0){
        x = shift & 0xf;
        d[0] = hex_digits[x];
        strcat(y,d);
        shift >>= 4;
        if (shift == 0){
            break;
        }
    }
    int c;
    c = strlen(y);
    for(int i=0; c>=0; i++){
        c--;
        rev[i]=y[c];
    }
    strcat(t,rev);
    printf("\nConvert to hex string : %s\n",t);
    main();
    return(0);
}