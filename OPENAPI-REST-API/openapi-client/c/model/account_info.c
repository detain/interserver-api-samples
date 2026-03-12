#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info.h"



static account_info_t *account_info_create_internal(
    char *custid,
    char *ima,
    account_info_data_t *data,
    char *ip,
    account_info_oauthproviders_t *oauthproviders,
    account_info_oauth_config_t *oauthconfig,
    list_t *oauthadapters,
    account_info_limits_t *limits,
    char *language,
    account_info_country_currencies_t *country_currencies,
    int enable_locales,
    int enable_currencies,
    char *gravatar
    ) {
    account_info_t *account_info_local_var = malloc(sizeof(account_info_t));
    if (!account_info_local_var) {
        return NULL;
    }
    account_info_local_var->custid = custid;
    account_info_local_var->ima = ima;
    account_info_local_var->data = data;
    account_info_local_var->ip = ip;
    account_info_local_var->oauthproviders = oauthproviders;
    account_info_local_var->oauthconfig = oauthconfig;
    account_info_local_var->oauthadapters = oauthadapters;
    account_info_local_var->limits = limits;
    account_info_local_var->language = language;
    account_info_local_var->country_currencies = country_currencies;
    account_info_local_var->enable_locales = enable_locales;
    account_info_local_var->enable_currencies = enable_currencies;
    account_info_local_var->gravatar = gravatar;

    account_info_local_var->_library_owned = 1;
    return account_info_local_var;
}

__attribute__((deprecated)) account_info_t *account_info_create(
    char *custid,
    char *ima,
    account_info_data_t *data,
    char *ip,
    account_info_oauthproviders_t *oauthproviders,
    account_info_oauth_config_t *oauthconfig,
    list_t *oauthadapters,
    account_info_limits_t *limits,
    char *language,
    account_info_country_currencies_t *country_currencies,
    int enable_locales,
    int enable_currencies,
    char *gravatar
    ) {
    return account_info_create_internal (
        custid,
        ima,
        data,
        ip,
        oauthproviders,
        oauthconfig,
        oauthadapters,
        limits,
        language,
        country_currencies,
        enable_locales,
        enable_currencies,
        gravatar
        );
}

void account_info_free(account_info_t *account_info) {
    if(NULL == account_info){
        return ;
    }
    if(account_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info->custid) {
        free(account_info->custid);
        account_info->custid = NULL;
    }
    if (account_info->ima) {
        free(account_info->ima);
        account_info->ima = NULL;
    }
    if (account_info->data) {
        account_info_data_free(account_info->data);
        account_info->data = NULL;
    }
    if (account_info->ip) {
        free(account_info->ip);
        account_info->ip = NULL;
    }
    if (account_info->oauthproviders) {
        account_info_oauthproviders_free(account_info->oauthproviders);
        account_info->oauthproviders = NULL;
    }
    if (account_info->oauthconfig) {
        account_info_oauth_config_free(account_info->oauthconfig);
        account_info->oauthconfig = NULL;
    }
    if (account_info->oauthadapters) {
        list_ForEach(listEntry, account_info->oauthadapters) {
            free(listEntry->data);
        }
        list_freeList(account_info->oauthadapters);
        account_info->oauthadapters = NULL;
    }
    if (account_info->limits) {
        account_info_limits_free(account_info->limits);
        account_info->limits = NULL;
    }
    if (account_info->language) {
        free(account_info->language);
        account_info->language = NULL;
    }
    if (account_info->country_currencies) {
        account_info_country_currencies_free(account_info->country_currencies);
        account_info->country_currencies = NULL;
    }
    if (account_info->gravatar) {
        free(account_info->gravatar);
        account_info->gravatar = NULL;
    }
    free(account_info);
}

cJSON *account_info_convertToJSON(account_info_t *account_info) {
    cJSON *item = cJSON_CreateObject();

    // account_info->custid
    if(account_info->custid) {
    if(cJSON_AddStringToObject(item, "custid", account_info->custid) == NULL) {
    goto fail; //String
    }
    }


    // account_info->ima
    if(account_info->ima) {
    if(cJSON_AddStringToObject(item, "ima", account_info->ima) == NULL) {
    goto fail; //String
    }
    }


    // account_info->data
    if(account_info->data) {
    cJSON *data_local_JSON = account_info_data_convertToJSON(account_info->data);
    if(data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "data", data_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info->ip
    if(account_info->ip) {
    if(cJSON_AddStringToObject(item, "ip", account_info->ip) == NULL) {
    goto fail; //String
    }
    }


    // account_info->oauthproviders
    if(account_info->oauthproviders) {
    cJSON *oauthproviders_local_JSON = account_info_oauthproviders_convertToJSON(account_info->oauthproviders);
    if(oauthproviders_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oauthproviders", oauthproviders_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info->oauthconfig
    if(account_info->oauthconfig) {
    cJSON *oauthconfig_local_JSON = account_info_oauth_config_convertToJSON(account_info->oauthconfig);
    if(oauthconfig_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "oauthconfig", oauthconfig_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info->oauthadapters
    if(account_info->oauthadapters) {
    cJSON *oauthadapters = cJSON_AddArrayToObject(item, "oauthadapters");
    if(oauthadapters == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *oauthadaptersListEntry;
    list_ForEach(oauthadaptersListEntry, account_info->oauthadapters) {
    if(cJSON_AddStringToObject(oauthadapters, "", oauthadaptersListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // account_info->limits
    if(account_info->limits) {
    cJSON *limits_local_JSON = account_info_limits_convertToJSON(account_info->limits);
    if(limits_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "limits", limits_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // account_info->language
    if(account_info->language) {
    if(cJSON_AddStringToObject(item, "language", account_info->language) == NULL) {
    goto fail; //String
    }
    }


    // account_info->country_currencies
    if(account_info->country_currencies) {
    cJSON *country_currencies_local_JSON = account_info_country_currencies_convertToJSON(account_info->country_currencies);
    if(country_currencies_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "countryCurrencies", country_currencies_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // account_info->enable_locales
    if(account_info->enable_locales) {
    if(cJSON_AddBoolToObject(item, "enableLocales", account_info->enable_locales) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info->enable_currencies
    if(account_info->enable_currencies) {
    if(cJSON_AddBoolToObject(item, "enableCurrencies", account_info->enable_currencies) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info->gravatar
    if(account_info->gravatar) {
    if(cJSON_AddStringToObject(item, "gravatar", account_info->gravatar) == NULL) {
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

account_info_t *account_info_parseFromJSON(cJSON *account_infoJSON){

    account_info_t *account_info_local_var = NULL;

    // define the local variable for account_info->data
    account_info_data_t *data_local_nonprim = NULL;

    // define the local variable for account_info->oauthproviders
    account_info_oauthproviders_t *oauthproviders_local_nonprim = NULL;

    // define the local variable for account_info->oauthconfig
    account_info_oauth_config_t *oauthconfig_local_nonprim = NULL;

    // define the local list for account_info->oauthadapters
    list_t *oauthadaptersList = NULL;

    // define the local variable for account_info->limits
    account_info_limits_t *limits_local_nonprim = NULL;

    // define the local variable for account_info->country_currencies
    account_info_country_currencies_t *country_currencies_local_nonprim = NULL;

    // account_info->custid
    cJSON *custid = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "custid");
    if (cJSON_IsNull(custid)) {
        custid = NULL;
    }
    if (custid) { 
    if(!cJSON_IsString(custid) && !cJSON_IsNull(custid))
    {
    goto end; //String
    }
    }

    // account_info->ima
    cJSON *ima = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "ima");
    if (cJSON_IsNull(ima)) {
        ima = NULL;
    }
    if (ima) { 
    if(!cJSON_IsString(ima) && !cJSON_IsNull(ima))
    {
    goto end; //String
    }
    }

    // account_info->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (data) { 
    data_local_nonprim = account_info_data_parseFromJSON(data); //nonprimitive
    }

    // account_info->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (ip) { 
    if(!cJSON_IsString(ip) && !cJSON_IsNull(ip))
    {
    goto end; //String
    }
    }

    // account_info->oauthproviders
    cJSON *oauthproviders = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "oauthproviders");
    if (cJSON_IsNull(oauthproviders)) {
        oauthproviders = NULL;
    }
    if (oauthproviders) { 
    oauthproviders_local_nonprim = account_info_oauthproviders_parseFromJSON(oauthproviders); //nonprimitive
    }

    // account_info->oauthconfig
    cJSON *oauthconfig = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "oauthconfig");
    if (cJSON_IsNull(oauthconfig)) {
        oauthconfig = NULL;
    }
    if (oauthconfig) { 
    oauthconfig_local_nonprim = account_info_oauth_config_parseFromJSON(oauthconfig); //nonprimitive
    }

    // account_info->oauthadapters
    cJSON *oauthadapters = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "oauthadapters");
    if (cJSON_IsNull(oauthadapters)) {
        oauthadapters = NULL;
    }
    if (oauthadapters) { 
    cJSON *oauthadapters_local = NULL;
    if(!cJSON_IsArray(oauthadapters)) {
        goto end;//primitive container
    }
    oauthadaptersList = list_createList();

    cJSON_ArrayForEach(oauthadapters_local, oauthadapters)
    {
        if(!cJSON_IsString(oauthadapters_local))
        {
            goto end;
        }
        list_addElement(oauthadaptersList , strdup(oauthadapters_local->valuestring));
    }
    }

    // account_info->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "limits");
    if (cJSON_IsNull(limits)) {
        limits = NULL;
    }
    if (limits) { 
    limits_local_nonprim = account_info_limits_parseFromJSON(limits); //custom
    }

    // account_info->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "language");
    if (cJSON_IsNull(language)) {
        language = NULL;
    }
    if (language) { 
    if(!cJSON_IsString(language) && !cJSON_IsNull(language))
    {
    goto end; //String
    }
    }

    // account_info->country_currencies
    cJSON *country_currencies = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "countryCurrencies");
    if (cJSON_IsNull(country_currencies)) {
        country_currencies = NULL;
    }
    if (country_currencies) { 
    country_currencies_local_nonprim = account_info_country_currencies_parseFromJSON(country_currencies); //custom
    }

    // account_info->enable_locales
    cJSON *enable_locales = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "enableLocales");
    if (cJSON_IsNull(enable_locales)) {
        enable_locales = NULL;
    }
    if (enable_locales) { 
    if(!cJSON_IsBool(enable_locales))
    {
    goto end; //Bool
    }
    }

    // account_info->enable_currencies
    cJSON *enable_currencies = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "enableCurrencies");
    if (cJSON_IsNull(enable_currencies)) {
        enable_currencies = NULL;
    }
    if (enable_currencies) { 
    if(!cJSON_IsBool(enable_currencies))
    {
    goto end; //Bool
    }
    }

    // account_info->gravatar
    cJSON *gravatar = cJSON_GetObjectItemCaseSensitive(account_infoJSON, "gravatar");
    if (cJSON_IsNull(gravatar)) {
        gravatar = NULL;
    }
    if (gravatar) { 
    if(!cJSON_IsString(gravatar) && !cJSON_IsNull(gravatar))
    {
    goto end; //String
    }
    }


    account_info_local_var = account_info_create_internal (
        custid && !cJSON_IsNull(custid) ? strdup(custid->valuestring) : NULL,
        ima && !cJSON_IsNull(ima) ? strdup(ima->valuestring) : NULL,
        data ? data_local_nonprim : NULL,
        ip && !cJSON_IsNull(ip) ? strdup(ip->valuestring) : NULL,
        oauthproviders ? oauthproviders_local_nonprim : NULL,
        oauthconfig ? oauthconfig_local_nonprim : NULL,
        oauthadapters ? oauthadaptersList : NULL,
        limits ? limits_local_nonprim : NULL,
        language && !cJSON_IsNull(language) ? strdup(language->valuestring) : NULL,
        country_currencies ? country_currencies_local_nonprim : NULL,
        enable_locales ? enable_locales->valueint : 0,
        enable_currencies ? enable_currencies->valueint : 0,
        gravatar && !cJSON_IsNull(gravatar) ? strdup(gravatar->valuestring) : NULL
        );

    return account_info_local_var;
end:
    if (data_local_nonprim) {
        account_info_data_free(data_local_nonprim);
        data_local_nonprim = NULL;
    }
    if (oauthproviders_local_nonprim) {
        account_info_oauthproviders_free(oauthproviders_local_nonprim);
        oauthproviders_local_nonprim = NULL;
    }
    if (oauthconfig_local_nonprim) {
        account_info_oauth_config_free(oauthconfig_local_nonprim);
        oauthconfig_local_nonprim = NULL;
    }
    if (oauthadaptersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, oauthadaptersList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(oauthadaptersList);
        oauthadaptersList = NULL;
    }
    if (limits_local_nonprim) {
        account_info_limits_free(limits_local_nonprim);
        limits_local_nonprim = NULL;
    }
    if (country_currencies_local_nonprim) {
        account_info_country_currencies_free(country_currencies_local_nonprim);
        country_currencies_local_nonprim = NULL;
    }
    return NULL;

}
