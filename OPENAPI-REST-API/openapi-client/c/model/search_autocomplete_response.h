/*
 * search_autocomplete_response.h
 *
 * Autocomplete search results for the authenticated account.
 */

#ifndef _search_autocomplete_response_H_
#define _search_autocomplete_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct search_autocomplete_response_t search_autocomplete_response_t;

#include "object.h"



typedef struct search_autocomplete_response_t {

    int _library_owned; // Is the library responsible for freeing this object?
} search_autocomplete_response_t;

__attribute__((deprecated)) search_autocomplete_response_t *search_autocomplete_response_create(
);

void search_autocomplete_response_free(search_autocomplete_response_t *search_autocomplete_response);

search_autocomplete_response_t *search_autocomplete_response_parseFromJSON(cJSON *search_autocomplete_responseJSON);

cJSON *search_autocomplete_response_convertToJSON(search_autocomplete_response_t *search_autocomplete_response);

#endif /* _search_autocomplete_response_H_ */

