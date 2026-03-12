#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_deliverability_response.h"



static mail_deliverability_response_t *mail_deliverability_response_create_internal(
    object_t *stat,
    double percent,
    list_t *table_data
    ) {
    mail_deliverability_response_t *mail_deliverability_response_local_var = malloc(sizeof(mail_deliverability_response_t));
    if (!mail_deliverability_response_local_var) {
        return NULL;
    }
    mail_deliverability_response_local_var->stat = stat;
    mail_deliverability_response_local_var->percent = percent;
    mail_deliverability_response_local_var->table_data = table_data;

    mail_deliverability_response_local_var->_library_owned = 1;
    return mail_deliverability_response_local_var;
}

__attribute__((deprecated)) mail_deliverability_response_t *mail_deliverability_response_create(
    object_t *stat,
    double percent,
    list_t *table_data
    ) {
    return mail_deliverability_response_create_internal (
        stat,
        percent,
        table_data
        );
}

void mail_deliverability_response_free(mail_deliverability_response_t *mail_deliverability_response) {
    if(NULL == mail_deliverability_response){
        return ;
    }
    if(mail_deliverability_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_deliverability_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_deliverability_response->stat) {
        object_free(mail_deliverability_response->stat);
        mail_deliverability_response->stat = NULL;
    }
    if (mail_deliverability_response->table_data) {
        list_ForEach(listEntry, mail_deliverability_response->table_data) {
            free(listEntry->data);
        }
        list_freeList(mail_deliverability_response->table_data);
        mail_deliverability_response->table_data = NULL;
    }
    free(mail_deliverability_response);
}

cJSON *mail_deliverability_response_convertToJSON(mail_deliverability_response_t *mail_deliverability_response) {
    cJSON *item = cJSON_CreateObject();

    // mail_deliverability_response->stat
    if(mail_deliverability_response->stat) {
    cJSON *stat_object = object_convertToJSON(mail_deliverability_response->stat);
    if(stat_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "stat", stat_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // mail_deliverability_response->percent
    if(mail_deliverability_response->percent) {
    if(cJSON_AddNumberToObject(item, "percent", mail_deliverability_response->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_deliverability_response->table_data
    if(mail_deliverability_response->table_data) {
    cJSON *table_data = cJSON_AddArrayToObject(item, "table_data");
    if(table_data == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *table_dataListEntry;
    list_ForEach(table_dataListEntry, mail_deliverability_response->table_data) {
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_deliverability_response_t *mail_deliverability_response_parseFromJSON(cJSON *mail_deliverability_responseJSON){

    mail_deliverability_response_t *mail_deliverability_response_local_var = NULL;

    // define the local list for mail_deliverability_response->table_data
    list_t *table_dataList = NULL;

    // mail_deliverability_response->stat
    cJSON *stat = cJSON_GetObjectItemCaseSensitive(mail_deliverability_responseJSON, "stat");
    if (cJSON_IsNull(stat)) {
        stat = NULL;
    }
    object_t *stat_local_object = NULL;
    if (stat) { 
    stat_local_object = object_parseFromJSON(stat); //object
    }

    // mail_deliverability_response->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(mail_deliverability_responseJSON, "percent");
    if (cJSON_IsNull(percent)) {
        percent = NULL;
    }
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // mail_deliverability_response->table_data
    cJSON *table_data = cJSON_GetObjectItemCaseSensitive(mail_deliverability_responseJSON, "table_data");
    if (cJSON_IsNull(table_data)) {
        table_data = NULL;
    }
    if (table_data) { 
    cJSON *table_data_local = NULL;
    if(!cJSON_IsArray(table_data)) {
        goto end;//primitive container
    }
    table_dataList = list_createList();

    cJSON_ArrayForEach(table_data_local, table_data)
    {
    }
    }


    mail_deliverability_response_local_var = mail_deliverability_response_create_internal (
        stat ? stat_local_object : NULL,
        percent ? percent->valuedouble : 0,
        table_data ? table_dataList : NULL
        );

    return mail_deliverability_response_local_var;
end:
    if (table_dataList) {
        list_freeList(table_dataList);
        table_dataList = NULL;
    }
    return NULL;

}
