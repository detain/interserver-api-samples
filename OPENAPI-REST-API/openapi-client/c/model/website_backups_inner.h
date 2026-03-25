/*
 * website_backups_inner.h
 *
 * 
 */

#ifndef _website_backups_inner_H_
#define _website_backups_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_backups_inner_t website_backups_inner_t;




typedef struct website_backups_inner_t {
    char *name; // string
    int *size; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} website_backups_inner_t;

__attribute__((deprecated)) website_backups_inner_t *website_backups_inner_create(
    char *name,
    int *size
);

void website_backups_inner_free(website_backups_inner_t *website_backups_inner);

website_backups_inner_t *website_backups_inner_parseFromJSON(cJSON *website_backups_innerJSON);

cJSON *website_backups_inner_convertToJSON(website_backups_inner_t *website_backups_inner);

#endif /* _website_backups_inner_H_ */

