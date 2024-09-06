#include<stdio.h>
#include<math.h>

int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int min(int x, int y){
    if(x < y){
        return x;
    }else{
        return y;
    }
}

int main(){

        int c1,c2,c3,c4;
        int std1,std2,std3;

        for(int i=1;i<=3;i++){

            scanf("%d %d %d %d",&c1,&c2,&c3,&c4);

            int mx1 = max(c1,c2);
            int mx2 = max(c3,c4);
            int mn1 = min(c1,c2);
            int mn2 = min(c3,c4);
            int mx0 = max(mn1,mn2);
            int mx = max(mx1,mx2);

            double ava = ( (double)(mx1+mx2+mx0)/3);
            printf(" Avarage Nunber student  %d : = %lf\n",i,ava);
            printf("Max Number for CT student  %d : = %d\n",i,mx);


      }

        return 0;
}
