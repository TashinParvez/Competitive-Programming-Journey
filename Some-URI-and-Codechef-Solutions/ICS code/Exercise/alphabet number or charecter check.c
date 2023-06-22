#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);

    if(a>='a'&& a<='z'){
        printf("Alphabet\n");
    }
    else if(a>='A'&& a<='Z'){
        printf("Alphabet\n");
    }
    else if(a>='0' && a<='9'){
        printf("Number\n");
    }
    else{
        printf("Special symbol\n");
    }

return 0;
}
