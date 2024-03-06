#include <stdio.h>
#include <stdlib.h> // for exit()
#include <unistd.h> // for fork(),
 
int main()
{
    // Creando el proceso Hi jo
    int pid = fork();
    printf("ld del proceso: %d\n", pid);
 
    if (pid > 0) // True para el proceso Padre
        sleep(20);
    else if (pid == 0) // True para el proceso Hi jo
    {
        printf("\nproceso Zombie creado con exito! " ) ;
        printf("\nEstarä activo durante 20 segundos\n");
        exit (0);
    }
    else // True cuando el proceso Hi jo no se pudo crear
    printf("\nLo sentimos! El proceso Hi jo no pudo ser creado...");
    return 0;
}