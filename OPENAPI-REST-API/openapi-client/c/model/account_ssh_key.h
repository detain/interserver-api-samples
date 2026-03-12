/*
 * account_ssh_key.h
 *
 * SSH Keys
 */

#ifndef _account_ssh_key_H_
#define _account_ssh_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_ssh_key_t account_ssh_key_t;




typedef struct account_ssh_key_t {
    char *ssh_key; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_ssh_key_t;

__attribute__((deprecated)) account_ssh_key_t *account_ssh_key_create(
    char *ssh_key
);

void account_ssh_key_free(account_ssh_key_t *account_ssh_key);

account_ssh_key_t *account_ssh_key_parseFromJSON(cJSON *account_ssh_keyJSON);

cJSON *account_ssh_key_convertToJSON(account_ssh_key_t *account_ssh_key);

#endif /* _account_ssh_key_H_ */

