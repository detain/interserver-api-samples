#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_row_cpu_inner_one_of.h"



static buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_create_internal(
    char *img,
    char *type,
    char *speed,
    char *num_cpus,
    char *num_cores
    ) {
    buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_local_var = malloc(sizeof(buy_it_now_row_cpu_inner_one_of_t));
    if (!buy_it_now_row_cpu_inner_one_of_local_var) {
        return NULL;
    }
    memset(buy_it_now_row_cpu_inner_one_of_local_var, 0, sizeof(buy_it_now_row_cpu_inner_one_of_t));
    buy_it_now_row_cpu_inner_one_of_local_var->_library_owned = 1;
    buy_it_now_row_cpu_inner_one_of_local_var->img = img;
    buy_it_now_row_cpu_inner_one_of_local_var->type = type;
    buy_it_now_row_cpu_inner_one_of_local_var->speed = speed;
    buy_it_now_row_cpu_inner_one_of_local_var->num_cpus = num_cpus;
    buy_it_now_row_cpu_inner_one_of_local_var->num_cores = num_cores;
    return buy_it_now_row_cpu_inner_one_of_local_var;
}

__attribute__((deprecated)) buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_create(
    char *img,
    char *type,
    char *speed,
    char *num_cpus,
    char *num_cores
    ) {
    buy_it_now_row_cpu_inner_one_of_t *result = buy_it_now_row_cpu_inner_one_of_create_internal (
        img,
        type,
        speed,
        num_cpus,
        num_cores
        );
    if (!result) {
    }
    return result;
}

void buy_it_now_row_cpu_inner_one_of_free(buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of) {
    if(NULL == buy_it_now_row_cpu_inner_one_of){
        return ;
    }
    if(buy_it_now_row_cpu_inner_one_of->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_row_cpu_inner_one_of_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buy_it_now_row_cpu_inner_one_of->img) {
        free(buy_it_now_row_cpu_inner_one_of->img);
        buy_it_now_row_cpu_inner_one_of->img = NULL;
    }
    if (buy_it_now_row_cpu_inner_one_of->type) {
        free(buy_it_now_row_cpu_inner_one_of->type);
        buy_it_now_row_cpu_inner_one_of->type = NULL;
    }
    if (buy_it_now_row_cpu_inner_one_of->speed) {
        free(buy_it_now_row_cpu_inner_one_of->speed);
        buy_it_now_row_cpu_inner_one_of->speed = NULL;
    }
    if (buy_it_now_row_cpu_inner_one_of->num_cpus) {
        free(buy_it_now_row_cpu_inner_one_of->num_cpus);
        buy_it_now_row_cpu_inner_one_of->num_cpus = NULL;
    }
    if (buy_it_now_row_cpu_inner_one_of->num_cores) {
        free(buy_it_now_row_cpu_inner_one_of->num_cores);
        buy_it_now_row_cpu_inner_one_of->num_cores = NULL;
    }
    free(buy_it_now_row_cpu_inner_one_of);
}

cJSON *buy_it_now_row_cpu_inner_one_of_convertToJSON(buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of) {
    cJSON *item = cJSON_CreateObject();

    // buy_it_now_row_cpu_inner_one_of->img
    if(buy_it_now_row_cpu_inner_one_of->img) {
    if(cJSON_AddStringToObject(item, "img", buy_it_now_row_cpu_inner_one_of->img) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row_cpu_inner_one_of->type
    if(buy_it_now_row_cpu_inner_one_of->type) {
    if(cJSON_AddStringToObject(item, "type", buy_it_now_row_cpu_inner_one_of->type) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row_cpu_inner_one_of->speed
    if(buy_it_now_row_cpu_inner_one_of->speed) {
    if(cJSON_AddStringToObject(item, "speed", buy_it_now_row_cpu_inner_one_of->speed) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row_cpu_inner_one_of->num_cpus
    if(buy_it_now_row_cpu_inner_one_of->num_cpus) {
    if(cJSON_AddStringToObject(item, "num_cpus", buy_it_now_row_cpu_inner_one_of->num_cpus) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row_cpu_inner_one_of->num_cores
    if(buy_it_now_row_cpu_inner_one_of->num_cores) {
    if(cJSON_AddStringToObject(item, "num_cores", buy_it_now_row_cpu_inner_one_of->num_cores) == NULL) {
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

buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_parseFromJSON(cJSON *buy_it_now_row_cpu_inner_one_ofJSON){

    buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_local_var = NULL;

    char *img_local_str = NULL;

    char *type_local_str = NULL;

    char *speed_local_str = NULL;

    char *num_cpus_local_str = NULL;

    char *num_cores_local_str = NULL;

    // buy_it_now_row_cpu_inner_one_of->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(buy_it_now_row_cpu_inner_one_ofJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // buy_it_now_row_cpu_inner_one_of->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(buy_it_now_row_cpu_inner_one_ofJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // buy_it_now_row_cpu_inner_one_of->speed
    cJSON *speed = cJSON_GetObjectItemCaseSensitive(buy_it_now_row_cpu_inner_one_ofJSON, "speed");
    if (cJSON_IsNull(speed)) {
        speed = NULL;
    }
    if (speed) { 
    if(!cJSON_IsString(speed) && !cJSON_IsNull(speed))
    {
    goto end; //String
    }
    }

    // buy_it_now_row_cpu_inner_one_of->num_cpus
    cJSON *num_cpus = cJSON_GetObjectItemCaseSensitive(buy_it_now_row_cpu_inner_one_ofJSON, "num_cpus");
    if (cJSON_IsNull(num_cpus)) {
        num_cpus = NULL;
    }
    if (num_cpus) { 
    if(!cJSON_IsString(num_cpus) && !cJSON_IsNull(num_cpus))
    {
    goto end; //String
    }
    }

    // buy_it_now_row_cpu_inner_one_of->num_cores
    cJSON *num_cores = cJSON_GetObjectItemCaseSensitive(buy_it_now_row_cpu_inner_one_ofJSON, "num_cores");
    if (cJSON_IsNull(num_cores)) {
        num_cores = NULL;
    }
    if (num_cores) { 
    if(!cJSON_IsString(num_cores) && !cJSON_IsNull(num_cores))
    {
    goto end; //String
    }
    }


    if (img && !cJSON_IsNull(img)) img_local_str = strdup(img->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (speed && !cJSON_IsNull(speed)) speed_local_str = strdup(speed->valuestring);
    if (num_cpus && !cJSON_IsNull(num_cpus)) num_cpus_local_str = strdup(num_cpus->valuestring);
    if (num_cores && !cJSON_IsNull(num_cores)) num_cores_local_str = strdup(num_cores->valuestring);

    buy_it_now_row_cpu_inner_one_of_local_var = buy_it_now_row_cpu_inner_one_of_create_internal (
        img_local_str,
        type_local_str,
        speed_local_str,
        num_cpus_local_str,
        num_cores_local_str
        );

    if (!buy_it_now_row_cpu_inner_one_of_local_var) {
        goto end;
    }

    return buy_it_now_row_cpu_inner_one_of_local_var;
end:
    if (img_local_str) {
        free(img_local_str);
        img_local_str = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (speed_local_str) {
        free(speed_local_str);
        speed_local_str = NULL;
    }
    if (num_cpus_local_str) {
        free(num_cpus_local_str);
        num_cpus_local_str = NULL;
    }
    if (num_cores_local_str) {
        free(num_cores_local_str);
        num_cores_local_str = NULL;
    }
    return NULL;

}
