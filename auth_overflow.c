#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check_authentication(char *password){
	int auth_flag = 0;		//lower memory address than password_buffer
	char password_buffer[16];		//overflowing this buffer allows us to *write* 
							// over auth_flag
	strcpy(password_buffer, password);

	if(strcmp(password_buffer, "brillig") == 0)
		auth_flag =1;
	if(strcmp(password_buffer, "outgrabe") == 0)
		auth_flag =1;
	return auth_flag;
}

int main(int argc, char*argv[]){
	if(argc < 2){
		printf("Usage: %s <password>\n", argv[0]);
		exit(0);
	}
	if(check_authentication(argv[1])){
			printf("\n=========================\n");
			printf("    ACCESS GRANTED.\n");
			printf("===========================\n");
	} else{
	  printf("\nAccess Denied.\n");
	}
}
