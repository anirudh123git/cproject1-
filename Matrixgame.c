#include<stdio.h>


int main()
{
printf("--------------------\n");
char s[20];
int j=4;
int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15}};
int m=0,n=0;
printf("WINNING CONDITION IS:------>>>>>>");
printf("\n");
for(m=0;m<4;m++){
   for(n=0;n<4;n++){
          if(m==3&&n==3){
            printf(" ");
            break;
    }
         printf("%d ",a[m][n]);
        
}
printf("\n");


}


while(j>=1){

printf("Available Moves:%d\n",j);
printf("Rules of This Game:\n");
printf("1.You Can only move one step at a time\n");
printf("2.You can move the number to empty position\n");
printf("3.For all vaild moves your total number of moves will decrease by 1\n");
printf("--------------------------------");
printf("\n");
printf ("enter your name:");
gets(s);    
printf("Hello %s",s);        
j--;
printf("\n");
}            
printf("sorry,out of moves");            
                
    return 0;
}
