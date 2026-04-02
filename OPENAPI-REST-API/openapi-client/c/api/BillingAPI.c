#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "BillingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum METHOD for BillingAPI_initiatePayment

static char* initiatePayment_METHOD_ToString(interserver_management_api_initiatePayment_method_e METHOD){
    char *METHODArray[] =  { "NULL", "cc", "paypal", "prepay", "payssion", "payu", "ccavenue", "cashfree", "coinbase", "btcpay" };
    return METHODArray[METHOD];
}

static interserver_management_api_initiatePayment_method_e initiatePayment_METHOD_FromString(char* METHOD){
    int stringToReturn = 0;
    char *METHODArray[] =  { "NULL", "cc", "paypal", "prepay", "payssion", "payu", "ccavenue", "cashfree", "coinbase", "btcpay" };
    size_t sizeofArray = sizeof(METHODArray) / sizeof(METHODArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(METHOD, METHODArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function initiatePayment_METHOD_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *initiatePayment_METHOD_convertToJSON(interserver_management_api_initiatePayment_method_e METHOD) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "method", initiatePayment_METHOD_ToString(METHOD)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function initiatePayment_METHOD_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_initiatePayment_method_e initiatePayment_METHOD_parseFromJSON(cJSON* METHODJSON) {
    interserver_management_api_initiatePayment_method_e METHODVariable = 0;
    cJSON *METHODVar = cJSON_GetObjectItemCaseSensitive(METHODJSON, "method");
    if(!cJSON_IsString(METHODVar) || (METHODVar->valuestring == NULL))
    {
        goto end;
    }
    METHODVariable = initiatePayment_METHOD_FromString(METHODVar->valuestring);
    return METHODVariable;
end:
    return 0;
}
*/


// Add Credit Card to Account
//
// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
//
success_text_response_t*
BillingAPI_addAccountCreditCard(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *country, char *zip, char *cc, char *cc_exp, char *cc_ccv2)
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
    char *localVarPath = strdup("/account/creditcards");





    // form parameters
    char *keyForm_name = NULL;
    char * valueForm_name = 0;
    keyValuePair_t *keyPairForm_name = 0;
    if (name != NULL)
    {
        keyForm_name = strdup("name");
        valueForm_name = strdup((name));
        keyPairForm_name = keyValuePair_create(keyForm_name,valueForm_name);
        list_addElement(localVarFormParameters,keyPairForm_name);
    }

    // form parameters
    char *keyForm_address = NULL;
    char * valueForm_address = 0;
    keyValuePair_t *keyPairForm_address = 0;
    if (address != NULL)
    {
        keyForm_address = strdup("address");
        valueForm_address = strdup((address));
        keyPairForm_address = keyValuePair_create(keyForm_address,valueForm_address);
        list_addElement(localVarFormParameters,keyPairForm_address);
    }

    // form parameters
    char *keyForm_city = NULL;
    char * valueForm_city = 0;
    keyValuePair_t *keyPairForm_city = 0;
    if (city != NULL)
    {
        keyForm_city = strdup("city");
        valueForm_city = strdup((city));
        keyPairForm_city = keyValuePair_create(keyForm_city,valueForm_city);
        list_addElement(localVarFormParameters,keyPairForm_city);
    }

    // form parameters
    char *keyForm_state = NULL;
    char * valueForm_state = 0;
    keyValuePair_t *keyPairForm_state = 0;
    if (state != NULL)
    {
        keyForm_state = strdup("state");
        valueForm_state = strdup((state));
        keyPairForm_state = keyValuePair_create(keyForm_state,valueForm_state);
        list_addElement(localVarFormParameters,keyPairForm_state);
    }

    // form parameters
    char *keyForm_country = NULL;
    char * valueForm_country = 0;
    keyValuePair_t *keyPairForm_country = 0;
    if (country != NULL)
    {
        keyForm_country = strdup("country");
        valueForm_country = strdup((country));
        keyPairForm_country = keyValuePair_create(keyForm_country,valueForm_country);
        list_addElement(localVarFormParameters,keyPairForm_country);
    }

    // form parameters
    char *keyForm_zip = NULL;
    char * valueForm_zip = 0;
    keyValuePair_t *keyPairForm_zip = 0;
    if (zip != NULL)
    {
        keyForm_zip = strdup("zip");
        valueForm_zip = strdup((zip));
        keyPairForm_zip = keyValuePair_create(keyForm_zip,valueForm_zip);
        list_addElement(localVarFormParameters,keyPairForm_zip);
    }

    // form parameters
    char *keyForm_cc = NULL;
    char * valueForm_cc = 0;
    keyValuePair_t *keyPairForm_cc = 0;
    if (cc != NULL)
    {
        keyForm_cc = strdup("cc");
        valueForm_cc = strdup((cc));
        keyPairForm_cc = keyValuePair_create(keyForm_cc,valueForm_cc);
        list_addElement(localVarFormParameters,keyPairForm_cc);
    }

    // form parameters
    char *keyForm_cc_exp = NULL;
    char * valueForm_cc_exp = 0;
    keyValuePair_t *keyPairForm_cc_exp = 0;
    if (cc_exp != NULL)
    {
        keyForm_cc_exp = strdup("cc_exp");
        valueForm_cc_exp = strdup((cc_exp));
        keyPairForm_cc_exp = keyValuePair_create(keyForm_cc_exp,valueForm_cc_exp);
        list_addElement(localVarFormParameters,keyPairForm_cc_exp);
    }

    // form parameters
    char *keyForm_cc_ccv2 = NULL;
    char * valueForm_cc_ccv2 = 0;
    keyValuePair_t *keyPairForm_cc_ccv2 = 0;
    if (cc_ccv2 != NULL)
    {
        keyForm_cc_ccv2 = strdup("cc_ccv2");
        valueForm_cc_ccv2 = strdup((cc_ccv2));
        keyPairForm_cc_ccv2 = keyValuePair_create(keyForm_cc_ccv2,valueForm_cc_ccv2);
        list_addElement(localVarFormParameters,keyPairForm_cc_ccv2);
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
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (keyForm_name) {
        free(keyForm_name);
        keyForm_name = NULL;
    }
    if (valueForm_name) {
        free(valueForm_name);
        valueForm_name = NULL;
    }
    free(keyPairForm_name);
    if (keyForm_address) {
        free(keyForm_address);
        keyForm_address = NULL;
    }
    if (valueForm_address) {
        free(valueForm_address);
        valueForm_address = NULL;
    }
    free(keyPairForm_address);
    if (keyForm_city) {
        free(keyForm_city);
        keyForm_city = NULL;
    }
    if (valueForm_city) {
        free(valueForm_city);
        valueForm_city = NULL;
    }
    free(keyPairForm_city);
    if (keyForm_state) {
        free(keyForm_state);
        keyForm_state = NULL;
    }
    if (valueForm_state) {
        free(valueForm_state);
        valueForm_state = NULL;
    }
    free(keyPairForm_state);
    if (keyForm_country) {
        free(keyForm_country);
        keyForm_country = NULL;
    }
    if (valueForm_country) {
        free(valueForm_country);
        valueForm_country = NULL;
    }
    free(keyPairForm_country);
    if (keyForm_zip) {
        free(keyForm_zip);
        keyForm_zip = NULL;
    }
    if (valueForm_zip) {
        free(valueForm_zip);
        valueForm_zip = NULL;
    }
    free(keyPairForm_zip);
    if (keyForm_cc) {
        free(keyForm_cc);
        keyForm_cc = NULL;
    }
    if (valueForm_cc) {
        free(valueForm_cc);
        valueForm_cc = NULL;
    }
    free(keyPairForm_cc);
    if (keyForm_cc_exp) {
        free(keyForm_cc_exp);
        keyForm_cc_exp = NULL;
    }
    if (valueForm_cc_exp) {
        free(valueForm_cc_exp);
        valueForm_cc_exp = NULL;
    }
    free(keyPairForm_cc_exp);
    if (keyForm_cc_ccv2) {
        free(keyForm_cc_ccv2);
        keyForm_cc_ccv2 = NULL;
    }
    if (valueForm_cc_ccv2) {
        free(valueForm_cc_ccv2);
        valueForm_cc_ccv2 = NULL;
    }
    free(keyPairForm_cc_ccv2);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add Credit Card for Billing
//
// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
//
success_text_response_t*
BillingAPI_addBillingCreditCard(apiClient_t *apiClient, billing_add_cc_request_t *billing_add_cc_request)
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
    char *localVarPath = strdup("/billing/creditcards");





    // Body Param
    cJSON *localVarSingleItemJSON_billing_add_cc_request = NULL;
    if (billing_add_cc_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_billing_add_cc_request = billing_add_cc_request_convertToJSON(billing_add_cc_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_billing_add_cc_request);
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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_billing_add_cc_request) {
        cJSON_Delete(localVarSingleItemJSON_billing_add_cc_request);
        localVarSingleItemJSON_billing_add_cc_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create Prepay Deposit
//
// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
//
success_text_response_t*
BillingAPI_addBillingPrepay(apiClient_t *apiClient, billing_prepay_request_t *billing_prepay_request)
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
    char *localVarPath = strdup("/billing/prepays");





    // Body Param
    cJSON *localVarSingleItemJSON_billing_prepay_request = NULL;
    if (billing_prepay_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_billing_prepay_request = billing_prepay_request_convertToJSON(billing_prepay_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_billing_prepay_request);
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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_billing_prepay_request) {
        cJSON_Delete(localVarSingleItemJSON_billing_prepay_request);
        localVarSingleItemJSON_billing_prepay_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove Credit Card
//
// Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
//
char*
BillingAPI_deleteAccountCreditCard(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/account/creditcards/{id}");

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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Simple string response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

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

// Delete Credit Card
//
// Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
//
success_text_response_t*
BillingAPI_deleteBillingCreditCard(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/creditcards/{id}");



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
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Delete Invoice
//
// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
//
success_text_response_t*
BillingAPI_deleteBillingInvoice(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/invoices/{id}");



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
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Delete Prepay Balance
//
// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
//
success_text_response_t*
BillingAPI_deleteBillingPrepay(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/prepays/{id}");



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
    //    printf("%s\n","A response indicating the operation completed successfully with a text message.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// List Affiliate Banner Assets
//
// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
//
list_t*
BillingAPI_getAffiliateBanners(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/affiliate/banners");




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
    //    printf("%s\n","Affiliate Banners Array");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(BillingAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, BillingAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( BillingAPIlocalVarJSON);
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

// Get Affiliate Performance Report
//
// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
//
text_response_t*
BillingAPI_getAffiliateRichReport(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/affiliate/rich_report");




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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Get Affiliate Sales Graph Data
//
// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
//
status_monthly_breakdown_t*
BillingAPI_getAffiliateSalesGraph(apiClient_t *apiClient, int *days)
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
    char *localVarPath = strdup("/affiliate/sales_graph");





    // query parameters
    char *keyQuery_days = NULL;
    char * valueQuery_days = NULL;
    keyValuePair_t *keyPairQuery_days = 0;
    if (days)
    {
        keyQuery_days = strdup("days");
        valueQuery_days = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_days, MAX_NUMBER_LENGTH, "%d", *days);
        keyPairQuery_days = keyValuePair_create(keyQuery_days, valueQuery_days);
        list_addElement(localVarQueryParameters,keyPairQuery_days);
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
    //    printf("%s\n","Affiliate sales graph data broken down by time period.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    status_monthly_breakdown_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = status_monthly_breakdown_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if(keyQuery_days){
        free(keyQuery_days);
        keyQuery_days = NULL;
    }
    if(valueQuery_days){
        free(valueQuery_days);
        valueQuery_days = NULL;
    }
    if(keyPairQuery_days){
        keyValuePair_free(keyPairQuery_days);
        keyPairQuery_days = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Affiliate Sales Report
//
// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
//
text_response_t*
BillingAPI_getAffiliateSalesReport(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/affiliate/sales_report");




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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Get Affiliate Traffic Graph Data
//
// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
//
monthly_counts_t*
BillingAPI_getAffiliateTrafficGraph(apiClient_t *apiClient, int *days)
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
    char *localVarPath = strdup("/affiliate/traffic_graph");





    // query parameters
    char *keyQuery_days = NULL;
    char * valueQuery_days = NULL;
    keyValuePair_t *keyPairQuery_days = 0;
    if (days)
    {
        keyQuery_days = strdup("days");
        valueQuery_days = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_days, MAX_NUMBER_LENGTH, "%d", *days);
        keyPairQuery_days = keyValuePair_create(keyQuery_days, valueQuery_days);
        list_addElement(localVarQueryParameters,keyPairQuery_days);
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
    //    printf("%s\n","Affiliate traffic graph data broken down by time period.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    monthly_counts_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = monthly_counts_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if(keyQuery_days){
        free(keyQuery_days);
        keyQuery_days = NULL;
    }
    if(valueQuery_days){
        free(valueQuery_days);
        valueQuery_days = NULL;
    }
    if(keyPairQuery_days){
        keyValuePair_free(keyPairQuery_days);
        keyPairQuery_days = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List Affiliate Web Traffic Entries
//
// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
//
list_t*
BillingAPI_getAffiliateWebTraffic(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/affiliate/web_traffic");




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
    //    printf("%s\n","The recent affiliate web traffic");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(BillingAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, BillingAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( BillingAPIlocalVarJSON);
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

// Get Shopping Cart Contents
//
// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
//
object_t*
BillingAPI_getBillingCart(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/billing/cart");




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
    //    printf("%s\n","Current shopping cart contents and available payment methods.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    object_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = object_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Get Credit Card Verification Requirements
//
// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
//
success_text_response_t*
BillingAPI_getBillingCreditCardVerify(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/creditcards/{id}/verify");



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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Get Invoice Details
//
// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
//
billing_invoice_detail_t*
BillingAPI_getBillingInvoice(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/invoices/{id}");



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
    //    printf("%s\n","Detailed invoice payload for the requested invoice.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    billing_invoice_detail_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = billing_invoice_detail_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// List Account Invoices
//
// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
//
billing_invoice_list_t*
BillingAPI_getBillingInvoices(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/billing/invoices");




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
    //    printf("%s\n","Invoice listing and summary for the account.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    billing_invoice_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = billing_invoice_list_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// List Prepay Balances
//
// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
//
object_t*
BillingAPI_getBillingPrePays(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/billing/prepays");




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
    //    printf("%s\n","Prepay balances and metadata.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    object_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = object_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Get Invoices
//
// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
//
list_t*
BillingAPI_getInvoices(apiClient_t *apiClient, char *searchString, int *skip, int *limit)
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
    char *localVarPath = strdup("/invoices");





    // query parameters
    char *keyQuery_searchString = NULL;
    char * valueQuery_searchString = NULL;
    keyValuePair_t *keyPairQuery_searchString = 0;
    if (searchString)
    {
        keyQuery_searchString = strdup("searchString");
        valueQuery_searchString = strdup((searchString));
        keyPairQuery_searchString = keyValuePair_create(keyQuery_searchString, valueQuery_searchString);
        list_addElement(localVarQueryParameters,keyPairQuery_searchString);
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
    //    printf("%s\n","search results matching criteria");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","bad input parameter");
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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(BillingAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, BillingAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( BillingAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
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
    if(keyQuery_searchString){
        free(keyQuery_searchString);
        keyQuery_searchString = NULL;
    }
    if(valueQuery_searchString){
        free(valueQuery_searchString);
        valueQuery_searchString = NULL;
    }
    if(keyPairQuery_searchString){
        keyValuePair_free(keyPairQuery_searchString);
        keyPairQuery_searchString = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Initiate Payment
//
// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
//
initiate_payment_200_response_t*
BillingAPI_initiatePayment(apiClient_t *apiClient, interserver_management_api_initiatePayment_method_e method, char *invoices)
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
    char *localVarPath = strdup("/pay/{method}/{invoices}");

    if(!method)
        goto end;
    if(!invoices)
        goto end;


    // Path Params
    long sizeOfPathParams_method = strlen(initiatePayment_METHOD_ToString(method))+3 + strlen(invoices)+3 + sizeof("{ method }") - 1;
    if(method == 0) {
        goto end;
    }
    char* localVarToReplace_method = malloc(sizeOfPathParams_method);
    sprintf(localVarToReplace_method, "{%s}", "method");

    localVarPath = strReplace(localVarPath, localVarToReplace_method, initiatePayment_METHOD_ToString(method));

    // Path Params
    long sizeOfPathParams_invoices = strlen(initiatePayment_METHOD_ToString(method))+3 + strlen(invoices)+3 + sizeof("{ invoices }") - 1;
    if(invoices == NULL) {
        goto end;
    }
    char* localVarToReplace_invoices = malloc(sizeOfPathParams_invoices);
    sprintf(localVarToReplace_invoices, "{%s}", "invoices");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoices, invoices);


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
    //    printf("%s\n","Payment initiation response with redirect or form data.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    initiate_payment_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = initiate_payment_200_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    free(localVarToReplace_method);
    free(localVarToReplace_invoices);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Submit Credit Card Verification
//
// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
//
success_text_response_t*
BillingAPI_postBillingCreditCardVerify(apiClient_t *apiClient, int *id, billing_verify_cc_request_t *billing_verify_cc_request)
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
    char *localVarPath = strdup("/billing/creditcards/{id}/verify");



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
    cJSON *localVarSingleItemJSON_billing_verify_cc_request = NULL;
    if (billing_verify_cc_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_billing_verify_cc_request = billing_verify_cc_request_convertToJSON(billing_verify_cc_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_billing_verify_cc_request);
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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_billing_verify_cc_request) {
        cJSON_Delete(localVarSingleItemJSON_billing_verify_cc_request);
        localVarSingleItemJSON_billing_verify_cc_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Credit Card
//
// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
//
char*
BillingAPI_updateAccountCreditCard(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/account/creditcards/{id}");



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Simple string response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

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

// Configure Affiliate Dock Settings
//
// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
//
text_response_t*
BillingAPI_updateAffiliateDockSetup(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon)
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
    char *localVarPath = strdup("/affiliate/dock_setup");





    // form parameters
    char *keyForm_affiliate_dock_title = NULL;
    char * valueForm_affiliate_dock_title = 0;
    keyValuePair_t *keyPairForm_affiliate_dock_title = 0;
    if (affiliate_dock_title != NULL)
    {
        keyForm_affiliate_dock_title = strdup("affiliate_dock_title");
        valueForm_affiliate_dock_title = strdup((affiliate_dock_title));
        keyPairForm_affiliate_dock_title = keyValuePair_create(keyForm_affiliate_dock_title,valueForm_affiliate_dock_title);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_dock_title);
    }

    // form parameters
    char *keyForm_affiliate_dock_description = NULL;
    char * valueForm_affiliate_dock_description = 0;
    keyValuePair_t *keyPairForm_affiliate_dock_description = 0;
    if (affiliate_dock_description != NULL)
    {
        keyForm_affiliate_dock_description = strdup("affiliate_dock_description");
        valueForm_affiliate_dock_description = strdup((affiliate_dock_description));
        keyPairForm_affiliate_dock_description = keyValuePair_create(keyForm_affiliate_dock_description,valueForm_affiliate_dock_description);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_dock_description);
    }

    // form parameters
    char *keyForm_referrer_coupon = NULL;
    char * valueForm_referrer_coupon = 0;
    keyValuePair_t *keyPairForm_referrer_coupon = 0;
    if (referrer_coupon != NULL)
    {
        keyForm_referrer_coupon = strdup("referrer_coupon");
        valueForm_referrer_coupon = strdup((referrer_coupon));
        keyPairForm_referrer_coupon = keyValuePair_create(keyForm_referrer_coupon,valueForm_referrer_coupon);
        list_addElement(localVarFormParameters,keyPairForm_referrer_coupon);
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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (keyForm_affiliate_dock_title) {
        free(keyForm_affiliate_dock_title);
        keyForm_affiliate_dock_title = NULL;
    }
    if (valueForm_affiliate_dock_title) {
        free(valueForm_affiliate_dock_title);
        valueForm_affiliate_dock_title = NULL;
    }
    free(keyPairForm_affiliate_dock_title);
    if (keyForm_affiliate_dock_description) {
        free(keyForm_affiliate_dock_description);
        keyForm_affiliate_dock_description = NULL;
    }
    if (valueForm_affiliate_dock_description) {
        free(valueForm_affiliate_dock_description);
        valueForm_affiliate_dock_description = NULL;
    }
    free(keyPairForm_affiliate_dock_description);
    if (keyForm_referrer_coupon) {
        free(keyForm_referrer_coupon);
        keyForm_referrer_coupon = NULL;
    }
    if (valueForm_referrer_coupon) {
        free(valueForm_referrer_coupon);
        valueForm_referrer_coupon = NULL;
    }
    free(keyPairForm_referrer_coupon);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Configure Affiliate Landing Page
//
// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
//
text_response_t*
BillingAPI_updateAffiliateLandingPage(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon)
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
    char *localVarPath = strdup("/affiliate/landing_pg");





    // form parameters
    char *keyForm_affiliate_dock_title = NULL;
    char * valueForm_affiliate_dock_title = 0;
    keyValuePair_t *keyPairForm_affiliate_dock_title = 0;
    if (affiliate_dock_title != NULL)
    {
        keyForm_affiliate_dock_title = strdup("affiliate_dock_title");
        valueForm_affiliate_dock_title = strdup((affiliate_dock_title));
        keyPairForm_affiliate_dock_title = keyValuePair_create(keyForm_affiliate_dock_title,valueForm_affiliate_dock_title);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_dock_title);
    }

    // form parameters
    char *keyForm_affiliate_dock_description = NULL;
    char * valueForm_affiliate_dock_description = 0;
    keyValuePair_t *keyPairForm_affiliate_dock_description = 0;
    if (affiliate_dock_description != NULL)
    {
        keyForm_affiliate_dock_description = strdup("affiliate_dock_description");
        valueForm_affiliate_dock_description = strdup((affiliate_dock_description));
        keyPairForm_affiliate_dock_description = keyValuePair_create(keyForm_affiliate_dock_description,valueForm_affiliate_dock_description);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_dock_description);
    }

    // form parameters
    char *keyForm_referrer_coupon = NULL;
    char * valueForm_referrer_coupon = 0;
    keyValuePair_t *keyPairForm_referrer_coupon = 0;
    if (referrer_coupon != NULL)
    {
        keyForm_referrer_coupon = strdup("referrer_coupon");
        valueForm_referrer_coupon = strdup((referrer_coupon));
        keyPairForm_referrer_coupon = keyValuePair_create(keyForm_referrer_coupon,valueForm_referrer_coupon);
        list_addElement(localVarFormParameters,keyPairForm_referrer_coupon);
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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (keyForm_affiliate_dock_title) {
        free(keyForm_affiliate_dock_title);
        keyForm_affiliate_dock_title = NULL;
    }
    if (valueForm_affiliate_dock_title) {
        free(valueForm_affiliate_dock_title);
        valueForm_affiliate_dock_title = NULL;
    }
    free(keyPairForm_affiliate_dock_title);
    if (keyForm_affiliate_dock_description) {
        free(keyForm_affiliate_dock_description);
        keyForm_affiliate_dock_description = NULL;
    }
    if (valueForm_affiliate_dock_description) {
        free(valueForm_affiliate_dock_description);
        valueForm_affiliate_dock_description = NULL;
    }
    free(keyPairForm_affiliate_dock_description);
    if (keyForm_referrer_coupon) {
        free(keyForm_referrer_coupon);
        keyForm_referrer_coupon = NULL;
    }
    if (valueForm_referrer_coupon) {
        free(valueForm_referrer_coupon);
        valueForm_referrer_coupon = NULL;
    }
    free(keyPairForm_referrer_coupon);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Configure Affiliate Payout Preferences
//
// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
//
text_response_t*
BillingAPI_updateAffiliatePaymentSetup(apiClient_t *apiClient, char *affiliate_paypal, char *affiliate_payment_method)
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
    char *localVarPath = strdup("/affiliate/payment_setup");





    // form parameters
    char *keyForm_affiliate_paypal = NULL;
    char * valueForm_affiliate_paypal = 0;
    keyValuePair_t *keyPairForm_affiliate_paypal = 0;
    if (affiliate_paypal != NULL)
    {
        keyForm_affiliate_paypal = strdup("affiliate_paypal");
        valueForm_affiliate_paypal = strdup((affiliate_paypal));
        keyPairForm_affiliate_paypal = keyValuePair_create(keyForm_affiliate_paypal,valueForm_affiliate_paypal);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_paypal);
    }

    // form parameters
    char *keyForm_affiliate_payment_method = NULL;
    char * valueForm_affiliate_payment_method = 0;
    keyValuePair_t *keyPairForm_affiliate_payment_method = 0;
    if (affiliate_payment_method != NULL)
    {
        keyForm_affiliate_payment_method = strdup("affiliate_payment_method");
        valueForm_affiliate_payment_method = strdup((affiliate_payment_method));
        keyPairForm_affiliate_payment_method = keyValuePair_create(keyForm_affiliate_payment_method,valueForm_affiliate_payment_method);
        list_addElement(localVarFormParameters,keyPairForm_affiliate_payment_method);
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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (keyForm_affiliate_paypal) {
        free(keyForm_affiliate_paypal);
        keyForm_affiliate_paypal = NULL;
    }
    if (valueForm_affiliate_paypal) {
        free(valueForm_affiliate_paypal);
        valueForm_affiliate_paypal = NULL;
    }
    free(keyPairForm_affiliate_paypal);
    if (keyForm_affiliate_payment_method) {
        free(keyForm_affiliate_payment_method);
        keyForm_affiliate_payment_method = NULL;
    }
    if (valueForm_affiliate_payment_method) {
        free(valueForm_affiliate_payment_method);
        valueForm_affiliate_payment_method = NULL;
    }
    free(keyPairForm_affiliate_payment_method);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Credit Card Details
//
// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
//
success_text_response_t*
BillingAPI_updateBillingCreditCard(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/billing/creditcards/{id}");



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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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

// Update Default Payment Method
//
// Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
//
success_text_response_t*
BillingAPI_updateBillingPaymentMethod(apiClient_t *apiClient, billing_payment_method_request_t *billing_payment_method_request)
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
    char *localVarPath = strdup("/billing/payment_method");





    // Body Param
    cJSON *localVarSingleItemJSON_billing_payment_method_request = NULL;
    if (billing_payment_method_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_billing_payment_method_request = billing_payment_method_request_convertToJSON(billing_payment_method_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_billing_payment_method_request);
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
        cJSON *BillingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(BillingAPIlocalVarJSON);
        cJSON_Delete(BillingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_billing_payment_method_request) {
        cJSON_Delete(localVarSingleItemJSON_billing_payment_method_request);
        localVarSingleItemJSON_billing_payment_method_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

