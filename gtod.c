#include <sys/time.h>
#include <stddef.h>

int main(int argc, char **argv)
{
  int i;
  struct timeval tv;
  for (i = 0; i < 100*1000*1000; i++)
  {
    gettimeofday(&tv, NULL);
  }
  return 0;
}
