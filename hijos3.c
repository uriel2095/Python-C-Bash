#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int procesos(int nProc)
{
        int i;
        for(i=1;i<=nProc;i++)
        if(fork()==0)
                return i;
                return 0;
}



int main()
{
        int pid;
	int pos;
        
        	
	  
        
         printf("Ingresa el numero de padres \n");
	 scanf("%d",&pos);
	 pid = procesos(pos);
         
	
	 if(pid == 0){
	 printf("Soy el padre  %d   con PID:%d \n",pid,getpid());exit(0);
         }else{
	 printf("Soy el hijo  %d   con PID:%d \n",pid,getpid());exit(0);
	}
}
