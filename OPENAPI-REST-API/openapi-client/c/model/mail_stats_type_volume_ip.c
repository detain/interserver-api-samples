#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type_volume_ip.h"



static mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_create_internal(
    int _1_1_1_1,
    int _2_2_2_2,
    int _3_3_3_3,
    int _4_4_4_4
    ) {
    mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_local_var = malloc(sizeof(mail_stats_type_volume_ip_t));
    if (!mail_stats_type_volume_ip_local_var) {
        return NULL;
    }
    mail_stats_type_volume_ip_local_var->_1_1_1_1 = _1_1_1_1;
    mail_stats_type_volume_ip_local_var->_2_2_2_2 = _2_2_2_2;
    mail_stats_type_volume_ip_local_var->_3_3_3_3 = _3_3_3_3;
    mail_stats_type_volume_ip_local_var->_4_4_4_4 = _4_4_4_4;

    mail_stats_type_volume_ip_local_var->_library_owned = 1;
    return mail_stats_type_volume_ip_local_var;
}

__attribute__((deprecated)) mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_create(
    int _1_1_1_1,
    int _2_2_2_2,
    int _3_3_3_3,
    int _4_4_4_4
    ) {
    return mail_stats_type_volume_ip_create_internal (
        _1_1_1_1,
        _2_2_2_2,
        _3_3_3_3,
        _4_4_4_4
        );
}

void mail_stats_type_volume_ip_free(mail_stats_type_volume_ip_t *mail_stats_type_volume_ip) {
    if(NULL == mail_stats_type_volume_ip){
        return ;
    }
    if(mail_stats_type_volume_ip->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_stats_type_volume_ip_free");
        return ;
    }
    listEntry_t *listEntry;
    free(mail_stats_type_volume_ip);
}

cJSON *mail_stats_type_volume_ip_convertToJSON(mail_stats_type_volume_ip_t *mail_stats_type_volume_ip) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type_volume_ip->_1_1_1_1
    if(mail_stats_type_volume_ip->_1_1_1_1) {
    if(cJSON_AddNumberToObject(item, "1.1.1.1", mail_stats_type_volume_ip->_1_1_1_1) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_ip->_2_2_2_2
    if(mail_stats_type_volume_ip->_2_2_2_2) {
    if(cJSON_AddNumberToObject(item, "2.2.2.2", mail_stats_type_volume_ip->_2_2_2_2) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_ip->_3_3_3_3
    if(mail_stats_type_volume_ip->_3_3_3_3) {
    if(cJSON_AddNumberToObject(item, "3.3.3.3", mail_stats_type_volume_ip->_3_3_3_3) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type_volume_ip->_4_4_4_4
    if(mail_stats_type_volume_ip->_4_4_4_4) {
    if(cJSON_AddNumberToObject(item, "4.4.4.4", mail_stats_type_volume_ip->_4_4_4_4) == NULL) {
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

mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_parseFromJSON(cJSON *mail_stats_type_volume_ipJSON){

    mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_local_var = NULL;

    // mail_stats_type_volume_ip->_1_1_1_1
    cJSON *_1_1_1_1 = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_ipJSON, "1.1.1.1");
    if (cJSON_IsNull(_1_1_1_1)) {
        _1_1_1_1 = NULL;
    }
    if (_1_1_1_1) { 
    if(!cJSON_IsNumber(_1_1_1_1))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_ip->_2_2_2_2
    cJSON *_2_2_2_2 = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_ipJSON, "2.2.2.2");
    if (cJSON_IsNull(_2_2_2_2)) {
        _2_2_2_2 = NULL;
    }
    if (_2_2_2_2) { 
    if(!cJSON_IsNumber(_2_2_2_2))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_ip->_3_3_3_3
    cJSON *_3_3_3_3 = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_ipJSON, "3.3.3.3");
    if (cJSON_IsNull(_3_3_3_3)) {
        _3_3_3_3 = NULL;
    }
    if (_3_3_3_3) { 
    if(!cJSON_IsNumber(_3_3_3_3))
    {
    goto end; //Numeric
    }
    }

    // mail_stats_type_volume_ip->_4_4_4_4
    cJSON *_4_4_4_4 = cJSON_GetObjectItemCaseSensitive(mail_stats_type_volume_ipJSON, "4.4.4.4");
    if (cJSON_IsNull(_4_4_4_4)) {
        _4_4_4_4 = NULL;
    }
    if (_4_4_4_4) { 
    if(!cJSON_IsNumber(_4_4_4_4))
    {
    goto end; //Numeric
    }
    }


    mail_stats_type_volume_ip_local_var = mail_stats_type_volume_ip_create_internal (
        _1_1_1_1 ? _1_1_1_1->valuedouble : 0,
        _2_2_2_2 ? _2_2_2_2->valuedouble : 0,
        _3_3_3_3 ? _3_3_3_3->valuedouble : 0,
        _4_4_4_4 ? _4_4_4_4->valuedouble : 0
        );

    return mail_stats_type_volume_ip_local_var;
end:
    return NULL;

}
