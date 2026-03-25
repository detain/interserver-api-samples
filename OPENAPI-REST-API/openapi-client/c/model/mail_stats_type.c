#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_stats_type.h"


char* mail_stats_type_time_ToString(interserver_management_api_mail_stats_type_TIME_e time) {
    char* timeArray[] =  { "NULL", "all", "billing", "month", "7d", "24h", "today", "1h" };
    return timeArray[time];
}

interserver_management_api_mail_stats_type_TIME_e mail_stats_type_time_FromString(char* time){
    int stringToReturn = 0;
    char *timeArray[] =  { "NULL", "all", "billing", "month", "7d", "24h", "today", "1h" };
    size_t sizeofArray = sizeof(timeArray) / sizeof(timeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(time, timeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static mail_stats_type_t *mail_stats_type_create_internal(
    interserver_management_api_mail_stats_type_TIME_e time,
    int *usage,
    char *currency,
    char *currency_symbol,
    double *cost,
    int *received,
    int *sent,
    mail_stats_type_volume_t *volume
    ) {
    mail_stats_type_t *mail_stats_type_local_var = malloc(sizeof(mail_stats_type_t));
    if (!mail_stats_type_local_var) {
        return NULL;
    }
    memset(mail_stats_type_local_var, 0, sizeof(mail_stats_type_t));
    mail_stats_type_local_var->_library_owned = 1;
    mail_stats_type_local_var->time = time;
    mail_stats_type_local_var->usage = usage;
    mail_stats_type_local_var->currency = currency;
    mail_stats_type_local_var->currency_symbol = currency_symbol;
    mail_stats_type_local_var->cost = cost;
    mail_stats_type_local_var->received = received;
    mail_stats_type_local_var->sent = sent;
    mail_stats_type_local_var->volume = volume;
    return mail_stats_type_local_var;
}

__attribute__((deprecated)) mail_stats_type_t *mail_stats_type_create(
    interserver_management_api_mail_stats_type_TIME_e time,
    int *usage,
    char *currency,
    char *currency_symbol,
    double *cost,
    int *received,
    int *sent,
    mail_stats_type_volume_t *volume
    ) {
    int *usage_copy = NULL;
    if (usage) {
        usage_copy = malloc(sizeof(int));
        if (usage_copy) *usage_copy = *usage;
    }
    double *cost_copy = NULL;
    if (cost) {
        cost_copy = malloc(sizeof(double));
        if (cost_copy) *cost_copy = *cost;
    }
    int *received_copy = NULL;
    if (received) {
        received_copy = malloc(sizeof(int));
        if (received_copy) *received_copy = *received;
    }
    int *sent_copy = NULL;
    if (sent) {
        sent_copy = malloc(sizeof(int));
        if (sent_copy) *sent_copy = *sent;
    }
    mail_stats_type_t *result = mail_stats_type_create_internal (
        time,
        usage_copy,
        currency,
        currency_symbol,
        cost_copy,
        received_copy,
        sent_copy,
        volume
        );
    if (!result) {
        free(usage_copy);
        free(cost_copy);
        free(received_copy);
        free(sent_copy);
    }
    return result;
}

void mail_stats_type_free(mail_stats_type_t *mail_stats_type) {
    if(NULL == mail_stats_type){
        return ;
    }
    if(mail_stats_type->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_stats_type_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_stats_type->usage) {
        free(mail_stats_type->usage);
        mail_stats_type->usage = NULL;
    }
    if (mail_stats_type->currency) {
        free(mail_stats_type->currency);
        mail_stats_type->currency = NULL;
    }
    if (mail_stats_type->currency_symbol) {
        free(mail_stats_type->currency_symbol);
        mail_stats_type->currency_symbol = NULL;
    }
    if (mail_stats_type->cost) {
        free(mail_stats_type->cost);
        mail_stats_type->cost = NULL;
    }
    if (mail_stats_type->received) {
        free(mail_stats_type->received);
        mail_stats_type->received = NULL;
    }
    if (mail_stats_type->sent) {
        free(mail_stats_type->sent);
        mail_stats_type->sent = NULL;
    }
    if (mail_stats_type->volume) {
        mail_stats_type_volume_free(mail_stats_type->volume);
        mail_stats_type->volume = NULL;
    }
    free(mail_stats_type);
}

cJSON *mail_stats_type_convertToJSON(mail_stats_type_t *mail_stats_type) {
    cJSON *item = cJSON_CreateObject();

    // mail_stats_type->time
    if(mail_stats_type->time != interserver_management_api_mail_stats_type_TIME_NULL) {
    if(cJSON_AddStringToObject(item, "time", mail_stats_type_time_ToString(mail_stats_type->time)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // mail_stats_type->usage
    if(mail_stats_type->usage) {
    if(cJSON_AddNumberToObject(item, "usage", *mail_stats_type->usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type->currency
    if(mail_stats_type->currency) {
    if(cJSON_AddStringToObject(item, "currency", mail_stats_type->currency) == NULL) {
    goto fail; //String
    }
    }


    // mail_stats_type->currency_symbol
    if(mail_stats_type->currency_symbol) {
    if(cJSON_AddStringToObject(item, "currencySymbol", mail_stats_type->currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // mail_stats_type->cost
    if(mail_stats_type->cost) {
    if(cJSON_AddNumberToObject(item, "cost", *mail_stats_type->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type->received
    if(mail_stats_type->received) {
    if(cJSON_AddNumberToObject(item, "received", *mail_stats_type->received) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type->sent
    if(mail_stats_type->sent) {
    if(cJSON_AddNumberToObject(item, "sent", *mail_stats_type->sent) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_stats_type->volume
    if(mail_stats_type->volume) {
    cJSON *volume_local_JSON = mail_stats_type_volume_convertToJSON(mail_stats_type->volume);
    if(volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "volume", volume_local_JSON);
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

mail_stats_type_t *mail_stats_type_parseFromJSON(cJSON *mail_stats_typeJSON){

    mail_stats_type_t *mail_stats_type_local_var = NULL;

    // define the local variable for mail_stats_type->usage
    int *usage_local_var = NULL;

    char *currency_local_str = NULL;

    char *currency_symbol_local_str = NULL;

    // define the local variable for mail_stats_type->cost
    double *cost_local_var = NULL;

    // define the local variable for mail_stats_type->received
    int *received_local_var = NULL;

    // define the local variable for mail_stats_type->sent
    int *sent_local_var = NULL;

    // define the local variable for mail_stats_type->volume
    mail_stats_type_volume_t *volume_local_nonprim = NULL;

    // mail_stats_type->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "time");
    if (cJSON_IsNull(time)) {
        time = NULL;
    }
    interserver_management_api_mail_stats_type_TIME_e timeVariable;
    if (time) { 
    if(!cJSON_IsString(time))
    {
    goto end; //Enum
    }
    timeVariable = mail_stats_type_time_FromString(time->valuestring);
    }

    // mail_stats_type->usage
    cJSON *usage = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "usage");
    if (cJSON_IsNull(usage)) {
        usage = NULL;
    }
    if (usage) { 
    if(!cJSON_IsNumber(usage))
    {
    goto end; //Numeric
    }
    usage_local_var = malloc(sizeof(int));
    if(!usage_local_var)
    {
        goto end;
    }
    *usage_local_var = usage->valuedouble;
    }

    // mail_stats_type->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // mail_stats_type->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "currencySymbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (currency_symbol) { 
    if(!cJSON_IsString(currency_symbol) && !cJSON_IsNull(currency_symbol))
    {
    goto end; //String
    }
    }

    // mail_stats_type->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    cost_local_var = malloc(sizeof(double));
    if(!cost_local_var)
    {
        goto end;
    }
    *cost_local_var = cost->valuedouble;
    }

    // mail_stats_type->received
    cJSON *received = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "received");
    if (cJSON_IsNull(received)) {
        received = NULL;
    }
    if (received) { 
    if(!cJSON_IsNumber(received))
    {
    goto end; //Numeric
    }
    received_local_var = malloc(sizeof(int));
    if(!received_local_var)
    {
        goto end;
    }
    *received_local_var = received->valuedouble;
    }

    // mail_stats_type->sent
    cJSON *sent = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "sent");
    if (cJSON_IsNull(sent)) {
        sent = NULL;
    }
    if (sent) { 
    if(!cJSON_IsNumber(sent))
    {
    goto end; //Numeric
    }
    sent_local_var = malloc(sizeof(int));
    if(!sent_local_var)
    {
        goto end;
    }
    *sent_local_var = sent->valuedouble;
    }

    // mail_stats_type->volume
    cJSON *volume = cJSON_GetObjectItemCaseSensitive(mail_stats_typeJSON, "volume");
    if (cJSON_IsNull(volume)) {
        volume = NULL;
    }
    if (volume) { 
    volume_local_nonprim = mail_stats_type_volume_parseFromJSON(volume); //nonprimitive
    }


    if (currency && !cJSON_IsNull(currency)) currency_local_str = strdup(currency->valuestring);
    if (currency_symbol && !cJSON_IsNull(currency_symbol)) currency_symbol_local_str = strdup(currency_symbol->valuestring);

    mail_stats_type_local_var = mail_stats_type_create_internal (
        time ? timeVariable : interserver_management_api_mail_stats_type_TIME_NULL,
        usage_local_var,
        currency_local_str,
        currency_symbol_local_str,
        cost_local_var,
        received_local_var,
        sent_local_var,
        volume ? volume_local_nonprim : NULL
        );

    if (!mail_stats_type_local_var) {
        goto end;
    }

    return mail_stats_type_local_var;
end:
    if (usage_local_var) {
        free(usage_local_var);
        usage_local_var = NULL;
    }
    if (currency_local_str) {
        free(currency_local_str);
        currency_local_str = NULL;
    }
    if (currency_symbol_local_str) {
        free(currency_symbol_local_str);
        currency_symbol_local_str = NULL;
    }
    if (cost_local_var) {
        free(cost_local_var);
        cost_local_var = NULL;
    }
    if (received_local_var) {
        free(received_local_var);
        received_local_var = NULL;
    }
    if (sent_local_var) {
        free(sent_local_var);
        sent_local_var = NULL;
    }
    if (volume_local_nonprim) {
        mail_stats_type_volume_free(volume_local_nonprim);
        volume_local_nonprim = NULL;
    }
    return NULL;

}
