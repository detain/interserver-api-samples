#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "affiliate_banner_row.h"



static affiliate_banner_row_t *affiliate_banner_row_create_internal(
    char *image,
    char *width,
    char *height
    ) {
    affiliate_banner_row_t *affiliate_banner_row_local_var = malloc(sizeof(affiliate_banner_row_t));
    if (!affiliate_banner_row_local_var) {
        return NULL;
    }
    memset(affiliate_banner_row_local_var, 0, sizeof(affiliate_banner_row_t));
    affiliate_banner_row_local_var->_library_owned = 1;
    affiliate_banner_row_local_var->image = image;
    affiliate_banner_row_local_var->width = width;
    affiliate_banner_row_local_var->height = height;
    return affiliate_banner_row_local_var;
}

__attribute__((deprecated)) affiliate_banner_row_t *affiliate_banner_row_create(
    char *image,
    char *width,
    char *height
    ) {
    affiliate_banner_row_t *result = affiliate_banner_row_create_internal (
        image,
        width,
        height
        );
    if (!result) {
    }
    return result;
}

void affiliate_banner_row_free(affiliate_banner_row_t *affiliate_banner_row) {
    if(NULL == affiliate_banner_row){
        return ;
    }
    if(affiliate_banner_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "affiliate_banner_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (affiliate_banner_row->image) {
        free(affiliate_banner_row->image);
        affiliate_banner_row->image = NULL;
    }
    if (affiliate_banner_row->width) {
        free(affiliate_banner_row->width);
        affiliate_banner_row->width = NULL;
    }
    if (affiliate_banner_row->height) {
        free(affiliate_banner_row->height);
        affiliate_banner_row->height = NULL;
    }
    free(affiliate_banner_row);
}

cJSON *affiliate_banner_row_convertToJSON(affiliate_banner_row_t *affiliate_banner_row) {
    cJSON *item = cJSON_CreateObject();

    // affiliate_banner_row->image
    if(affiliate_banner_row->image) {
    if(cJSON_AddStringToObject(item, "image", affiliate_banner_row->image) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_banner_row->width
    if(affiliate_banner_row->width) {
    if(cJSON_AddStringToObject(item, "width", affiliate_banner_row->width) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_banner_row->height
    if(affiliate_banner_row->height) {
    if(cJSON_AddStringToObject(item, "height", affiliate_banner_row->height) == NULL) {
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

affiliate_banner_row_t *affiliate_banner_row_parseFromJSON(cJSON *affiliate_banner_rowJSON){

    affiliate_banner_row_t *affiliate_banner_row_local_var = NULL;

    char *image_local_str = NULL;

    char *width_local_str = NULL;

    char *height_local_str = NULL;

    // affiliate_banner_row->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(affiliate_banner_rowJSON, "image");
    if (cJSON_IsNull(image)) {
        image = NULL;
    }
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // affiliate_banner_row->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(affiliate_banner_rowJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsString(width) && !cJSON_IsNull(width))
    {
    goto end; //String
    }
    }

    // affiliate_banner_row->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(affiliate_banner_rowJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsString(height) && !cJSON_IsNull(height))
    {
    goto end; //String
    }
    }


    if (image && !cJSON_IsNull(image)) image_local_str = strdup(image->valuestring);
    if (width && !cJSON_IsNull(width)) width_local_str = strdup(width->valuestring);
    if (height && !cJSON_IsNull(height)) height_local_str = strdup(height->valuestring);

    affiliate_banner_row_local_var = affiliate_banner_row_create_internal (
        image_local_str,
        width_local_str,
        height_local_str
        );

    if (!affiliate_banner_row_local_var) {
        goto end;
    }

    return affiliate_banner_row_local_var;
end:
    if (image_local_str) {
        free(image_local_str);
        image_local_str = NULL;
    }
    if (width_local_str) {
        free(width_local_str);
        width_local_str = NULL;
    }
    if (height_local_str) {
        free(height_local_str);
        height_local_str = NULL;
    }
    return NULL;

}
