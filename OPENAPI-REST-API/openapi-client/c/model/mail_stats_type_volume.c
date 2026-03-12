#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type_volume.h"



static mail_stats_type_volume_t *mail_stats_type_volume_create_internal(
    mail_stats_type_volume_to_t *to,
    mail_stats_type_volume_from_t *from,
    mail_stats_type_volume_ip_t *ip
    ) {
    mail_stats_type_volume_t *mail_stats_type_volume_local_var = malloc(sizeof(mail_stats_type_volume_t));
    if (!mail_stats_type_volume_local_var) {
        return NULL;
    }
    mail_stats_type_volume_local_var->to = to;
    mail_stats_type_volume_local_var->from = from;
    mail_stats_type_volume_local_var->ip = ip;

    mail_stats_type_volume_local_var->_library_owned = 1;
    return mail_stats_type_volume_local_var;
}

__attribute__((deprecated)) mail_stats_type_volume_t *mail_stats_type_volume_create(
    mail_stats_type_volume_to_t *to,
    mail_stats_type_volume_from_t *from,
    mail_stats_type_volume_ip_t *ip
    ) {
    return mail_stats_type_volume_create_internal (
        to,
        from,
        ip
        );
}

void mail_stats_type_volume_free(mail_stats_type_volume_t *mail_stats_type_volume) {
    if(NULL == mail_stats_type_volume){
        return ;
    }
    if(mail_stats_type_volume->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_stats_type_volume_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_stats_type_volume->to) {
        mail_stats_type_volume_to_free(mail_stats_type_volume->to);
        mail_stats_type_volume->to = NULL;
    }
    if (mail_stats_type_volume->from) {
        mail_stats_type_volume_from_free(mail_stats_type_volume->from);
        mail_stats_type_volume->from = NULL;
    }
    if (mail_stats_type_volume->ip) {
        mail_stats_type_volume_ip_free(mail_stats_type_volume->ip);
        mail_stats_type_volume->ip = NULL;
    }
    free(mail_stats_type_volume);
}

cJSON *mail_stats_type_volume_convertToJSON(mail_stats_type_volume_t *mail_stats_type_volume) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type_volume->to
    if(mail_stats_type_volume->to) {
    cJSON *to_local_JSON = mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume->to);
    if(to_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "to", to_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // mail_stats_type_volume->from
    if(mail_stats_type_volume->from) {
    cJSON *from_local_JSON = mail_stats_type_volume_from_convertToJSON(mail_stats_type_volume->from);
    if(from_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "from", from_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // mail_stats_type_volume->ip
    if(mail_stats_type_volume->ip) {
    cJSON *ip_local_JSON = mail_stats_type_volume_ip_convertToJSON(mail_stats_type_volume->ip);
    if(ip_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ip", ip_local_JSON);
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

mail_stats_type_volume_t *mail_stats_type_volume_parseFromJSON(cJSON *mail_stats_type_volumeJSON){

    mail_stats_type_volume_t *mail_stats_type_volume_local_var = NULL;

    // define the local variable for mail_stats_type_volume->to
    mail_stats_type_volume_to_t *to_local_nonprim = NULL;

    // define the local variable for mail_stats_type_volume->from
    mail_stats_type_volume_from_t *from_local_nonprim = NULL;

    // define the local variable for mail_stats_type_volume->ip
    mail_stats_type_volume_ip_t *ip_local_nonprim = NULL;

    // mail_stats_type_volume->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volumeJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (to) { 
    to_local_nonprim = mail_stats_type_volume_to_parseFromJSON(to); //nonprimitive
    }

    // mail_stats_type_volume->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volumeJSON, "from");
    if (cJSON_IsNull(from)) {
        from = NULL;
    }
    if (from) { 
    from_local_nonprim = mail_stats_type_volume_from_parseFromJSON(from); //nonprimitive
    }

    // mail_stats_type_volume->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volumeJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (ip) { 
    ip_local_nonprim = mail_stats_type_volume_ip_parseFromJSON(ip); //nonprimitive
    }


    mail_stats_type_volume_local_var = mail_stats_type_volume_create_internal (
        to ? to_local_nonprim : NULL,
        from ? from_local_nonprim : NULL,
        ip ? ip_local_nonprim : NULL
        );

    return mail_stats_type_volume_local_var;
end:
    if (to_local_nonprim) {
        mail_stats_type_volume_to_free(to_local_nonprim);
        to_local_nonprim = NULL;
    }
    if (from_local_nonprim) {
        mail_stats_type_volume_from_free(from_local_nonprim);
        from_local_nonprim = NULL;
    }
    if (ip_local_nonprim) {
        mail_stats_type_volume_ip_free(ip_local_nonprim);
        ip_local_nonprim = NULL;
    }
    return NULL;

}
