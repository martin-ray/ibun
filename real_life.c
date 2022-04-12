#include<stdio.h>
#define BEGIN 4

int main(void){
  double sum=0,sum2,sum3;
  int i;

  int begin;
  int end;
  int percent;
  int age;
  printf("How old are you now?>");
  scanf("%d",&age);
  printf("what is your earliest memory? And how old were you then?>");
  scanf("%d",&begin);
  printf("To what age are you gonnna live?>");
  scanf("%d",&end);
  for(i=begin;i<=end;i++){
    sum=sum+1/(double)i;
  }
  sum3=sum;
  sum2=sum/2;
  sum=0;
  i=begin;
  while(sum<=sum2){
    sum=sum+1/(double)i;
    i++;
  }

  printf("the real half point of your life is %d\n",i);

  sum=0;
  for(i=begin;i<=age;i++){
    sum=sum+1/(double)i;
  }
  percent=sum/sum3*100;
  printf("And your real life comes to %d%%. The rest of your life is %d%%\n",percent,100-percent);
  int c;

  while((c=getchar())!='n'){
    printf("press 'n' to exit\n");
  }
  return 0;
}
