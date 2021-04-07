#include "Person.h"
#include <string.h>
char _person_name[30] = {'\0'};
char* name(void) {
    return _person_name;
}
 
void _set_name(char* name) {
   strcpy(_person_name, name);
}
 
void set_name(char* name) {
    if (name == NULL) {
        _set_name("");
    }
    else {
        _set_name(name);
    }
}