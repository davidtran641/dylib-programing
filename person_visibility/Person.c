#include "Person.h"
#include <string.h>

// Symbolic name for visibility("default") attribute
#define EXPORT  __attribute__((visibility("default")))

char _person_name[30] = {'\0'};

EXPORT // Symbol to export
char* name(void) {
    return _person_name;
}


void _set_name(char* name) {
   strcpy(_person_name, name);
}
 
EXPORT // Symbol to export
void set_name(char* name) {
    if (name == NULL) {
        _set_name("");
    }
    else {
        _set_name(name);
    }
}