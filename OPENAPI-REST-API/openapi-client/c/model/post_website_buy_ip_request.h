/*
 * post_website_buy_ip_request.h
 *
 * 
 */

#ifndef _post_website_buy_ip_request_H_
#define _post_website_buy_ip_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_website_buy_ip_request_t post_website_buy_ip_request_t;




typedef struct post_website_buy_ip_request_t {
    list_t* ips; //map

    int _library_owned; // Is the library responsible for freeing this object?
} post_website_buy_ip_request_t;

__attribute__((deprecated)) post_website_buy_ip_request_t *post_website_buy_ip_request_create(
    list_t* ips
);

void post_website_buy_ip_request_free(post_website_buy_ip_request_t *post_website_buy_ip_request);

post_website_buy_ip_request_t *post_website_buy_ip_request_parseFromJSON(cJSON *post_website_buy_ip_requestJSON);

cJSON *post_website_buy_ip_request_convertToJSON(post_website_buy_ip_request_t *post_website_buy_ip_request);

#endif /* _post_website_buy_ip_request_H_ */

