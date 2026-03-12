/*
 * download_qs_backup_200_response.h
 *
 * 
 */

#ifndef _download_qs_backup_200_response_H_
#define _download_qs_backup_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct download_qs_backup_200_response_t download_qs_backup_200_response_t;




typedef struct download_qs_backup_200_response_t {
    char *text; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} download_qs_backup_200_response_t;

__attribute__((deprecated)) download_qs_backup_200_response_t *download_qs_backup_200_response_create(
    char *text,
    char *url
);

void download_qs_backup_200_response_free(download_qs_backup_200_response_t *download_qs_backup_200_response);

download_qs_backup_200_response_t *download_qs_backup_200_response_parseFromJSON(cJSON *download_qs_backup_200_responseJSON);

cJSON *download_qs_backup_200_response_convertToJSON(download_qs_backup_200_response_t *download_qs_backup_200_response);

#endif /* _download_qs_backup_200_response_H_ */

