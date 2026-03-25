/*
 * mail_cancel_200_response.h
 *
 * 
 */

#ifndef _mail_cancel_200_response_H_
#define _mail_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_cancel_200_response_t mail_cancel_200_response_t;




typedef struct mail_cancel_200_response_t {
    int *success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_cancel_200_response_t;

__attribute__((deprecated)) mail_cancel_200_response_t *mail_cancel_200_response_create(
    int *success,
    char *text
);

void mail_cancel_200_response_free(mail_cancel_200_response_t *mail_cancel_200_response);

mail_cancel_200_response_t *mail_cancel_200_response_parseFromJSON(cJSON *mail_cancel_200_responseJSON);

cJSON *mail_cancel_200_response_convertToJSON(mail_cancel_200_response_t *mail_cancel_200_response);

#endif /* _mail_cancel_200_response_H_ */

