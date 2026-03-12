/*
 * home.h
 *
 * 
 */

#ifndef _home_H_
#define _home_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_t home_t;

#include "home_details.h"
#include "home_services.h"
#include "home_ticket_status.h"
#include "home_ticket_status_view.h"



typedef struct home_t {
    char *last_login_ip; // string
    char *last_login; // string
    char *currency; // string
    char *amount; // string
    int invoice_list; //numeric
    char *balance; // string
    char *full_name; // string
    char *email; // string
    list_t *tickets; //primitive container
    struct home_ticket_status_t *ticket_status; //model
    struct home_ticket_status_view_t *ticket_status_view; //model
    struct home_details_t *details; //model
    struct home_services_t *services; //model
    char *affiliate_amount; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_t;

__attribute__((deprecated)) home_t *home_create(
    char *last_login_ip,
    char *last_login,
    char *currency,
    char *amount,
    int invoice_list,
    char *balance,
    char *full_name,
    char *email,
    list_t *tickets,
    home_ticket_status_t *ticket_status,
    home_ticket_status_view_t *ticket_status_view,
    home_details_t *details,
    home_services_t *services,
    char *affiliate_amount
);

void home_free(home_t *home);

home_t *home_parseFromJSON(cJSON *homeJSON);

cJSON *home_convertToJSON(home_t *home);

#endif /* _home_H_ */

