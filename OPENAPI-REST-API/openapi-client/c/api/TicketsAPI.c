#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "TicketsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum PERIOD for TicketsAPI_getTicketsList

static char* getTicketsList_PERIOD_ToString(interserver_management_api_getTicketsList_period_e PERIOD){
    char *PERIODArray[] =  { "NULL", "30", "90", "365", "1825", "all" };
    return PERIODArray[PERIOD];
}

static interserver_management_api_getTicketsList_period_e getTicketsList_PERIOD_FromString(char* PERIOD){
    int stringToReturn = 0;
    char *PERIODArray[] =  { "NULL", "30", "90", "365", "1825", "all" };
    size_t sizeofArray = sizeof(PERIODArray) / sizeof(PERIODArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(PERIOD, PERIODArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getTicketsList_PERIOD_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getTicketsList_PERIOD_convertToJSON(interserver_management_api_getTicketsList_period_e PERIOD) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "period", getTicketsList_PERIOD_ToString(PERIOD)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getTicketsList_PERIOD_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_getTicketsList_period_e getTicketsList_PERIOD_parseFromJSON(cJSON* PERIODJSON) {
    interserver_management_api_getTicketsList_period_e PERIODVariable = 0;
    cJSON *PERIODVar = cJSON_GetObjectItemCaseSensitive(PERIODJSON, "period");
    if(!cJSON_IsString(PERIODVar) || (PERIODVar->valuestring == NULL))
    {
        goto end;
    }
    PERIODVariable = getTicketsList_PERIOD_FromString(PERIODVar->valuestring);
    return PERIODVariable;
end:
    return 0;
}
*/

// Functions for enum VIEW for TicketsAPI_getTicketsList

static char* getTicketsList_VIEW_ToString(interserver_management_api_getTicketsList_view_e VIEW){
    char *VIEWArray[] =  { "NULL", "Open", "Closed", "On Hold", "In Progress" };
    return VIEWArray[VIEW];
}

static interserver_management_api_getTicketsList_view_e getTicketsList_VIEW_FromString(char* VIEW){
    int stringToReturn = 0;
    char *VIEWArray[] =  { "NULL", "Open", "Closed", "On Hold", "In Progress" };
    size_t sizeofArray = sizeof(VIEWArray) / sizeof(VIEWArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(VIEW, VIEWArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getTicketsList_VIEW_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getTicketsList_VIEW_convertToJSON(interserver_management_api_getTicketsList_view_e VIEW) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "view", getTicketsList_VIEW_ToString(VIEW)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getTicketsList_VIEW_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_getTicketsList_view_e getTicketsList_VIEW_parseFromJSON(cJSON* VIEWJSON) {
    interserver_management_api_getTicketsList_view_e VIEWVariable = 0;
    cJSON *VIEWVar = cJSON_GetObjectItemCaseSensitive(VIEWJSON, "view");
    if(!cJSON_IsString(VIEWVar) || (VIEWVar->valuestring == NULL))
    {
        goto end;
    }
    VIEWVariable = getTicketsList_VIEW_FromString(VIEWVar->valuestring);
    return VIEWVariable;
end:
    return 0;
}
*/


// Create New Ticket
//
// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
//
ticket_new_response_t*
TicketsAPI_addNewTicket(apiClient_t *apiClient, ticket_new_t *ticket_new)
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
    char *localVarPath = strdup("/tickets/new");





    // Body Param
    cJSON *localVarSingleItemJSON_ticket_new = NULL;
    if (ticket_new != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ticket_new = ticket_new_convertToJSON(ticket_new);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ticket_new);
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
    //    printf("%s\n","A successful response after creating a ticket");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","A successful response after creating a ticket");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    ticket_new_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ticket_new_response_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ticket_new) {
        cJSON_Delete(localVarSingleItemJSON_ticket_new);
        localVarSingleItemJSON_ticket_new = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Close Ticket
//
// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
//
close_ticket_response_schema_t*
TicketsAPI_closeTicket(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/tickets/{id}/close");

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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Close ticket.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    close_ticket_response_schema_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = close_ticket_response_schema_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// Close Ticket
//
// Closes the support ticket.
//
view_ticket_response_t*
TicketsAPI_deleteTicketInfo(apiClient_t *apiClient, double id)
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
    char *localVarPath = strdup("/tickets/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;


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
    //    printf("%s\n","Ticket Information");
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
    view_ticket_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = view_ticket_response_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// Gets Information for creating a new ticket.
//
// Returns the form data needed to create a new support ticket, such as available departments and service categories.
//
void
TicketsAPI_getNewTicket(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/tickets/new");




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
    //    printf("%s\n","New ticket form data including departments and service categories.");
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

// Get Ticket Information
//
// Returns the full details of a support ticket including its history of replies.
//
view_ticket_response_t*
TicketsAPI_getTicketInfo(apiClient_t *apiClient, double id)
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
    char *localVarPath = strdup("/tickets/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;


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
    //    printf("%s\n","Ticket Information");
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
    view_ticket_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = view_ticket_response_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// List Support Tickets
//
// Returns a paginated list of support tickets on the account. Filter by status and time period.
//
tickets_t*
TicketsAPI_getTicketsList(apiClient_t *apiClient, int *page, interserver_management_api_getTicketsList_period_e period, interserver_management_api_getTicketsList_view_e view)
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
    char *localVarPath = strdup("/tickets");





    // query parameters
    char *keyQuery_page = NULL;
    char * valueQuery_page = NULL;
    keyValuePair_t *keyPairQuery_page = 0;
    if (page)
    {
        keyQuery_page = strdup("page");
        valueQuery_page = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_page, MAX_NUMBER_LENGTH, "%d", *page);
        keyPairQuery_page = keyValuePair_create(keyQuery_page, valueQuery_page);
        list_addElement(localVarQueryParameters,keyPairQuery_page);
    }

    // query parameters
    char *keyQuery_period = NULL;
    interserver_management_api_getTicketsList_period_e valueQuery_period ;
    keyValuePair_t *keyPairQuery_period = 0;
    if (period)
    {
        keyQuery_period = strdup("period");
        valueQuery_period = (period);
        keyPairQuery_period = keyValuePair_create(keyQuery_period, strdup(getTicketsList_PERIOD_ToString(
        valueQuery_period)));
        list_addElement(localVarQueryParameters,keyPairQuery_period);
    }

    // query parameters
    char *keyQuery_view = NULL;
    interserver_management_api_getTicketsList_view_e valueQuery_view ;
    keyValuePair_t *keyPairQuery_view = 0;
    if (view)
    {
        keyQuery_view = strdup("view");
        valueQuery_view = (view);
        keyPairQuery_view = keyValuePair_create(keyQuery_view, strdup(getTicketsList_VIEW_ToString(
        valueQuery_view)));
        list_addElement(localVarQueryParameters,keyPairQuery_view);
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
    //    printf("%s\n","The listing of support tickets.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    tickets_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tickets_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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
    if(keyQuery_page){
        free(keyQuery_page);
        keyQuery_page = NULL;
    }
    if(valueQuery_page){
        free(valueQuery_page);
        valueQuery_page = NULL;
    }
    if(keyPairQuery_page){
        keyValuePair_free(keyPairQuery_page);
        keyPairQuery_page = NULL;
    }
    if(keyQuery_period){
        free(keyQuery_period);
        keyQuery_period = NULL;
    }
    if(keyPairQuery_period){
        keyValuePair_free(keyPairQuery_period);
        keyPairQuery_period = NULL;
    }
    if(keyQuery_view){
        free(keyQuery_view);
        keyQuery_view = NULL;
    }
    if(keyPairQuery_view){
        keyValuePair_free(keyPairQuery_view);
        keyPairQuery_view = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reply To Ticket
//
// Adds a reply to an existing support ticket.
//
view_ticket_response_t*
TicketsAPI_postTicketInfo(apiClient_t *apiClient, double id)
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
    char *localVarPath = strdup("/tickets/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;


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
    //    printf("%s\n","Ticket Information");
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
    view_ticket_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = view_ticket_response_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// Search Support Tickets
//
// Searches support tickets by email, subject, or ticket mask ID.
//
tickets_t*
TicketsAPI_postTicketsList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/tickets");




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
    //    printf("%s\n","Search through the ticket system for a given email, subject, or ticket mask id.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    tickets_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tickets_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// Update Ticket
//
// Updates a support ticket's properties such as subject or status.
//
view_ticket_response_t*
TicketsAPI_putTicketInfo(apiClient_t *apiClient, double id)
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
    char *localVarPath = strdup("/tickets/{id}");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;


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
    //    printf("%s\n","Ticket Information");
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
    view_ticket_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = view_ticket_response_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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

// Reply Ticket
//
// Posts a reply to an existing support ticket thread.
//
reply_ticket_response_schema_t*
TicketsAPI_replyTicket(apiClient_t *apiClient, double id, reply_ticket_request_t *reply_ticket_request)
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
    char *localVarPath = strdup("/tickets/{id}/reply");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;



    // Body Param
    cJSON *localVarSingleItemJSON_reply_ticket_request = NULL;
    if (reply_ticket_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_reply_ticket_request = reply_ticket_request_convertToJSON(reply_ticket_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_reply_ticket_request);
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
    //    printf("%s\n","Post Reply to the ticket.");
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
    reply_ticket_response_schema_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = reply_ticket_response_schema_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_reply_ticket_request) {
        cJSON_Delete(localVarSingleItemJSON_reply_ticket_request);
        localVarSingleItemJSON_reply_ticket_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Ticket
//
// Updates a support ticket's subject or body content.
//
update_ticket_response_schema_t*
TicketsAPI_updateTicketInfo(apiClient_t *apiClient, double id, update_ticket_t *update_ticket)
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
    char *localVarPath = strdup("/tickets/{id}/update");



    // Path Params
    long sizeOfPathParams_id =  + sizeof("{ id }") - 1;



    // Body Param
    cJSON *localVarSingleItemJSON_update_ticket = NULL;
    if (update_ticket != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_update_ticket = update_ticket_convertToJSON(update_ticket);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_update_ticket);
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
    //    printf("%s\n","Response from updating a support ticket.");
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
    update_ticket_response_schema_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TicketsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = update_ticket_response_schema_parseFromJSON(TicketsAPIlocalVarJSON);
        cJSON_Delete(TicketsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_update_ticket) {
        cJSON_Delete(localVarSingleItemJSON_update_ticket);
        localVarSingleItemJSON_update_ticket = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

