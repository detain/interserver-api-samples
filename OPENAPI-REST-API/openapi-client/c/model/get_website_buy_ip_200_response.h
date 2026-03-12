/*
 * get_website_buy_ip_200_response.h
 *
 * 
 */

#ifndef _get_website_buy_ip_200_response_H_
#define _get_website_buy_ip_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_website_buy_ip_200_response_t get_website_buy_ip_200_response_t;




typedef struct get_website_buy_ip_200_response_t {
    list_t* ips; //map

    int _library_owned; // Is the library responsible for freeing this object?
} get_website_buy_ip_200_response_t;

__attribute__((deprecated)) get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_create(
    list_t* ips
);

void get_website_buy_ip_200_response_free(get_website_buy_ip_200_response_t *get_website_buy_ip_200_response);

get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_parseFromJSON(cJSON *get_website_buy_ip_200_responseJSON);

cJSON *get_website_buy_ip_200_response_convertToJSON(get_website_buy_ip_200_response_t *get_website_buy_ip_200_response);

#endif /* _get_website_buy_ip_200_response_H_ */

