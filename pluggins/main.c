// file main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <dlfcn.h>
#include "lib/source/libfunction.h"


int main( int argc , char* argv[] ) {
    // handle for dynamic loading functions
    void *handle;

    // function pointer for the library's double_me() function
    void (*hello_plug)(void);

    // open our library ..hopefully
    if ( (handle = dlopen("lib/libfunction.so", RTLD_LAZY)) == NULL) {
        perror("dlopen : ");
        exit(EXIT_FAILURE);
    }

    // try to extract "double_me" symbol from the library
    hello_plug = dlsym(handle, "hello_plug");
    if (dlerror() != NULL) {
	dlclose(handle);
        exit(EXIT_FAILURE);
    }

    if ( argc>1 ){
      if ( !strcmp( argv[1], "hello" ) ){
          hello_plug();
      }
    }

    dlclose(handle);

    exit(EXIT_SUCCESS);
}
