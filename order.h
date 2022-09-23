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

int numbers[10] = {1, 2, 3, 4, 5, 6, 8, 4, 3, 2};

void getnumbers(void);

void identify(void);