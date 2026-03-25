#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_details.h"



static ticket_details_t *ticket_details_create_internal(
    int *ticketid,
    char *ticketmaskid,
    char *department,
    char *status,
    char *priority,
    char *subject,
    char *created_on,
    char *updated_on
    ) {
    ticket_details_t *ticket_details_local_var = malloc(sizeof(ticket_details_t));
    if (!ticket_details_local_var) {
        return NULL;
    }
    memset(ticket_details_local_var, 0, sizeof(ticket_details_t));
    ticket_details_local_var->_library_owned = 1;
    ticket_details_local_var->ticketid = ticketid;
    ticket_details_local_var->ticketmaskid = ticketmaskid;
    ticket_details_local_var->department = department;
    ticket_details_local_var->status = status;
    ticket_details_local_var->priority = priority;
    ticket_details_local_var->subject = subject;
    ticket_details_local_var->created_on = created_on;
    ticket_details_local_var->updated_on = updated_on;
    return ticket_details_local_var;
}

__attribute__((deprecated)) ticket_details_t *ticket_details_create(
    int *ticketid,
    char *ticketmaskid,
    char *department,
    char *status,
    char *priority,
    char *subject,
    char *created_on,
    char *updated_on
    ) {
    int *ticketid_copy = NULL;
    if (ticketid) {
        ticketid_copy = malloc(sizeof(int));
        if (ticketid_copy) *ticketid_copy = *ticketid;
    }
    ticket_details_t *result = ticket_details_create_internal (
        ticketid_copy,
        ticketmaskid,
        department,
        status,
        priority,
        subject,
        created_on,
        updated_on
        );
    if (!result) {
        free(ticketid_copy);
    }
    return result;
}

void ticket_details_free(ticket_details_t *ticket_details) {
    if(NULL == ticket_details){
        return ;
    }
    if(ticket_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ticket_details->ticketid) {
        free(ticket_details->ticketid);
        ticket_details->ticketid = NULL;
    }
    if (ticket_details->ticketmaskid) {
        free(ticket_details->ticketmaskid);
        ticket_details->ticketmaskid = NULL;
    }
    if (ticket_details->department) {
        free(ticket_details->department);
        ticket_details->department = NULL;
    }
    if (ticket_details->status) {
        free(ticket_details->status);
        ticket_details->status = NULL;
    }
    if (ticket_details->priority) {
        free(ticket_details->priority);
        ticket_details->priority = NULL;
    }
    if (ticket_details->subject) {
        free(ticket_details->subject);
        ticket_details->subject = NULL;
    }
    if (ticket_details->created_on) {
        free(ticket_details->created_on);
        ticket_details->created_on = NULL;
    }
    if (ticket_details->updated_on) {
        free(ticket_details->updated_on);
        ticket_details->updated_on = NULL;
    }
    free(ticket_details);
}

cJSON *ticket_details_convertToJSON(ticket_details_t *ticket_details) {
    cJSON *item = cJSON_CreateObject();

    // ticket_details->ticketid
    if(ticket_details->ticketid) {
    if(cJSON_AddNumberToObject(item, "ticketid", *ticket_details->ticketid) == NULL) {
    goto fail; //Numeric
    }
    }


    // ticket_details->ticketmaskid
    if(ticket_details->ticketmaskid) {
    if(cJSON_AddStringToObject(item, "ticketmaskid", ticket_details->ticketmaskid) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->department
    if(ticket_details->department) {
    if(cJSON_AddStringToObject(item, "department", ticket_details->department) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->status
    if(ticket_details->status) {
    if(cJSON_AddStringToObject(item, "status", ticket_details->status) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->priority
    if(ticket_details->priority) {
    if(cJSON_AddStringToObject(item, "priority", ticket_details->priority) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->subject
    if(ticket_details->subject) {
    if(cJSON_AddStringToObject(item, "subject", ticket_details->subject) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->created_on
    if(ticket_details->created_on) {
    if(cJSON_AddStringToObject(item, "created_on", ticket_details->created_on) == NULL) {
    goto fail; //String
    }
    }


    // ticket_details->updated_on
    if(ticket_details->updated_on) {
    if(cJSON_AddStringToObject(item, "updated_on", ticket_details->updated_on) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ticket_details_t *ticket_details_parseFromJSON(cJSON *ticket_detailsJSON){

    ticket_details_t *ticket_details_local_var = NULL;

    // define the local variable for ticket_details->ticketid
    int *ticketid_local_var = NULL;

    char *ticketmaskid_local_str = NULL;

    char *department_local_str = NULL;

    char *status_local_str = NULL;

    char *priority_local_str = NULL;

    char *subject_local_str = NULL;

    char *created_on_local_str = NULL;

    char *updated_on_local_str = NULL;

    // ticket_details->ticketid
    cJSON *ticketid = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "ticketid");
    if (cJSON_IsNull(ticketid)) {
        ticketid = NULL;
    }
    if (ticketid) { 
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
    }

    // ticket_details->ticketmaskid
    cJSON *ticketmaskid = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "ticketmaskid");
    if (cJSON_IsNull(ticketmaskid)) {
        ticketmaskid = NULL;
    }
    if (ticketmaskid) { 
    if(!cJSON_IsString(ticketmaskid) && !cJSON_IsNull(ticketmaskid))
    {
    goto end; //String
    }
    }

    // ticket_details->department
    cJSON *department = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "department");
    if (cJSON_IsNull(department)) {
        department = NULL;
    }
    if (department) { 
    if(!cJSON_IsString(department) && !cJSON_IsNull(department))
    {
    goto end; //String
    }
    }

    // ticket_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // ticket_details->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "priority");
    if (cJSON_IsNull(priority)) {
        priority = NULL;
    }
    if (priority) { 
    if(!cJSON_IsString(priority) && !cJSON_IsNull(priority))
    {
    goto end; //String
    }
    }

    // ticket_details->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // ticket_details->created_on
    cJSON *created_on = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "created_on");
    if (cJSON_IsNull(created_on)) {
        created_on = NULL;
    }
    if (created_on) { 
    if(!cJSON_IsString(created_on) && !cJSON_IsNull(created_on))
    {
    goto end; //String
    }
    }

    // ticket_details->updated_on
    cJSON *updated_on = cJSON_GetObjectItemCaseSensitive(ticket_detailsJSON, "updated_on");
    if (cJSON_IsNull(updated_on)) {
        updated_on = NULL;
    }
    if (updated_on) { 
    if(!cJSON_IsString(updated_on) && !cJSON_IsNull(updated_on))
    {
    goto end; //String
    }
    }


    if (ticketmaskid && !cJSON_IsNull(ticketmaskid)) ticketmaskid_local_str = strdup(ticketmaskid->valuestring);
    if (department && !cJSON_IsNull(department)) department_local_str = strdup(department->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (priority && !cJSON_IsNull(priority)) priority_local_str = strdup(priority->valuestring);
    if (subject && !cJSON_IsNull(subject)) subject_local_str = strdup(subject->valuestring);
    if (created_on && !cJSON_IsNull(created_on)) created_on_local_str = strdup(created_on->valuestring);
    if (updated_on && !cJSON_IsNull(updated_on)) updated_on_local_str = strdup(updated_on->valuestring);

    ticket_details_local_var = ticket_details_create_internal (
        ticketid_local_var,
        ticketmaskid_local_str,
        department_local_str,
        status_local_str,
        priority_local_str,
        subject_local_str,
        created_on_local_str,
        updated_on_local_str
        );

    if (!ticket_details_local_var) {
        goto end;
    }

    return ticket_details_local_var;
end:
    if (ticketid_local_var) {
        free(ticketid_local_var);
        ticketid_local_var = NULL;
    }
    if (ticketmaskid_local_str) {
        free(ticketmaskid_local_str);
        ticketmaskid_local_str = NULL;
    }
    if (department_local_str) {
        free(department_local_str);
        department_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (priority_local_str) {
        free(priority_local_str);
        priority_local_str = NULL;
    }
    if (subject_local_str) {
        free(subject_local_str);
        subject_local_str = NULL;
    }
    if (created_on_local_str) {
        free(created_on_local_str);
        created_on_local_str = NULL;
    }
    if (updated_on_local_str) {
        free(updated_on_local_str);
        updated_on_local_str = NULL;
    }
    return NULL;

}
