#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "form_values.h"



static form_values_t *form_values_create_internal(
    int *memory,
    int *bandwidth,
    int *ips,
    int *os,
    int *cp,
    int *raid,
    int *hd,
    int *region
    ) {
    form_values_t *form_values_local_var = malloc(sizeof(form_values_t));
    if (!form_values_local_var) {
        return NULL;
    }
    memset(form_values_local_var, 0, sizeof(form_values_t));
    form_values_local_var->_library_owned = 1;
    form_values_local_var->memory = memory;
    form_values_local_var->bandwidth = bandwidth;
    form_values_local_var->ips = ips;
    form_values_local_var->os = os;
    form_values_local_var->cp = cp;
    form_values_local_var->raid = raid;
    form_values_local_var->hd = hd;
    form_values_local_var->region = region;
    return form_values_local_var;
}

__attribute__((deprecated)) form_values_t *form_values_create(
    int *memory,
    int *bandwidth,
    int *ips,
    int *os,
    int *cp,
    int *raid,
    int *hd,
    int *region
    ) {
    int *memory_copy = NULL;
    if (memory) {
        memory_copy = malloc(sizeof(int));
        if (memory_copy) *memory_copy = *memory;
    }
    int *bandwidth_copy = NULL;
    if (bandwidth) {
        bandwidth_copy = malloc(sizeof(int));
        if (bandwidth_copy) *bandwidth_copy = *bandwidth;
    }
    int *ips_copy = NULL;
    if (ips) {
        ips_copy = malloc(sizeof(int));
        if (ips_copy) *ips_copy = *ips;
    }
    int *os_copy = NULL;
    if (os) {
        os_copy = malloc(sizeof(int));
        if (os_copy) *os_copy = *os;
    }
    int *cp_copy = NULL;
    if (cp) {
        cp_copy = malloc(sizeof(int));
        if (cp_copy) *cp_copy = *cp;
    }
    int *raid_copy = NULL;
    if (raid) {
        raid_copy = malloc(sizeof(int));
        if (raid_copy) *raid_copy = *raid;
    }
    int *hd_copy = NULL;
    if (hd) {
        hd_copy = malloc(sizeof(int));
        if (hd_copy) *hd_copy = *hd;
    }
    int *region_copy = NULL;
    if (region) {
        region_copy = malloc(sizeof(int));
        if (region_copy) *region_copy = *region;
    }
    form_values_t *result = form_values_create_internal (
        memory_copy,
        bandwidth_copy,
        ips_copy,
        os_copy,
        cp_copy,
        raid_copy,
        hd_copy,
        region_copy
        );
    if (!result) {
        free(memory_copy);
        free(bandwidth_copy);
        free(ips_copy);
        free(os_copy);
        free(cp_copy);
        free(raid_copy);
        free(hd_copy);
        free(region_copy);
    }
    return result;
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
    if (form_values->memory) {
        free(form_values->memory);
        form_values->memory = NULL;
    }
    if (form_values->bandwidth) {
        free(form_values->bandwidth);
        form_values->bandwidth = NULL;
    }
    if (form_values->ips) {
        free(form_values->ips);
        form_values->ips = NULL;
    }
    if (form_values->os) {
        free(form_values->os);
        form_values->os = NULL;
    }
    if (form_values->cp) {
        free(form_values->cp);
        form_values->cp = NULL;
    }
    if (form_values->raid) {
        free(form_values->raid);
        form_values->raid = NULL;
    }
    if (form_values->hd) {
        free(form_values->hd);
        form_values->hd = NULL;
    }
    if (form_values->region) {
        free(form_values->region);
        form_values->region = NULL;
    }
    free(form_values);
}

cJSON *form_values_convertToJSON(form_values_t *form_values) {
    cJSON *item = cJSON_CreateObject();

    // form_values->memory
    if(form_values->memory) {
    if(cJSON_AddNumberToObject(item, "memory", *form_values->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->bandwidth
    if(form_values->bandwidth) {
    if(cJSON_AddNumberToObject(item, "bandwidth", *form_values->bandwidth) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->ips
    if(form_values->ips) {
    if(cJSON_AddNumberToObject(item, "ips", *form_values->ips) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->os
    if(form_values->os) {
    if(cJSON_AddNumberToObject(item, "os", *form_values->os) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->cp
    if(form_values->cp) {
    if(cJSON_AddNumberToObject(item, "cp", *form_values->cp) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->raid
    if(form_values->raid) {
    if(cJSON_AddNumberToObject(item, "raid", *form_values->raid) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->hd
    if(form_values->hd) {
    if(cJSON_AddNumberToObject(item, "hd", *form_values->hd) == NULL) {
    goto fail; //Numeric
    }
    }


    // form_values->region
    if(form_values->region) {
    if(cJSON_AddNumberToObject(item, "region", *form_values->region) == NULL) {
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

    // define the local variable for form_values->memory
    int *memory_local_var = NULL;

    // define the local variable for form_values->bandwidth
    int *bandwidth_local_var = NULL;

    // define the local variable for form_values->ips
    int *ips_local_var = NULL;

    // define the local variable for form_values->os
    int *os_local_var = NULL;

    // define the local variable for form_values->cp
    int *cp_local_var = NULL;

    // define the local variable for form_values->raid
    int *raid_local_var = NULL;

    // define the local variable for form_values->hd
    int *hd_local_var = NULL;

    // define the local variable for form_values->region
    int *region_local_var = NULL;

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
    memory_local_var = malloc(sizeof(int));
    if(!memory_local_var)
    {
        goto end;
    }
    *memory_local_var = memory->valuedouble;
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
    bandwidth_local_var = malloc(sizeof(int));
    if(!bandwidth_local_var)
    {
        goto end;
    }
    *bandwidth_local_var = bandwidth->valuedouble;
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
    ips_local_var = malloc(sizeof(int));
    if(!ips_local_var)
    {
        goto end;
    }
    *ips_local_var = ips->valuedouble;
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
    os_local_var = malloc(sizeof(int));
    if(!os_local_var)
    {
        goto end;
    }
    *os_local_var = os->valuedouble;
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
    cp_local_var = malloc(sizeof(int));
    if(!cp_local_var)
    {
        goto end;
    }
    *cp_local_var = cp->valuedouble;
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
    raid_local_var = malloc(sizeof(int));
    if(!raid_local_var)
    {
        goto end;
    }
    *raid_local_var = raid->valuedouble;
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
    hd_local_var = malloc(sizeof(int));
    if(!hd_local_var)
    {
        goto end;
    }
    *hd_local_var = hd->valuedouble;
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
    region_local_var = malloc(sizeof(int));
    if(!region_local_var)
    {
        goto end;
    }
    *region_local_var = region->valuedouble;
    }



    form_values_local_var = form_values_create_internal (
        memory_local_var,
        bandwidth_local_var,
        ips_local_var,
        os_local_var,
        cp_local_var,
        raid_local_var,
        hd_local_var,
        region_local_var
        );

    if (!form_values_local_var) {
        goto end;
    }

    return form_values_local_var;
end:
    if (memory_local_var) {
        free(memory_local_var);
        memory_local_var = NULL;
    }
    if (bandwidth_local_var) {
        free(bandwidth_local_var);
        bandwidth_local_var = NULL;
    }
    if (ips_local_var) {
        free(ips_local_var);
        ips_local_var = NULL;
    }
    if (os_local_var) {
        free(os_local_var);
        os_local_var = NULL;
    }
    if (cp_local_var) {
        free(cp_local_var);
        cp_local_var = NULL;
    }
    if (raid_local_var) {
        free(raid_local_var);
        raid_local_var = NULL;
    }
    if (hd_local_var) {
        free(hd_local_var);
        hd_local_var = NULL;
    }
    if (region_local_var) {
        free(region_local_var);
        region_local_var = NULL;
    }
    return NULL;

}
