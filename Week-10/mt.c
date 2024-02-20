#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void * workerThreadFUnc(void * tid){
    long * myID = (long *) tid;
    printf("HELLO WORLD! THIS IS THREAD %ld", myID);

}
int main () {

    pthread_t tid0;
    pthread_create(&tid0, NULL, wprkerThreadFunc, (void *)&tid0);

    pthread_exit(NULL);
    return 0;
}