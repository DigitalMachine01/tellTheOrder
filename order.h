#include<stdio.h>
#include<stdlib.h>

#define Bigger(a,b) ((a)>(b)?(a):(b))

typedef struct trend_t{
  int start;
  int end;
  int length;
}trend;

typedef enum
{
  T,
  F,
}Bool;

int numbers[10];

void getnumbers(void);

void segregate(int *);