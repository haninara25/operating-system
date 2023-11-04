#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h> 

void *myThreadFun(void *vargp) 
{ 
	sleep(1); 
	printf("Printing GeeksQuiz from Thread \n"); 
	return NULL; 
} 

void main() 
{ 
	pthread_t thread_id; 
	printf("Before Thread\n"); 
	pthread_create(&thread_id, NULL, myThreadFun, NULL); 
	pthread_join(thread_id, NULL); 
	printf("after thread\n");

}
