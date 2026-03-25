#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type_volume_from.h"



static mail_stats_type_volume_from_t *mail_stats_type_volume_from_create_internal(
    int *billingsomedomain_com,
    int *salessomedomain_com
    ) {
    mail_stats_type_volume_from_t *mail_stats_type_volume_from_local_var = malloc(sizeof(mail_stats_type_volume_from_t));
    if (!mail_stats_type_volume_from_local_var) {
        return NULL;
    }
    memset(mail_stats_type_volume_from_local_var, 0, sizeof(mail_stats_type_volume_from_t));
    mail_stats_type_volume_from_local_var->_library_owned = 1;
    mail_stats_type_volume_from_local_var->billingsomedomain_com = billingsomedomain_com;
    mail_stats_type_volume_from_local_var->salessomedomain_com = salessomedomain_com;
    return mail_stats_type_volume_from_local_var;
}

__attribute__((deprecated)) mail_stats_type_volume_from_t *mail_stats_type_volume_from_create(
    int *billingsomedomain_com,
    int *salessomedomain_com
    ) {
    int *billingsomedomain_com_copy = NULL;
    if (billingsomedomain_com) {
        billingsomedomain_com_copy = malloc(sizeof(int));
        if (billingsomedomain_com_copy) *billingsomedomain_com_copy = *billingsomedomain_com;
    }
    int *salessomedomain_com_copy = NULL;
    if (salessomedomain_com) {
        salessomedomain_com_copy = malloc(sizeof(int));
        if (salessomedomain_com_copy) *salessomedomain_com_copy = *salessomedomain_com;
    }
    mail_stats_type_volume_from_t *result = mail_stats_type_volume_from_create_internal (
        billingsomedomain_com_copy,
        salessomedomain_com_copy
        );
    if (!result) {
        free(billingsomedomain_com_copy);
        free(salessomedomain_com_copy);
    }
    return result;
}

void mail_stats_type_volume_from_free(mail_stats_type_volume_from_t *mail_stats_type_volume_from) {
    if(NULL == mail_stats_type_volume_from){
        return ;
    }
    if(mail_stats_type_volume_from->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_stats_type_volume_from_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_stats_type_volume_from->billingsomedomain_com) {
        free(mail_stats_type_volume_from->billingsomedomain_com);
        mail_stats_type_volume_from->billingsomedomain_com = NULL;
    }
    if (mail_stats_type_volume_from->salessomedomain_com) {
        free(mail_stats_type_volume_from->salessomedomain_com);
        mail_stats_type_volume_from->salessomedomain_com = NULL;
    }
    free(mail_stats_type_volume_from);
}

cJSON *mail_stats_type_volume_from_convertToJSON(mail_stats_type_volume_from_t *mail_stats_type_volume_from) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type_volume_from->billingsomedomain_com
    if(mail_stats_type_volume_from->billingsomedomain_com) {
    if(cJSON_AddNumberToObject(item, "billing@somedomain.com", *mail_stats_type_volume_from->billingsomedomain_com) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_from->salessomedomain_com
    if(mail_stats_type_volume_from->salessomedomain_com) {
    if(cJSON_AddNumberToObject(item, "sales@somedomain.com", *mail_stats_type_volume_from->salessomedomain_com) == NULL) {
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

mail_stats_type_volume_from_t *mail_stats_type_volume_from_parseFromJSON(cJSON *mail_stats_type_volume_fromJSON){

    mail_stats_type_volume_from_t *mail_stats_type_volume_from_local_var = NULL;

    // define the local variable for mail_stats_type_volume_from->billingsomedomain_com
    int *billingsomedomain_com_local_var = NULL;

    // define the local variable for mail_stats_type_volume_from->salessomedomain_com
    int *salessomedomain_com_local_var = NULL;

    // mail_stats_type_volume_from->billingsomedomain_com
    cJSON *billingsomedomain_com = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_fromJSON, "billing@somedomain.com");
    if (cJSON_IsNull(billingsomedomain_com)) {
        billingsomedomain_com = NULL;
    }
    if (billingsomedomain_com) { 
    if(!cJSON_IsNumber(billingsomedomain_com))
    {
    goto end; //Numeric
    }
    billingsomedomain_com_local_var = malloc(sizeof(int));
    if(!billingsomedomain_com_local_var)
    {
        goto end;
    }
    *billingsomedomain_com_local_var = billingsomedomain_com->valuedouble;
    }

    // mail_stats_type_volume_from->salessomedomain_com
    cJSON *salessomedomain_com = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_fromJSON, "sales@somedomain.com");
    if (cJSON_IsNull(salessomedomain_com)) {
        salessomedomain_com = NULL;
    }
    if (salessomedomain_com) { 
    if(!cJSON_IsNumber(salessomedomain_com))
    {
    goto end; //Numeric
    }
    salessomedomain_com_local_var = malloc(sizeof(int));
    if(!salessomedomain_com_local_var)
    {
        goto end;
    }
    *salessomedomain_com_local_var = salessomedomain_com->valuedouble;
    }



    mail_stats_type_volume_from_local_var = mail_stats_type_volume_from_create_internal (
        billingsomedomain_com_local_var,
        salessomedomain_com_local_var
        );

    if (!mail_stats_type_volume_from_local_var) {
        goto end;
    }

    return mail_stats_type_volume_from_local_var;
end:
    if (billingsomedomain_com_local_var) {
        free(billingsomedomain_com_local_var);
        billingsomedomain_com_local_var = NULL;
    }
    if (salessomedomain_com_local_var) {
        free(salessomedomain_com_local_var);
        salessomedomain_com_local_var = NULL;
    }
    return NULL;

}
