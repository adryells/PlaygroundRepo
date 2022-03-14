#include <stdio.h>

struct noArv {
 char info;
 struct noArv* left;
 struct noArv* right;
};

typedef struct noArv NoArv;

NoArv* arv_empty (void)
{
 return NULL;
}


void arv_show (NoArv* a)
{
 if (!arv_empty()){
 printf("%c ",a->info);
 arv_show(a->left);
 arv_show(a->right);
 }
}


NoArv* arv_build (char c, NoArv* left, NoArv* right)
{
 NoArv* p=(NoArv*)malloc(sizeof(NoArv));
 if(p==NULL) exit(1);
 p->info = c;
 p->left = left;
 p->right = right;
 return p;
}


int main(void) {
  printf("Hello World\n");
  return 0;
}
