#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include "mfile.h"

int main(){

  if (mfifo_unlink("/mfifo")== -1)
    	perror("mfifo_unlink echoué ");
    else 
    	printf("mfifo_unlink reussi");

return 0;
}
