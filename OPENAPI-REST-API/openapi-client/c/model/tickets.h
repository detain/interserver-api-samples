/*
 * tickets.h
 *
 * A listing of support tickets.
 */

#ifndef _tickets_H_
#define _tickets_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tickets_t tickets_t;

#include "tickets_count_array.h"
#include "tickets_row.h"



typedef struct tickets_t {
    char *ima; // string
    char *custid; // string
    char *view; // string
    int current_page; //numeric
    int limit; //numeric
    int sortcol; //numeric
    int sortdir; //numeric
    int rows_offset; //numeric
    list_t *tickets; //nonprimitive container
    int pages; //numeric
    int rows_total; //numeric
    int inbox_count; //numeric
    struct tickets_count_array_t *count_array; //model
    char *view_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} tickets_t;

__attribute__((deprecated)) tickets_t *tickets_create(
    char *ima,
    char *custid,
    char *view,
    int current_page,
    int limit,
    int sortcol,
    int sortdir,
    int rows_offset,
    list_t *tickets,
    int pages,
    int rows_total,
    int inbox_count,
    tickets_count_array_t *count_array,
    char *view_text
);

void tickets_free(tickets_t *tickets);

tickets_t *tickets_parseFromJSON(cJSON *ticketsJSON);

cJSON *tickets_convertToJSON(tickets_t *tickets);

#endif /* _tickets_H_ */

