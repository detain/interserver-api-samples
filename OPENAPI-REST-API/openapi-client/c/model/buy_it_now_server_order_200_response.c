#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_server_order_200_response.h"



static buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_create_internal(
    list_t *bandwidth,
    list_t *ips,
    list_t *os,
    list_t *cp,
    list_t *raid
    ) {
    buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_local_var = malloc(sizeof(buy_it_now_server_order_200_response_t));
    if (!buy_it_now_server_order_200_response_local_var) {
        return NULL;
    }
    buy_it_now_server_order_200_response_local_var->bandwidth = bandwidth;
    buy_it_now_server_order_200_response_local_var->ips = ips;
    buy_it_now_server_order_200_response_local_var->os = os;
    buy_it_now_server_order_200_response_local_var->cp = cp;
    buy_it_now_server_order_200_response_local_var->raid = raid;

    buy_it_now_server_order_200_response_local_var->_library_owned = 1;
    return buy_it_now_server_order_200_response_local_var;
}

__attribute__((deprecated)) buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_create(
    list_t *bandwidth,
    list_t *ips,
    list_t *os,
    list_t *cp,
    list_t *raid
    ) {
    return buy_it_now_server_order_200_response_create_internal (
        bandwidth,
        ips,
        os,
        cp,
        raid
        );
}

void buy_it_now_server_order_200_response_free(buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response) {
    if(NULL == buy_it_now_server_order_200_response){
        return ;
    }
    if(buy_it_now_server_order_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_server_order_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buy_it_now_server_order_200_response->bandwidth) {
        list_ForEach(listEntry, buy_it_now_server_order_200_response->bandwidth) {
            buy_it_now_server_order_200_response_bandwidth_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_server_order_200_response->bandwidth);
        buy_it_now_server_order_200_response->bandwidth = NULL;
    }
    if (buy_it_now_server_order_200_response->ips) {
        list_ForEach(listEntry, buy_it_now_server_order_200_response->ips) {
            buy_it_now_server_order_200_response_ips_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_server_order_200_response->ips);
        buy_it_now_server_order_200_response->ips = NULL;
    }
    if (buy_it_now_server_order_200_response->os) {
        list_ForEach(listEntry, buy_it_now_server_order_200_response->os) {
            buy_it_now_server_order_200_response_os_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_server_order_200_response->os);
        buy_it_now_server_order_200_response->os = NULL;
    }
    if (buy_it_now_server_order_200_response->cp) {
        list_ForEach(listEntry, buy_it_now_server_order_200_response->cp) {
            buy_it_now_server_order_200_response_cp_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_server_order_200_response->cp);
        buy_it_now_server_order_200_response->cp = NULL;
    }
    if (buy_it_now_server_order_200_response->raid) {
        list_ForEach(listEntry, buy_it_now_server_order_200_response->raid) {
            buy_it_now_server_order_200_response_raid_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_server_order_200_response->raid);
        buy_it_now_server_order_200_response->raid = NULL;
    }
    free(buy_it_now_server_order_200_response);
}

cJSON *buy_it_now_server_order_200_response_convertToJSON(buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response) {
    cJSON *item = cJSON_CreateObject();

    // buy_it_now_server_order_200_response->bandwidth
    if(buy_it_now_server_order_200_response->bandwidth) {
    cJSON *bandwidth = cJSON_AddArrayToObject(item, "bandwidth");
    if(bandwidth == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *bandwidthListEntry;
    if (buy_it_now_server_order_200_response->bandwidth) {
    list_ForEach(bandwidthListEntry, buy_it_now_server_order_200_response->bandwidth) {
    cJSON *itemLocal = buy_it_now_server_order_200_response_bandwidth_inner_convertToJSON(bandwidthListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(bandwidth, itemLocal);
    }
    }
    }


    // buy_it_now_server_order_200_response->ips
    if(buy_it_now_server_order_200_response->ips) {
    cJSON *ips = cJSON_AddArrayToObject(item, "ips");
    if(ips == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ipsListEntry;
    if (buy_it_now_server_order_200_response->ips) {
    list_ForEach(ipsListEntry, buy_it_now_server_order_200_response->ips) {
    cJSON *itemLocal = buy_it_now_server_order_200_response_ips_inner_convertToJSON(ipsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ips, itemLocal);
    }
    }
    }


    // buy_it_now_server_order_200_response->os
    if(buy_it_now_server_order_200_response->os) {
    cJSON *os = cJSON_AddArrayToObject(item, "os");
    if(os == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *osListEntry;
    if (buy_it_now_server_order_200_response->os) {
    list_ForEach(osListEntry, buy_it_now_server_order_200_response->os) {
    cJSON *itemLocal = buy_it_now_server_order_200_response_os_inner_convertToJSON(osListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(os, itemLocal);
    }
    }
    }


    // buy_it_now_server_order_200_response->cp
    if(buy_it_now_server_order_200_response->cp) {
    cJSON *cp = cJSON_AddArrayToObject(item, "cp");
    if(cp == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cpListEntry;
    if (buy_it_now_server_order_200_response->cp) {
    list_ForEach(cpListEntry, buy_it_now_server_order_200_response->cp) {
    cJSON *itemLocal = buy_it_now_server_order_200_response_cp_inner_convertToJSON(cpListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cp, itemLocal);
    }
    }
    }


    // buy_it_now_server_order_200_response->raid
    if(buy_it_now_server_order_200_response->raid) {
    cJSON *raid = cJSON_AddArrayToObject(item, "raid");
    if(raid == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *raidListEntry;
    if (buy_it_now_server_order_200_response->raid) {
    list_ForEach(raidListEntry, buy_it_now_server_order_200_response->raid) {
    cJSON *itemLocal = buy_it_now_server_order_200_response_raid_inner_convertToJSON(raidListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(raid, itemLocal);
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

buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_parseFromJSON(cJSON *buy_it_now_server_order_200_responseJSON){

    buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_local_var = NULL;

    // define the local list for buy_it_now_server_order_200_response->bandwidth
    list_t *bandwidthList = NULL;

    // define the local list for buy_it_now_server_order_200_response->ips
    list_t *ipsList = NULL;

    // define the local list for buy_it_now_server_order_200_response->os
    list_t *osList = NULL;

    // define the local list for buy_it_now_server_order_200_response->cp
    list_t *cpList = NULL;

    // define the local list for buy_it_now_server_order_200_response->raid
    list_t *raidList = NULL;

    // buy_it_now_server_order_200_response->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_responseJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    cJSON *bandwidth_local_nonprimitive = NULL;
    if(!cJSON_IsArray(bandwidth)){
        goto end; //nonprimitive container
    }

    bandwidthList = list_createList();

    cJSON_ArrayForEach(bandwidth_local_nonprimitive,bandwidth )
    {
        if(!cJSON_IsObject(bandwidth_local_nonprimitive)){
            goto end;
        }
        buy_it_now_server_order_200_response_bandwidth_inner_t *bandwidthItem = buy_it_now_server_order_200_response_bandwidth_inner_parseFromJSON(bandwidth_local_nonprimitive);

        list_addElement(bandwidthList, bandwidthItem);
    }
    }

    // buy_it_now_server_order_200_response->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_responseJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    cJSON *ips_local_nonprimitive = NULL;
    if(!cJSON_IsArray(ips)){
        goto end; //nonprimitive container
    }

    ipsList = list_createList();

    cJSON_ArrayForEach(ips_local_nonprimitive,ips )
    {
        if(!cJSON_IsObject(ips_local_nonprimitive)){
            goto end;
        }
        buy_it_now_server_order_200_response_ips_inner_t *ipsItem = buy_it_now_server_order_200_response_ips_inner_parseFromJSON(ips_local_nonprimitive);

        list_addElement(ipsList, ipsItem);
    }
    }

    // buy_it_now_server_order_200_response->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_responseJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    cJSON *os_local_nonprimitive = NULL;
    if(!cJSON_IsArray(os)){
        goto end; //nonprimitive container
    }

    osList = list_createList();

    cJSON_ArrayForEach(os_local_nonprimitive,os )
    {
        if(!cJSON_IsObject(os_local_nonprimitive)){
            goto end;
        }
        buy_it_now_server_order_200_response_os_inner_t *osItem = buy_it_now_server_order_200_response_os_inner_parseFromJSON(os_local_nonprimitive);

        list_addElement(osList, osItem);
    }
    }

    // buy_it_now_server_order_200_response->cp
    cJSON *cp = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_responseJSON, "cp");
    if (cJSON_IsNull(cp)) {
        cp = NULL;
    }
    if (cp) { 
    cJSON *cp_local_nonprimitive = NULL;
    if(!cJSON_IsArray(cp)){
        goto end; //nonprimitive container
    }

    cpList = list_createList();

    cJSON_ArrayForEach(cp_local_nonprimitive,cp )
    {
        if(!cJSON_IsObject(cp_local_nonprimitive)){
            goto end;
        }
        buy_it_now_server_order_200_response_cp_inner_t *cpItem = buy_it_now_server_order_200_response_cp_inner_parseFromJSON(cp_local_nonprimitive);

        list_addElement(cpList, cpItem);
    }
    }

    // buy_it_now_server_order_200_response->raid
    cJSON *raid = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_responseJSON, "raid");
    if (cJSON_IsNull(raid)) {
        raid = NULL;
    }
    if (raid) { 
    cJSON *raid_local_nonprimitive = NULL;
    if(!cJSON_IsArray(raid)){
        goto end; //nonprimitive container
    }

    raidList = list_createList();

    cJSON_ArrayForEach(raid_local_nonprimitive,raid )
    {
        if(!cJSON_IsObject(raid_local_nonprimitive)){
            goto end;
        }
        buy_it_now_server_order_200_response_raid_inner_t *raidItem = buy_it_now_server_order_200_response_raid_inner_parseFromJSON(raid_local_nonprimitive);

        list_addElement(raidList, raidItem);
    }
    }


    buy_it_now_server_order_200_response_local_var = buy_it_now_server_order_200_response_create_internal (
        bandwidth ? bandwidthList : NULL,
        ips ? ipsList : NULL,
        os ? osList : NULL,
        cp ? cpList : NULL,
        raid ? raidList : NULL
        );

    return buy_it_now_server_order_200_response_local_var;
end:
    if (bandwidthList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, bandwidthList) {
            buy_it_now_server_order_200_response_bandwidth_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(bandwidthList);
        bandwidthList = NULL;
    }
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            buy_it_now_server_order_200_response_ips_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    if (osList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, osList) {
            buy_it_now_server_order_200_response_os_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(osList);
        osList = NULL;
    }
    if (cpList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cpList) {
            buy_it_now_server_order_200_response_cp_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cpList);
        cpList = NULL;
    }
    if (raidList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, raidList) {
            buy_it_now_server_order_200_response_raid_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(raidList);
        raidList = NULL;
    }
    return NULL;

}
