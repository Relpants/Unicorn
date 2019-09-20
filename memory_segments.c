#include <stdio.h>
#include <stdlib.h>

int global_var;

int global_initialized_var = 5;

void function() { // Demo functiono.
	int stack_var; // Notice this variable has the same name as the one in main().

	printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}

int main() {
	int stack_var; // same name as the variable in function()
	static int static_initialized_var = 5;
	static int static_var;
	int *heap_var_ptr;

	heap_var_ptr = (int *)malloc(4);

	// These variables are in the data segment.
	printf("global_intialized_var is at address 0x%08x\n", &global_initialized_var);
	printf("static_intialized_var is at address 0x%08x\n\n", &static_initialized_var);

	
	printf("static_var is at address 0x%08x\n", &static_var);
	printf("global_var is at address 0x%08x\n\n", &global_var);

	//This variable is in the heap segment.
	printf("heap_var is at address 0x%08x\n\n", &heap_var_ptr);

	
	// These variables are in the stack segment.
	printf("static_var is at address 0x%08x\n", &stack_var);
	function();

}	
	
	
	
	
	
	
