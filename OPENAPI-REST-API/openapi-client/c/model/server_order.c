#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order.h"



static server_order_t *server_order_create_internal(
    server_order_form_values_t *form_values,
    server_order_config_ids_t *config_ids,
    int *cpu,
    server_order_field_labels_t *field_label,
    server_order_cpu_li_t *cpu_li,
    server_order_memory_li_t *memory_li,
    server_order_bandwidth_li_t *bandwidth_li,
    server_order_ips_li_t *ips_li,
    server_order_os_li_t *os_li,
    server_order_cp_li_t *cp_li,
    list_t *raid_li
    ) {
    server_order_t *server_order_local_var = malloc(sizeof(server_order_t));
    if (!server_order_local_var) {
        return NULL;
    }
    memset(server_order_local_var, 0, sizeof(server_order_t));
    server_order_local_var->_library_owned = 1;
    server_order_local_var->form_values = form_values;
    server_order_local_var->config_ids = config_ids;
    server_order_local_var->cpu = cpu;
    server_order_local_var->field_label = field_label;
    server_order_local_var->cpu_li = cpu_li;
    server_order_local_var->memory_li = memory_li;
    server_order_local_var->bandwidth_li = bandwidth_li;
    server_order_local_var->ips_li = ips_li;
    server_order_local_var->os_li = os_li;
    server_order_local_var->cp_li = cp_li;
    server_order_local_var->raid_li = raid_li;
    return server_order_local_var;
}

__attribute__((deprecated)) server_order_t *server_order_create(
    server_order_form_values_t *form_values,
    server_order_config_ids_t *config_ids,
    int *cpu,
    server_order_field_labels_t *field_label,
    server_order_cpu_li_t *cpu_li,
    server_order_memory_li_t *memory_li,
    server_order_bandwidth_li_t *bandwidth_li,
    server_order_ips_li_t *ips_li,
    server_order_os_li_t *os_li,
    server_order_cp_li_t *cp_li,
    list_t *raid_li
    ) {
    int *cpu_copy = NULL;
    if (cpu) {
        cpu_copy = malloc(sizeof(int));
        if (cpu_copy) *cpu_copy = *cpu;
    }
    server_order_t *result = server_order_create_internal (
        form_values,
        config_ids,
        cpu_copy,
        field_label,
        cpu_li,
        memory_li,
        bandwidth_li,
        ips_li,
        os_li,
        cp_li,
        raid_li
        );
    if (!result) {
        free(cpu_copy);
    }
    return result;
}

void server_order_free(server_order_t *server_order) {
    if(NULL == server_order){
        return ;
    }
    if(server_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order->form_values) {
        server_order_form_values_free(server_order->form_values);
        server_order->form_values = NULL;
    }
    if (server_order->config_ids) {
        server_order_config_ids_free(server_order->config_ids);
        server_order->config_ids = NULL;
    }
    if (server_order->cpu) {
        free(server_order->cpu);
        server_order->cpu = NULL;
    }
    if (server_order->field_label) {
        server_order_field_labels_free(server_order->field_label);
        server_order->field_label = NULL;
    }
    if (server_order->cpu_li) {
        server_order_cpu_li_free(server_order->cpu_li);
        server_order->cpu_li = NULL;
    }
    if (server_order->memory_li) {
        server_order_memory_li_free(server_order->memory_li);
        server_order->memory_li = NULL;
    }
    if (server_order->bandwidth_li) {
        server_order_bandwidth_li_free(server_order->bandwidth_li);
        server_order->bandwidth_li = NULL;
    }
    if (server_order->ips_li) {
        server_order_ips_li_free(server_order->ips_li);
        server_order->ips_li = NULL;
    }
    if (server_order->os_li) {
        server_order_os_li_free(server_order->os_li);
        server_order->os_li = NULL;
    }
    if (server_order->cp_li) {
        server_order_cp_li_free(server_order->cp_li);
        server_order->cp_li = NULL;
    }
    if (server_order->raid_li) {
        list_ForEach(listEntry, server_order->raid_li) {
            server_order_raid_free(listEntry->data);
        }
        list_freeList(server_order->raid_li);
        server_order->raid_li = NULL;
    }
    free(server_order);
}

cJSON *server_order_convertToJSON(server_order_t *server_order) {
    cJSON *item = cJSON_CreateObject();

    // server_order->form_values
    if(server_order->form_values) {
    cJSON *form_values_local_JSON = server_order_form_values_convertToJSON(server_order->form_values);
    if(form_values_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "form_values", form_values_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->config_ids
    if(server_order->config_ids) {
    cJSON *config_ids_local_JSON = server_order_config_ids_convertToJSON(server_order->config_ids);
    if(config_ids_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "config_ids", config_ids_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->cpu
    if(server_order->cpu) {
    if(cJSON_AddNumberToObject(item, "cpu", *server_order->cpu) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order->field_label
    if(server_order->field_label) {
    cJSON *field_label_local_JSON = server_order_field_labels_convertToJSON(server_order->field_label);
    if(field_label_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "field_label", field_label_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->cpu_li
    if(server_order->cpu_li) {
    cJSON *cpu_li_local_JSON = server_order_cpu_li_convertToJSON(server_order->cpu_li);
    if(cpu_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpu_li", cpu_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->memory_li
    if(server_order->memory_li) {
    cJSON *memory_li_local_JSON = server_order_memory_li_convertToJSON(server_order->memory_li);
    if(memory_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_li", memory_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->bandwidth_li
    if(server_order->bandwidth_li) {
    cJSON *bandwidth_li_local_JSON = server_order_bandwidth_li_convertToJSON(server_order->bandwidth_li);
    if(bandwidth_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bandwidth_li", bandwidth_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->ips_li
    if(server_order->ips_li) {
    cJSON *ips_li_local_JSON = server_order_ips_li_convertToJSON(server_order->ips_li);
    if(ips_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ips_li", ips_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->os_li
    if(server_order->os_li) {
    cJSON *os_li_local_JSON = server_order_os_li_convertToJSON(server_order->os_li);
    if(os_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "os_li", os_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->cp_li
    if(server_order->cp_li) {
    cJSON *cp_li_local_JSON = server_order_cp_li_convertToJSON(server_order->cp_li);
    if(cp_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cp_li", cp_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order->raid_li
    if(server_order->raid_li) {
    cJSON *raid_li = cJSON_AddArrayToObject(item, "raid_li");
    if(raid_li == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *raid_liListEntry;
    if (server_order->raid_li) {
    list_ForEach(raid_liListEntry, server_order->raid_li) {
    cJSON *itemLocal = server_order_raid_convertToJSON(raid_liListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(raid_li, itemLocal);
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

server_order_t *server_order_parseFromJSON(cJSON *server_orderJSON){

    server_order_t *server_order_local_var = NULL;

    // define the local variable for server_order->form_values
    server_order_form_values_t *form_values_local_nonprim = NULL;

    // define the local variable for server_order->config_ids
    server_order_config_ids_t *config_ids_local_nonprim = NULL;

    // define the local variable for server_order->cpu
    int *cpu_local_var = NULL;

    // define the local variable for server_order->field_label
    server_order_field_labels_t *field_label_local_nonprim = NULL;

    // define the local variable for server_order->cpu_li
    server_order_cpu_li_t *cpu_li_local_nonprim = NULL;

    // define the local variable for server_order->memory_li
    server_order_memory_li_t *memory_li_local_nonprim = NULL;

    // define the local variable for server_order->bandwidth_li
    server_order_bandwidth_li_t *bandwidth_li_local_nonprim = NULL;

    // define the local variable for server_order->ips_li
    server_order_ips_li_t *ips_li_local_nonprim = NULL;

    // define the local variable for server_order->os_li
    server_order_os_li_t *os_li_local_nonprim = NULL;

    // define the local variable for server_order->cp_li
    server_order_cp_li_t *cp_li_local_nonprim = NULL;

    // define the local list for server_order->raid_li
    list_t *raid_liList = NULL;

    // server_order->form_values
    cJSON *form_values = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "form_values");
    if (cJSON_IsNull(form_values)) {
        form_values = NULL;
    }
    if (form_values) { 
    form_values_local_nonprim = server_order_form_values_parseFromJSON(form_values); //nonprimitive
    }

    // server_order->config_ids
    cJSON *config_ids = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "config_ids");
    if (cJSON_IsNull(config_ids)) {
        config_ids = NULL;
    }
    if (config_ids) { 
    config_ids_local_nonprim = server_order_config_ids_parseFromJSON(config_ids); //nonprimitive
    }

    // server_order->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "cpu");
    if (cJSON_IsNull(cpu)) {
        cpu = NULL;
    }
    if (cpu) { 
    if(!cJSON_IsNumber(cpu))
    {
    goto end; //Numeric
    }
    cpu_local_var = malloc(sizeof(int));
    if(!cpu_local_var)
    {
        goto end;
    }
    *cpu_local_var = cpu->valuedouble;
    }

    // server_order->field_label
    cJSON *field_label = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "field_label");
    if (cJSON_IsNull(field_label)) {
        field_label = NULL;
    }
    if (field_label) { 
    field_label_local_nonprim = server_order_field_labels_parseFromJSON(field_label); //nonprimitive
    }

    // server_order->cpu_li
    cJSON *cpu_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "cpu_li");
    if (cJSON_IsNull(cpu_li)) {
        cpu_li = NULL;
    }
    if (cpu_li) { 
    cpu_li_local_nonprim = server_order_cpu_li_parseFromJSON(cpu_li); //nonprimitive
    }

    // server_order->memory_li
    cJSON *memory_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "memory_li");
    if (cJSON_IsNull(memory_li)) {
        memory_li = NULL;
    }
    if (memory_li) { 
    memory_li_local_nonprim = server_order_memory_li_parseFromJSON(memory_li); //nonprimitive
    }

    // server_order->bandwidth_li
    cJSON *bandwidth_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "bandwidth_li");
    if (cJSON_IsNull(bandwidth_li)) {
        bandwidth_li = NULL;
    }
    if (bandwidth_li) { 
    bandwidth_li_local_nonprim = server_order_bandwidth_li_parseFromJSON(bandwidth_li); //nonprimitive
    }

    // server_order->ips_li
    cJSON *ips_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "ips_li");
    if (cJSON_IsNull(ips_li)) {
        ips_li = NULL;
    }
    if (ips_li) { 
    ips_li_local_nonprim = server_order_ips_li_parseFromJSON(ips_li); //nonprimitive
    }

    // server_order->os_li
    cJSON *os_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "os_li");
    if (cJSON_IsNull(os_li)) {
        os_li = NULL;
    }
    if (os_li) { 
    os_li_local_nonprim = server_order_os_li_parseFromJSON(os_li); //nonprimitive
    }

    // server_order->cp_li
    cJSON *cp_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "cp_li");
    if (cJSON_IsNull(cp_li)) {
        cp_li = NULL;
    }
    if (cp_li) { 
    cp_li_local_nonprim = server_order_cp_li_parseFromJSON(cp_li); //nonprimitive
    }

    // server_order->raid_li
    cJSON *raid_li = cJSON_GetObjectItemCaseSensitive(server_orderJSON, "raid_li");
    if (cJSON_IsNull(raid_li)) {
        raid_li = NULL;
    }
    if (raid_li) { 
    cJSON *raid_li_local_nonprimitive = NULL;
    if(!cJSON_IsArray(raid_li)){
        goto end; //nonprimitive container
    }

    raid_liList = list_createList();

    cJSON_ArrayForEach(raid_li_local_nonprimitive,raid_li )
    {
        if(!cJSON_IsObject(raid_li_local_nonprimitive)){
            goto end;
        }
        server_order_raid_t *raid_liItem = server_order_raid_parseFromJSON(raid_li_local_nonprimitive);

        list_addElement(raid_liList, raid_liItem);
    }
    }



    server_order_local_var = server_order_create_internal (
        form_values ? form_values_local_nonprim : NULL,
        config_ids ? config_ids_local_nonprim : NULL,
        cpu_local_var,
        field_label ? field_label_local_nonprim : NULL,
        cpu_li ? cpu_li_local_nonprim : NULL,
        memory_li ? memory_li_local_nonprim : NULL,
        bandwidth_li ? bandwidth_li_local_nonprim : NULL,
        ips_li ? ips_li_local_nonprim : NULL,
        os_li ? os_li_local_nonprim : NULL,
        cp_li ? cp_li_local_nonprim : NULL,
        raid_li ? raid_liList : NULL
        );

    if (!server_order_local_var) {
        goto end;
    }

    return server_order_local_var;
end:
    if (form_values_local_nonprim) {
        server_order_form_values_free(form_values_local_nonprim);
        form_values_local_nonprim = NULL;
    }
    if (config_ids_local_nonprim) {
        server_order_config_ids_free(config_ids_local_nonprim);
        config_ids_local_nonprim = NULL;
    }
    if (cpu_local_var) {
        free(cpu_local_var);
        cpu_local_var = NULL;
    }
    if (field_label_local_nonprim) {
        server_order_field_labels_free(field_label_local_nonprim);
        field_label_local_nonprim = NULL;
    }
    if (cpu_li_local_nonprim) {
        server_order_cpu_li_free(cpu_li_local_nonprim);
        cpu_li_local_nonprim = NULL;
    }
    if (memory_li_local_nonprim) {
        server_order_memory_li_free(memory_li_local_nonprim);
        memory_li_local_nonprim = NULL;
    }
    if (bandwidth_li_local_nonprim) {
        server_order_bandwidth_li_free(bandwidth_li_local_nonprim);
        bandwidth_li_local_nonprim = NULL;
    }
    if (ips_li_local_nonprim) {
        server_order_ips_li_free(ips_li_local_nonprim);
        ips_li_local_nonprim = NULL;
    }
    if (os_li_local_nonprim) {
        server_order_os_li_free(os_li_local_nonprim);
        os_li_local_nonprim = NULL;
    }
    if (cp_li_local_nonprim) {
        server_order_cp_li_free(cp_li_local_nonprim);
        cp_li_local_nonprim = NULL;
    }
    if (raid_liList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, raid_liList) {
            server_order_raid_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(raid_liList);
        raid_liList = NULL;
    }
    return NULL;

}
