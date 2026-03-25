#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_service_addons.h"



static vps_service_addons_t *vps_service_addons_create_internal(
    int *has_cpanel,
    int *has_directadmin,
    int *has_fantastico,
    int *has_softaculous,
    int *has_hdspace,
    int *dedicated_ip,
    list_t *extra_ips,
    list_t *extra_ips6,
    list_t *unpaid_ips,
    list_t *ips,
    list_t *ips6,
    int *cpanel_id,
    int *cost,
    list_t *ids,
    list_t *rdata
    ) {
    vps_service_addons_t *vps_service_addons_local_var = malloc(sizeof(vps_service_addons_t));
    if (!vps_service_addons_local_var) {
        return NULL;
    }
    memset(vps_service_addons_local_var, 0, sizeof(vps_service_addons_t));
    vps_service_addons_local_var->_library_owned = 1;
    vps_service_addons_local_var->has_cpanel = has_cpanel;
    vps_service_addons_local_var->has_directadmin = has_directadmin;
    vps_service_addons_local_var->has_fantastico = has_fantastico;
    vps_service_addons_local_var->has_softaculous = has_softaculous;
    vps_service_addons_local_var->has_hdspace = has_hdspace;
    vps_service_addons_local_var->dedicated_ip = dedicated_ip;
    vps_service_addons_local_var->extra_ips = extra_ips;
    vps_service_addons_local_var->extra_ips6 = extra_ips6;
    vps_service_addons_local_var->unpaid_ips = unpaid_ips;
    vps_service_addons_local_var->ips = ips;
    vps_service_addons_local_var->ips6 = ips6;
    vps_service_addons_local_var->cpanel_id = cpanel_id;
    vps_service_addons_local_var->cost = cost;
    vps_service_addons_local_var->ids = ids;
    vps_service_addons_local_var->rdata = rdata;
    return vps_service_addons_local_var;
}

__attribute__((deprecated)) vps_service_addons_t *vps_service_addons_create(
    int *has_cpanel,
    int *has_directadmin,
    int *has_fantastico,
    int *has_softaculous,
    int *has_hdspace,
    int *dedicated_ip,
    list_t *extra_ips,
    list_t *extra_ips6,
    list_t *unpaid_ips,
    list_t *ips,
    list_t *ips6,
    int *cpanel_id,
    int *cost,
    list_t *ids,
    list_t *rdata
    ) {
    int *has_cpanel_copy = NULL;
    if (has_cpanel) {
        has_cpanel_copy = malloc(sizeof(int));
        if (has_cpanel_copy) *has_cpanel_copy = *has_cpanel;
    }
    int *has_directadmin_copy = NULL;
    if (has_directadmin) {
        has_directadmin_copy = malloc(sizeof(int));
        if (has_directadmin_copy) *has_directadmin_copy = *has_directadmin;
    }
    int *has_fantastico_copy = NULL;
    if (has_fantastico) {
        has_fantastico_copy = malloc(sizeof(int));
        if (has_fantastico_copy) *has_fantastico_copy = *has_fantastico;
    }
    int *has_softaculous_copy = NULL;
    if (has_softaculous) {
        has_softaculous_copy = malloc(sizeof(int));
        if (has_softaculous_copy) *has_softaculous_copy = *has_softaculous;
    }
    int *has_hdspace_copy = NULL;
    if (has_hdspace) {
        has_hdspace_copy = malloc(sizeof(int));
        if (has_hdspace_copy) *has_hdspace_copy = *has_hdspace;
    }
    int *dedicated_ip_copy = NULL;
    if (dedicated_ip) {
        dedicated_ip_copy = malloc(sizeof(int));
        if (dedicated_ip_copy) *dedicated_ip_copy = *dedicated_ip;
    }
    int *cpanel_id_copy = NULL;
    if (cpanel_id) {
        cpanel_id_copy = malloc(sizeof(int));
        if (cpanel_id_copy) *cpanel_id_copy = *cpanel_id;
    }
    int *cost_copy = NULL;
    if (cost) {
        cost_copy = malloc(sizeof(int));
        if (cost_copy) *cost_copy = *cost;
    }
    vps_service_addons_t *result = vps_service_addons_create_internal (
        has_cpanel_copy,
        has_directadmin_copy,
        has_fantastico_copy,
        has_softaculous_copy,
        has_hdspace_copy,
        dedicated_ip_copy,
        extra_ips,
        extra_ips6,
        unpaid_ips,
        ips,
        ips6,
        cpanel_id_copy,
        cost_copy,
        ids,
        rdata
        );
    if (!result) {
        free(has_cpanel_copy);
        free(has_directadmin_copy);
        free(has_fantastico_copy);
        free(has_softaculous_copy);
        free(has_hdspace_copy);
        free(dedicated_ip_copy);
        free(cpanel_id_copy);
        free(cost_copy);
    }
    return result;
}

void vps_service_addons_free(vps_service_addons_t *vps_service_addons) {
    if(NULL == vps_service_addons){
        return ;
    }
    if(vps_service_addons->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_service_addons_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_service_addons->has_cpanel) {
        free(vps_service_addons->has_cpanel);
        vps_service_addons->has_cpanel = NULL;
    }
    if (vps_service_addons->has_directadmin) {
        free(vps_service_addons->has_directadmin);
        vps_service_addons->has_directadmin = NULL;
    }
    if (vps_service_addons->has_fantastico) {
        free(vps_service_addons->has_fantastico);
        vps_service_addons->has_fantastico = NULL;
    }
    if (vps_service_addons->has_softaculous) {
        free(vps_service_addons->has_softaculous);
        vps_service_addons->has_softaculous = NULL;
    }
    if (vps_service_addons->has_hdspace) {
        free(vps_service_addons->has_hdspace);
        vps_service_addons->has_hdspace = NULL;
    }
    if (vps_service_addons->dedicated_ip) {
        free(vps_service_addons->dedicated_ip);
        vps_service_addons->dedicated_ip = NULL;
    }
    if (vps_service_addons->extra_ips) {
        list_ForEach(listEntry, vps_service_addons->extra_ips) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->extra_ips);
        vps_service_addons->extra_ips = NULL;
    }
    if (vps_service_addons->extra_ips6) {
        list_ForEach(listEntry, vps_service_addons->extra_ips6) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->extra_ips6);
        vps_service_addons->extra_ips6 = NULL;
    }
    if (vps_service_addons->unpaid_ips) {
        list_ForEach(listEntry, vps_service_addons->unpaid_ips) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->unpaid_ips);
        vps_service_addons->unpaid_ips = NULL;
    }
    if (vps_service_addons->ips) {
        list_ForEach(listEntry, vps_service_addons->ips) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->ips);
        vps_service_addons->ips = NULL;
    }
    if (vps_service_addons->ips6) {
        list_ForEach(listEntry, vps_service_addons->ips6) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->ips6);
        vps_service_addons->ips6 = NULL;
    }
    if (vps_service_addons->cpanel_id) {
        free(vps_service_addons->cpanel_id);
        vps_service_addons->cpanel_id = NULL;
    }
    if (vps_service_addons->cost) {
        free(vps_service_addons->cost);
        vps_service_addons->cost = NULL;
    }
    if (vps_service_addons->ids) {
        list_ForEach(listEntry, vps_service_addons->ids) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->ids);
        vps_service_addons->ids = NULL;
    }
    if (vps_service_addons->rdata) {
        list_ForEach(listEntry, vps_service_addons->rdata) {
            free(listEntry->data);
        }
        list_freeList(vps_service_addons->rdata);
        vps_service_addons->rdata = NULL;
    }
    free(vps_service_addons);
}

cJSON *vps_service_addons_convertToJSON(vps_service_addons_t *vps_service_addons) {
    cJSON *item = cJSON_CreateObject();

    // vps_service_addons->has_cpanel
    if(vps_service_addons->has_cpanel) {
    if(cJSON_AddBoolToObject(item, "has_cpanel", *vps_service_addons->has_cpanel) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->has_directadmin
    if(vps_service_addons->has_directadmin) {
    if(cJSON_AddBoolToObject(item, "has_directadmin", *vps_service_addons->has_directadmin) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->has_fantastico
    if(vps_service_addons->has_fantastico) {
    if(cJSON_AddBoolToObject(item, "has_fantastico", *vps_service_addons->has_fantastico) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->has_softaculous
    if(vps_service_addons->has_softaculous) {
    if(cJSON_AddBoolToObject(item, "has_softaculous", *vps_service_addons->has_softaculous) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->has_hdspace
    if(vps_service_addons->has_hdspace) {
    if(cJSON_AddBoolToObject(item, "has_hdspace", *vps_service_addons->has_hdspace) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->dedicated_ip
    if(vps_service_addons->dedicated_ip) {
    if(cJSON_AddBoolToObject(item, "dedicated_ip", *vps_service_addons->dedicated_ip) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_service_addons->extra_ips
    if(vps_service_addons->extra_ips) {
    cJSON *extra_ips = cJSON_AddArrayToObject(item, "extra_ips");
    if(extra_ips == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *extra_ipsListEntry;
    list_ForEach(extra_ipsListEntry, vps_service_addons->extra_ips) {
    if(cJSON_AddStringToObject(extra_ips, "", extra_ipsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->extra_ips6
    if(vps_service_addons->extra_ips6) {
    cJSON *extra_ips6 = cJSON_AddArrayToObject(item, "extra_ips6");
    if(extra_ips6 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *extra_ips6ListEntry;
    list_ForEach(extra_ips6ListEntry, vps_service_addons->extra_ips6) {
    if(cJSON_AddStringToObject(extra_ips6, "", extra_ips6ListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->unpaid_ips
    if(vps_service_addons->unpaid_ips) {
    cJSON *unpaid_ips = cJSON_AddArrayToObject(item, "unpaid_ips");
    if(unpaid_ips == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *unpaid_ipsListEntry;
    list_ForEach(unpaid_ipsListEntry, vps_service_addons->unpaid_ips) {
    if(cJSON_AddStringToObject(unpaid_ips, "", unpaid_ipsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->ips
    if(vps_service_addons->ips) {
    cJSON *ips = cJSON_AddArrayToObject(item, "ips");
    if(ips == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *ipsListEntry;
    list_ForEach(ipsListEntry, vps_service_addons->ips) {
    if(cJSON_AddStringToObject(ips, "", ipsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->ips6
    if(vps_service_addons->ips6) {
    cJSON *ips6 = cJSON_AddArrayToObject(item, "ips6");
    if(ips6 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *ips6ListEntry;
    list_ForEach(ips6ListEntry, vps_service_addons->ips6) {
    if(cJSON_AddStringToObject(ips6, "", ips6ListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->cpanel_id
    if(vps_service_addons->cpanel_id) {
    if(cJSON_AddNumberToObject(item, "cpanel_id", *vps_service_addons->cpanel_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_service_addons->cost
    if(vps_service_addons->cost) {
    if(cJSON_AddNumberToObject(item, "cost", *vps_service_addons->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_service_addons->ids
    if(vps_service_addons->ids) {
    cJSON *ids = cJSON_AddArrayToObject(item, "ids");
    if(ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *idsListEntry;
    list_ForEach(idsListEntry, vps_service_addons->ids) {
    if(cJSON_AddStringToObject(ids, "", idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // vps_service_addons->rdata
    if(vps_service_addons->rdata) {
    cJSON *rdata = cJSON_AddArrayToObject(item, "rdata");
    if(rdata == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *rdataListEntry;
    list_ForEach(rdataListEntry, vps_service_addons->rdata) {
    if(cJSON_AddStringToObject(rdata, "", rdataListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_service_addons_t *vps_service_addons_parseFromJSON(cJSON *vps_service_addonsJSON){

    vps_service_addons_t *vps_service_addons_local_var = NULL;

    // define the local variable for vps_service_addons->has_cpanel
    int *has_cpanel_local_var = NULL;

    // define the local variable for vps_service_addons->has_directadmin
    int *has_directadmin_local_var = NULL;

    // define the local variable for vps_service_addons->has_fantastico
    int *has_fantastico_local_var = NULL;

    // define the local variable for vps_service_addons->has_softaculous
    int *has_softaculous_local_var = NULL;

    // define the local variable for vps_service_addons->has_hdspace
    int *has_hdspace_local_var = NULL;

    // define the local variable for vps_service_addons->dedicated_ip
    int *dedicated_ip_local_var = NULL;

    // define the local list for vps_service_addons->extra_ips
    list_t *extra_ipsList = NULL;

    // define the local list for vps_service_addons->extra_ips6
    list_t *extra_ips6List = NULL;

    // define the local list for vps_service_addons->unpaid_ips
    list_t *unpaid_ipsList = NULL;

    // define the local list for vps_service_addons->ips
    list_t *ipsList = NULL;

    // define the local list for vps_service_addons->ips6
    list_t *ips6List = NULL;

    // define the local variable for vps_service_addons->cpanel_id
    int *cpanel_id_local_var = NULL;

    // define the local variable for vps_service_addons->cost
    int *cost_local_var = NULL;

    // define the local list for vps_service_addons->ids
    list_t *idsList = NULL;

    // define the local list for vps_service_addons->rdata
    list_t *rdataList = NULL;

    // vps_service_addons->has_cpanel
    cJSON *has_cpanel = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "has_cpanel");
    if (cJSON_IsNull(has_cpanel)) {
        has_cpanel = NULL;
    }
    if (has_cpanel) { 
    if(!cJSON_IsBool(has_cpanel))
    {
    goto end; //Bool
    }
    has_cpanel_local_var = malloc(sizeof(int));
    if(!has_cpanel_local_var)
    {
        goto end;
    }
    *has_cpanel_local_var = has_cpanel->valueint;
    }

    // vps_service_addons->has_directadmin
    cJSON *has_directadmin = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "has_directadmin");
    if (cJSON_IsNull(has_directadmin)) {
        has_directadmin = NULL;
    }
    if (has_directadmin) { 
    if(!cJSON_IsBool(has_directadmin))
    {
    goto end; //Bool
    }
    has_directadmin_local_var = malloc(sizeof(int));
    if(!has_directadmin_local_var)
    {
        goto end;
    }
    *has_directadmin_local_var = has_directadmin->valueint;
    }

    // vps_service_addons->has_fantastico
    cJSON *has_fantastico = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "has_fantastico");
    if (cJSON_IsNull(has_fantastico)) {
        has_fantastico = NULL;
    }
    if (has_fantastico) { 
    if(!cJSON_IsBool(has_fantastico))
    {
    goto end; //Bool
    }
    has_fantastico_local_var = malloc(sizeof(int));
    if(!has_fantastico_local_var)
    {
        goto end;
    }
    *has_fantastico_local_var = has_fantastico->valueint;
    }

    // vps_service_addons->has_softaculous
    cJSON *has_softaculous = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "has_softaculous");
    if (cJSON_IsNull(has_softaculous)) {
        has_softaculous = NULL;
    }
    if (has_softaculous) { 
    if(!cJSON_IsBool(has_softaculous))
    {
    goto end; //Bool
    }
    has_softaculous_local_var = malloc(sizeof(int));
    if(!has_softaculous_local_var)
    {
        goto end;
    }
    *has_softaculous_local_var = has_softaculous->valueint;
    }

    // vps_service_addons->has_hdspace
    cJSON *has_hdspace = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "has_hdspace");
    if (cJSON_IsNull(has_hdspace)) {
        has_hdspace = NULL;
    }
    if (has_hdspace) { 
    if(!cJSON_IsBool(has_hdspace))
    {
    goto end; //Bool
    }
    has_hdspace_local_var = malloc(sizeof(int));
    if(!has_hdspace_local_var)
    {
        goto end;
    }
    *has_hdspace_local_var = has_hdspace->valueint;
    }

    // vps_service_addons->dedicated_ip
    cJSON *dedicated_ip = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "dedicated_ip");
    if (cJSON_IsNull(dedicated_ip)) {
        dedicated_ip = NULL;
    }
    if (dedicated_ip) { 
    if(!cJSON_IsBool(dedicated_ip))
    {
    goto end; //Bool
    }
    dedicated_ip_local_var = malloc(sizeof(int));
    if(!dedicated_ip_local_var)
    {
        goto end;
    }
    *dedicated_ip_local_var = dedicated_ip->valueint;
    }

    // vps_service_addons->extra_ips
    cJSON *extra_ips = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "extra_ips");
    if (cJSON_IsNull(extra_ips)) {
        extra_ips = NULL;
    }
    if (extra_ips) { 
    cJSON *extra_ips_local = NULL;
    if(!cJSON_IsArray(extra_ips)) {
        goto end;//primitive container
    }
    extra_ipsList = list_createList();

    cJSON_ArrayForEach(extra_ips_local, extra_ips)
    {
        if(!cJSON_IsString(extra_ips_local))
        {
            goto end;
        }
        list_addElement(extra_ipsList , strdup(extra_ips_local->valuestring));
    }
    }

    // vps_service_addons->extra_ips6
    cJSON *extra_ips6 = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "extra_ips6");
    if (cJSON_IsNull(extra_ips6)) {
        extra_ips6 = NULL;
    }
    if (extra_ips6) { 
    cJSON *extra_ips6_local = NULL;
    if(!cJSON_IsArray(extra_ips6)) {
        goto end;//primitive container
    }
    extra_ips6List = list_createList();

    cJSON_ArrayForEach(extra_ips6_local, extra_ips6)
    {
        if(!cJSON_IsString(extra_ips6_local))
        {
            goto end;
        }
        list_addElement(extra_ips6List , strdup(extra_ips6_local->valuestring));
    }
    }

    // vps_service_addons->unpaid_ips
    cJSON *unpaid_ips = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "unpaid_ips");
    if (cJSON_IsNull(unpaid_ips)) {
        unpaid_ips = NULL;
    }
    if (unpaid_ips) { 
    cJSON *unpaid_ips_local = NULL;
    if(!cJSON_IsArray(unpaid_ips)) {
        goto end;//primitive container
    }
    unpaid_ipsList = list_createList();

    cJSON_ArrayForEach(unpaid_ips_local, unpaid_ips)
    {
        if(!cJSON_IsString(unpaid_ips_local))
        {
            goto end;
        }
        list_addElement(unpaid_ipsList , strdup(unpaid_ips_local->valuestring));
    }
    }

    // vps_service_addons->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    cJSON *ips_local = NULL;
    if(!cJSON_IsArray(ips)) {
        goto end;//primitive container
    }
    ipsList = list_createList();

    cJSON_ArrayForEach(ips_local, ips)
    {
        if(!cJSON_IsString(ips_local))
        {
            goto end;
        }
        list_addElement(ipsList , strdup(ips_local->valuestring));
    }
    }

    // vps_service_addons->ips6
    cJSON *ips6 = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "ips6");
    if (cJSON_IsNull(ips6)) {
        ips6 = NULL;
    }
    if (ips6) { 
    cJSON *ips6_local = NULL;
    if(!cJSON_IsArray(ips6)) {
        goto end;//primitive container
    }
    ips6List = list_createList();

    cJSON_ArrayForEach(ips6_local, ips6)
    {
        if(!cJSON_IsString(ips6_local))
        {
            goto end;
        }
        list_addElement(ips6List , strdup(ips6_local->valuestring));
    }
    }

    // vps_service_addons->cpanel_id
    cJSON *cpanel_id = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "cpanel_id");
    if (cJSON_IsNull(cpanel_id)) {
        cpanel_id = NULL;
    }
    if (cpanel_id) { 
    if(!cJSON_IsNumber(cpanel_id))
    {
    goto end; //Numeric
    }
    cpanel_id_local_var = malloc(sizeof(int));
    if(!cpanel_id_local_var)
    {
        goto end;
    }
    *cpanel_id_local_var = cpanel_id->valuedouble;
    }

    // vps_service_addons->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    cost_local_var = malloc(sizeof(int));
    if(!cost_local_var)
    {
        goto end;
    }
    *cost_local_var = cost->valuedouble;
    }

    // vps_service_addons->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "ids");
    if (cJSON_IsNull(ids)) {
        ids = NULL;
    }
    if (ids) { 
    cJSON *ids_local = NULL;
    if(!cJSON_IsArray(ids)) {
        goto end;//primitive container
    }
    idsList = list_createList();

    cJSON_ArrayForEach(ids_local, ids)
    {
        if(!cJSON_IsString(ids_local))
        {
            goto end;
        }
        list_addElement(idsList , strdup(ids_local->valuestring));
    }
    }

    // vps_service_addons->rdata
    cJSON *rdata = cJSON_GetObjectItemCaseSensitive(vps_service_addonsJSON, "rdata");
    if (cJSON_IsNull(rdata)) {
        rdata = NULL;
    }
    if (rdata) { 
    cJSON *rdata_local = NULL;
    if(!cJSON_IsArray(rdata)) {
        goto end;//primitive container
    }
    rdataList = list_createList();

    cJSON_ArrayForEach(rdata_local, rdata)
    {
        if(!cJSON_IsString(rdata_local))
        {
            goto end;
        }
        list_addElement(rdataList , strdup(rdata_local->valuestring));
    }
    }



    vps_service_addons_local_var = vps_service_addons_create_internal (
        has_cpanel_local_var,
        has_directadmin_local_var,
        has_fantastico_local_var,
        has_softaculous_local_var,
        has_hdspace_local_var,
        dedicated_ip_local_var,
        extra_ips ? extra_ipsList : NULL,
        extra_ips6 ? extra_ips6List : NULL,
        unpaid_ips ? unpaid_ipsList : NULL,
        ips ? ipsList : NULL,
        ips6 ? ips6List : NULL,
        cpanel_id_local_var,
        cost_local_var,
        ids ? idsList : NULL,
        rdata ? rdataList : NULL
        );

    if (!vps_service_addons_local_var) {
        goto end;
    }

    return vps_service_addons_local_var;
end:
    if (has_cpanel_local_var) {
        free(has_cpanel_local_var);
        has_cpanel_local_var = NULL;
    }
    if (has_directadmin_local_var) {
        free(has_directadmin_local_var);
        has_directadmin_local_var = NULL;
    }
    if (has_fantastico_local_var) {
        free(has_fantastico_local_var);
        has_fantastico_local_var = NULL;
    }
    if (has_softaculous_local_var) {
        free(has_softaculous_local_var);
        has_softaculous_local_var = NULL;
    }
    if (has_hdspace_local_var) {
        free(has_hdspace_local_var);
        has_hdspace_local_var = NULL;
    }
    if (dedicated_ip_local_var) {
        free(dedicated_ip_local_var);
        dedicated_ip_local_var = NULL;
    }
    if (extra_ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, extra_ipsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(extra_ipsList);
        extra_ipsList = NULL;
    }
    if (extra_ips6List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, extra_ips6List) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(extra_ips6List);
        extra_ips6List = NULL;
    }
    if (unpaid_ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, unpaid_ipsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(unpaid_ipsList);
        unpaid_ipsList = NULL;
    }
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    if (ips6List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ips6List) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ips6List);
        ips6List = NULL;
    }
    if (cpanel_id_local_var) {
        free(cpanel_id_local_var);
        cpanel_id_local_var = NULL;
    }
    if (cost_local_var) {
        free(cost_local_var);
        cost_local_var = NULL;
    }
    if (idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(idsList);
        idsList = NULL;
    }
    if (rdataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rdataList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rdataList);
        rdataList = NULL;
    }
    return NULL;

}
