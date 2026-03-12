#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "PublicAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum FETCHBY for PublicAPI_getCountries

static char* getCountries_FETCHBY_ToString(interserver_management_api_getCountries_fetch_by_e FETCHBY){
    char *FETCHBYArray[] =  { "NULL", "iso2", "iso3", "numcode" };
    return FETCHBYArray[FETCHBY];
}

static interserver_management_api_getCountries_fetch_by_e getCountries_FETCHBY_FromString(char* FETCHBY){
    int stringToReturn = 0;
    char *FETCHBYArray[] =  { "NULL", "iso2", "iso3", "numcode" };
    size_t sizeofArray = sizeof(FETCHBYArray) / sizeof(FETCHBYArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(FETCHBY, FETCHBYArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getCountries_FETCHBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getCountries_FETCHBY_convertToJSON(interserver_management_api_getCountries_fetch_by_e FETCHBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "fetch_by", getCountries_FETCHBY_ToString(FETCHBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getCountries_FETCHBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_getCountries_fetch_by_e getCountries_FETCHBY_parseFromJSON(cJSON* FETCHBYJSON) {
    interserver_management_api_getCountries_fetch_by_e FETCHBYVariable = 0;
    cJSON *FETCHBYVar = cJSON_GetObjectItemCaseSensitive(FETCHBYJSON, "fetch_by");
    if(!cJSON_IsString(FETCHBYVar) || (FETCHBYVar->valuestring == NULL))
    {
        goto end;
    }
    FETCHBYVariable = getCountries_FETCHBY_FromString(FETCHBYVar->valuestring);
    return FETCHBYVariable;
end:
    return 0;
}
*/


// Get Captcha Challenge
//
// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
//
captcha_response_t*
PublicAPI_getCaptcha(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/captcha");




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
    //    printf("%s\n","An array containing a &#x60;captcha&#x60; field containing a string with a base64 encoded captcha image.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    captcha_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = captcha_response_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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

// Get Countries
//
// Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
//
object_t*
PublicAPI_getCountries(apiClient_t *apiClient, interserver_management_api_getCountries_fetch_by_e fetch_by)
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
    char *localVarPath = strdup("/account/countries");





    // query parameters
    char *keyQuery_fetch_by = NULL;
    interserver_management_api_getCountries_fetch_by_e valueQuery_fetch_by ;
    keyValuePair_t *keyPairQuery_fetch_by = 0;
    if (fetch_by)
    {
        keyQuery_fetch_by = strdup("fetch_by");
        valueQuery_fetch_by = (fetch_by);
        keyPairQuery_fetch_by = keyValuePair_create(keyQuery_fetch_by, strdup(getCountries_FETCHBY_ToString(
        valueQuery_fetch_by)));
        list_addElement(localVarQueryParameters,keyPairQuery_fetch_by);
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
    //    printf("%s\n","The list of countries with both 2 letter abbreviations and the country names.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    object_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = object_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
    if(keyQuery_fetch_by){
        free(keyQuery_fetch_by);
        keyQuery_fetch_by = NULL;
    }
    if(keyPairQuery_fetch_by){
        keyValuePair_free(keyPairQuery_fetch_by);
        keyPairQuery_fetch_by = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Server Info
//
// Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
//
services_info_t*
PublicAPI_getInfo(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/info");




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
    //    printf("%s\n","The modules and services information from the server.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    services_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = services_info_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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

// Get Login Info
//
// Gets the various pieces of information useful for generating a login page.
//
login_info_t*
PublicAPI_getLoginInfo(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/login");




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
    //    printf("%s\n","Various pieces of information useful for rendering a login page.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Error response to a login request.");
    //}
    //nonprimitive not container
    login_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = login_info_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
PublicAPI_getMPServers(apiClient_t *apiClient)
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
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buy_it_now_list_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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

// Get OAuth Redirect URL
//
// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
//
get_oauth_redirect_200_response_t*
PublicAPI_getOauthRedirect(apiClient_t *apiClient, char *provider)
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
    char *localVarPath = strdup("/oauth");





    // query parameters
    char *keyQuery_provider = NULL;
    char * valueQuery_provider = NULL;
    keyValuePair_t *keyPairQuery_provider = 0;
    if (provider)
    {
        keyQuery_provider = strdup("provider");
        valueQuery_provider = strdup((provider));
        keyPairQuery_provider = keyValuePair_create(keyQuery_provider, valueQuery_provider);
        list_addElement(localVarQueryParameters,keyPairQuery_provider);
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
    //    printf("%s\n","OAuth redirect URL for the requested provider.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    get_oauth_redirect_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = get_oauth_redirect_200_response_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
    if(keyQuery_provider){
        free(keyQuery_provider);
        keyQuery_provider = NULL;
    }
    if(valueQuery_provider){
        free(valueQuery_provider);
        valueQuery_provider = NULL;
    }
    if(keyPairQuery_provider){
        keyValuePair_free(keyPairQuery_provider);
        keyPairQuery_provider = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Available Timezones
//
// Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
//
list_t*
PublicAPI_getTimezones(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account/timezones");




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
    //    printf("%s\n","An array of all available timezone identifiers.");
    //}
    //primitive return type not simple
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *localVarJSON = cJSON_Parse(apiClient->dataReceived);
        cJSON *VarJSON;
        elementToReturn = list_createList();
        cJSON_ArrayForEach(VarJSON, localVarJSON){
            keyValuePair_t *keyPair = keyValuePair_create(strdup(VarJSON->string), cJSON_Print(VarJSON));
            list_addElement(elementToReturn, keyPair);
        }
        cJSON_Delete(localVarJSON);
    }

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

// Complete OAuth Two-Factor Verification
//
// Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
//
patch_oauth_two_factor_200_response_t*
PublicAPI_patchOauthTwoFactor(apiClient_t *apiClient, patch_oauth_two_factor_request_t *patch_oauth_two_factor_request)
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
    char *localVarPath = strdup("/oauth");





    // Body Param
    cJSON *localVarSingleItemJSON_patch_oauth_two_factor_request = NULL;
    if (patch_oauth_two_factor_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_patch_oauth_two_factor_request = patch_oauth_two_factor_request_convertToJSON(patch_oauth_two_factor_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_patch_oauth_two_factor_request);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OAuth 2FA verification result.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    patch_oauth_two_factor_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = patch_oauth_two_factor_200_response_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_patch_oauth_two_factor_request) {
        cJSON_Delete(localVarSingleItemJSON_patch_oauth_two_factor_request);
        localVarSingleItemJSON_patch_oauth_two_factor_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Ping Server
//
// Performs a single ping/pong request to let you know if the server is up.
//
char*
PublicAPI_pingServer(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/ping");




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
    //    printf("%s\n","A simple response of \&quot;pong\&quot; for use with simple tests to see if a service is up. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Something is wrong");
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// OAuth Callback
//
// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
//
post_oauth_callback_200_response_t*
PublicAPI_postOauthCallback(apiClient_t *apiClient, char *provider, post_oauth_callback_request_t *post_oauth_callback_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/oauth");





    // query parameters
    char *keyQuery_provider = NULL;
    char * valueQuery_provider = NULL;
    keyValuePair_t *keyPairQuery_provider = 0;
    if (provider)
    {
        keyQuery_provider = strdup("provider");
        valueQuery_provider = strdup((provider));
        keyPairQuery_provider = keyValuePair_create(keyQuery_provider, valueQuery_provider);
        list_addElement(localVarQueryParameters,keyPairQuery_provider);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_post_oauth_callback_request = NULL;
    if (post_oauth_callback_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_post_oauth_callback_request = post_oauth_callback_request_convertToJSON(post_oauth_callback_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_post_oauth_callback_request);
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
    //    printf("%s\n","OAuth callback result.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    post_oauth_callback_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = post_oauth_callback_200_response_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_post_oauth_callback_request) {
        cJSON_Delete(localVarSingleItemJSON_post_oauth_callback_request);
        localVarSingleItemJSON_post_oauth_callback_request = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_provider){
        free(keyQuery_provider);
        keyQuery_provider = NULL;
    }
    if(valueQuery_provider){
        free(valueQuery_provider);
        valueQuery_provider = NULL;
    }
    if(keyPairQuery_provider){
        keyValuePair_free(keyPairQuery_provider);
        keyPairQuery_provider = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Submit Login Information
//
// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
//
login_success_response_t*
PublicAPI_submitLogin(apiClient_t *apiClient, char *login, char *passwd, char *remember, login_submission_example_g_recaptcha_response_t *g_recaptcha_response, char *tfa)
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
    char *localVarPath = strdup("/login");





    // form parameters
    char *keyForm_login = NULL;
    char * valueForm_login = 0;
    keyValuePair_t *keyPairForm_login = 0;
    if (login != NULL)
    {
        keyForm_login = strdup("login");
        valueForm_login = strdup((login));
        keyPairForm_login = keyValuePair_create(keyForm_login,valueForm_login);
        list_addElement(localVarFormParameters,keyPairForm_login);
    }

    // form parameters
    char *keyForm_passwd = NULL;
    char * valueForm_passwd = 0;
    keyValuePair_t *keyPairForm_passwd = 0;
    if (passwd != NULL)
    {
        keyForm_passwd = strdup("passwd");
        valueForm_passwd = strdup((passwd));
        keyPairForm_passwd = keyValuePair_create(keyForm_passwd,valueForm_passwd);
        list_addElement(localVarFormParameters,keyPairForm_passwd);
    }

    // form parameters
    char *keyForm_remember = NULL;
    char * valueForm_remember = 0;
    keyValuePair_t *keyPairForm_remember = 0;
    if (remember != NULL)
    {
        keyForm_remember = strdup("remember");
        valueForm_remember = strdup((remember));
        keyPairForm_remember = keyValuePair_create(keyForm_remember,valueForm_remember);
        list_addElement(localVarFormParameters,keyPairForm_remember);
    }

    // form parameters
    char *keyForm_g_recaptcha_response = NULL;
    login_submission_example_g_recaptcha_response_t * valueForm_g_recaptcha_response = 0;
    keyValuePair_t *keyPairForm_g_recaptcha_response = 0;
    if (g_recaptcha_response != NULL)
    {
        keyForm_g_recaptcha_response = strdup("g-recaptcha-response");
        valueForm_g_recaptcha_response = (g_recaptcha_response);
        keyPairForm_g_recaptcha_response = keyValuePair_create(keyForm_g_recaptcha_response,&valueForm_g_recaptcha_response);
        list_addElement(localVarFormParameters,keyPairForm_g_recaptcha_response);
    }

    // form parameters
    char *keyForm_tfa = NULL;
    char * valueForm_tfa = 0;
    keyValuePair_t *keyPairForm_tfa = 0;
    if (tfa != NULL)
    {
        keyForm_tfa = strdup("tfa");
        valueForm_tfa = strdup((tfa));
        keyPairForm_tfa = keyValuePair_create(keyForm_tfa,valueForm_tfa);
        list_addElement(localVarFormParameters,keyPairForm_tfa);
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
    //    printf("%s\n","Successful login response containing the session token.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 402) {
    //    printf("%s\n","Error response to a login request.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Default response");
    //}
    //nonprimitive not container
    login_success_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *PublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = login_success_response_parseFromJSON(PublicAPIlocalVarJSON);
        cJSON_Delete(PublicAPIlocalVarJSON);
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
    if (keyForm_login) {
        free(keyForm_login);
        keyForm_login = NULL;
    }
    if (valueForm_login) {
        free(valueForm_login);
        valueForm_login = NULL;
    }
    free(keyPairForm_login);
    if (keyForm_passwd) {
        free(keyForm_passwd);
        keyForm_passwd = NULL;
    }
    if (valueForm_passwd) {
        free(valueForm_passwd);
        valueForm_passwd = NULL;
    }
    free(keyPairForm_passwd);
    if (keyForm_remember) {
        free(keyForm_remember);
        keyForm_remember = NULL;
    }
    if (valueForm_remember) {
        free(valueForm_remember);
        valueForm_remember = NULL;
    }
    free(keyPairForm_remember);
    if (keyForm_g_recaptcha_response) {
        free(keyForm_g_recaptcha_response);
        keyForm_g_recaptcha_response = NULL;
    }
    free(keyPairForm_g_recaptcha_response);
    if (keyForm_tfa) {
        free(keyForm_tfa);
        keyForm_tfa = NULL;
    }
    if (valueForm_tfa) {
        free(valueForm_tfa);
        valueForm_tfa = NULL;
    }
    free(keyPairForm_tfa);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Submit Signup Information
//
// Creates a new account in our system using the provided information.
//
void
PublicAPI_submitSignup(apiClient_t *apiClient, login_submission_example_t *login_submission_example)
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
    char *localVarPath = strdup("/signup");





    // Body Param
    cJSON *localVarSingleItemJSON_login_submission_example = NULL;
    if (login_submission_example != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_login_submission_example = login_submission_example_convertToJSON(login_submission_example);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_login_submission_example);
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
    //    printf("%s\n","Account created successfully.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 402) {
    //    printf("%s\n","Error response to a login request.");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_login_submission_example) {
        cJSON_Delete(localVarSingleItemJSON_login_submission_example);
        localVarSingleItemJSON_login_submission_example = NULL;
    }
    free(localVarBodyParameters);

}

