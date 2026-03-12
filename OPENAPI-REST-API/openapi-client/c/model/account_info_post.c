#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_post.h"



static account_info_post_t *account_info_post_create_internal(
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *company,
    char *address2,
    char *locale,
    char *email_invoices,
    char *email_abuse,
    int disable_reset,
    int disable_reinstall,
    int disable_server_notifications,
    int disable_email_notifications,
    char *gstin
    ) {
    account_info_post_t *account_info_post_local_var = malloc(sizeof(account_info_post_t));
    if (!account_info_post_local_var) {
        return NULL;
    }
    account_info_post_local_var->name = name;
    account_info_post_local_var->address = address;
    account_info_post_local_var->city = city;
    account_info_post_local_var->state = state;
    account_info_post_local_var->zip = zip;
    account_info_post_local_var->country = country;
    account_info_post_local_var->phone = phone;
    account_info_post_local_var->company = company;
    account_info_post_local_var->address2 = address2;
    account_info_post_local_var->locale = locale;
    account_info_post_local_var->email_invoices = email_invoices;
    account_info_post_local_var->email_abuse = email_abuse;
    account_info_post_local_var->disable_reset = disable_reset;
    account_info_post_local_var->disable_reinstall = disable_reinstall;
    account_info_post_local_var->disable_server_notifications = disable_server_notifications;
    account_info_post_local_var->disable_email_notifications = disable_email_notifications;
    account_info_post_local_var->gstin = gstin;

    account_info_post_local_var->_library_owned = 1;
    return account_info_post_local_var;
}

__attribute__((deprecated)) account_info_post_t *account_info_post_create(
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *company,
    char *address2,
    char *locale,
    char *email_invoices,
    char *email_abuse,
    int disable_reset,
    int disable_reinstall,
    int disable_server_notifications,
    int disable_email_notifications,
    char *gstin
    ) {
    return account_info_post_create_internal (
        name,
        address,
        city,
        state,
        zip,
        country,
        phone,
        company,
        address2,
        locale,
        email_invoices,
        email_abuse,
        disable_reset,
        disable_reinstall,
        disable_server_notifications,
        disable_email_notifications,
        gstin
        );
}

void account_info_post_free(account_info_post_t *account_info_post) {
    if(NULL == account_info_post){
        return ;
    }
    if(account_info_post->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_post_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_post->name) {
        free(account_info_post->name);
        account_info_post->name = NULL;
    }
    if (account_info_post->address) {
        free(account_info_post->address);
        account_info_post->address = NULL;
    }
    if (account_info_post->city) {
        free(account_info_post->city);
        account_info_post->city = NULL;
    }
    if (account_info_post->state) {
        free(account_info_post->state);
        account_info_post->state = NULL;
    }
    if (account_info_post->zip) {
        free(account_info_post->zip);
        account_info_post->zip = NULL;
    }
    if (account_info_post->country) {
        free(account_info_post->country);
        account_info_post->country = NULL;
    }
    if (account_info_post->phone) {
        free(account_info_post->phone);
        account_info_post->phone = NULL;
    }
    if (account_info_post->company) {
        free(account_info_post->company);
        account_info_post->company = NULL;
    }
    if (account_info_post->address2) {
        free(account_info_post->address2);
        account_info_post->address2 = NULL;
    }
    if (account_info_post->locale) {
        free(account_info_post->locale);
        account_info_post->locale = NULL;
    }
    if (account_info_post->email_invoices) {
        free(account_info_post->email_invoices);
        account_info_post->email_invoices = NULL;
    }
    if (account_info_post->email_abuse) {
        free(account_info_post->email_abuse);
        account_info_post->email_abuse = NULL;
    }
    if (account_info_post->gstin) {
        free(account_info_post->gstin);
        account_info_post->gstin = NULL;
    }
    free(account_info_post);
}

cJSON *account_info_post_convertToJSON(account_info_post_t *account_info_post) {
    cJSON *item = cJSON_CreateObject();

    // account_info_post->name
    if (!account_info_post->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", account_info_post->name) == NULL) {
    goto fail; //String
    }


    // account_info_post->address
    if (!account_info_post->address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "address", account_info_post->address) == NULL) {
    goto fail; //String
    }


    // account_info_post->city
    if (!account_info_post->city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "city", account_info_post->city) == NULL) {
    goto fail; //String
    }


    // account_info_post->state
    if (!account_info_post->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", account_info_post->state) == NULL) {
    goto fail; //String
    }


    // account_info_post->zip
    if (!account_info_post->zip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "zip", account_info_post->zip) == NULL) {
    goto fail; //String
    }


    // account_info_post->country
    if (!account_info_post->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", account_info_post->country) == NULL) {
    goto fail; //String
    }


    // account_info_post->phone
    if (!account_info_post->phone) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "phone", account_info_post->phone) == NULL) {
    goto fail; //String
    }


    // account_info_post->company
    if(account_info_post->company) {
    if(cJSON_AddStringToObject(item, "company", account_info_post->company) == NULL) {
    goto fail; //String
    }
    }


    // account_info_post->address2
    if(account_info_post->address2) {
    if(cJSON_AddStringToObject(item, "address2", account_info_post->address2) == NULL) {
    goto fail; //String
    }
    }


    // account_info_post->locale
    if(account_info_post->locale) {
    if(cJSON_AddStringToObject(item, "locale", account_info_post->locale) == NULL) {
    goto fail; //String
    }
    }


    // account_info_post->email_invoices
    if(account_info_post->email_invoices) {
    if(cJSON_AddStringToObject(item, "email_invoices", account_info_post->email_invoices) == NULL) {
    goto fail; //String
    }
    }


    // account_info_post->email_abuse
    if(account_info_post->email_abuse) {
    if(cJSON_AddStringToObject(item, "email_abuse", account_info_post->email_abuse) == NULL) {
    goto fail; //String
    }
    }


    // account_info_post->disable_reset
    if(account_info_post->disable_reset) {
    if(cJSON_AddBoolToObject(item, "disable_reset", account_info_post->disable_reset) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_post->disable_reinstall
    if(account_info_post->disable_reinstall) {
    if(cJSON_AddBoolToObject(item, "disable_reinstall", account_info_post->disable_reinstall) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_post->disable_server_notifications
    if(account_info_post->disable_server_notifications) {
    if(cJSON_AddBoolToObject(item, "disable_server_notifications", account_info_post->disable_server_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_post->disable_email_notifications
    if(account_info_post->disable_email_notifications) {
    if(cJSON_AddBoolToObject(item, "disable_email_notifications", account_info_post->disable_email_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_post->gstin
    if(account_info_post->gstin) {
    if(cJSON_AddStringToObject(item, "gstin", account_info_post->gstin) == NULL) {
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

account_info_post_t *account_info_post_parseFromJSON(cJSON *account_info_postJSON){

    account_info_post_t *account_info_post_local_var = NULL;

    // account_info_post->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // account_info_post->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }

    // account_info_post->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (!city) {
        goto end;
    }

    
    if(!cJSON_IsString(city))
    {
    goto end; //String
    }

    // account_info_post->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (!state) {
        goto end;
    }

    
    if(!cJSON_IsString(state))
    {
    goto end; //String
    }

    // account_info_post->zip
    cJSON *zip = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "zip");
    if (cJSON_IsNull(zip)) {
        zip = NULL;
    }
    if (!zip) {
        goto end;
    }

    
    if(!cJSON_IsString(zip))
    {
    goto end; //String
    }

    // account_info_post->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (!country) {
        goto end;
    }

    
    if(!cJSON_IsString(country))
    {
    goto end; //String
    }

    // account_info_post->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (!phone) {
        goto end;
    }

    
    if(!cJSON_IsString(phone))
    {
    goto end; //String
    }

    // account_info_post->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // account_info_post->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // account_info_post->locale
    cJSON *locale = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "locale");
    if (cJSON_IsNull(locale)) {
        locale = NULL;
    }
    if (locale) { 
    if(!cJSON_IsString(locale) && !cJSON_IsNull(locale))
    {
    goto end; //String
    }
    }

    // account_info_post->email_invoices
    cJSON *email_invoices = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "email_invoices");
    if (cJSON_IsNull(email_invoices)) {
        email_invoices = NULL;
    }
    if (email_invoices) { 
    if(!cJSON_IsString(email_invoices) && !cJSON_IsNull(email_invoices))
    {
    goto end; //String
    }
    }

    // account_info_post->email_abuse
    cJSON *email_abuse = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "email_abuse");
    if (cJSON_IsNull(email_abuse)) {
        email_abuse = NULL;
    }
    if (email_abuse) { 
    if(!cJSON_IsString(email_abuse) && !cJSON_IsNull(email_abuse))
    {
    goto end; //String
    }
    }

    // account_info_post->disable_reset
    cJSON *disable_reset = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "disable_reset");
    if (cJSON_IsNull(disable_reset)) {
        disable_reset = NULL;
    }
    if (disable_reset) { 
    if(!cJSON_IsBool(disable_reset))
    {
    goto end; //Bool
    }
    }

    // account_info_post->disable_reinstall
    cJSON *disable_reinstall = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "disable_reinstall");
    if (cJSON_IsNull(disable_reinstall)) {
        disable_reinstall = NULL;
    }
    if (disable_reinstall) { 
    if(!cJSON_IsBool(disable_reinstall))
    {
    goto end; //Bool
    }
    }

    // account_info_post->disable_server_notifications
    cJSON *disable_server_notifications = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "disable_server_notifications");
    if (cJSON_IsNull(disable_server_notifications)) {
        disable_server_notifications = NULL;
    }
    if (disable_server_notifications) { 
    if(!cJSON_IsBool(disable_server_notifications))
    {
    goto end; //Bool
    }
    }

    // account_info_post->disable_email_notifications
    cJSON *disable_email_notifications = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "disable_email_notifications");
    if (cJSON_IsNull(disable_email_notifications)) {
        disable_email_notifications = NULL;
    }
    if (disable_email_notifications) { 
    if(!cJSON_IsBool(disable_email_notifications))
    {
    goto end; //Bool
    }
    }

    // account_info_post->gstin
    cJSON *gstin = cJSON_GetObjectItemCaseSensitive(account_info_postJSON, "gstin");
    if (cJSON_IsNull(gstin)) {
        gstin = NULL;
    }
    if (gstin) { 
    if(!cJSON_IsString(gstin) && !cJSON_IsNull(gstin))
    {
    goto end; //String
    }
    }


    account_info_post_local_var = account_info_post_create_internal (
        strdup(name->valuestring),
        strdup(address->valuestring),
        strdup(city->valuestring),
        strdup(state->valuestring),
        strdup(zip->valuestring),
        strdup(country->valuestring),
        strdup(phone->valuestring),
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        locale && !cJSON_IsNull(locale) ? strdup(locale->valuestring) : NULL,
        email_invoices && !cJSON_IsNull(email_invoices) ? strdup(email_invoices->valuestring) : NULL,
        email_abuse && !cJSON_IsNull(email_abuse) ? strdup(email_abuse->valuestring) : NULL,
        disable_reset ? disable_reset->valueint : 0,
        disable_reinstall ? disable_reinstall->valueint : 0,
        disable_server_notifications ? disable_server_notifications->valueint : 0,
        disable_email_notifications ? disable_email_notifications->valueint : 0,
        gstin && !cJSON_IsNull(gstin) ? strdup(gstin->valuestring) : NULL
        );

    return account_info_post_local_var;
end:
    return NULL;

}
