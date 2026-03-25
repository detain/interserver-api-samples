#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_server_details381.h"



static quickserver_order_server_details381_t *quickserver_order_server_details381_create_internal(
    char *cpu,
    char *ram,
    char *hd,
    int *cores,
    char *cost
    ) {
    quickserver_order_server_details381_t *quickserver_order_server_details381_local_var = malloc(sizeof(quickserver_order_server_details381_t));
    if (!quickserver_order_server_details381_local_var) {
        return NULL;
    }
    memset(quickserver_order_server_details381_local_var, 0, sizeof(quickserver_order_server_details381_t));
    quickserver_order_server_details381_local_var->_library_owned = 1;
    quickserver_order_server_details381_local_var->cpu = cpu;
    quickserver_order_server_details381_local_var->ram = ram;
    quickserver_order_server_details381_local_var->hd = hd;
    quickserver_order_server_details381_local_var->cores = cores;
    quickserver_order_server_details381_local_var->cost = cost;
    return quickserver_order_server_details381_local_var;
}

__attribute__((deprecated)) quickserver_order_server_details381_t *quickserver_order_server_details381_create(
    char *cpu,
    char *ram,
    char *hd,
    int *cores,
    char *cost
    ) {
    int *cores_copy = NULL;
    if (cores) {
        cores_copy = malloc(sizeof(int));
        if (cores_copy) *cores_copy = *cores;
    }
    quickserver_order_server_details381_t *result = quickserver_order_server_details381_create_internal (
        cpu,
        ram,
        hd,
        cores_copy,
        cost
        );
    if (!result) {
        free(cores_copy);
    }
    return result;
}

void quickserver_order_server_details381_free(quickserver_order_server_details381_t *quickserver_order_server_details381) {
    if(NULL == quickserver_order_server_details381){
        return ;
    }
    if(quickserver_order_server_details381->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_server_details381_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_server_details381->cpu) {
        free(quickserver_order_server_details381->cpu);
        quickserver_order_server_details381->cpu = NULL;
    }
    if (quickserver_order_server_details381->ram) {
        free(quickserver_order_server_details381->ram);
        quickserver_order_server_details381->ram = NULL;
    }
    if (quickserver_order_server_details381->hd) {
        free(quickserver_order_server_details381->hd);
        quickserver_order_server_details381->hd = NULL;
    }
    if (quickserver_order_server_details381->cores) {
        free(quickserver_order_server_details381->cores);
        quickserver_order_server_details381->cores = NULL;
    }
    if (quickserver_order_server_details381->cost) {
        free(quickserver_order_server_details381->cost);
        quickserver_order_server_details381->cost = NULL;
    }
    free(quickserver_order_server_details381);
}

cJSON *quickserver_order_server_details381_convertToJSON(quickserver_order_server_details381_t *quickserver_order_server_details381) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_server_details381->cpu
    if(quickserver_order_server_details381->cpu) {
    if(cJSON_AddStringToObject(item, "cpu", quickserver_order_server_details381->cpu) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_order_server_details381->ram
    if(quickserver_order_server_details381->ram) {
    if(cJSON_AddStringToObject(item, "ram", quickserver_order_server_details381->ram) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_order_server_details381->hd
    if(quickserver_order_server_details381->hd) {
    if(cJSON_AddStringToObject(item, "hd", quickserver_order_server_details381->hd) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_order_server_details381->cores
    if(quickserver_order_server_details381->cores) {
    if(cJSON_AddNumberToObject(item, "cores", *quickserver_order_server_details381->cores) == NULL) {
    goto fail; //Numeric
    }
    }


    // quickserver_order_server_details381->cost
    if(quickserver_order_server_details381->cost) {
    if(cJSON_AddStringToObject(item, "cost", quickserver_order_server_details381->cost) == NULL) {
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

quickserver_order_server_details381_t *quickserver_order_server_details381_parseFromJSON(cJSON *quickserver_order_server_details381JSON){

    quickserver_order_server_details381_t *quickserver_order_server_details381_local_var = NULL;

    char *cpu_local_str = NULL;

    char *ram_local_str = NULL;

    char *hd_local_str = NULL;

    // define the local variable for quickserver_order_server_details381->cores
    int *cores_local_var = NULL;

    char *cost_local_str = NULL;

    // quickserver_order_server_details381->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_details381JSON, "cpu");
    if (cJSON_IsNull(cpu)) {
        cpu = NULL;
    }
    if (cpu) { 
    if(!cJSON_IsString(cpu) && !cJSON_IsNull(cpu))
    {
    goto end; //String
    }
    }

    // quickserver_order_server_details381->ram
    cJSON *ram = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_details381JSON, "ram");
    if (cJSON_IsNull(ram)) {
        ram = NULL;
    }
    if (ram) { 
    if(!cJSON_IsString(ram) && !cJSON_IsNull(ram))
    {
    goto end; //String
    }
    }

    // quickserver_order_server_details381->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_details381JSON, "hd");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    if(!cJSON_IsString(hd) && !cJSON_IsNull(hd))
    {
    goto end; //String
    }
    }

    // quickserver_order_server_details381->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_details381JSON, "cores");
    if (cJSON_IsNull(cores)) {
        cores = NULL;
    }
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    cores_local_var = malloc(sizeof(int));
    if(!cores_local_var)
    {
        goto end;
    }
    *cores_local_var = cores->valuedouble;
    }

    // quickserver_order_server_details381->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_details381JSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsString(cost) && !cJSON_IsNull(cost))
    {
    goto end; //String
    }
    }


    if (cpu && !cJSON_IsNull(cpu)) cpu_local_str = strdup(cpu->valuestring);
    if (ram && !cJSON_IsNull(ram)) ram_local_str = strdup(ram->valuestring);
    if (hd && !cJSON_IsNull(hd)) hd_local_str = strdup(hd->valuestring);
    if (cost && !cJSON_IsNull(cost)) cost_local_str = strdup(cost->valuestring);

    quickserver_order_server_details381_local_var = quickserver_order_server_details381_create_internal (
        cpu_local_str,
        ram_local_str,
        hd_local_str,
        cores_local_var,
        cost_local_str
        );

    if (!quickserver_order_server_details381_local_var) {
        goto end;
    }

    return quickserver_order_server_details381_local_var;
end:
    if (cpu_local_str) {
        free(cpu_local_str);
        cpu_local_str = NULL;
    }
    if (ram_local_str) {
        free(ram_local_str);
        ram_local_str = NULL;
    }
    if (hd_local_str) {
        free(hd_local_str);
        hd_local_str = NULL;
    }
    if (cores_local_var) {
        free(cores_local_var);
        cores_local_var = NULL;
    }
    if (cost_local_str) {
        free(cost_local_str);
        cost_local_str = NULL;
    }
    return NULL;

}
