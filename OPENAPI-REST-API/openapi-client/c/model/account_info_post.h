/*
 * account_info_post.h
 *
 * Request to update account information.
 */

#ifndef _account_info_post_H_
#define _account_info_post_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_post_t account_info_post_t;




typedef struct account_info_post_t {
    char *name; // string
    char *address; // string
    char *city; // string
    char *state; // string
    char *zip; // string
    char *country; // string
    char *phone; // string
    char *company; // string
    char *address2; // string
    char *locale; // string
    char *email_invoices; // string
    char *email_abuse; // string
    int *disable_reset; //boolean
    int *disable_reinstall; //boolean
    int *disable_server_notifications; //boolean
    int *disable_email_notifications; //boolean
    char *gstin; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_post_t;

__attribute__((deprecated)) account_info_post_t *account_info_post_create(
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *company,
    char *address2,
    char *locale,
    char *email_invoices,
    char *email_abuse,
    int *disable_reset,
    int *disable_reinstall,
    int *disable_server_notifications,
    int *disable_email_notifications,
    char *gstin
);

void account_info_post_free(account_info_post_t *account_info_post);

account_info_post_t *account_info_post_parseFromJSON(cJSON *account_info_postJSON);

cJSON *account_info_post_convertToJSON(account_info_post_t *account_info_post);

#endif /* _account_info_post_H_ */

