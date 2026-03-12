/*
 * post_website_migration_request.h
 *
 * 
 */

#ifndef _post_website_migration_request_H_
#define _post_website_migration_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_website_migration_request_t post_website_migration_request_t;




typedef struct post_website_migration_request_t {
    char *cust_portal; // string
    char *reg_email; // string
    char *password; // string
    char *ctrl_panel; // string
    char *ftp_username; // string
    char *ftp_password; // string
    char *site_busy_mig; // string
    char *spl_req_mig; // string
    char *domain_reg; // string
    char *data_mig; // string
    char *domain_reg_portal; // string
    char *domain_reg_email; // string
    char *domain_reg_password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} post_website_migration_request_t;

__attribute__((deprecated)) post_website_migration_request_t *post_website_migration_request_create(
    char *cust_portal,
    char *reg_email,
    char *password,
    char *ctrl_panel,
    char *ftp_username,
    char *ftp_password,
    char *site_busy_mig,
    char *spl_req_mig,
    char *domain_reg,
    char *data_mig,
    char *domain_reg_portal,
    char *domain_reg_email,
    char *domain_reg_password
);

void post_website_migration_request_free(post_website_migration_request_t *post_website_migration_request);

post_website_migration_request_t *post_website_migration_request_parseFromJSON(cJSON *post_website_migration_requestJSON);

cJSON *post_website_migration_request_convertToJSON(post_website_migration_request_t *post_website_migration_request);

#endif /* _post_website_migration_request_H_ */

