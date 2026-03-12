#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_alerts_response.h"



static mail_alerts_response_t *mail_alerts_response_create_internal(
    ) {
    mail_alerts_response_t *mail_alerts_response_local_var = malloc(sizeof(mail_alerts_response_t));
    if (!mail_alerts_response_local_var) {
        return NULL;
    }

    mail_alerts_response_local_var->_library_owned = 1;
    return mail_alerts_response_local_var;
}

__attribute__((deprecated)) mail_alerts_response_t *mail_alerts_response_create(
    ) {
    return mail_alerts_response_create_internal (
        );
}

void mail_alerts_response_free(mail_alerts_response_t *mail_alerts_response) {
    if(NULL == mail_alerts_response){
        return ;
    }
    if(mail_alerts_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_alerts_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(mail_alerts_response);
}

cJSON *mail_alerts_response_convertToJSON(mail_alerts_response_t *mail_alerts_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_alerts_response_t *mail_alerts_response_parseFromJSON(cJSON *mail_alerts_responseJSON){

    mail_alerts_response_t *mail_alerts_response_local_var = NULL;


    mail_alerts_response_local_var = mail_alerts_response_create_internal (
        );

    return mail_alerts_response_local_var;
end:
    return NULL;

}
