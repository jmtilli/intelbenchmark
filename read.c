#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char ch;
  int i;
  for (i = 0; i < 100*1000*1000; i++)
  {
    if (read(500, &ch, 1) >= 0)
    {
      abort();
    }
  }
  return 0;
}
