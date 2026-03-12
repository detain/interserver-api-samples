#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "form_values.h"



static form_values_t *form_values_create_internal(
    int memory,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid,
    int hd,
    int region
    ) {
    form_values_t *form_values_local_var = malloc(sizeof(form_values_t));
    if (!form_values_local_var) {
        return NULL;
    }
    form_values_local_var->memory = memory;
    form_values_local_var->bandwidth = bandwidth;
    form_values_local_var->ips = ips;
    form_values_local_var->os = os;
    form_values_local_var->cp = cp;
    form_values_local_var->raid = raid;
    form_values_local_var->hd = hd;
    form_values_local_var->region = region;

    form_values_local_var->_library_owned = 1;
    return form_values_local_var;
}

__attribute__((deprecated)) form_values_t *form_values_create(
    int memory,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid,
    int hd,
    int region
    ) {
    return form_values_create_internal (
        memory,
        bandwidth,
        ips,
        os,
        cp,
        raid,
        hd,
        region
        );
}

void form_values_free(form_values_t *form_values) {
    if(NULL == form_values){
        return ;
    }
    if(form_values->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "form_values_free");
        return ;
    }
    listEntry_t *listEntry;
    free(form_values);
}

cJSON *form_values_convertToJSON(form_values_t *form_values) {
    cJSON *item = cJSON_CreateObject();

    // form_values->memory
    if(form_values->memory) {
    if(cJSON_AddNumberToObject(item, "memory", form_values->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->bandwidth
    if(form_values->bandwidth) {
    if(cJSON_AddNumberToObject(item, "bandwidth", form_values->bandwidth) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->ips
    if(form_values->ips) {
    if(cJSON_AddNumberToObject(item, "ips", form_values->ips) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->os
    if(form_values->os) {
    if(cJSON_AddNumberToObject(item, "os", form_values->os) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->cp
    if(form_values->cp) {
    if(cJSON_AddNumberToObject(item, "cp", form_values->cp) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->raid
    if(form_values->raid) {
    if(cJSON_AddNumberToObject(item, "raid", form_values->raid) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->hd
    if(form_values->hd) {
    if(cJSON_AddNumberToObject(item, "hd", form_values->hd) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->region
    if(form_values->region) {
    if(cJSON_AddNumberToObject(item, "region", form_values->region) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

form_values_t *form_values_parseFromJSON(cJSON *form_valuesJSON){

    form_values_t *form_values_local_var = NULL;

    // form_values->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    }

    // form_values->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    if(!cJSON_IsNumber(bandwidth))
    {
    goto end; //Numeric
    }
    }

    // form_values->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    if(!cJSON_IsNumber(ips))
    {
    goto end; //Numeric
    }
    }

    // form_values->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    if(!cJSON_IsNumber(os))
    {
    goto end; //Numeric
    }
    }

    // form_values->cp
    cJSON *cp = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "cp");
    if (cJSON_IsNull(cp)) {
        cp = NULL;
    }
    if (cp) { 
    if(!cJSON_IsNumber(cp))
    {
    goto end; //Numeric
    }
    }

    // form_values->raid
    cJSON *raid = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "raid");
    if (cJSON_IsNull(raid)) {
        raid = NULL;
    }
    if (raid) { 
    if(!cJSON_IsNumber(raid))
    {
    goto end; //Numeric
    }
    }

    // form_values->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "hd");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    if(!cJSON_IsNumber(hd))
    {
    goto end; //Numeric
    }
    }

    // form_values->region
    cJSON *region = cJSON_GetObjectItemCaseSensitive(form_valuesJSON, "region");
    if (cJSON_IsNull(region)) {
        region = NULL;
    }
    if (region) { 
    if(!cJSON_IsNumber(region))
    {
    goto end; //Numeric
    }
    }


    form_values_local_var = form_values_create_internal (
        memory ? memory->valuedouble : 0,
        bandwidth ? bandwidth->valuedouble : 0,
        ips ? ips->valuedouble : 0,
        os ? os->valuedouble : 0,
        cp ? cp->valuedouble : 0,
        raid ? raid->valuedouble : 0,
        hd ? hd->valuedouble : 0,
        region ? region->valuedouble : 0
        );

    return form_values_local_var;
end:
    return NULL;

}
