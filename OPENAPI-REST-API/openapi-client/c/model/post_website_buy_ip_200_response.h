/*
 * post_website_buy_ip_200_response.h
 *
 * 
 */

#ifndef _post_website_buy_ip_200_response_H_
#define _post_website_buy_ip_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_website_buy_ip_200_response_t post_website_buy_ip_200_response_t;




typedef struct post_website_buy_ip_200_response_t {
    char *message; // string
    int success; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} post_website_buy_ip_200_response_t;

__attribute__((deprecated)) post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_create(
    char *message,
    int success
);

void post_website_buy_ip_200_response_free(post_website_buy_ip_200_response_t *post_website_buy_ip_200_response);

post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_parseFromJSON(cJSON *post_website_buy_ip_200_responseJSON);

cJSON *post_website_buy_ip_200_response_convertToJSON(post_website_buy_ip_200_response_t *post_website_buy_ip_200_response);

#endif /* _post_website_buy_ip_200_response_H_ */

