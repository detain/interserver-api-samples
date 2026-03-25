#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_backup_row.h"



static vps_backup_row_t *vps_backup_row_create_internal(
    char *type,
    int *service,
    char *name,
    int *size,
    int *date
    ) {
    vps_backup_row_t *vps_backup_row_local_var = malloc(sizeof(vps_backup_row_t));
    if (!vps_backup_row_local_var) {
        return NULL;
    }
    memset(vps_backup_row_local_var, 0, sizeof(vps_backup_row_t));
    vps_backup_row_local_var->_library_owned = 1;
    vps_backup_row_local_var->type = type;
    vps_backup_row_local_var->service = service;
    vps_backup_row_local_var->name = name;
    vps_backup_row_local_var->size = size;
    vps_backup_row_local_var->date = date;
    return vps_backup_row_local_var;
}

__attribute__((deprecated)) vps_backup_row_t *vps_backup_row_create(
    char *type,
    int *service,
    char *name,
    int *size,
    int *date
    ) {
    int *service_copy = NULL;
    if (service) {
        service_copy = malloc(sizeof(int));
        if (service_copy) *service_copy = *service;
    }
    int *size_copy = NULL;
    if (size) {
        size_copy = malloc(sizeof(int));
        if (size_copy) *size_copy = *size;
    }
    int *date_copy = NULL;
    if (date) {
        date_copy = malloc(sizeof(int));
        if (date_copy) *date_copy = *date;
    }
    vps_backup_row_t *result = vps_backup_row_create_internal (
        type,
        service_copy,
        name,
        size_copy,
        date_copy
        );
    if (!result) {
        free(service_copy);
        free(size_copy);
        free(date_copy);
    }
    return result;
}

void vps_backup_row_free(vps_backup_row_t *vps_backup_row) {
    if(NULL == vps_backup_row){
        return ;
    }
    if(vps_backup_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_backup_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_backup_row->type) {
        free(vps_backup_row->type);
        vps_backup_row->type = NULL;
    }
    if (vps_backup_row->service) {
        free(vps_backup_row->service);
        vps_backup_row->service = NULL;
    }
    if (vps_backup_row->name) {
        free(vps_backup_row->name);
        vps_backup_row->name = NULL;
    }
    if (vps_backup_row->size) {
        free(vps_backup_row->size);
        vps_backup_row->size = NULL;
    }
    if (vps_backup_row->date) {
        free(vps_backup_row->date);
        vps_backup_row->date = NULL;
    }
    free(vps_backup_row);
}

cJSON *vps_backup_row_convertToJSON(vps_backup_row_t *vps_backup_row) {
    cJSON *item = cJSON_CreateObject();

    // vps_backup_row->type
    if (!vps_backup_row->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", vps_backup_row->type) == NULL) {
    goto fail; //String
    }


    // vps_backup_row->service
    if (!vps_backup_row->service) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "service", *vps_backup_row->service) == NULL) {
    goto fail; //Numeric
    }


    // vps_backup_row->name
    if (!vps_backup_row->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", vps_backup_row->name) == NULL) {
    goto fail; //String
    }


    // vps_backup_row->size
    if (!vps_backup_row->size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "size", *vps_backup_row->size) == NULL) {
    goto fail; //Numeric
    }


    // vps_backup_row->date
    if (!vps_backup_row->date) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "date", *vps_backup_row->date) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_backup_row_t *vps_backup_row_parseFromJSON(cJSON *vps_backup_rowJSON){

    vps_backup_row_t *vps_backup_row_local_var = NULL;

    char *type_local_str = NULL;

    // define the local variable for vps_backup_row->service
    int *service_local_var = NULL;

    char *name_local_str = NULL;

    // define the local variable for vps_backup_row->size
    int *size_local_var = NULL;

    // define the local variable for vps_backup_row->date
    int *date_local_var = NULL;

    // vps_backup_row->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(vps_backup_rowJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // vps_backup_row->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(vps_backup_rowJSON, "service");
    if (cJSON_IsNull(service)) {
        service = NULL;
    }
    if (!service) {
        goto end;
    }

    
    if(!cJSON_IsNumber(service))
    {
    goto end; //Numeric
    }
    service_local_var = malloc(sizeof(int));
    if(!service_local_var)
    {
        goto end;
    }
    *service_local_var = service->valuedouble;

    // vps_backup_row->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_backup_rowJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // vps_backup_row->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(vps_backup_rowJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    size_local_var = malloc(sizeof(int));
    if(!size_local_var)
    {
        goto end;
    }
    *size_local_var = size->valuedouble;

    // vps_backup_row->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(vps_backup_rowJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (!date) {
        goto end;
    }

    
    if(!cJSON_IsNumber(date))
    {
    goto end; //Numeric
    }
    date_local_var = malloc(sizeof(int));
    if(!date_local_var)
    {
        goto end;
    }
    *date_local_var = date->valuedouble;


    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);

    vps_backup_row_local_var = vps_backup_row_create_internal (
        type_local_str,
        service_local_var,
        name_local_str,
        size_local_var,
        date_local_var
        );

    if (!vps_backup_row_local_var) {
        goto end;
    }

    return vps_backup_row_local_var;
end:
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (service_local_var) {
        free(service_local_var);
        service_local_var = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (date_local_var) {
        free(date_local_var);
        date_local_var = NULL;
    }
    return NULL;

}
