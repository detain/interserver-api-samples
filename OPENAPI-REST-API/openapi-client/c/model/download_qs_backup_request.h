/*
 * download_qs_backup_request.h
 *
 * 
 */

#ifndef _download_qs_backup_request_H_
#define _download_qs_backup_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct download_qs_backup_request_t download_qs_backup_request_t;




typedef struct download_qs_backup_request_t {
    char *file; // string

    int _library_owned; // Is the library responsible for freeing this object?
} download_qs_backup_request_t;

__attribute__((deprecated)) download_qs_backup_request_t *download_qs_backup_request_create(
    char *file
);

void download_qs_backup_request_free(download_qs_backup_request_t *download_qs_backup_request);

download_qs_backup_request_t *download_qs_backup_request_parseFromJSON(cJSON *download_qs_backup_requestJSON);

cJSON *download_qs_backup_request_convertToJSON(download_qs_backup_request_t *download_qs_backup_request);

#endif /* _download_qs_backup_request_H_ */

