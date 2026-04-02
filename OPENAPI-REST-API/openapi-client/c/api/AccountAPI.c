#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "AccountAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Change Account Username
//
// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
//
text_response_t*
AccountAPI_changeAccountUsername(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account/username");




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
    //    printf("%s\n","Response with a text message field.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","The specified resource was not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Unlink OAuth Account
//
// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
//
success_text_response_t*
AccountAPI_deleteAccountOauthName(apiClient_t *apiClient, char *name)
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
    char *localVarPath = strdup("/account/oauth/{name}");

    if(!name)
        goto end;


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + sizeof("{ name }") - 1;
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Disable Two-Factor Authentication
//
// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
//
success_text_response_t*
AccountAPI_deleteAccountTfa(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account/2fa");




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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Remove IP Access Restriction
//
// Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
//
generic_response_t*
AccountAPI_deleteIpLimit(apiClient_t *apiClient, ip_limit_range_t *ip_limit_range)
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
    char *localVarPath = strdup("/account/iplimits");





    // Body Param
    cJSON *localVarSingleItemJSON_ip_limit_range = NULL;
    if (ip_limit_range != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ip_limit_range = ip_limit_range_convertToJSON(ip_limit_range);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ip_limit_range);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","IP Range removed.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    generic_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = generic_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ip_limit_range) {
        cJSON_Delete(localVarSingleItemJSON_ip_limit_range);
        localVarSingleItemJSON_ip_limit_range = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Account Details
//
// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
//
account_info_t*
AccountAPI_getAccountInfo(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account");




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
    //    printf("%s\n","Your account information.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    account_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_info_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Get Two-Factor Setup Data
//
// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
//
get_account_tfa_setup_200_response_t*
AccountAPI_getAccountTfaSetup(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account/2fa");




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
    //    printf("%s\n","Two-factor authentication setup data.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    get_account_tfa_setup_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = get_account_tfa_setup_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Get Home Data
//
// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
//
home_t*
AccountAPI_getHome(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/home");




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
    //    printf("%s\n","General information for use on the home page.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    home_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = home_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Search Autocomplete
//
// Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
//
search_autocomplete_response_t*
AccountAPI_getSearch(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/search");




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
    //    printf("%s\n","Search autocomplete results for the account.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    search_autocomplete_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = search_autocomplete_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Log Out
//
// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
//
success_text_response_t*
AccountAPI_logout(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/logout");




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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Logout of OAuth
//
// Logs out of the specified OAuth provider session.
//
success_text_response_t*
AccountAPI_logoutAccountOauth(apiClient_t *apiClient, char *name)
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
    char *localVarPath = strdup("/account/oauth/{name}/logout");

    if(!name)
        goto end;


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + sizeof("{ name }") - 1;
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Generate New API Key
//
// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
//
success_text_response_t*
AccountAPI_updateAccountApiKey(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/account/apikey");




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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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

// Update Account Feature Flags
//
// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
//
success_text_response_t*
AccountAPI_updateAccountFeatures(apiClient_t *apiClient, int *disable_reset, int *disable_reinstall)
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
    char *localVarPath = strdup("/account/features");





    // form parameters
    char *keyForm_disable_reset = NULL;
    int valueForm_disable_reset = 0;
    keyValuePair_t *keyPairForm_disable_reset = 0;
    if (disable_reset != NULL)
    {
        keyForm_disable_reset = strdup("disable_reset");
        valueForm_disable_reset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_reset, MAX_NUMBER_LENGTH, "%d", *disable_reset);
        keyPairForm_disable_reset = keyValuePair_create(keyForm_disable_reset,&valueForm_disable_reset);
        list_addElement(localVarFormParameters,keyPairForm_disable_reset);
    }

    // form parameters
    char *keyForm_disable_reinstall = NULL;
    int valueForm_disable_reinstall = 0;
    keyValuePair_t *keyPairForm_disable_reinstall = 0;
    if (disable_reinstall != NULL)
    {
        keyForm_disable_reinstall = strdup("disable_reinstall");
        valueForm_disable_reinstall = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_reinstall, MAX_NUMBER_LENGTH, "%d", *disable_reinstall);
        keyPairForm_disable_reinstall = keyValuePair_create(keyForm_disable_reinstall,&valueForm_disable_reinstall);
        list_addElement(localVarFormParameters,keyPairForm_disable_reinstall);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Request was valid but did not contain updatable values.");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm_disable_reset) {
        free(keyForm_disable_reset);
        keyForm_disable_reset = NULL;
    }
    free(keyPairForm_disable_reset);
    if (keyForm_disable_reinstall) {
        free(keyForm_disable_reinstall);
        keyForm_disable_reinstall = NULL;
    }
    free(keyPairForm_disable_reinstall);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Account Information
//
// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
//
success_text_response_t*
AccountAPI_updateAccountInfo(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *zip, char *country, char *phone, char *company, char *address2, char *locale, char *email_invoices, char *email_abuse, int *disable_reset, int *disable_reinstall, int *disable_server_notifications, int *disable_email_notifications, char *gstin)
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
    char *localVarPath = strdup("/account");





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
    char *keyForm_company = NULL;
    char * valueForm_company = 0;
    keyValuePair_t *keyPairForm_company = 0;
    if (company != NULL)
    {
        keyForm_company = strdup("company");
        valueForm_company = strdup((company));
        keyPairForm_company = keyValuePair_create(keyForm_company,valueForm_company);
        list_addElement(localVarFormParameters,keyPairForm_company);
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
    char *keyForm_address2 = NULL;
    char * valueForm_address2 = 0;
    keyValuePair_t *keyPairForm_address2 = 0;
    if (address2 != NULL)
    {
        keyForm_address2 = strdup("address2");
        valueForm_address2 = strdup((address2));
        keyPairForm_address2 = keyValuePair_create(keyForm_address2,valueForm_address2);
        list_addElement(localVarFormParameters,keyPairForm_address2);
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
    char *keyForm_phone = NULL;
    char * valueForm_phone = 0;
    keyValuePair_t *keyPairForm_phone = 0;
    if (phone != NULL)
    {
        keyForm_phone = strdup("phone");
        valueForm_phone = strdup((phone));
        keyPairForm_phone = keyValuePair_create(keyForm_phone,valueForm_phone);
        list_addElement(localVarFormParameters,keyPairForm_phone);
    }

    // form parameters
    char *keyForm_locale = NULL;
    char * valueForm_locale = 0;
    keyValuePair_t *keyPairForm_locale = 0;
    if (locale != NULL)
    {
        keyForm_locale = strdup("locale");
        valueForm_locale = strdup((locale));
        keyPairForm_locale = keyValuePair_create(keyForm_locale,valueForm_locale);
        list_addElement(localVarFormParameters,keyPairForm_locale);
    }

    // form parameters
    char *keyForm_email_invoices = NULL;
    char * valueForm_email_invoices = 0;
    keyValuePair_t *keyPairForm_email_invoices = 0;
    if (email_invoices != NULL)
    {
        keyForm_email_invoices = strdup("email_invoices");
        valueForm_email_invoices = strdup((email_invoices));
        keyPairForm_email_invoices = keyValuePair_create(keyForm_email_invoices,valueForm_email_invoices);
        list_addElement(localVarFormParameters,keyPairForm_email_invoices);
    }

    // form parameters
    char *keyForm_email_abuse = NULL;
    char * valueForm_email_abuse = 0;
    keyValuePair_t *keyPairForm_email_abuse = 0;
    if (email_abuse != NULL)
    {
        keyForm_email_abuse = strdup("email_abuse");
        valueForm_email_abuse = strdup((email_abuse));
        keyPairForm_email_abuse = keyValuePair_create(keyForm_email_abuse,valueForm_email_abuse);
        list_addElement(localVarFormParameters,keyPairForm_email_abuse);
    }

    // form parameters
    char *keyForm_disable_reset = NULL;
    char * valueForm_disable_reset = 0;
    keyValuePair_t *keyPairForm_disable_reset = 0;
    if (disable_reset != NULL)
    {
        keyForm_disable_reset = strdup("disable_reset");
        valueForm_disable_reset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_reset, MAX_NUMBER_LENGTH, "%d", *disable_reset);
        keyPairForm_disable_reset = keyValuePair_create(keyForm_disable_reset,valueForm_disable_reset);
        list_addElement(localVarFormParameters,keyPairForm_disable_reset);
    }

    // form parameters
    char *keyForm_disable_reinstall = NULL;
    char * valueForm_disable_reinstall = 0;
    keyValuePair_t *keyPairForm_disable_reinstall = 0;
    if (disable_reinstall != NULL)
    {
        keyForm_disable_reinstall = strdup("disable_reinstall");
        valueForm_disable_reinstall = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_reinstall, MAX_NUMBER_LENGTH, "%d", *disable_reinstall);
        keyPairForm_disable_reinstall = keyValuePair_create(keyForm_disable_reinstall,valueForm_disable_reinstall);
        list_addElement(localVarFormParameters,keyPairForm_disable_reinstall);
    }

    // form parameters
    char *keyForm_disable_server_notifications = NULL;
    char * valueForm_disable_server_notifications = 0;
    keyValuePair_t *keyPairForm_disable_server_notifications = 0;
    if (disable_server_notifications != NULL)
    {
        keyForm_disable_server_notifications = strdup("disable_server_notifications");
        valueForm_disable_server_notifications = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_server_notifications, MAX_NUMBER_LENGTH, "%d", *disable_server_notifications);
        keyPairForm_disable_server_notifications = keyValuePair_create(keyForm_disable_server_notifications,valueForm_disable_server_notifications);
        list_addElement(localVarFormParameters,keyPairForm_disable_server_notifications);
    }

    // form parameters
    char *keyForm_disable_email_notifications = NULL;
    char * valueForm_disable_email_notifications = 0;
    keyValuePair_t *keyPairForm_disable_email_notifications = 0;
    if (disable_email_notifications != NULL)
    {
        keyForm_disable_email_notifications = strdup("disable_email_notifications");
        valueForm_disable_email_notifications = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_disable_email_notifications, MAX_NUMBER_LENGTH, "%d", *disable_email_notifications);
        keyPairForm_disable_email_notifications = keyValuePair_create(keyForm_disable_email_notifications,valueForm_disable_email_notifications);
        list_addElement(localVarFormParameters,keyPairForm_disable_email_notifications);
    }

    // form parameters
    char *keyForm_gstin = NULL;
    char * valueForm_gstin = 0;
    keyValuePair_t *keyPairForm_gstin = 0;
    if (gstin != NULL)
    {
        keyForm_gstin = strdup("gstin");
        valueForm_gstin = strdup((gstin));
        keyPairForm_gstin = keyValuePair_create(keyForm_gstin,valueForm_gstin);
        list_addElement(localVarFormParameters,keyPairForm_gstin);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Validation error while updating account data.");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm_company) {
        free(keyForm_company);
        keyForm_company = NULL;
    }
    if (valueForm_company) {
        free(valueForm_company);
        valueForm_company = NULL;
    }
    free(keyPairForm_company);
    if (keyForm_address) {
        free(keyForm_address);
        keyForm_address = NULL;
    }
    if (valueForm_address) {
        free(valueForm_address);
        valueForm_address = NULL;
    }
    free(keyPairForm_address);
    if (keyForm_address2) {
        free(keyForm_address2);
        keyForm_address2 = NULL;
    }
    if (valueForm_address2) {
        free(valueForm_address2);
        valueForm_address2 = NULL;
    }
    free(keyPairForm_address2);
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
    if (keyForm_zip) {
        free(keyForm_zip);
        keyForm_zip = NULL;
    }
    if (valueForm_zip) {
        free(valueForm_zip);
        valueForm_zip = NULL;
    }
    free(keyPairForm_zip);
    if (keyForm_country) {
        free(keyForm_country);
        keyForm_country = NULL;
    }
    if (valueForm_country) {
        free(valueForm_country);
        valueForm_country = NULL;
    }
    free(keyPairForm_country);
    if (keyForm_phone) {
        free(keyForm_phone);
        keyForm_phone = NULL;
    }
    if (valueForm_phone) {
        free(valueForm_phone);
        valueForm_phone = NULL;
    }
    free(keyPairForm_phone);
    if (keyForm_locale) {
        free(keyForm_locale);
        keyForm_locale = NULL;
    }
    if (valueForm_locale) {
        free(valueForm_locale);
        valueForm_locale = NULL;
    }
    free(keyPairForm_locale);
    if (keyForm_email_invoices) {
        free(keyForm_email_invoices);
        keyForm_email_invoices = NULL;
    }
    if (valueForm_email_invoices) {
        free(valueForm_email_invoices);
        valueForm_email_invoices = NULL;
    }
    free(keyPairForm_email_invoices);
    if (keyForm_email_abuse) {
        free(keyForm_email_abuse);
        keyForm_email_abuse = NULL;
    }
    if (valueForm_email_abuse) {
        free(valueForm_email_abuse);
        valueForm_email_abuse = NULL;
    }
    free(keyPairForm_email_abuse);
    if (keyForm_disable_reset) {
        free(keyForm_disable_reset);
        keyForm_disable_reset = NULL;
    }
    free(keyPairForm_disable_reset);
    if (keyForm_disable_reinstall) {
        free(keyForm_disable_reinstall);
        keyForm_disable_reinstall = NULL;
    }
    free(keyPairForm_disable_reinstall);
    if (keyForm_disable_server_notifications) {
        free(keyForm_disable_server_notifications);
        keyForm_disable_server_notifications = NULL;
    }
    free(keyPairForm_disable_server_notifications);
    if (keyForm_disable_email_notifications) {
        free(keyForm_disable_email_notifications);
        keyForm_disable_email_notifications = NULL;
    }
    free(keyPairForm_disable_email_notifications);
    if (keyForm_gstin) {
        free(keyForm_gstin);
        keyForm_gstin = NULL;
    }
    if (valueForm_gstin) {
        free(valueForm_gstin);
        valueForm_gstin = NULL;
    }
    free(keyPairForm_gstin);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add IP Access Restriction
//
// Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
//
success_text_response_t*
AccountAPI_updateAccountIpLimits(apiClient_t *apiClient, char *start, char *end)
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
    char *localVarPath = strdup("/account/iplimits");





    // form parameters
    char *keyForm_start = NULL;
    char * valueForm_start = 0;
    keyValuePair_t *keyPairForm_start = 0;
    if (start != NULL)
    {
        keyForm_start = strdup("start");
        valueForm_start = strdup((start));
        keyPairForm_start = keyValuePair_create(keyForm_start,valueForm_start);
        list_addElement(localVarFormParameters,keyPairForm_start);
    }

    // form parameters
    char *keyForm_end = NULL;
    char * valueForm_end = 0;
    keyValuePair_t *keyPairForm_end = 0;
    if (end != NULL)
    {
        keyForm_end = strdup("end");
        valueForm_end = strdup((end));
        keyPairForm_end = keyValuePair_create(keyForm_end,valueForm_end);
        list_addElement(localVarFormParameters,keyPairForm_end);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","IP limit payload contains an invalid address.");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm_start) {
        free(keyForm_start);
        keyForm_start = NULL;
    }
    if (valueForm_start) {
        free(valueForm_start);
        valueForm_start = NULL;
    }
    free(keyPairForm_start);
    if (keyForm_end) {
        free(keyForm_end);
        keyForm_end = NULL;
    }
    if (valueForm_end) {
        free(valueForm_end);
        valueForm_end = NULL;
    }
    free(keyPairForm_end);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Change Account Password
//
// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
//
text_response_t*
AccountAPI_updateAccountPassword(apiClient_t *apiClient, char *password)
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
    char *localVarPath = strdup("/account/password");





    // form parameters
    char *keyForm_password = NULL;
    char * valueForm_password = 0;
    keyValuePair_t *keyPairForm_password = 0;
    if (password != NULL)
    {
        keyForm_password = strdup("password");
        valueForm_password = strdup((password));
        keyPairForm_password = keyValuePair_create(keyForm_password,valueForm_password);
        list_addElement(localVarFormParameters,keyPairForm_password);
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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm_password) {
        free(keyForm_password);
        keyForm_password = NULL;
    }
    if (valueForm_password) {
        free(valueForm_password);
        valueForm_password = NULL;
    }
    free(keyPairForm_password);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update SSH Keys
//
// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
//
success_text_response_t*
AccountAPI_updateAccountSshKey(apiClient_t *apiClient, char *ssh_key)
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
    char *localVarPath = strdup("/account/sshkey");





    // form parameters
    char *keyForm_ssh_key = NULL;
    char * valueForm_ssh_key = 0;
    keyValuePair_t *keyPairForm_ssh_key = 0;
    if (ssh_key != NULL)
    {
        keyForm_ssh_key = strdup("ssh_key");
        valueForm_ssh_key = strdup((ssh_key));
        keyPairForm_ssh_key = keyValuePair_create(keyForm_ssh_key,valueForm_ssh_key);
        list_addElement(localVarFormParameters,keyPairForm_ssh_key);
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
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm_ssh_key) {
        free(keyForm_ssh_key);
        keyForm_ssh_key = NULL;
    }
    if (valueForm_ssh_key) {
        free(valueForm_ssh_key);
        valueForm_ssh_key = NULL;
    }
    free(keyPairForm_ssh_key);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Enable Two-Factor Authentication
//
// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
//
success_text_response_t*
AccountAPI_updateAccountTfa(apiClient_t *apiClient, char *_2fa_google_code)
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
    char *localVarPath = strdup("/account/2fa");





    // form parameters
    char *keyForm__2fa_google_code = NULL;
    char * valueForm__2fa_google_code = 0;
    keyValuePair_t *keyPairForm__2fa_google_code = 0;
    if (_2fa_google_code != NULL)
    {
        keyForm__2fa_google_code = strdup("2fa_google_code");
        valueForm__2fa_google_code = strdup((_2fa_google_code));
        keyPairForm__2fa_google_code = keyValuePair_create(keyForm__2fa_google_code,valueForm__2fa_google_code);
        list_addElement(localVarFormParameters,keyPairForm__2fa_google_code);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Provided two-factor verification code was invalid.");
    //}
    //nonprimitive not container
    success_text_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = success_text_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
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
    if (keyForm__2fa_google_code) {
        free(keyForm__2fa_google_code);
        keyForm__2fa_google_code = NULL;
    }
    if (valueForm__2fa_google_code) {
        free(valueForm__2fa_google_code);
        valueForm__2fa_google_code = NULL;
    }
    free(keyPairForm__2fa_google_code);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

