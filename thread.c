/*#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *myThreadFun(void *vargp)
{
sleep(3000);
printf("printing thread1\n");
return NULL;
}
void *myThreadFun1(void *vargp1)
{
sleep(3000);
printf("printing thread 2");
return NULL;
}


int main()
{
pthread_t thread_id,thread_id1;
printf("before thread");
pthread_create(&thread_id,NULL,myThreadFun,NULL);
pthread_join(thread_id,NULL);
printf("after thread1");
pthread_create(&thread_id1,NULL,myThreadFun1,NULL);
//pthread_join(thread_id1,NULL);
printf("after thread2");
pthread_exit(NULL); 
exit(0);
}

*/

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  
// Let us create a global variable to change it in threads 
int g = 0; 
  
// The function to be executed by all threads 
void *myThreadFun(void *vargp) 
{ 

sleep(3000);
    // Store the value argument passed to this thread 
    int *myid = (int *)vargp; 
  
    // Let us create a static variable to observe its changes 
    static int s = 0; 
  
    // Change static and global variables 
    ++s; ++g; 
  
    // Print the argument, static and global variables 
    printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g); 
} 
  
int main() 
{ 
    int i; 
    pthread_t tid; 
  
    // Let us create three threads 
    for (i = 0; i < 10; i++) 
        pthread_create(&tid, NULL, myThreadFun, (void *)&tid); 
  
    pthread_exit(NULL); 
    return 0; 
} 


