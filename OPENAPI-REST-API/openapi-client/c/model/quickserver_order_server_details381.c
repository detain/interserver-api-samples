#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_server_details381.h"



static quickserver_order_server_details381_t *quickserver_order_server_details381_create_internal(
    char *cpu,
    char *ram,
    char *hd,
    int cores,
    char *cost
    ) {
    quickserver_order_server_details381_t *quickserver_order_server_details381_local_var = malloc(sizeof(quickserver_order_server_details381_t));
    if (!quickserver_order_server_details381_local_var) {
        return NULL;
    }
    quickserver_order_server_details381_local_var->cpu = cpu;
    quickserver_order_server_details381_local_var->ram = ram;
    quickserver_order_server_details381_local_var->hd = hd;
    quickserver_order_server_details381_local_var->cores = cores;
    quickserver_order_server_details381_local_var->cost = cost;

    quickserver_order_server_details381_local_var->_library_owned = 1;
    return quickserver_order_server_details381_local_var;
}

__attribute__((deprecated)) quickserver_order_server_details381_t *quickserver_order_server_details381_create(
    char *cpu,
    char *ram,
    char *hd,
    int cores,
    char *cost
    ) {
    return quickserver_order_server_details381_create_internal (
        cpu,
        ram,
        hd,
        cores,
        cost
        );
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
    if(cJSON_AddNumberToObject(item, "cores", quickserver_order_server_details381->cores) == NULL) {
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


    quickserver_order_server_details381_local_var = quickserver_order_server_details381_create_internal (
        cpu && !cJSON_IsNull(cpu) ? strdup(cpu->valuestring) : NULL,
        ram && !cJSON_IsNull(ram) ? strdup(ram->valuestring) : NULL,
        hd && !cJSON_IsNull(hd) ? strdup(hd->valuestring) : NULL,
        cores ? cores->valuedouble : 0,
        cost && !cJSON_IsNull(cost) ? strdup(cost->valuestring) : NULL
        );

    return quickserver_order_server_details381_local_var;
end:
    return NULL;

}
