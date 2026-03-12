#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tickets_row.h"



static tickets_row_t *tickets_row_create_internal(
    char *title,
    char *ticketmaskid,
    char *lastreplier,
    char *status,
    char *priority,
    int total_replies,
    char *lastactivity,
    char *departmenttitle,
    int ticketid,
    char *can_close,
    any_type_t *attachments,
    char *status_text,
    int checked
    ) {
    tickets_row_t *tickets_row_local_var = malloc(sizeof(tickets_row_t));
    if (!tickets_row_local_var) {
        return NULL;
    }
    tickets_row_local_var->title = title;
    tickets_row_local_var->ticketmaskid = ticketmaskid;
    tickets_row_local_var->lastreplier = lastreplier;
    tickets_row_local_var->status = status;
    tickets_row_local_var->priority = priority;
    tickets_row_local_var->total_replies = total_replies;
    tickets_row_local_var->lastactivity = lastactivity;
    tickets_row_local_var->departmenttitle = departmenttitle;
    tickets_row_local_var->ticketid = ticketid;
    tickets_row_local_var->can_close = can_close;
    tickets_row_local_var->attachments = attachments;
    tickets_row_local_var->status_text = status_text;
    tickets_row_local_var->checked = checked;

    tickets_row_local_var->_library_owned = 1;
    return tickets_row_local_var;
}

__attribute__((deprecated)) tickets_row_t *tickets_row_create(
    char *title,
    char *ticketmaskid,
    char *lastreplier,
    char *status,
    char *priority,
    int total_replies,
    char *lastactivity,
    char *departmenttitle,
    int ticketid,
    char *can_close,
    any_type_t *attachments,
    char *status_text,
    int checked
    ) {
    return tickets_row_create_internal (
        title,
        ticketmaskid,
        lastreplier,
        status,
        priority,
        total_replies,
        lastactivity,
        departmenttitle,
        ticketid,
        can_close,
        attachments,
        status_text,
        checked
        );
}

void tickets_row_free(tickets_row_t *tickets_row) {
    if(NULL == tickets_row){
        return ;
    }
    if(tickets_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tickets_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tickets_row->title) {
        free(tickets_row->title);
        tickets_row->title = NULL;
    }
    if (tickets_row->ticketmaskid) {
        free(tickets_row->ticketmaskid);
        tickets_row->ticketmaskid = NULL;
    }
    if (tickets_row->lastreplier) {
        free(tickets_row->lastreplier);
        tickets_row->lastreplier = NULL;
    }
    if (tickets_row->status) {
        free(tickets_row->status);
        tickets_row->status = NULL;
    }
    if (tickets_row->priority) {
        free(tickets_row->priority);
        tickets_row->priority = NULL;
    }
    if (tickets_row->lastactivity) {
        free(tickets_row->lastactivity);
        tickets_row->lastactivity = NULL;
    }
    if (tickets_row->departmenttitle) {
        free(tickets_row->departmenttitle);
        tickets_row->departmenttitle = NULL;
    }
    if (tickets_row->can_close) {
        free(tickets_row->can_close);
        tickets_row->can_close = NULL;
    }
    if (tickets_row->attachments) {
        _free(tickets_row->attachments);
        tickets_row->attachments = NULL;
    }
    if (tickets_row->status_text) {
        free(tickets_row->status_text);
        tickets_row->status_text = NULL;
    }
    free(tickets_row);
}

cJSON *tickets_row_convertToJSON(tickets_row_t *tickets_row) {
    cJSON *item = cJSON_CreateObject();

    // tickets_row->title
    if (!tickets_row->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", tickets_row->title) == NULL) {
    goto fail; //String
    }


    // tickets_row->ticketmaskid
    if (!tickets_row->ticketmaskid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ticketmaskid", tickets_row->ticketmaskid) == NULL) {
    goto fail; //String
    }


    // tickets_row->lastreplier
    if (!tickets_row->lastreplier) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "lastreplier", tickets_row->lastreplier) == NULL) {
    goto fail; //String
    }


    // tickets_row->status
    if (!tickets_row->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", tickets_row->status) == NULL) {
    goto fail; //String
    }


    // tickets_row->priority
    if (!tickets_row->priority) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "priority", tickets_row->priority) == NULL) {
    goto fail; //String
    }


    // tickets_row->total_replies
    if (!tickets_row->total_replies) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_replies", tickets_row->total_replies) == NULL) {
    goto fail; //Numeric
    }


    // tickets_row->lastactivity
    if (!tickets_row->lastactivity) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "lastactivity", tickets_row->lastactivity) == NULL) {
    goto fail; //String
    }


    // tickets_row->departmenttitle
    if (!tickets_row->departmenttitle) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "departmenttitle", tickets_row->departmenttitle) == NULL) {
    goto fail; //String
    }


    // tickets_row->ticketid
    if (!tickets_row->ticketid) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "ticketid", tickets_row->ticketid) == NULL) {
    goto fail; //Numeric
    }


    // tickets_row->can_close
    if (!tickets_row->can_close) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "can_close", tickets_row->can_close) == NULL) {
    goto fail; //String
    }


    // tickets_row->attachments
    if (!tickets_row->attachments) {
        goto fail;
    }
    cJSON *attachments_local_JSON = _convertToJSON(tickets_row->attachments);
    if(attachments_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "attachments", attachments_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // tickets_row->status_text
    if (!tickets_row->status_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status_text", tickets_row->status_text) == NULL) {
    goto fail; //String
    }


    // tickets_row->checked
    if (!tickets_row->checked) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "checked", tickets_row->checked) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tickets_row_t *tickets_row_parseFromJSON(cJSON *tickets_rowJSON){

    tickets_row_t *tickets_row_local_var = NULL;

    // define the local variable for tickets_row->attachments
    _t *attachments_local_nonprim = NULL;

    // tickets_row->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // tickets_row->ticketmaskid
    cJSON *ticketmaskid = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "ticketmaskid");
    if (cJSON_IsNull(ticketmaskid)) {
        ticketmaskid = NULL;
    }
    if (!ticketmaskid) {
        goto end;
    }

    
    if(!cJSON_IsString(ticketmaskid))
    {
    goto end; //String
    }

    // tickets_row->lastreplier
    cJSON *lastreplier = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "lastreplier");
    if (cJSON_IsNull(lastreplier)) {
        lastreplier = NULL;
    }
    if (!lastreplier) {
        goto end;
    }

    
    if(!cJSON_IsString(lastreplier))
    {
    goto end; //String
    }

    // tickets_row->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // tickets_row->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "priority");
    if (cJSON_IsNull(priority)) {
        priority = NULL;
    }
    if (!priority) {
        goto end;
    }

    
    if(!cJSON_IsString(priority))
    {
    goto end; //String
    }

    // tickets_row->total_replies
    cJSON *total_replies = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "total_replies");
    if (cJSON_IsNull(total_replies)) {
        total_replies = NULL;
    }
    if (!total_replies) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_replies))
    {
    goto end; //Numeric
    }

    // tickets_row->lastactivity
    cJSON *lastactivity = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "lastactivity");
    if (cJSON_IsNull(lastactivity)) {
        lastactivity = NULL;
    }
    if (!lastactivity) {
        goto end;
    }

    
    if(!cJSON_IsString(lastactivity))
    {
    goto end; //String
    }

    // tickets_row->departmenttitle
    cJSON *departmenttitle = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "departmenttitle");
    if (cJSON_IsNull(departmenttitle)) {
        departmenttitle = NULL;
    }
    if (!departmenttitle) {
        goto end;
    }

    
    if(!cJSON_IsString(departmenttitle))
    {
    goto end; //String
    }

    // tickets_row->ticketid
    cJSON *ticketid = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "ticketid");
    if (cJSON_IsNull(ticketid)) {
        ticketid = NULL;
    }
    if (!ticketid) {
        goto end;
    }

    
    if(!cJSON_IsNumber(ticketid))
    {
    goto end; //Numeric
    }

    // tickets_row->can_close
    cJSON *can_close = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "can_close");
    if (cJSON_IsNull(can_close)) {
        can_close = NULL;
    }
    if (!can_close) {
        goto end;
    }

    
    if(!cJSON_IsString(can_close))
    {
    goto end; //String
    }

    // tickets_row->attachments
    cJSON *attachments = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "attachments");
    if (cJSON_IsNull(attachments)) {
        attachments = NULL;
    }
    if (!attachments) {
        goto end;
    }

    
    attachments_local_nonprim = _parseFromJSON(attachments); //custom

    // tickets_row->status_text
    cJSON *status_text = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "status_text");
    if (cJSON_IsNull(status_text)) {
        status_text = NULL;
    }
    if (!status_text) {
        goto end;
    }

    
    if(!cJSON_IsString(status_text))
    {
    goto end; //String
    }

    // tickets_row->checked
    cJSON *checked = cJSON_GetObjectItemCaseSensitive(tickets_rowJSON, "checked");
    if (cJSON_IsNull(checked)) {
        checked = NULL;
    }
    if (!checked) {
        goto end;
    }

    
    if(!cJSON_IsBool(checked))
    {
    goto end; //Bool
    }


    tickets_row_local_var = tickets_row_create_internal (
        strdup(title->valuestring),
        strdup(ticketmaskid->valuestring),
        strdup(lastreplier->valuestring),
        strdup(status->valuestring),
        strdup(priority->valuestring),
        total_replies->valuedouble,
        strdup(lastactivity->valuestring),
        strdup(departmenttitle->valuestring),
        ticketid->valuedouble,
        strdup(can_close->valuestring),
        attachments_local_nonprim,
        strdup(status_text->valuestring),
        checked->valueint
        );

    return tickets_row_local_var;
end:
    if (attachments_local_nonprim) {
        _free(attachments_local_nonprim);
        attachments_local_nonprim = NULL;
    }
    return NULL;

}
