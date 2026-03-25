#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "view_mail_log_start_date_parameter.h"



static view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_create_internal(
    ) {
    view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_local_var = malloc(sizeof(view_mail_log_start_date_parameter_t));
    if (!view_mail_log_start_date_parameter_local_var) {
        return NULL;
    }
    memset(view_mail_log_start_date_parameter_local_var, 0, sizeof(view_mail_log_start_date_parameter_t));
    view_mail_log_start_date_parameter_local_var->_library_owned = 1;
    return view_mail_log_start_date_parameter_local_var;
}

__attribute__((deprecated)) view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_create(
    ) {
    view_mail_log_start_date_parameter_t *result = view_mail_log_start_date_parameter_create_internal (
        );
    if (!result) {
    }
    return result;
}

void view_mail_log_start_date_parameter_free(view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter) {
    if(NULL == view_mail_log_start_date_parameter){
        return ;
    }
    if(view_mail_log_start_date_parameter->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "view_mail_log_start_date_parameter_free");
        return ;
    }
    listEntry_t *listEntry;
    free(view_mail_log_start_date_parameter);
}

cJSON *view_mail_log_start_date_parameter_convertToJSON(view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_parseFromJSON(cJSON *view_mail_log_start_date_parameterJSON){

    view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_local_var = NULL;



    view_mail_log_start_date_parameter_local_var = view_mail_log_start_date_parameter_create_internal (
        );

    if (!view_mail_log_start_date_parameter_local_var) {
        goto end;
    }

    return view_mail_log_start_date_parameter_local_var;
end:
    return NULL;

}
