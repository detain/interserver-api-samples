#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "MailAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum TIME for MailAPI_getStats

static char* getStats_TIME_ToString(interserver_management_api_getStats_time_e TIME){
    char *TIMEArray[] =  { "NULL", "all", "billing", "month", "7d", "24h", "1d", "1h" };
    return TIMEArray[TIME];
}

static interserver_management_api_getStats_time_e getStats_TIME_FromString(char* TIME){
    int stringToReturn = 0;
    char *TIMEArray[] =  { "NULL", "all", "billing", "month", "7d", "24h", "1d", "1h" };
    size_t sizeofArray = sizeof(TIMEArray) / sizeof(TIMEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(TIME, TIMEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getStats_TIME_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getStats_TIME_convertToJSON(interserver_management_api_getStats_time_e TIME) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "time", getStats_TIME_ToString(TIME)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getStats_TIME_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_getStats_time_e getStats_TIME_parseFromJSON(cJSON* TIMEJSON) {
    interserver_management_api_getStats_time_e TIMEVariable = 0;
    cJSON *TIMEVar = cJSON_GetObjectItemCaseSensitive(TIMEJSON, "time");
    if(!cJSON_IsString(TIMEVar) || (TIMEVar->valuestring == NULL))
    {
        goto end;
    }
    TIMEVariable = getStats_TIME_FromString(TIMEVar->valuestring);
    return TIMEVariable;
end:
    return 0;
}
*/

// Functions for enum DELIVERED for MailAPI_viewMailLog

static char* viewMailLog_DELIVERED_ToString(interserver_management_api_viewMailLog_delivered_e DELIVERED){
    char *DELIVEREDArray[] =  { "NULL", "0", "1" };
    return DELIVEREDArray[DELIVERED];
}

static interserver_management_api_viewMailLog_delivered_e viewMailLog_DELIVERED_FromString(char* DELIVERED){
    int stringToReturn = 0;
    char *DELIVEREDArray[] =  { "NULL", "0", "1" };
    size_t sizeofArray = sizeof(DELIVEREDArray) / sizeof(DELIVEREDArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(DELIVERED, DELIVEREDArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function viewMailLog_DELIVERED_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *viewMailLog_DELIVERED_convertToJSON(interserver_management_api_viewMailLog_delivered_e DELIVERED) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "delivered", viewMailLog_DELIVERED_ToString(DELIVERED)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function viewMailLog_DELIVERED_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_viewMailLog_delivered_e viewMailLog_DELIVERED_parseFromJSON(cJSON* DELIVEREDJSON) {
    interserver_management_api_viewMailLog_delivered_e DELIVEREDVariable = 0;
    cJSON *DELIVEREDVar = cJSON_GetObjectItemCaseSensitive(DELIVEREDJSON, "delivered");
    if(!cJSON_IsString(DELIVEREDVar) || (DELIVEREDVar->valuestring == NULL))
    {
        goto end;
    }
    DELIVEREDVariable = viewMailLog_DELIVERED_FromString(DELIVEREDVar->valuestring);
    return DELIVEREDVariable;
end:
    return 0;
}
*/


// Place Mail Order
//
// Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
//
void
MailAPI_addMail(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/order");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Default response");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);

}

// Create Deny Rule
//
// Adds a new deny rule to automatically block emails that match the specified criteria.
//
generic_response_t*
MailAPI_addRule(apiClient_t *apiClient, int *id, deny_rule_new_t *deny_rule_new)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/rules");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_deny_rule_new = NULL;
    if (deny_rule_new != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_deny_rule_new = deny_rule_new_convertToJSON(deny_rule_new);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deny_rule_new);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-www-form-urlencoded"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Deny rule created successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_deny_rule_new) {
        cJSON_Delete(localVarSingleItemJSON_deny_rule_new);
        localVarSingleItemJSON_deny_rule_new = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create Mail Alert
//
// Creates a new alert for the mail service, such as delivery or quota notifications.
//
success_text_response_t*
MailAPI_createMailAlert(apiClient_t *apiClient, int *id, mail_alert_request_t *mail_alert_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/alerts");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_mail_alert_request = NULL;
    if (mail_alert_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_mail_alert_request = mail_alert_request_convertToJSON(mail_alert_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_mail_alert_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_mail_alert_request) {
        cJSON_Delete(localVarSingleItemJSON_mail_alert_request);
        localVarSingleItemJSON_mail_alert_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete Mail Alert
//
// Deletes an existing alert definition for the mail service.
//
success_text_response_t*
MailAPI_deleteMailAlert(apiClient_t *apiClient, int *id, int *alert_id)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/alerts");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // query parameters
    char *keyQuery_alert_id = NULL;
    char * valueQuery_alert_id = NULL;
    keyValuePair_t *keyPairQuery_alert_id = 0;
    if (alert_id)
    {
        keyQuery_alert_id = strdup("alert_id");
        valueQuery_alert_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_alert_id, MAX_NUMBER_LENGTH, "%d", *alert_id);
        keyPairQuery_alert_id = keyValuePair_create(keyQuery_alert_id, valueQuery_alert_id);
        list_addElement(localVarQueryParameters,keyPairQuery_alert_id);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    if(keyQuery_alert_id){
        free(keyQuery_alert_id);
        keyQuery_alert_id = NULL;
    }
    if(valueQuery_alert_id){
        free(valueQuery_alert_id);
        valueQuery_alert_id = NULL;
    }
    if(keyPairQuery_alert_id){
        keyValuePair_free(keyPairQuery_alert_id);
        keyPairQuery_alert_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete Deny Rule
//
// Removes a deny rule from the mail service.
//
generic_response_t*
MailAPI_deleteRule(apiClient_t *apiClient, int *id, char *rule)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/rules/{rule}");

    if(!rule)
        goto end;


    // Path Params
    long sizeOfPathParams_id =  + strlen(rule)+3 + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);


    // Path Params
    long sizeOfPathParams_rule =  + strlen(rule)+3 + sizeof("{ rule }") - 1;
    if(rule == NULL) {
        goto end;
    }
    char* localVarToReplace_rule = malloc(sizeOfPathParams_rule);
    sprintf(localVarToReplace_rule, "{%s}", "rule");

    localVarPath = strReplace(localVarPath, localVarToReplace_rule, rule);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Deny rule deleted successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    free(localVarToReplace_rule);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove Email Address from Block List
//
// Removes an email address from the mail service's block lists.
//
generic_response_t*
MailAPI_delistBlock(apiClient_t *apiClient, int *id, char *email)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/blocks/delete");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // form parameters
    char *keyForm_email = NULL;
    char * valueForm_email = 0;
    keyValuePair_t *keyPairForm_email = 0;
    if (email != NULL)
    {
        keyForm_email = strdup("email");
        valueForm_email = strdup((email));
        keyPairForm_email = keyValuePair_create(keyForm_email,valueForm_email);
        list_addElement(localVarFormParameters,keyPairForm_email);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Email address removed from block list successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (keyForm_email) {
        free(keyForm_email);
        keyForm_email = NULL;
    }
    if (valueForm_email) {
        free(valueForm_email);
        valueForm_email = NULL;
    }
    free(keyPairForm_email);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List Mail Alerts
//
// Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
//
mail_alerts_response_t*
MailAPI_getMailAlerts(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/alerts");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Alert configuration for the mail service.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_alerts_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_alerts_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List Blocked Email Addresses
//
// Displays a listing of the blocked email addresses
//
mail_blocks_t*
MailAPI_getMailBlocks(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/blocks");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_blocks_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_blocks_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Delist Status
//
// Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
//
mail_delist_response_t*
MailAPI_getMailDelist(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/delist");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Blocklist entries and delist details for the mail service.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_delist_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_delist_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Deliverability Metrics
//
// Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
//
mail_deliverability_response_t*
MailAPI_getMailDeliverability(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/deliverability");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Deliverability metrics for the mail service.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_deliverability_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_deliverability_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Mail Order
//
// Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
//
mail_schema_t*
MailAPI_getMailInfo(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Mail Information.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_schema_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_schema_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Mail Invoices
//
// Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
//
charge_invoice_rows_t*
MailAPI_getMailInvoices(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/invoices");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Get Invoices response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    charge_invoice_rows_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = charge_invoice_rows_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List Mail Orders
//
// Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
//
list_t*
MailAPI_getMailList(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","The listing of &#x60;Mail&#x60; services on your account.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(MailAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, MailAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( MailAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Resend Mail Welcome Email
//
// Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
//
success_text_response_t*
MailAPI_getMailWelcomeEmail(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/welcome_email");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Mail Ordering Information
//
// Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
//
mail_order_t*
MailAPI_getNewMail(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/order");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Mail ordering information.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_order_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_order_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List Deny Rules
//
// Returns a listing of all the deny block rules configured for this mail service.
//
list_t*
MailAPI_getRules(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/rules");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of configured deny rules.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(MailAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, MailAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( MailAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Mail Usage Statistics
//
// Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
//
mail_stats_type_t*
MailAPI_getStats(apiClient_t *apiClient, int *id, interserver_management_api_getStats_time_e time)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/stats");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // query parameters
    char *keyQuery_time = NULL;
    interserver_management_api_getStats_time_e valueQuery_time ;
    keyValuePair_t *keyPairQuery_time = 0;
    if (time)
    {
        keyQuery_time = strdup("time");
        valueQuery_time = (time);
        keyPairQuery_time = keyValuePair_create(keyQuery_time, strdup(getStats_TIME_ToString(
        valueQuery_time)));
        list_addElement(localVarQueryParameters,keyPairQuery_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Mail service usage statistics.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_stats_type_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_stats_type_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    if(keyQuery_time){
        free(keyQuery_time);
        keyQuery_time = NULL;
    }
    if(keyPairQuery_time){
        keyValuePair_free(keyPairQuery_time);
        keyPairQuery_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Cancel Mail
//
// Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
//
mail_cancel_200_response_t*
MailAPI_mailCancel(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Mail Cancel");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    mail_cancel_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_cancel_200_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delist a Blocked Sender
//
// Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
//
success_text_response_t*
MailAPI_postMailDelist(apiClient_t *apiClient, int *id, mail_delist_request_t *mail_delist_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/delist");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_mail_delist_request = NULL;
    if (mail_delist_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_mail_delist_request = mail_delist_request_convertToJSON(mail_delist_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_mail_delist_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_mail_delist_request) {
        cJSON_Delete(localVarSingleItemJSON_mail_delist_request);
        localVarSingleItemJSON_mail_delist_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Validate Mail Order
//
// Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
//
void
MailAPI_putMail(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/order");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Validate Mail order response.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);

}

// Reset Mail Password
//
// Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
//
success_text_response_t*
MailAPI_resetMailPassword(apiClient_t *apiClient, int *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/reset_password");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send Email with Advanced Options
//
// Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
//
generic_response_t*
MailAPI_sendAdvMail(apiClient_t *apiClient, int *id, send_mail_adv_t *send_mail_adv)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/advsend");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_send_mail_adv = NULL;
    if (send_mail_adv != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_send_mail_adv = send_mail_adv_convertToJSON(send_mail_adv);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_mail_adv);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-www-form-urlencoded"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Email queued successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_send_mail_adv) {
        cJSON_Delete(localVarSingleItemJSON_send_mail_adv);
        localVarSingleItemJSON_send_mail_adv = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send Email
//
// Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
//
generic_response_t*
MailAPI_sendMail(apiClient_t *apiClient, int *id, send_mail_t *send_mail)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/send");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_send_mail = NULL;
    if (send_mail != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_send_mail = send_mail_convertToJSON(send_mail);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_mail);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-www-form-urlencoded"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Email queued successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_send_mail) {
        cJSON_Delete(localVarSingleItemJSON_send_mail);
        localVarSingleItemJSON_send_mail = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Mail Alert
//
// Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
//
success_text_response_t*
MailAPI_updateMailAlert(apiClient_t *apiClient, int *id, mail_alert_update_request_t *mail_alert_update_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/alerts");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // Body Param
    cJSON *localVarSingleItemJSON_mail_alert_update_request = NULL;
    if (mail_alert_update_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_mail_alert_update_request = mail_alert_update_request_convertToJSON(mail_alert_update_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_mail_alert_update_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (localVarSingleItemJSON_mail_alert_update_request) {
        cJSON_Delete(localVarSingleItemJSON_mail_alert_update_request);
        localVarSingleItemJSON_mail_alert_update_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Mail Order
//
// Updates mail service metadata for the order, such as stored settings or account details.
//
void
MailAPI_updateMailInfo(apiClient_t *apiClient, char *id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}");

    if(!id)
        goto end;


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + sizeof("{ id }") - 1;
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Default response");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);

}

// View Mail Log
//
// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
//
mail_log_t*
MailAPI_viewMailLog(apiClient_t *apiClient, int *id, long id2, char *origin, char *mx, char *from, char *to, char *subject, char *mailid, int *skip, int *limit, long startDate, long endDate, interserver_management_api_viewMailLog_delivered_e delivered)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/mail/{id}/log");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;
    if(id == 0){
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    snprintf(localVarToReplace_id, sizeOfPathParams_id, "{%s}", "id");

    char localVarBuff_id[256];
    snprintf(localVarBuff_id, sizeof localVarBuff_id, "%ld", (long)*id);

    localVarPath = strReplace(localVarPath, localVarToReplace_id, localVarBuff_id);




    // query parameters
    char *keyQuery_id2 = NULL;
    char * valueQuery_id2 ;
    keyValuePair_t *keyPairQuery_id2 = 0;
    {
        keyQuery_id2 = strdup("id");
        valueQuery_id2 = calloc(1,MAX_NUMBER_LENGTH_LONG);
        snprintf(valueQuery_id2, MAX_NUMBER_LENGTH_LONG, "%d", id2);
        keyPairQuery_id2 = keyValuePair_create(keyQuery_id2, valueQuery_id2);
        list_addElement(localVarQueryParameters,keyPairQuery_id2);
    }

    // query parameters
    char *keyQuery_origin = NULL;
    char * valueQuery_origin = NULL;
    keyValuePair_t *keyPairQuery_origin = 0;
    if (origin)
    {
        keyQuery_origin = strdup("origin");
        valueQuery_origin = strdup((origin));
        keyPairQuery_origin = keyValuePair_create(keyQuery_origin, valueQuery_origin);
        list_addElement(localVarQueryParameters,keyPairQuery_origin);
    }

    // query parameters
    char *keyQuery_mx = NULL;
    char * valueQuery_mx = NULL;
    keyValuePair_t *keyPairQuery_mx = 0;
    if (mx)
    {
        keyQuery_mx = strdup("mx");
        valueQuery_mx = strdup((mx));
        keyPairQuery_mx = keyValuePair_create(keyQuery_mx, valueQuery_mx);
        list_addElement(localVarQueryParameters,keyPairQuery_mx);
    }

    // query parameters
    char *keyQuery_from = NULL;
    char * valueQuery_from = NULL;
    keyValuePair_t *keyPairQuery_from = 0;
    if (from)
    {
        keyQuery_from = strdup("from");
        valueQuery_from = strdup((from));
        keyPairQuery_from = keyValuePair_create(keyQuery_from, valueQuery_from);
        list_addElement(localVarQueryParameters,keyPairQuery_from);
    }

    // query parameters
    char *keyQuery_to = NULL;
    char * valueQuery_to = NULL;
    keyValuePair_t *keyPairQuery_to = 0;
    if (to)
    {
        keyQuery_to = strdup("to");
        valueQuery_to = strdup((to));
        keyPairQuery_to = keyValuePair_create(keyQuery_to, valueQuery_to);
        list_addElement(localVarQueryParameters,keyPairQuery_to);
    }

    // query parameters
    char *keyQuery_subject = NULL;
    char * valueQuery_subject = NULL;
    keyValuePair_t *keyPairQuery_subject = 0;
    if (subject)
    {
        keyQuery_subject = strdup("subject");
        valueQuery_subject = strdup((subject));
        keyPairQuery_subject = keyValuePair_create(keyQuery_subject, valueQuery_subject);
        list_addElement(localVarQueryParameters,keyPairQuery_subject);
    }

    // query parameters
    char *keyQuery_mailid = NULL;
    char * valueQuery_mailid = NULL;
    keyValuePair_t *keyPairQuery_mailid = 0;
    if (mailid)
    {
        keyQuery_mailid = strdup("mailid");
        valueQuery_mailid = strdup((mailid));
        keyPairQuery_mailid = keyValuePair_create(keyQuery_mailid, valueQuery_mailid);
        list_addElement(localVarQueryParameters,keyPairQuery_mailid);
    }

    // query parameters
    char *keyQuery_skip = NULL;
    char * valueQuery_skip = NULL;
    keyValuePair_t *keyPairQuery_skip = 0;
    if (skip)
    {
        keyQuery_skip = strdup("skip");
        valueQuery_skip = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_skip, MAX_NUMBER_LENGTH, "%d", *skip);
        keyPairQuery_skip = keyValuePair_create(keyQuery_skip, valueQuery_skip);
        list_addElement(localVarQueryParameters,keyPairQuery_skip);
    }

    // query parameters
    char *keyQuery_limit = NULL;
    char * valueQuery_limit = NULL;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (limit)
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_limit, MAX_NUMBER_LENGTH, "%d", *limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }

    // query parameters
    char *keyQuery_startDate = NULL;
    char * valueQuery_startDate ;
    keyValuePair_t *keyPairQuery_startDate = 0;
    {
        keyQuery_startDate = strdup("startDate");
        valueQuery_startDate = calloc(1,MAX_NUMBER_LENGTH_LONG);
        snprintf(valueQuery_startDate, MAX_NUMBER_LENGTH_LONG, "%d", startDate);
        keyPairQuery_startDate = keyValuePair_create(keyQuery_startDate, valueQuery_startDate);
        list_addElement(localVarQueryParameters,keyPairQuery_startDate);
    }

    // query parameters
    char *keyQuery_endDate = NULL;
    char * valueQuery_endDate ;
    keyValuePair_t *keyPairQuery_endDate = 0;
    {
        keyQuery_endDate = strdup("endDate");
        valueQuery_endDate = calloc(1,MAX_NUMBER_LENGTH_LONG);
        snprintf(valueQuery_endDate, MAX_NUMBER_LENGTH_LONG, "%d", endDate);
        keyPairQuery_endDate = keyValuePair_create(keyQuery_endDate, valueQuery_endDate);
        list_addElement(localVarQueryParameters,keyPairQuery_endDate);
    }

    // query parameters
    char *keyQuery_delivered = NULL;
    interserver_management_api_viewMailLog_delivered_e valueQuery_delivered ;
    keyValuePair_t *keyPairQuery_delivered = 0;
    if (delivered)
    {
        keyQuery_delivered = strdup("delivered");
        valueQuery_delivered = (delivered);
        keyPairQuery_delivered = keyValuePair_create(keyQuery_delivered, strdup(viewMailLog_DELIVERED_ToString(
        valueQuery_delivered)));
        list_addElement(localVarQueryParameters,keyPairQuery_delivered);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Paginated list of mail log entries matching the specified filters.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","bad input parameter");
    //}
    //nonprimitive not container
    mail_log_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MailAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = mail_log_parseFromJSON(MailAPIlocalVarJSON);
        cJSON_Delete(MailAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    if(keyQuery_id2){
        free(keyQuery_id2);
        keyQuery_id2 = NULL;
    }
    if(keyPairQuery_id2){
        keyValuePair_free(keyPairQuery_id2);
        keyPairQuery_id2 = NULL;
    }
    if(keyQuery_origin){
        free(keyQuery_origin);
        keyQuery_origin = NULL;
    }
    if(valueQuery_origin){
        free(valueQuery_origin);
        valueQuery_origin = NULL;
    }
    if(keyPairQuery_origin){
        keyValuePair_free(keyPairQuery_origin);
        keyPairQuery_origin = NULL;
    }
    if(keyQuery_mx){
        free(keyQuery_mx);
        keyQuery_mx = NULL;
    }
    if(valueQuery_mx){
        free(valueQuery_mx);
        valueQuery_mx = NULL;
    }
    if(keyPairQuery_mx){
        keyValuePair_free(keyPairQuery_mx);
        keyPairQuery_mx = NULL;
    }
    if(keyQuery_from){
        free(keyQuery_from);
        keyQuery_from = NULL;
    }
    if(valueQuery_from){
        free(valueQuery_from);
        valueQuery_from = NULL;
    }
    if(keyPairQuery_from){
        keyValuePair_free(keyPairQuery_from);
        keyPairQuery_from = NULL;
    }
    if(keyQuery_to){
        free(keyQuery_to);
        keyQuery_to = NULL;
    }
    if(valueQuery_to){
        free(valueQuery_to);
        valueQuery_to = NULL;
    }
    if(keyPairQuery_to){
        keyValuePair_free(keyPairQuery_to);
        keyPairQuery_to = NULL;
    }
    if(keyQuery_subject){
        free(keyQuery_subject);
        keyQuery_subject = NULL;
    }
    if(valueQuery_subject){
        free(valueQuery_subject);
        valueQuery_subject = NULL;
    }
    if(keyPairQuery_subject){
        keyValuePair_free(keyPairQuery_subject);
        keyPairQuery_subject = NULL;
    }
    if(keyQuery_mailid){
        free(keyQuery_mailid);
        keyQuery_mailid = NULL;
    }
    if(valueQuery_mailid){
        free(valueQuery_mailid);
        valueQuery_mailid = NULL;
    }
    if(keyPairQuery_mailid){
        keyValuePair_free(keyPairQuery_mailid);
        keyPairQuery_mailid = NULL;
    }
    if(keyQuery_skip){
        free(keyQuery_skip);
        keyQuery_skip = NULL;
    }
    if(valueQuery_skip){
        free(valueQuery_skip);
        valueQuery_skip = NULL;
    }
    if(keyPairQuery_skip){
        keyValuePair_free(keyPairQuery_skip);
        keyPairQuery_skip = NULL;
    }
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(valueQuery_limit){
        free(valueQuery_limit);
        valueQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    if(keyQuery_startDate){
        free(keyQuery_startDate);
        keyQuery_startDate = NULL;
    }
    if(keyPairQuery_startDate){
        keyValuePair_free(keyPairQuery_startDate);
        keyPairQuery_startDate = NULL;
    }
    if(keyQuery_endDate){
        free(keyQuery_endDate);
        keyQuery_endDate = NULL;
    }
    if(keyPairQuery_endDate){
        keyValuePair_free(keyPairQuery_endDate);
        keyPairQuery_endDate = NULL;
    }
    if(keyQuery_delivered){
        free(keyQuery_delivered);
        keyQuery_delivered = NULL;
    }
    if(keyPairQuery_delivered){
        keyValuePair_free(keyPairQuery_delivered);
        keyPairQuery_delivered = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

