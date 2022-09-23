#include<stdio.h>
#include<stdlib.h>
#include "order.h"

int main(int argc, char const *argv[]) {

  getnumbers();

  identify();

  return 0;
}

void getnumbers(void)
{
  // int i = 0;
  // printf("Please enter 10 integers: ");
  // while(i<10)
  // {
  //   scanf("%d",&numbers[i]);
  //   i++;
  // }
}

void identify(void)
{
  Bool d_end_i_start, i_end_d_start;
  int i = 0, d = 0, j = 0, k, i_num = -1, d_num = -1;
  int max_inc = 0, max_dec = 0;

  trend increment[5] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
  trend decrement[5] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
  
  if(numbers[0]>numbers[1])
  {
    i_end_d_start = T;
    d_end_i_start = F;
  }
  else if(numbers[0]<numbers[1])
  {
    i_end_d_start = F;
    d_end_i_start = T;
  }
  else
  {
    i_end_d_start = F;
    d_end_i_start = F;
  }

  while(j<9)
  {
    if(numbers[j]>numbers[j+1])
    {
      if(i_end_d_start == T)
      {
        decrement[d].start = j;
        i++;
        i_end_d_start = F;
      }
      else
      {
        decrement[d].end = j;
        d_end_i_start = T;
      }
    }
    else if (numbers[j]<numbers[j+1])
    {
      if(d_end_i_start == T)
      {
        increment[i].start = j;
        d++;
        d_end_i_start = F;
      }
      else
      {
        increment[i].end = j;
        i_end_d_start = T;
      }
    }
    j++;
  }

  for(k = 0; k < 5; k++)
  {
    increment[k].length = increment[k].end - increment[k].start;
    decrement[k].length = decrement[k].end - decrement[k].start;
    if(increment[k].length > max_inc)
    {
      max_inc = increment[k].length;
      i_num = k;
    }
    if(decrement[k].length > max_dec)
    {
      max_dec = decrement[k].length;
      d_num = k;
    }
  }

  if(max_inc > max_dec)
  {
    printf("\nIncreasing order:\t");
    for(k=increment[i_num].start; k <= increment[i_num].end; k++)
    {
      printf("%d\t",numbers[k]);
    }
  }

  else if(max_inc < max_dec)
  {
    printf("\nDecreasing order:\t");
    for(k=decrement[i_num].start; k <= decrement[i_num].end; k++)
    {
      printf("%d\t",numbers[k]);
    }
  }

  else
  {
    printf("\nNo dominant sequence");
  }

}