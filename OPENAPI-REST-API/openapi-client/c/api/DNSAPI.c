#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "DNSAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum  for DNSAPI_addDnsRecord

static char* addDnsRecord__ToString(interserver_management_api_addDnsRecord_type_e ){
    char *Array[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    return Array[];
}

static interserver_management_api_addDnsRecord_type_e addDnsRecord__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function addDnsRecord__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *addDnsRecord__convertToJSON(interserver_management_api_addDnsRecord_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function addDnsRecord__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_addDnsRecord_type_e addDnsRecord__parseFromJSON(cJSON* JSON) {
    interserver_management_api_addDnsRecord_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for DNSAPI_updateDnsRecord

static char* updateDnsRecord__ToString(interserver_management_api_updateDnsRecord_type_e ){
    char *Array[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    return Array[];
}

static interserver_management_api_updateDnsRecord_type_e updateDnsRecord__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function updateDnsRecord__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *updateDnsRecord__convertToJSON(interserver_management_api_updateDnsRecord_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function updateDnsRecord__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static interserver_management_api_updateDnsRecord_type_e updateDnsRecord__parseFromJSON(cJSON* JSON) {
    interserver_management_api_updateDnsRecord_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create DNS Domain
//
// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
//
void
DNSAPI_addDnsDomain(apiClient_t *apiClient, char *domain, char *ip)
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
    char *localVarPath = strdup("/dns");





    // form parameters
    char *keyForm_domain = NULL;
    char * valueForm_domain = 0;
    keyValuePair_t *keyPairForm_domain = 0;
    if (domain != NULL)
    {
        keyForm_domain = strdup("domain");
        valueForm_domain = strdup((domain));
        keyPairForm_domain = keyValuePair_create(keyForm_domain,valueForm_domain);
        list_addElement(localVarFormParameters,keyPairForm_domain);
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
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyForm_domain) {
        free(keyForm_domain);
        keyForm_domain = NULL;
    }
    if (valueForm_domain) {
        free(valueForm_domain);
        valueForm_domain = NULL;
    }
    keyValuePair_free(keyPairForm_domain);
    if (keyForm_ip) {
        free(keyForm_ip);
        keyForm_ip = NULL;
    }
    if (valueForm_ip) {
        free(valueForm_ip);
        valueForm_ip = NULL;
    }
    keyValuePair_free(keyPairForm_ip);

}

// Add DNS Record to Domain
//
// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
//
void
DNSAPI_addDnsRecord(apiClient_t *apiClient, char *id, char *name, dns_record_type_e type, char *content, int *ttl, int *prio)
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
    char *localVarPath = strdup("/dns/{id}");

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
    char *keyForm_type = NULL;
    dns_record_type_e valueForm_type = 0;
    keyValuePair_t *keyPairForm_type = 0;
    if (type != 0)
    {
        keyForm_type = strdup("type");
        valueForm_type = (type);
        keyPairForm_type = keyValuePair_create(keyForm_type,&valueForm_type);
        list_addElement(localVarFormParameters,keyPairForm_type);
    }

    // form parameters
    char *keyForm_content = NULL;
    char * valueForm_content = 0;
    keyValuePair_t *keyPairForm_content = 0;
    if (content != NULL)
    {
        keyForm_content = strdup("content");
        valueForm_content = strdup((content));
        keyPairForm_content = keyValuePair_create(keyForm_content,valueForm_content);
        list_addElement(localVarFormParameters,keyPairForm_content);
    }

    // form parameters
    char *keyForm_ttl = NULL;
    int valueForm_ttl = 0;
    keyValuePair_t *keyPairForm_ttl = 0;
    if (ttl != NULL)
    {
        keyForm_ttl = strdup("ttl");
        valueForm_ttl = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_ttl, MAX_NUMBER_LENGTH, "%d", *ttl);
        keyPairForm_ttl = keyValuePair_create(keyForm_ttl,&valueForm_ttl);
        list_addElement(localVarFormParameters,keyPairForm_ttl);
    }

    // form parameters
    char *keyForm_prio = NULL;
    int valueForm_prio = 0;
    keyValuePair_t *keyPairForm_prio = 0;
    if (prio != NULL)
    {
        keyForm_prio = strdup("prio");
        valueForm_prio = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_prio, MAX_NUMBER_LENGTH, "%d", *prio);
        keyPairForm_prio = keyValuePair_create(keyForm_prio,&valueForm_prio);
        list_addElement(localVarFormParameters,keyPairForm_prio);
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
    //    printf("%s\n","Add DNS Domain Response");
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
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_id);
    if (keyForm_name) {
        free(keyForm_name);
        keyForm_name = NULL;
    }
    if (valueForm_name) {
        free(valueForm_name);
        valueForm_name = NULL;
    }
    keyValuePair_free(keyPairForm_name);
    if (keyForm_type) {
        free(keyForm_type);
        keyForm_type = NULL;
    }
    free(keyPairForm_type);
    if (keyForm_content) {
        free(keyForm_content);
        keyForm_content = NULL;
    }
    if (valueForm_content) {
        free(valueForm_content);
        valueForm_content = NULL;
    }
    keyValuePair_free(keyPairForm_content);
    if (keyForm_ttl) {
        free(keyForm_ttl);
        keyForm_ttl = NULL;
    }
    free(keyPairForm_ttl);
    if (keyForm_prio) {
        free(keyForm_prio);
        keyForm_prio = NULL;
    }
    free(keyPairForm_prio);

}

// Delete DNS Domain
//
// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
//
void
DNSAPI_deleteDnsDomain(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/dns/{id}");

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

// Delete DNS Record
//
// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
//
void
DNSAPI_deleteDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId)
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
    char *localVarPath = strdup("/dns/{domainId}/{recordId}");



    // Path Params
    long sizeOfPathParams_domainId =  +  + sizeof("{ domainId }") - 1;
    if(domainId == 0){
        goto end;
    }
    char* localVarToReplace_domainId = malloc(sizeOfPathParams_domainId);
    snprintf(localVarToReplace_domainId, sizeOfPathParams_domainId, "{%s}", "domainId");

    char localVarBuff_domainId[256];
    snprintf(localVarBuff_domainId, sizeof localVarBuff_domainId, "%ld", (long)*domainId);

    localVarPath = strReplace(localVarPath, localVarToReplace_domainId, localVarBuff_domainId);


    // Path Params
    long sizeOfPathParams_recordId =  +  + sizeof("{ recordId }") - 1;
    if(recordId == 0){
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    snprintf(localVarToReplace_recordId, sizeOfPathParams_recordId, "{%s}", "recordId");

    char localVarBuff_recordId[256];
    snprintf(localVarBuff_recordId, sizeof localVarBuff_recordId, "%ld", (long)*recordId);

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, localVarBuff_recordId);



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
    free(localVarToReplace_domainId);
    free(localVarToReplace_recordId);

}

// List Domain DNS Records
//
// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
//
list_t*
DNSAPI_getDnsDomain(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/dns/{id}");



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
    //    printf("%s\n","The DNS records for the specified domain.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *DNSAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(DNSAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, DNSAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( DNSAPIlocalVarJSON);
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

// List DNS Domains
//
// Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
//
list_t*
DNSAPI_getDnsList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/dns");




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
    //    printf("%s\n","Listing of DNS domains on the account with their primary A record.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *DNSAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(DNSAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, DNSAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( DNSAPIlocalVarJSON);
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

// Update DNS Record
//
// Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
//
void
DNSAPI_updateDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId, char *name, dns_record_type_e type, char *content, char *ttl, char *prio, char *disabled, char *ordername, char *auth)
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
    char *localVarPath = strdup("/dns/{domainId}/{recordId}");



    // Path Params
    long sizeOfPathParams_domainId =  +  + sizeof("{ domainId }") - 1;
    if(domainId == 0){
        goto end;
    }
    char* localVarToReplace_domainId = malloc(sizeOfPathParams_domainId);
    snprintf(localVarToReplace_domainId, sizeOfPathParams_domainId, "{%s}", "domainId");

    char localVarBuff_domainId[256];
    snprintf(localVarBuff_domainId, sizeof localVarBuff_domainId, "%ld", (long)*domainId);

    localVarPath = strReplace(localVarPath, localVarToReplace_domainId, localVarBuff_domainId);


    // Path Params
    long sizeOfPathParams_recordId =  +  + sizeof("{ recordId }") - 1;
    if(recordId == 0){
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    snprintf(localVarToReplace_recordId, sizeOfPathParams_recordId, "{%s}", "recordId");

    char localVarBuff_recordId[256];
    snprintf(localVarBuff_recordId, sizeof localVarBuff_recordId, "%ld", (long)*recordId);

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, localVarBuff_recordId);




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
    char *keyForm_type = NULL;
    dns_record_type_e valueForm_type = 0;
    keyValuePair_t *keyPairForm_type = 0;
    if (type != 0)
    {
        keyForm_type = strdup("type");
        valueForm_type = (type);
        keyPairForm_type = keyValuePair_create(keyForm_type,&valueForm_type);
        list_addElement(localVarFormParameters,keyPairForm_type);
    }

    // form parameters
    char *keyForm_content = NULL;
    char * valueForm_content = 0;
    keyValuePair_t *keyPairForm_content = 0;
    if (content != NULL)
    {
        keyForm_content = strdup("content");
        valueForm_content = strdup((content));
        keyPairForm_content = keyValuePair_create(keyForm_content,valueForm_content);
        list_addElement(localVarFormParameters,keyPairForm_content);
    }

    // form parameters
    char *keyForm_ttl = NULL;
    char * valueForm_ttl = 0;
    keyValuePair_t *keyPairForm_ttl = 0;
    if (ttl != NULL)
    {
        keyForm_ttl = strdup("ttl");
        valueForm_ttl = strdup((ttl));
        keyPairForm_ttl = keyValuePair_create(keyForm_ttl,valueForm_ttl);
        list_addElement(localVarFormParameters,keyPairForm_ttl);
    }

    // form parameters
    char *keyForm_prio = NULL;
    char * valueForm_prio = 0;
    keyValuePair_t *keyPairForm_prio = 0;
    if (prio != NULL)
    {
        keyForm_prio = strdup("prio");
        valueForm_prio = strdup((prio));
        keyPairForm_prio = keyValuePair_create(keyForm_prio,valueForm_prio);
        list_addElement(localVarFormParameters,keyPairForm_prio);
    }

    // form parameters
    char *keyForm_disabled = NULL;
    char * valueForm_disabled = 0;
    keyValuePair_t *keyPairForm_disabled = 0;
    if (disabled != NULL)
    {
        keyForm_disabled = strdup("disabled");
        valueForm_disabled = strdup((disabled));
        keyPairForm_disabled = keyValuePair_create(keyForm_disabled,valueForm_disabled);
        list_addElement(localVarFormParameters,keyPairForm_disabled);
    }

    // form parameters
    char *keyForm_ordername = NULL;
    char * valueForm_ordername = 0;
    keyValuePair_t *keyPairForm_ordername = 0;
    if (ordername != NULL)
    {
        keyForm_ordername = strdup("ordername");
        valueForm_ordername = strdup((ordername));
        keyPairForm_ordername = keyValuePair_create(keyForm_ordername,valueForm_ordername);
        list_addElement(localVarFormParameters,keyPairForm_ordername);
    }

    // form parameters
    char *keyForm_auth = NULL;
    char * valueForm_auth = 0;
    keyValuePair_t *keyPairForm_auth = 0;
    if (auth != NULL)
    {
        keyForm_auth = strdup("auth");
        valueForm_auth = strdup((auth));
        keyPairForm_auth = keyValuePair_create(keyForm_auth,valueForm_auth);
        list_addElement(localVarFormParameters,keyPairForm_auth);
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
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_domainId);
    free(localVarToReplace_recordId);
    if (keyForm_name) {
        free(keyForm_name);
        keyForm_name = NULL;
    }
    if (valueForm_name) {
        free(valueForm_name);
        valueForm_name = NULL;
    }
    keyValuePair_free(keyPairForm_name);
    if (keyForm_type) {
        free(keyForm_type);
        keyForm_type = NULL;
    }
    free(keyPairForm_type);
    if (keyForm_content) {
        free(keyForm_content);
        keyForm_content = NULL;
    }
    if (valueForm_content) {
        free(valueForm_content);
        valueForm_content = NULL;
    }
    keyValuePair_free(keyPairForm_content);
    if (keyForm_ttl) {
        free(keyForm_ttl);
        keyForm_ttl = NULL;
    }
    if (valueForm_ttl) {
        free(valueForm_ttl);
        valueForm_ttl = NULL;
    }
    keyValuePair_free(keyPairForm_ttl);
    if (keyForm_prio) {
        free(keyForm_prio);
        keyForm_prio = NULL;
    }
    if (valueForm_prio) {
        free(valueForm_prio);
        valueForm_prio = NULL;
    }
    keyValuePair_free(keyPairForm_prio);
    if (keyForm_disabled) {
        free(keyForm_disabled);
        keyForm_disabled = NULL;
    }
    if (valueForm_disabled) {
        free(valueForm_disabled);
        valueForm_disabled = NULL;
    }
    keyValuePair_free(keyPairForm_disabled);
    if (keyForm_ordername) {
        free(keyForm_ordername);
        keyForm_ordername = NULL;
    }
    if (valueForm_ordername) {
        free(valueForm_ordername);
        valueForm_ordername = NULL;
    }
    keyValuePair_free(keyPairForm_ordername);
    if (keyForm_auth) {
        free(keyForm_auth);
        keyForm_auth = NULL;
    }
    if (valueForm_auth) {
        free(valueForm_auth);
        valueForm_auth = NULL;
    }
    keyValuePair_free(keyPairForm_auth);

}

