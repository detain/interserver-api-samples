#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hard_drive.h"



static hard_drive_t *hard_drive_create_internal(
    int *id,
    char *short_desc,
    char *size,
    char *drive_type,
    double *monthly_price,
    char *monthly_price_display
    ) {
    hard_drive_t *hard_drive_local_var = malloc(sizeof(hard_drive_t));
    if (!hard_drive_local_var) {
        return NULL;
    }
    memset(hard_drive_local_var, 0, sizeof(hard_drive_t));
    hard_drive_local_var->_library_owned = 1;
    hard_drive_local_var->id = id;
    hard_drive_local_var->short_desc = short_desc;
    hard_drive_local_var->size = size;
    hard_drive_local_var->drive_type = drive_type;
    hard_drive_local_var->monthly_price = monthly_price;
    hard_drive_local_var->monthly_price_display = monthly_price_display;
    return hard_drive_local_var;
}

__attribute__((deprecated)) hard_drive_t *hard_drive_create(
    int *id,
    char *short_desc,
    char *size,
    char *drive_type,
    double *monthly_price,
    char *monthly_price_display
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    double *monthly_price_copy = NULL;
    if (monthly_price) {
        monthly_price_copy = malloc(sizeof(double));
        if (monthly_price_copy) *monthly_price_copy = *monthly_price;
    }
    hard_drive_t *result = hard_drive_create_internal (
        id_copy,
        short_desc,
        size,
        drive_type,
        monthly_price_copy,
        monthly_price_display
        );
    if (!result) {
        free(id_copy);
        free(monthly_price_copy);
    }
    return result;
}

void hard_drive_free(hard_drive_t *hard_drive) {
    if(NULL == hard_drive){
        return ;
    }
    if(hard_drive->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "hard_drive_free");
        return ;
    }
    listEntry_t *listEntry;
    if (hard_drive->id) {
        free(hard_drive->id);
        hard_drive->id = NULL;
    }
    if (hard_drive->short_desc) {
        free(hard_drive->short_desc);
        hard_drive->short_desc = NULL;
    }
    if (hard_drive->size) {
        free(hard_drive->size);
        hard_drive->size = NULL;
    }
    if (hard_drive->drive_type) {
        free(hard_drive->drive_type);
        hard_drive->drive_type = NULL;
    }
    if (hard_drive->monthly_price) {
        free(hard_drive->monthly_price);
        hard_drive->monthly_price = NULL;
    }
    if (hard_drive->monthly_price_display) {
        free(hard_drive->monthly_price_display);
        hard_drive->monthly_price_display = NULL;
    }
    free(hard_drive);
}

cJSON *hard_drive_convertToJSON(hard_drive_t *hard_drive) {
    cJSON *item = cJSON_CreateObject();

    // hard_drive->id
    if(hard_drive->id) {
    if(cJSON_AddNumberToObject(item, "id", *hard_drive->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // hard_drive->short_desc
    if(hard_drive->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", hard_drive->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // hard_drive->size
    if(hard_drive->size) {
    if(cJSON_AddStringToObject(item, "size", hard_drive->size) == NULL) {
    goto fail; //String
    }
    }


    // hard_drive->drive_type
    if(hard_drive->drive_type) {
    if(cJSON_AddStringToObject(item, "drive_type", hard_drive->drive_type) == NULL) {
    goto fail; //String
    }
    }


    // hard_drive->monthly_price
    if(hard_drive->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", *hard_drive->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // hard_drive->monthly_price_display
    if(hard_drive->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", hard_drive->monthly_price_display) == NULL) {
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

hard_drive_t *hard_drive_parseFromJSON(cJSON *hard_driveJSON){

    hard_drive_t *hard_drive_local_var = NULL;

    // define the local variable for hard_drive->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    char *size_local_str = NULL;

    char *drive_type_local_str = NULL;

    // define the local variable for hard_drive->monthly_price
    double *monthly_price_local_var = NULL;

    char *monthly_price_display_local_str = NULL;

    // hard_drive->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
    }

    // hard_drive->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // hard_drive->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsString(size) && !cJSON_IsNull(size))
    {
    goto end; //String
    }
    }

    // hard_drive->drive_type
    cJSON *drive_type = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "drive_type");
    if (cJSON_IsNull(drive_type)) {
        drive_type = NULL;
    }
    if (drive_type) { 
    if(!cJSON_IsString(drive_type) && !cJSON_IsNull(drive_type))
    {
    goto end; //String
    }
    }

    // hard_drive->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }

    // hard_drive->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(hard_driveJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (size && !cJSON_IsNull(size)) size_local_str = strdup(size->valuestring);
    if (drive_type && !cJSON_IsNull(drive_type)) drive_type_local_str = strdup(drive_type->valuestring);
    if (monthly_price_display && !cJSON_IsNull(monthly_price_display)) monthly_price_display_local_str = strdup(monthly_price_display->valuestring);

    hard_drive_local_var = hard_drive_create_internal (
        id_local_var,
        short_desc_local_str,
        size_local_str,
        drive_type_local_str,
        monthly_price_local_var,
        monthly_price_display_local_str
        );

    if (!hard_drive_local_var) {
        goto end;
    }

    return hard_drive_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (size_local_str) {
        free(size_local_str);
        size_local_str = NULL;
    }
    if (drive_type_local_str) {
        free(drive_type_local_str);
        drive_type_local_str = NULL;
    }
    if (monthly_price_local_var) {
        free(monthly_price_local_var);
        monthly_price_local_var = NULL;
    }
    if (monthly_price_display_local_str) {
        free(monthly_price_display_local_str);
        monthly_price_display_local_str = NULL;
    }
    return NULL;

}
