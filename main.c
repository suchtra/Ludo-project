#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int comp_choice(int comp_total)
{
  int c1=0,comp,j;
  srand(time(0));
  comp = rand()%6+1;
  comp_total+=comp;
   printf("computer current score is %d\n",comp);
  if (comp==6)
  {
  
    printf("computer get another chance\n");
    comp_choice(comp_total);
  }
  
  return(comp_total);
}
int user_choice()
{
  int user_total=0;
  int u1=0;
  char c2;
  printf("Shuffle the dice.press 1\n");
  scanf("%c",& c2);
  srand(time(0));
  u1 = rand()%6+1;
  
  user_total+=u1;
  printf("user current score is %d\n",u1);
  if (u1==6)
  {
    for(int i=0;i<3;i++)
    {printf("you get 6 and you get another chance\n");
    user_choice(user_total);}
  }
    return(user_total); 
}
int main(void) {
  int c[]={1,2,3,4,5,6};
  int user_total=0;
  int comp_total=0;
  int c1=0,comp,j;
  
  for(int i=0;user_total<100 && comp_total<100;i++)
  {
    
  comp_total=comp_choice(comp_total);
  printf("computer total: %d\n", comp_total);
  user_total=user_choice();
   printf("user current total: %d\n", user_total);
  
  }
  printf("computer overall total :%d\n", comp_total);
  return 0;
}