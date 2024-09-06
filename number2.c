#include <stdio.h>
int main()
{
  char s1[20];
   scanf("%s",&s1);
   int age = 0;
   int cnt = 0;
   for( int i = 4; s1[i] != '\0';i++){
        int a = s1[i]-'0';
        age +=a;
        cnt++;
        if(cnt==3){
          break;
        }
   }
int s;
if(age<0){return 0;}
s=(age>=18);
switch(s)
{
case 0: printf("Not Eligible");break;
case 1:printf("Eligible");break;
}
return 0;
}
