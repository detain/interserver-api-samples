#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type_volume_to.h"



static mail_stats_type_volume_to_t *mail_stats_type_volume_to_create_internal(
    int clientdomain_com,
    int usersite_net,
    int salescompany_com,
    int clientanothersite_com
    ) {
    mail_stats_type_volume_to_t *mail_stats_type_volume_to_local_var = malloc(sizeof(mail_stats_type_volume_to_t));
    if (!mail_stats_type_volume_to_local_var) {
        return NULL;
    }
    mail_stats_type_volume_to_local_var->clientdomain_com = clientdomain_com;
    mail_stats_type_volume_to_local_var->usersite_net = usersite_net;
    mail_stats_type_volume_to_local_var->salescompany_com = salescompany_com;
    mail_stats_type_volume_to_local_var->clientanothersite_com = clientanothersite_com;

    mail_stats_type_volume_to_local_var->_library_owned = 1;
    return mail_stats_type_volume_to_local_var;
}

__attribute__((deprecated)) mail_stats_type_volume_to_t *mail_stats_type_volume_to_create(
    int clientdomain_com,
    int usersite_net,
    int salescompany_com,
    int clientanothersite_com
    ) {
    return mail_stats_type_volume_to_create_internal (
        clientdomain_com,
        usersite_net,
        salescompany_com,
        clientanothersite_com
        );
}

void mail_stats_type_volume_to_free(mail_stats_type_volume_to_t *mail_stats_type_volume_to) {
    if(NULL == mail_stats_type_volume_to){
        return ;
    }
    if(mail_stats_type_volume_to->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_stats_type_volume_to_free");
        return ;
    }
    listEntry_t *listEntry;
    free(mail_stats_type_volume_to);
}

cJSON *mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume_to_t *mail_stats_type_volume_to) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type_volume_to->clientdomain_com
    if(mail_stats_type_volume_to->clientdomain_com) {
    if(cJSON_AddNumberToObject(item, "client@domain.com", mail_stats_type_volume_to->clientdomain_com) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->usersite_net
    if(mail_stats_type_volume_to->usersite_net) {
    if(cJSON_AddNumberToObject(item, "user@site.net", mail_stats_type_volume_to->usersite_net) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->salescompany_com
    if(mail_stats_type_volume_to->salescompany_com) {
    if(cJSON_AddNumberToObject(item, "sales@company.com", mail_stats_type_volume_to->salescompany_com) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->clientanothersite_com
    if(mail_stats_type_volume_to->clientanothersite_com) {
    if(cJSON_AddNumberToObject(item, "client@anothersite.com", mail_stats_type_volume_to->clientanothersite_com) == NULL) {
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

mail_stats_type_volume_to_t *mail_stats_type_volume_to_parseFromJSON(cJSON *mail_stats_type_volume_toJSON){

    mail_stats_type_volume_to_t *mail_stats_type_volume_to_local_var = NULL;

    // mail_stats_type_volume_to->clientdomain_com
    cJSON *clientdomain_com = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_toJSON, "client@domain.com");
    if (cJSON_IsNull(clientdomain_com)) {
        clientdomain_com = NULL;
    }
    if (clientdomain_com) { 
    if(!cJSON_IsNumber(clientdomain_com))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_to->usersite_net
    cJSON *usersite_net = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_toJSON, "user@site.net");
    if (cJSON_IsNull(usersite_net)) {
        usersite_net = NULL;
    }
    if (usersite_net) { 
    if(!cJSON_IsNumber(usersite_net))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_to->salescompany_com
    cJSON *salescompany_com = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_toJSON, "sales@company.com");
    if (cJSON_IsNull(salescompany_com)) {
        salescompany_com = NULL;
    }
    if (salescompany_com) { 
    if(!cJSON_IsNumber(salescompany_com))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_to->clientanothersite_com
    cJSON *clientanothersite_com = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_toJSON, "client@anothersite.com");
    if (cJSON_IsNull(clientanothersite_com)) {
        clientanothersite_com = NULL;
    }
    if (clientanothersite_com) { 
    if(!cJSON_IsNumber(clientanothersite_com))
    {
    goto end; //Numeric
    }
    }


    mail_stats_type_volume_to_local_var = mail_stats_type_volume_to_create_internal (
        clientdomain_com ? clientdomain_com->valuedouble : 0,
        usersite_net ? usersite_net->valuedouble : 0,
        salescompany_com ? salescompany_com->valuedouble : 0,
        clientanothersite_com ? clientanothersite_com->valuedouble : 0
        );

    return mail_stats_type_volume_to_local_var;
end:
    return NULL;

}
