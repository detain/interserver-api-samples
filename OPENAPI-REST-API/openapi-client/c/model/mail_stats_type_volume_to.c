#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type_volume_to.h"



static mail_stats_type_volume_to_t *mail_stats_type_volume_to_create_internal(
    int *clientdomain_com,
    int *usersite_net,
    int *salescompany_com,
    int *clientanothersite_com
    ) {
    mail_stats_type_volume_to_t *mail_stats_type_volume_to_local_var = malloc(sizeof(mail_stats_type_volume_to_t));
    if (!mail_stats_type_volume_to_local_var) {
        return NULL;
    }
    memset(mail_stats_type_volume_to_local_var, 0, sizeof(mail_stats_type_volume_to_t));
    mail_stats_type_volume_to_local_var->_library_owned = 1;
    mail_stats_type_volume_to_local_var->clientdomain_com = clientdomain_com;
    mail_stats_type_volume_to_local_var->usersite_net = usersite_net;
    mail_stats_type_volume_to_local_var->salescompany_com = salescompany_com;
    mail_stats_type_volume_to_local_var->clientanothersite_com = clientanothersite_com;
    return mail_stats_type_volume_to_local_var;
}

__attribute__((deprecated)) mail_stats_type_volume_to_t *mail_stats_type_volume_to_create(
    int *clientdomain_com,
    int *usersite_net,
    int *salescompany_com,
    int *clientanothersite_com
    ) {
    int *clientdomain_com_copy = NULL;
    if (clientdomain_com) {
        clientdomain_com_copy = malloc(sizeof(int));
        if (clientdomain_com_copy) *clientdomain_com_copy = *clientdomain_com;
    }
    int *usersite_net_copy = NULL;
    if (usersite_net) {
        usersite_net_copy = malloc(sizeof(int));
        if (usersite_net_copy) *usersite_net_copy = *usersite_net;
    }
    int *salescompany_com_copy = NULL;
    if (salescompany_com) {
        salescompany_com_copy = malloc(sizeof(int));
        if (salescompany_com_copy) *salescompany_com_copy = *salescompany_com;
    }
    int *clientanothersite_com_copy = NULL;
    if (clientanothersite_com) {
        clientanothersite_com_copy = malloc(sizeof(int));
        if (clientanothersite_com_copy) *clientanothersite_com_copy = *clientanothersite_com;
    }
    mail_stats_type_volume_to_t *result = mail_stats_type_volume_to_create_internal (
        clientdomain_com_copy,
        usersite_net_copy,
        salescompany_com_copy,
        clientanothersite_com_copy
        );
    if (!result) {
        free(clientdomain_com_copy);
        free(usersite_net_copy);
        free(salescompany_com_copy);
        free(clientanothersite_com_copy);
    }
    return result;
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
    if (mail_stats_type_volume_to->clientdomain_com) {
        free(mail_stats_type_volume_to->clientdomain_com);
        mail_stats_type_volume_to->clientdomain_com = NULL;
    }
    if (mail_stats_type_volume_to->usersite_net) {
        free(mail_stats_type_volume_to->usersite_net);
        mail_stats_type_volume_to->usersite_net = NULL;
    }
    if (mail_stats_type_volume_to->salescompany_com) {
        free(mail_stats_type_volume_to->salescompany_com);
        mail_stats_type_volume_to->salescompany_com = NULL;
    }
    if (mail_stats_type_volume_to->clientanothersite_com) {
        free(mail_stats_type_volume_to->clientanothersite_com);
        mail_stats_type_volume_to->clientanothersite_com = NULL;
    }
    free(mail_stats_type_volume_to);
}

cJSON *mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume_to_t *mail_stats_type_volume_to) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type_volume_to->clientdomain_com
    if(mail_stats_type_volume_to->clientdomain_com) {
    if(cJSON_AddNumberToObject(item, "client@domain.com", *mail_stats_type_volume_to->clientdomain_com) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->usersite_net
    if(mail_stats_type_volume_to->usersite_net) {
    if(cJSON_AddNumberToObject(item, "user@site.net", *mail_stats_type_volume_to->usersite_net) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->salescompany_com
    if(mail_stats_type_volume_to->salescompany_com) {
    if(cJSON_AddNumberToObject(item, "sales@company.com", *mail_stats_type_volume_to->salescompany_com) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_to->clientanothersite_com
    if(mail_stats_type_volume_to->clientanothersite_com) {
    if(cJSON_AddNumberToObject(item, "client@anothersite.com", *mail_stats_type_volume_to->clientanothersite_com) == NULL) {
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

    // define the local variable for mail_stats_type_volume_to->clientdomain_com
    int *clientdomain_com_local_var = NULL;

    // define the local variable for mail_stats_type_volume_to->usersite_net
    int *usersite_net_local_var = NULL;

    // define the local variable for mail_stats_type_volume_to->salescompany_com
    int *salescompany_com_local_var = NULL;

    // define the local variable for mail_stats_type_volume_to->clientanothersite_com
    int *clientanothersite_com_local_var = NULL;

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
    clientdomain_com_local_var = malloc(sizeof(int));
    if(!clientdomain_com_local_var)
    {
        goto end;
    }
    *clientdomain_com_local_var = clientdomain_com->valuedouble;
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
    usersite_net_local_var = malloc(sizeof(int));
    if(!usersite_net_local_var)
    {
        goto end;
    }
    *usersite_net_local_var = usersite_net->valuedouble;
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
    salescompany_com_local_var = malloc(sizeof(int));
    if(!salescompany_com_local_var)
    {
        goto end;
    }
    *salescompany_com_local_var = salescompany_com->valuedouble;
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
    clientanothersite_com_local_var = malloc(sizeof(int));
    if(!clientanothersite_com_local_var)
    {
        goto end;
    }
    *clientanothersite_com_local_var = clientanothersite_com->valuedouble;
    }



    mail_stats_type_volume_to_local_var = mail_stats_type_volume_to_create_internal (
        clientdomain_com_local_var,
        usersite_net_local_var,
        salescompany_com_local_var,
        clientanothersite_com_local_var
        );

    if (!mail_stats_type_volume_to_local_var) {
        goto end;
    }

    return mail_stats_type_volume_to_local_var;
end:
    if (clientdomain_com_local_var) {
        free(clientdomain_com_local_var);
        clientdomain_com_local_var = NULL;
    }
    if (usersite_net_local_var) {
        free(usersite_net_local_var);
        usersite_net_local_var = NULL;
    }
    if (salescompany_com_local_var) {
        free(salescompany_com_local_var);
        salescompany_com_local_var = NULL;
    }
    if (clientanothersite_com_local_var) {
        free(clientanothersite_com_local_var);
        clientanothersite_com_local_var = NULL;
    }
    return NULL;

}
