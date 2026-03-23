#include <stdio.h>
int main() {
    const char* ones[20] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char* tens[8] = {
        "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    int dig ;
    printf("Write the number = ");
    scanf("%d",&dig);
    
    int q=0;
    int r=0;
    
    if(dig>999 && dig<99999){
        q=dig/1000;
        r=dig%1000;
        if(q>19){
            printf(" %s",tens[(q/10)-2]);
            if(q%10!=0)
               printf(" %s",ones[q%10]);
        }else{
            printf("%s",ones[q]);
        }
        printf(" thousands");
        q=r/100;
        r=r%100;
        if(q!=0){
            printf(" %s",ones[q]);
            printf(" hundreds");
        }
        if(r>19){
            q=r/10;
            r=r%10;
            printf(" & %s",tens[q-2]);
            if(r!=0)
                printf(" %s",ones[r]);
        }else{
            printf(" & %s",ones[r]);
        }
    }
    return 0;
}