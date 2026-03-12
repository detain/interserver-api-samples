#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ServersAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum ACTION for ServersAPI_serverIpmiPowerPost

static char* serverIpmiPowerPost_ACTION_ToString(interserver_management_api_serverIpmiPowerPost_action_e ACTION){
    char *ACTIONArray[] =  { "NULL", "cycle", "reset", "on", "off", "soft" };
    return ACTIONArray[ACTION];
}

static interserver_management_api_serverIpmiPowerPost_action_e serverIpmiPowerPost_ACTION_FromString(char* ACTION){
    int stringToReturn = 0;
    char *ACTIONArray[] =  { "NULL", "cycle", "reset", "on", "off", "soft" };
    size_t sizeofArray = sizeof(ACTIONArray) / sizeof(ACTIONArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ACTION, ACTIONArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function serverIpmiPowerPost_ACTION_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *serverIpmiPowerPost_ACTION_convertToJSON(interserver_management_api_serverIpmiPowerPost_action_e ACTION) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "action", serverIpmiPowerPost_ACTION_ToString(ACTION)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function serverIpmiPowerPost_ACTION_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_serverIpmiPowerPost_action_e serverIpmiPowerPost_ACTION_parseFromJSON(cJSON* ACTIONJSON) {
    interserver_management_api_serverIpmiPowerPost_action_e ACTIONVariable = 0;
    cJSON *ACTIONVar = cJSON_GetObjectItemCaseSensitive(ACTIONJSON, "action");
    if(!cJSON_IsString(ACTIONVar) || (ACTIONVar->valuestring == NULL))
    {
        goto end;
    }
    ACTIONVariable = serverIpmiPowerPost_ACTION_FromString(ACTIONVar->valuestring);
    return ACTIONVariable;
end:
    return 0;
}
*/


// Place Server Order
//
// Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
//
void
ServersAPI_addServer(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/servers/order");




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

// Get Buy Now Server Options
//
// Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
//
buy_it_now_server_order_200_response_t*
ServersAPI_buyItNowServerOrder(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/servers/order/buy_now_server");




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
    //    printf("%s\n","Available server configurations with pricing and hardware options.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    buy_it_now_server_order_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buy_it_now_server_order_200_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// List Marketplace Servers
//
// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
//
buy_it_now_list_t*
ServersAPI_getMPServers(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/buy_now_servers_list");




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
    //    printf("%s\n","Marketplace Buy it now servers list");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    buy_it_now_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buy_it_now_list_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Server Ordering Information
//
// Retrieves available server configurations and pricing for ordering a new dedicated server.
//
server_order_t*
ServersAPI_getNewServer(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/servers/order");




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
    //    printf("%s\n","Server Ordering details");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    server_order_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = server_order_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Get Server Order
//
// Returns detailed information about a specific server including its hardware configuration, IPs, and status.
//
server_t*
ServersAPI_getServerInfo(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}");



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
    //    printf("%s\n","Server details");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    server_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = server_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Get Server Invoices
//
// Returns the billing invoices associated with this dedicated server.
//
charge_invoice_rows_t*
ServersAPI_getServerInvoices(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}/invoices");



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
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = charge_invoice_rows_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// List Servers
//
// Returns all dedicated server services on the account with their current status and configuration.
//
list_t*
ServersAPI_getServerList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/servers");




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
    //    printf("%s\n","The listing of &#x60;Servers&#x60; services on your account.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ServersAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ServersAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ServersAPIlocalVarJSON);
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

// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
//
reverse_dns_entries_t*
ServersAPI_getServerReverseDns(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}/reverse_dns");



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
    //    printf("%s\n","Servers Reverse DNS info response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    reverse_dns_entries_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = reverse_dns_entries_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Resend Server Welcome Email
//
// Resends the welcome email for the order.
//
success_text_response_t*
ServersAPI_getServersWelcomeEmail(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}/welcome_email");



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
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Place Buy Now Server Order
//
// Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
//
servers_buy_now_response_t*
ServersAPI_placeBuyNowServer(apiClient_t *apiClient, place_buy_now_server_request_t *place_buy_now_server_request)
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
    char *localVarPath = strdup("/servers/order/buy_now_server");





    // Body Param
    cJSON *localVarSingleItemJSON_place_buy_now_server_request = NULL;
    if (place_buy_now_server_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_place_buy_now_server_request = place_buy_now_server_request_convertToJSON(place_buy_now_server_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_place_buy_now_server_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    //    printf("%s\n","Order placed successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Order validation failed.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Default response");
    //}
    //nonprimitive not container
    servers_buy_now_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = servers_buy_now_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_place_buy_now_server_request) {
        cJSON_Delete(localVarSingleItemJSON_place_buy_now_server_request);
        localVarSingleItemJSON_place_buy_now_server_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the server's IP addresses.
//
text_response_t*
ServersAPI_postServerReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries)
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
    char *localVarPath = strdup("/servers/{id}/reverse_dns");



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
    cJSON *localVarSingleItemJSON_reverse_dns_entries = NULL;
    if (reverse_dns_entries != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_reverse_dns_entries = reverse_dns_entries_convertToJSON(reverse_dns_entries);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_reverse_dns_entries);
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
    //    printf("%s\n","Update Server Reverse DNS response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_reverse_dns_entries) {
        cJSON_Delete(localVarSingleItemJSON_reverse_dns_entries);
        localVarSingleItemJSON_reverse_dns_entries = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Validate Server Order
//
// Validates a server order before placing it. Use this to check for errors before committing to a purchase.
//
void
ServersAPI_putServers(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/servers/order");




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
    //    printf("%s\n","Validate Server order response");
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

// Server IPMI Live Information
//
// Returns the current IPMI live connection information for the server.
//
server_ipmi_live_info_t*
ServersAPI_serverIpmiLiveGet(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}/ipmi_live");



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
    //    printf("%s\n","Response from the Servers IPMI Live information request.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    server_ipmi_live_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = server_ipmi_live_info_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Server IPMI Live Setup
//
// Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
//
server_ipmi_live_info_t*
ServersAPI_serverIpmiLivePost(apiClient_t *apiClient, int *id, char *ip, int *asset)
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
    char *localVarPath = strdup("/servers/{id}/ipmi_live");



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
    char *keyForm_asset = NULL;
    int valueForm_asset = 0;
    keyValuePair_t *keyPairForm_asset = 0;
    if (asset != NULL)
    {
        keyForm_asset = strdup("asset");
        valueForm_asset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_asset, MAX_NUMBER_LENGTH, "%d", *asset);
        keyPairForm_asset = keyValuePair_create(keyForm_asset,&valueForm_asset);
        list_addElement(localVarFormParameters,keyPairForm_asset);
    }

    // form parameters
    char *keyForm_ip = NULL;
    char * valueForm_ip = 0;
    keyValuePair_t *keyPairForm_ip = 0;
    if (ip != NULL)
    {
        keyForm_ip = strdup("ip");
        valueForm_ip = strdup((ip));
        keyPairForm_ip = keyValuePair_create(keyForm_ip,valueForm_ip);
        list_addElement(localVarFormParameters,keyPairForm_ip);
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
    //    printf("%s\n","Response from the Servers IPMI Live information request.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    server_ipmi_live_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = server_ipmi_live_info_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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
    if (keyForm_asset) {
        free(keyForm_asset);
        keyForm_asset = NULL;
    }
    free(keyPairForm_asset);
    if (keyForm_ip) {
        free(keyForm_ip);
        keyForm_ip = NULL;
    }
    if (valueForm_ip) {
        free(valueForm_ip);
        valueForm_ip = NULL;
    }
    free(keyPairForm_ip);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get IPMI Power Status
//
// Returns the chassis power status from ipmi.
//
text_response_t*
ServersAPI_serverIpmiPowerGet(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}/ipmi_power");



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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Server IPMI Power
//
// Uses the IPMI interface to set the Power status on the server.
//
text_response_t*
ServersAPI_serverIpmiPowerPost(apiClient_t *apiClient, int *id, interserver_management_api_serverIpmiPowerPost_action_e action, int *asset)
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
    char *localVarPath = strdup("/servers/{id}/ipmi_power");



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
    char *keyForm_asset = NULL;
    int valueForm_asset = 0;
    keyValuePair_t *keyPairForm_asset = 0;
    if (asset != NULL)
    {
        keyForm_asset = strdup("asset");
        valueForm_asset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_asset, MAX_NUMBER_LENGTH, "%d", *asset);
        keyPairForm_asset = keyValuePair_create(keyForm_asset,&valueForm_asset);
        list_addElement(localVarFormParameters,keyPairForm_asset);
    }

    // form parameters
    char *keyForm_action = NULL;
    interserver_management_api_serverIpmiPowerPost_action_e valueForm_action = 0;
    keyValuePair_t *keyPairForm_action = 0;
    if (action != 0)
    {
        keyForm_action = strdup("action");
        valueForm_action = (action);
        keyPairForm_action = keyValuePair_create(keyForm_action,(void *)valueForm_action);
        list_addElement(localVarFormParameters,keyPairForm_action);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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
    if (keyForm_asset) {
        free(keyForm_asset);
        keyForm_asset = NULL;
    }
    free(keyPairForm_asset);
    if (keyForm_action) {
        free(keyForm_action);
        keyForm_action = NULL;
    }
    if (valueForm_action) {
        valueForm_action = 0;
    }
    free(keyPairForm_action);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Cancel Server Service
//
// Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
servers_cancel_200_response_t*
ServersAPI_serversCancel(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/servers/{id}");



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
    //    printf("%s\n","Servers Cancel");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    servers_cancel_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ServersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = servers_cancel_200_response_parseFromJSON(ServersAPIlocalVarJSON);
        cJSON_Delete(ServersAPIlocalVarJSON);
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

// Update Server Order
//
// Updates settings on a dedicated server order.
//
void
ServersAPI_updateServerInfo(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/servers/{id}");

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

