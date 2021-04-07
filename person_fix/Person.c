#include "Person.h"
#include <string.h>
// Add static to avoid export variable
static char _person_name[30] = {'\0'};
char* name(void) {
    return _person_name;
}
 
// Add static to avoid export function
static void _set_name(char* name) {
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