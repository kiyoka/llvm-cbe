#include <stdlib.h>

int diralphasort(const void *va, const void *vb);
void funcbody(void);
int handler(void (*refresh_func)(void));

//int  (*func1)(const void *va, const void *vb) = NULL;

int main()
{
  char **filelist = NULL;
  size_t filelist_len = 0;
  qsort(filelist, filelist_len, sizeof(char *), diralphasort);
  handler(funcbody);
  
  return 0;
}

void funcbody(void)
{
}

int handler(void (*refresh_func)(void))
{
  return 0;
}
    
int diralphasort(const void *va, const void *vb)
{
  return 0;
}
