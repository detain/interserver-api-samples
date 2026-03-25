#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_info.h"



static login_info_t *login_info_create_internal(
    char *captcha,
    login_service_counts_t *counts,
    char *logo,
    char *language
    ) {
    login_info_t *login_info_local_var = malloc(sizeof(login_info_t));
    if (!login_info_local_var) {
        return NULL;
    }
    memset(login_info_local_var, 0, sizeof(login_info_t));
    login_info_local_var->_library_owned = 1;
    login_info_local_var->captcha = captcha;
    login_info_local_var->counts = counts;
    login_info_local_var->logo = logo;
    login_info_local_var->language = language;
    return login_info_local_var;
}

__attribute__((deprecated)) login_info_t *login_info_create(
    char *captcha,
    login_service_counts_t *counts,
    char *logo,
    char *language
    ) {
    login_info_t *result = login_info_create_internal (
        captcha,
        counts,
        logo,
        language
        );
    if (!result) {
    }
    return result;
}

void login_info_free(login_info_t *login_info) {
    if(NULL == login_info){
        return ;
    }
    if(login_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_info->captcha) {
        free(login_info->captcha);
        login_info->captcha = NULL;
    }
    if (login_info->counts) {
        login_service_counts_free(login_info->counts);
        login_info->counts = NULL;
    }
    if (login_info->logo) {
        free(login_info->logo);
        login_info->logo = NULL;
    }
    if (login_info->language) {
        free(login_info->language);
        login_info->language = NULL;
    }
    free(login_info);
}

cJSON *login_info_convertToJSON(login_info_t *login_info) {
    cJSON *item = cJSON_CreateObject();

    // login_info->captcha
    if (!login_info->captcha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "captcha", login_info->captcha) == NULL) {
    goto fail; //String
    }


    // login_info->counts
    if (!login_info->counts) {
        goto fail;
    }
    cJSON *counts_local_JSON = login_service_counts_convertToJSON(login_info->counts);
    if(counts_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "counts", counts_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // login_info->logo
    if(login_info->logo) {
    if(cJSON_AddStringToObject(item, "logo", login_info->logo) == NULL) {
    goto fail; //String
    }
    }


    // login_info->language
    if(login_info->language) {
    if(cJSON_AddStringToObject(item, "language", login_info->language) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

login_info_t *login_info_parseFromJSON(cJSON *login_infoJSON){

    login_info_t *login_info_local_var = NULL;

    char *captcha_local_str = NULL;

    // define the local variable for login_info->counts
    login_service_counts_t *counts_local_nonprim = NULL;

    char *logo_local_str = NULL;

    char *language_local_str = NULL;

    // login_info->captcha
    cJSON *captcha = cJSON_GetObjectItemCaseSensitive(login_infoJSON, "captcha");
    if (cJSON_IsNull(captcha)) {
        captcha = NULL;
    }
    if (!captcha) {
        goto end;
    }

    
    if(!cJSON_IsString(captcha))
    {
    goto end; //String
    }

    // login_info->counts
    cJSON *counts = cJSON_GetObjectItemCaseSensitive(login_infoJSON, "counts");
    if (cJSON_IsNull(counts)) {
        counts = NULL;
    }
    if (!counts) {
        goto end;
    }

    
    counts_local_nonprim = login_service_counts_parseFromJSON(counts); //nonprimitive

    // login_info->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(login_infoJSON, "logo");
    if (cJSON_IsNull(logo)) {
        logo = NULL;
    }
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // login_info->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(login_infoJSON, "language");
    if (cJSON_IsNull(language)) {
        language = NULL;
    }
    if (language) { 
    if(!cJSON_IsString(language) && !cJSON_IsNull(language))
    {
    goto end; //String
    }
    }


    if (captcha && !cJSON_IsNull(captcha)) captcha_local_str = strdup(captcha->valuestring);
    if (logo && !cJSON_IsNull(logo)) logo_local_str = strdup(logo->valuestring);
    if (language && !cJSON_IsNull(language)) language_local_str = strdup(language->valuestring);

    login_info_local_var = login_info_create_internal (
        captcha_local_str,
        counts_local_nonprim,
        logo_local_str,
        language_local_str
        );

    if (!login_info_local_var) {
        goto end;
    }

    return login_info_local_var;
end:
    if (captcha_local_str) {
        free(captcha_local_str);
        captcha_local_str = NULL;
    }
    if (counts_local_nonprim) {
        login_service_counts_free(counts_local_nonprim);
        counts_local_nonprim = NULL;
    }
    if (logo_local_str) {
        free(logo_local_str);
        logo_local_str = NULL;
    }
    if (language_local_str) {
        free(language_local_str);
        language_local_str = NULL;
    }
    return NULL;

}
