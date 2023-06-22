 #include<stdio.h>
 int main(){
     int a,b,c,d;
     scanf("%d %d %d %d",&a,&b,&c,&d);

     if(a>b&&a>c&&a>d){
        printf("%d is The greatest number",a);
     }
     else if(b>a&&b>c&&b>d){
        printf("%d is The greatest number",b);
     }
     else if(c>b&&c>a&&c>d){
        printf("%d is The greatest number",c);
     }
     else{
        printf("%d is a greatest number",d);
     }

 return 0;
 }
