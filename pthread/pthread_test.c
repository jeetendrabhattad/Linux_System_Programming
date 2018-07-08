#include <stdio.h>
#include <pthread.h> 
main()  {
  pthread_t f2_thread, f1_thread; 
  void *f2(), *f1();
  int i1,i2;
  i1 = 1;
  i2 = 2;
  pthread_create(&f1_thread,NULL,f1,&i1);
  pthread_create(&f2_thread,NULL,f2,&i2);
  pthread_join(f1_thread,NULL);
  pthread_join(f2_thread,NULL);
}
void *f1(int *x){
  int i;
  i = *x;
  sleep(1);
  printf("f1: %d",i);
  pthread_exit(0); 
}
void *f2(int *x){
  int i;
  i = *x;
  sleep(1);
  printf("f2: %d",i);
  pthread_exit(0); 
}

