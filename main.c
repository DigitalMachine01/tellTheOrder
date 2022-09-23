#include "order.h"

int main(int argc, char const *argv[]) {

  getnumbers();

  segregate(numbers);
  return 0;
}

void getnumbers(void)
{
  int i = 0;
  printf("Please enter 10 integers: ");
  while(i<10)
  {
    scanf("%d",&numbers[i]);
    i++;
  }
}

void segregate(int *data)
{
  int j = 0, i = 0, d = 0;
  Bool decrement_trend_flag = F, increment_trend_flag = F;

  trend increment[5];
  trend decrement[5];

  while(j<9)
  {

    if(data[j]==Bigger(data[j],data[j+1]))
    {
      if(decrement_trend_flag == 'n')
      {
        decrement[i].start = j;
        decrement_trend_flag = 'y';
      }

      else
      {
        decrement[i].end = j;
        decrement_trend_flag = F;
        i++;
      }
    }
    else
    {
      if(increment_trend_flag == F)
      {
        increment[d].start = j;
        increment_trend_flag = T;
      }

      else
      {
        increment[i].end = j;
        increment_trend_flag = F;
        d++;
      }
    }
    j++;
  }
}
