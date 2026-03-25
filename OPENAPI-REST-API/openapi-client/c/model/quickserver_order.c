#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order.h"



static quickserver_order_t *quickserver_order_create_internal(
    char *qs_id,
    quickserver_order_server_details_t *server_details,
    quickserver_order_templates_t *templates,
    quickserver_order_version_t *version,
    quickserver_order_distro_sel_t *distro_sel
    ) {
    quickserver_order_t *quickserver_order_local_var = malloc(sizeof(quickserver_order_t));
    if (!quickserver_order_local_var) {
        return NULL;
    }
    memset(quickserver_order_local_var, 0, sizeof(quickserver_order_t));
    quickserver_order_local_var->_library_owned = 1;
    quickserver_order_local_var->qs_id = qs_id;
    quickserver_order_local_var->server_details = server_details;
    quickserver_order_local_var->templates = templates;
    quickserver_order_local_var->version = version;
    quickserver_order_local_var->distro_sel = distro_sel;
    return quickserver_order_local_var;
}

__attribute__((deprecated)) quickserver_order_t *quickserver_order_create(
    char *qs_id,
    quickserver_order_server_details_t *server_details,
    quickserver_order_templates_t *templates,
    quickserver_order_version_t *version,
    quickserver_order_distro_sel_t *distro_sel
    ) {
    quickserver_order_t *result = quickserver_order_create_internal (
        qs_id,
        server_details,
        templates,
        version,
        distro_sel
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_free(quickserver_order_t *quickserver_order) {
    if(NULL == quickserver_order){
        return ;
    }
    if(quickserver_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order->qs_id) {
        free(quickserver_order->qs_id);
        quickserver_order->qs_id = NULL;
    }
    if (quickserver_order->server_details) {
        quickserver_order_server_details_free(quickserver_order->server_details);
        quickserver_order->server_details = NULL;
    }
    if (quickserver_order->templates) {
        quickserver_order_templates_free(quickserver_order->templates);
        quickserver_order->templates = NULL;
    }
    if (quickserver_order->version) {
        quickserver_order_version_free(quickserver_order->version);
        quickserver_order->version = NULL;
    }
    if (quickserver_order->distro_sel) {
        quickserver_order_distro_sel_free(quickserver_order->distro_sel);
        quickserver_order->distro_sel = NULL;
    }
    free(quickserver_order);
}

cJSON *quickserver_order_convertToJSON(quickserver_order_t *quickserver_order) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order->qs_id
    if(quickserver_order->qs_id) {
    if(cJSON_AddStringToObject(item, "qs_id", quickserver_order->qs_id) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_order->server_details
    if(quickserver_order->server_details) {
    cJSON *server_details_local_JSON = quickserver_order_server_details_convertToJSON(quickserver_order->server_details);
    if(server_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "server_details", server_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // quickserver_order->templates
    if(quickserver_order->templates) {
    cJSON *templates_local_JSON = quickserver_order_templates_convertToJSON(quickserver_order->templates);
    if(templates_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "templates", templates_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // quickserver_order->version
    if(quickserver_order->version) {
    cJSON *version_local_JSON = quickserver_order_version_convertToJSON(quickserver_order->version);
    if(version_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "version", version_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // quickserver_order->distro_sel
    if(quickserver_order->distro_sel) {
    cJSON *distro_sel_local_JSON = quickserver_order_distro_sel_convertToJSON(quickserver_order->distro_sel);
    if(distro_sel_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "distro_sel", distro_sel_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickserver_order_t *quickserver_order_parseFromJSON(cJSON *quickserver_orderJSON){

    quickserver_order_t *quickserver_order_local_var = NULL;

    char *qs_id_local_str = NULL;

    // define the local variable for quickserver_order->server_details
    quickserver_order_server_details_t *server_details_local_nonprim = NULL;

    // define the local variable for quickserver_order->templates
    quickserver_order_templates_t *templates_local_nonprim = NULL;

    // define the local variable for quickserver_order->version
    quickserver_order_version_t *version_local_nonprim = NULL;

    // define the local variable for quickserver_order->distro_sel
    quickserver_order_distro_sel_t *distro_sel_local_nonprim = NULL;

    // quickserver_order->qs_id
    cJSON *qs_id = cJSON_GetObjectItemCaseSensitive(quickserver_orderJSON, "qs_id");
    if (cJSON_IsNull(qs_id)) {
        qs_id = NULL;
    }
    if (qs_id) { 
    if(!cJSON_IsString(qs_id) && !cJSON_IsNull(qs_id))
    {
    goto end; //String
    }
    }

    // quickserver_order->server_details
    cJSON *server_details = cJSON_GetObjectItemCaseSensitive(quickserver_orderJSON, "server_details");
    if (cJSON_IsNull(server_details)) {
        server_details = NULL;
    }
    if (server_details) { 
    server_details_local_nonprim = quickserver_order_server_details_parseFromJSON(server_details); //nonprimitive
    }

    // quickserver_order->templates
    cJSON *templates = cJSON_GetObjectItemCaseSensitive(quickserver_orderJSON, "templates");
    if (cJSON_IsNull(templates)) {
        templates = NULL;
    }
    if (templates) { 
    templates_local_nonprim = quickserver_order_templates_parseFromJSON(templates); //nonprimitive
    }

    // quickserver_order->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(quickserver_orderJSON, "version");
    if (cJSON_IsNull(version)) {
        version = NULL;
    }
    if (version) { 
    version_local_nonprim = quickserver_order_version_parseFromJSON(version); //nonprimitive
    }

    // quickserver_order->distro_sel
    cJSON *distro_sel = cJSON_GetObjectItemCaseSensitive(quickserver_orderJSON, "distro_sel");
    if (cJSON_IsNull(distro_sel)) {
        distro_sel = NULL;
    }
    if (distro_sel) { 
    distro_sel_local_nonprim = quickserver_order_distro_sel_parseFromJSON(distro_sel); //nonprimitive
    }


    if (qs_id && !cJSON_IsNull(qs_id)) qs_id_local_str = strdup(qs_id->valuestring);

    quickserver_order_local_var = quickserver_order_create_internal (
        qs_id_local_str,
        server_details ? server_details_local_nonprim : NULL,
        templates ? templates_local_nonprim : NULL,
        version ? version_local_nonprim : NULL,
        distro_sel ? distro_sel_local_nonprim : NULL
        );

    if (!quickserver_order_local_var) {
        goto end;
    }

    return quickserver_order_local_var;
end:
    if (qs_id_local_str) {
        free(qs_id_local_str);
        qs_id_local_str = NULL;
    }
    if (server_details_local_nonprim) {
        quickserver_order_server_details_free(server_details_local_nonprim);
        server_details_local_nonprim = NULL;
    }
    if (templates_local_nonprim) {
        quickserver_order_templates_free(templates_local_nonprim);
        templates_local_nonprim = NULL;
    }
    if (version_local_nonprim) {
        quickserver_order_version_free(version_local_nonprim);
        version_local_nonprim = NULL;
    }
    if (distro_sel_local_nonprim) {
        quickserver_order_distro_sel_free(distro_sel_local_nonprim);
        distro_sel_local_nonprim = NULL;
    }
    return NULL;

}
