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
    int *total_replies,
    char *lastactivity,
    char *departmenttitle,
    int *ticketid,
    char *can_close,
    any_type_t *attachments,
    char *status_text,
    int *checked
    ) {
    tickets_row_t *tickets_row_local_var = malloc(sizeof(tickets_row_t));
    if (!tickets_row_local_var) {
        return NULL;
    }
    memset(tickets_row_local_var, 0, sizeof(tickets_row_t));
    tickets_row_local_var->_library_owned = 1;
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
    return tickets_row_local_var;
}

__attribute__((deprecated)) tickets_row_t *tickets_row_create(
    char *title,
    char *ticketmaskid,
    char *lastreplier,
    char *status,
    char *priority,
    int *total_replies,
    char *lastactivity,
    char *departmenttitle,
    int *ticketid,
    char *can_close,
    any_type_t *attachments,
    char *status_text,
    int *checked
    ) {
    int *total_replies_copy = NULL;
    if (total_replies) {
        total_replies_copy = malloc(sizeof(int));
        if (total_replies_copy) *total_replies_copy = *total_replies;
    }
    int *ticketid_copy = NULL;
    if (ticketid) {
        ticketid_copy = malloc(sizeof(int));
        if (ticketid_copy) *ticketid_copy = *ticketid;
    }
    int *checked_copy = NULL;
    if (checked) {
        checked_copy = malloc(sizeof(int));
        if (checked_copy) *checked_copy = *checked;
    }
    tickets_row_t *result = tickets_row_create_internal (
        title,
        ticketmaskid,
        lastreplier,
        status,
        priority,
        total_replies_copy,
        lastactivity,
        departmenttitle,
        ticketid_copy,
        can_close,
        attachments,
        status_text,
        checked_copy
        );
    if (!result) {
        free(total_replies_copy);
        free(ticketid_copy);
        free(checked_copy);
    }
    return result;
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
    if (tickets_row->total_replies) {
        free(tickets_row->total_replies);
        tickets_row->total_replies = NULL;
    }
    if (tickets_row->lastactivity) {
        free(tickets_row->lastactivity);
        tickets_row->lastactivity = NULL;
    }
    if (tickets_row->departmenttitle) {
        free(tickets_row->departmenttitle);
        tickets_row->departmenttitle = NULL;
    }
    if (tickets_row->ticketid) {
        free(tickets_row->ticketid);
        tickets_row->ticketid = NULL;
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
    if (tickets_row->checked) {
        free(tickets_row->checked);
        tickets_row->checked = NULL;
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
    if(cJSON_AddNumberToObject(item, "total_replies", *tickets_row->total_replies) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "ticketid", *tickets_row->ticketid) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "checked", *tickets_row->checked) == NULL) {
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

    char *title_local_str = NULL;

    char *ticketmaskid_local_str = NULL;

    char *lastreplier_local_str = NULL;

    char *status_local_str = NULL;

    char *priority_local_str = NULL;

    // define the local variable for tickets_row->total_replies
    int *total_replies_local_var = NULL;

    char *lastactivity_local_str = NULL;

    char *departmenttitle_local_str = NULL;

    // define the local variable for tickets_row->ticketid
    int *ticketid_local_var = NULL;

    char *can_close_local_str = NULL;

    // define the local variable for tickets_row->attachments
    _t *attachments_local_nonprim = NULL;

    char *status_text_local_str = NULL;

    // define the local variable for tickets_row->checked
    int *checked_local_var = NULL;

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
    total_replies_local_var = malloc(sizeof(int));
    if(!total_replies_local_var)
    {
        goto end;
    }
    *total_replies_local_var = total_replies->valuedouble;

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
    ticketid_local_var = malloc(sizeof(int));
    if(!ticketid_local_var)
    {
        goto end;
    }
    *ticketid_local_var = ticketid->valuedouble;

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
    checked_local_var = malloc(sizeof(int));
    if(!checked_local_var)
    {
        goto end;
    }
    *checked_local_var = checked->valueint;


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);
    if (ticketmaskid && !cJSON_IsNull(ticketmaskid)) ticketmaskid_local_str = strdup(ticketmaskid->valuestring);
    if (lastreplier && !cJSON_IsNull(lastreplier)) lastreplier_local_str = strdup(lastreplier->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (priority && !cJSON_IsNull(priority)) priority_local_str = strdup(priority->valuestring);
    if (lastactivity && !cJSON_IsNull(lastactivity)) lastactivity_local_str = strdup(lastactivity->valuestring);
    if (departmenttitle && !cJSON_IsNull(departmenttitle)) departmenttitle_local_str = strdup(departmenttitle->valuestring);
    if (can_close && !cJSON_IsNull(can_close)) can_close_local_str = strdup(can_close->valuestring);
    if (status_text && !cJSON_IsNull(status_text)) status_text_local_str = strdup(status_text->valuestring);

    tickets_row_local_var = tickets_row_create_internal (
        title_local_str,
        ticketmaskid_local_str,
        lastreplier_local_str,
        status_local_str,
        priority_local_str,
        total_replies_local_var,
        lastactivity_local_str,
        departmenttitle_local_str,
        ticketid_local_var,
        can_close_local_str,
        attachments_local_nonprim,
        status_text_local_str,
        checked_local_var
        );

    if (!tickets_row_local_var) {
        goto end;
    }

    return tickets_row_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (ticketmaskid_local_str) {
        free(ticketmaskid_local_str);
        ticketmaskid_local_str = NULL;
    }
    if (lastreplier_local_str) {
        free(lastreplier_local_str);
        lastreplier_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (priority_local_str) {
        free(priority_local_str);
        priority_local_str = NULL;
    }
    if (total_replies_local_var) {
        free(total_replies_local_var);
        total_replies_local_var = NULL;
    }
    if (lastactivity_local_str) {
        free(lastactivity_local_str);
        lastactivity_local_str = NULL;
    }
    if (departmenttitle_local_str) {
        free(departmenttitle_local_str);
        departmenttitle_local_str = NULL;
    }
    if (ticketid_local_var) {
        free(ticketid_local_var);
        ticketid_local_var = NULL;
    }
    if (can_close_local_str) {
        free(can_close_local_str);
        can_close_local_str = NULL;
    }
    if (attachments_local_nonprim) {
        _free(attachments_local_nonprim);
        attachments_local_nonprim = NULL;
    }
    if (status_text_local_str) {
        free(status_text_local_str);
        status_text_local_str = NULL;
    }
    if (checked_local_var) {
        free(checked_local_var);
        checked_local_var = NULL;
    }
    return NULL;

}
