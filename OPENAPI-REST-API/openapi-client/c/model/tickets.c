#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tickets.h"



static tickets_t *tickets_create_internal(
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
    ) {
    tickets_t *tickets_local_var = malloc(sizeof(tickets_t));
    if (!tickets_local_var) {
        return NULL;
    }
    tickets_local_var->ima = ima;
    tickets_local_var->custid = custid;
    tickets_local_var->view = view;
    tickets_local_var->current_page = current_page;
    tickets_local_var->limit = limit;
    tickets_local_var->sortcol = sortcol;
    tickets_local_var->sortdir = sortdir;
    tickets_local_var->rows_offset = rows_offset;
    tickets_local_var->tickets = tickets;
    tickets_local_var->pages = pages;
    tickets_local_var->rows_total = rows_total;
    tickets_local_var->inbox_count = inbox_count;
    tickets_local_var->count_array = count_array;
    tickets_local_var->view_text = view_text;

    tickets_local_var->_library_owned = 1;
    return tickets_local_var;
}

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
    ) {
    return tickets_create_internal (
        ima,
        custid,
        view,
        current_page,
        limit,
        sortcol,
        sortdir,
        rows_offset,
        tickets,
        pages,
        rows_total,
        inbox_count,
        count_array,
        view_text
        );
}

void tickets_free(tickets_t *tickets) {
    if(NULL == tickets){
        return ;
    }
    if(tickets->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tickets_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tickets->ima) {
        free(tickets->ima);
        tickets->ima = NULL;
    }
    if (tickets->custid) {
        free(tickets->custid);
        tickets->custid = NULL;
    }
    if (tickets->view) {
        free(tickets->view);
        tickets->view = NULL;
    }
    if (tickets->tickets) {
        list_ForEach(listEntry, tickets->tickets) {
            tickets_row_free(listEntry->data);
        }
        list_freeList(tickets->tickets);
        tickets->tickets = NULL;
    }
    if (tickets->count_array) {
        tickets_count_array_free(tickets->count_array);
        tickets->count_array = NULL;
    }
    if (tickets->view_text) {
        free(tickets->view_text);
        tickets->view_text = NULL;
    }
    free(tickets);
}

cJSON *tickets_convertToJSON(tickets_t *tickets) {
    cJSON *item = cJSON_CreateObject();

    // tickets->ima
    if (!tickets->ima) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ima", tickets->ima) == NULL) {
    goto fail; //String
    }


    // tickets->custid
    if (!tickets->custid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custid", tickets->custid) == NULL) {
    goto fail; //String
    }


    // tickets->view
    if (!tickets->view) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "view", tickets->view) == NULL) {
    goto fail; //String
    }


    // tickets->current_page
    if (!tickets->current_page) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "currentPage", tickets->current_page) == NULL) {
    goto fail; //Numeric
    }


    // tickets->limit
    if (!tickets->limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "limit", tickets->limit) == NULL) {
    goto fail; //Numeric
    }


    // tickets->sortcol
    if (!tickets->sortcol) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sortcol", tickets->sortcol) == NULL) {
    goto fail; //Numeric
    }


    // tickets->sortdir
    if (!tickets->sortdir) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sortdir", tickets->sortdir) == NULL) {
    goto fail; //Numeric
    }


    // tickets->rows_offset
    if (!tickets->rows_offset) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "rowsOffset", tickets->rows_offset) == NULL) {
    goto fail; //Numeric
    }


    // tickets->tickets
    if (!tickets->tickets) {
        goto fail;
    }
    cJSON *tickets = cJSON_AddArrayToObject(item, "tickets");
    if(tickets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ticketsListEntry;
    if (tickets->tickets) {
    list_ForEach(ticketsListEntry, tickets->tickets) {
    cJSON *itemLocal = tickets_row_convertToJSON(ticketsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tickets, itemLocal);
    }
    }


    // tickets->pages
    if (!tickets->pages) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pages", tickets->pages) == NULL) {
    goto fail; //Numeric
    }


    // tickets->rows_total
    if (!tickets->rows_total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "rowsTotal", tickets->rows_total) == NULL) {
    goto fail; //Numeric
    }


    // tickets->inbox_count
    if (!tickets->inbox_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "inboxCount", tickets->inbox_count) == NULL) {
    goto fail; //Numeric
    }


    // tickets->count_array
    if (!tickets->count_array) {
        goto fail;
    }
    cJSON *count_array_local_JSON = tickets_count_array_convertToJSON(tickets->count_array);
    if(count_array_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "countArray", count_array_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // tickets->view_text
    if (!tickets->view_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "viewText", tickets->view_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tickets_t *tickets_parseFromJSON(cJSON *ticketsJSON){

    tickets_t *tickets_local_var = NULL;

    // define the local list for tickets->tickets
    list_t *ticketsList = NULL;

    // define the local variable for tickets->count_array
    tickets_count_array_t *count_array_local_nonprim = NULL;

    // tickets->ima
    cJSON *ima = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "ima");
    if (cJSON_IsNull(ima)) {
        ima = NULL;
    }
    if (!ima) {
        goto end;
    }

    
    if(!cJSON_IsString(ima))
    {
    goto end; //String
    }

    // tickets->custid
    cJSON *custid = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "custid");
    if (cJSON_IsNull(custid)) {
        custid = NULL;
    }
    if (!custid) {
        goto end;
    }

    
    if(!cJSON_IsString(custid))
    {
    goto end; //String
    }

    // tickets->view
    cJSON *view = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "view");
    if (cJSON_IsNull(view)) {
        view = NULL;
    }
    if (!view) {
        goto end;
    }

    
    if(!cJSON_IsString(view))
    {
    goto end; //String
    }

    // tickets->current_page
    cJSON *current_page = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "currentPage");
    if (cJSON_IsNull(current_page)) {
        current_page = NULL;
    }
    if (!current_page) {
        goto end;
    }

    
    if(!cJSON_IsNumber(current_page))
    {
    goto end; //Numeric
    }

    // tickets->limit
    cJSON *limit = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "limit");
    if (cJSON_IsNull(limit)) {
        limit = NULL;
    }
    if (!limit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(limit))
    {
    goto end; //Numeric
    }

    // tickets->sortcol
    cJSON *sortcol = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "sortcol");
    if (cJSON_IsNull(sortcol)) {
        sortcol = NULL;
    }
    if (!sortcol) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sortcol))
    {
    goto end; //Numeric
    }

    // tickets->sortdir
    cJSON *sortdir = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "sortdir");
    if (cJSON_IsNull(sortdir)) {
        sortdir = NULL;
    }
    if (!sortdir) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sortdir))
    {
    goto end; //Numeric
    }

    // tickets->rows_offset
    cJSON *rows_offset = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "rowsOffset");
    if (cJSON_IsNull(rows_offset)) {
        rows_offset = NULL;
    }
    if (!rows_offset) {
        goto end;
    }

    
    if(!cJSON_IsNumber(rows_offset))
    {
    goto end; //Numeric
    }

    // tickets->tickets
    cJSON *tickets = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "tickets");
    if (cJSON_IsNull(tickets)) {
        tickets = NULL;
    }
    if (!tickets) {
        goto end;
    }

    
    cJSON *tickets_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tickets)){
        goto end; //nonprimitive container
    }

    ticketsList = list_createList();

    cJSON_ArrayForEach(tickets_local_nonprimitive,tickets )
    {
        if(!cJSON_IsObject(tickets_local_nonprimitive)){
            goto end;
        }
        tickets_row_t *ticketsItem = tickets_row_parseFromJSON(tickets_local_nonprimitive);

        list_addElement(ticketsList, ticketsItem);
    }

    // tickets->pages
    cJSON *pages = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "pages");
    if (cJSON_IsNull(pages)) {
        pages = NULL;
    }
    if (!pages) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pages))
    {
    goto end; //Numeric
    }

    // tickets->rows_total
    cJSON *rows_total = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "rowsTotal");
    if (cJSON_IsNull(rows_total)) {
        rows_total = NULL;
    }
    if (!rows_total) {
        goto end;
    }

    
    if(!cJSON_IsNumber(rows_total))
    {
    goto end; //Numeric
    }

    // tickets->inbox_count
    cJSON *inbox_count = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "inboxCount");
    if (cJSON_IsNull(inbox_count)) {
        inbox_count = NULL;
    }
    if (!inbox_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(inbox_count))
    {
    goto end; //Numeric
    }

    // tickets->count_array
    cJSON *count_array = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "countArray");
    if (cJSON_IsNull(count_array)) {
        count_array = NULL;
    }
    if (!count_array) {
        goto end;
    }

    
    count_array_local_nonprim = tickets_count_array_parseFromJSON(count_array); //nonprimitive

    // tickets->view_text
    cJSON *view_text = cJSON_GetObjectItemCaseSensitive(ticketsJSON, "viewText");
    if (cJSON_IsNull(view_text)) {
        view_text = NULL;
    }
    if (!view_text) {
        goto end;
    }

    
    if(!cJSON_IsString(view_text))
    {
    goto end; //String
    }


    tickets_local_var = tickets_create_internal (
        strdup(ima->valuestring),
        strdup(custid->valuestring),
        strdup(view->valuestring),
        current_page->valuedouble,
        limit->valuedouble,
        sortcol->valuedouble,
        sortdir->valuedouble,
        rows_offset->valuedouble,
        ticketsList,
        pages->valuedouble,
        rows_total->valuedouble,
        inbox_count->valuedouble,
        count_array_local_nonprim,
        strdup(view_text->valuestring)
        );

    return tickets_local_var;
end:
    if (ticketsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ticketsList) {
            tickets_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ticketsList);
        ticketsList = NULL;
    }
    if (count_array_local_nonprim) {
        tickets_count_array_free(count_array_local_nonprim);
        count_array_local_nonprim = NULL;
    }
    return NULL;

}
