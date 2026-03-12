#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_custom_field_details.h"


char* ticket_custom_field_details_customer_server_access_ToString(interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_e customer_server_access) {
    char* customer_server_accessArray[] =  { "NULL", "y", "n" };
    return customer_server_accessArray[customer_server_access];
}

interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_e ticket_custom_field_details_customer_server_access_FromString(char* customer_server_access){
    int stringToReturn = 0;
    char *customer_server_accessArray[] =  { "NULL", "y", "n" };
    size_t sizeofArray = sizeof(customer_server_accessArray) / sizeof(customer_server_accessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(customer_server_access, customer_server_accessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static ticket_custom_field_details_t *ticket_custom_field_details_create_internal(
    interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_e customer_server_access,
    char *ip_address,
    char *root_password,
    char *sudo_user,
    int sudo_password,
    int port
    ) {
    ticket_custom_field_details_t *ticket_custom_field_details_local_var = malloc(sizeof(ticket_custom_field_details_t));
    if (!ticket_custom_field_details_local_var) {
        return NULL;
    }
    ticket_custom_field_details_local_var->customer_server_access = customer_server_access;
    ticket_custom_field_details_local_var->ip_address = ip_address;
    ticket_custom_field_details_local_var->root_password = root_password;
    ticket_custom_field_details_local_var->sudo_user = sudo_user;
    ticket_custom_field_details_local_var->sudo_password = sudo_password;
    ticket_custom_field_details_local_var->port = port;

    ticket_custom_field_details_local_var->_library_owned = 1;
    return ticket_custom_field_details_local_var;
}

__attribute__((deprecated)) ticket_custom_field_details_t *ticket_custom_field_details_create(
    interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_e customer_server_access,
    char *ip_address,
    char *root_password,
    char *sudo_user,
    int sudo_password,
    int port
    ) {
    return ticket_custom_field_details_create_internal (
        customer_server_access,
        ip_address,
        root_password,
        sudo_user,
        sudo_password,
        port
        );
}

void ticket_custom_field_details_free(ticket_custom_field_details_t *ticket_custom_field_details) {
    if(NULL == ticket_custom_field_details){
        return ;
    }
    if(ticket_custom_field_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_custom_field_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ticket_custom_field_details->ip_address) {
        free(ticket_custom_field_details->ip_address);
        ticket_custom_field_details->ip_address = NULL;
    }
    if (ticket_custom_field_details->root_password) {
        free(ticket_custom_field_details->root_password);
        ticket_custom_field_details->root_password = NULL;
    }
    if (ticket_custom_field_details->sudo_user) {
        free(ticket_custom_field_details->sudo_user);
        ticket_custom_field_details->sudo_user = NULL;
    }
    free(ticket_custom_field_details);
}

cJSON *ticket_custom_field_details_convertToJSON(ticket_custom_field_details_t *ticket_custom_field_details) {
    cJSON *item = cJSON_CreateObject();

    // ticket_custom_field_details->customer_server_access
    if(ticket_custom_field_details->customer_server_access != interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_NULL) {
    if(cJSON_AddStringToObject(item, "Customer Server Access", ticket_custom_field_details_customer_server_access_ToString(ticket_custom_field_details->customer_server_access)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ticket_custom_field_details->ip_address
    if(ticket_custom_field_details->ip_address) {
    if(cJSON_AddStringToObject(item, "Ip Address", ticket_custom_field_details->ip_address) == NULL) {
    goto fail; //String
    }
    }


    // ticket_custom_field_details->root_password
    if(ticket_custom_field_details->root_password) {
    if(cJSON_AddStringToObject(item, "Root Password", ticket_custom_field_details->root_password) == NULL) {
    goto fail; //String
    }
    }


    // ticket_custom_field_details->sudo_user
    if(ticket_custom_field_details->sudo_user) {
    if(cJSON_AddStringToObject(item, "Sudo User", ticket_custom_field_details->sudo_user) == NULL) {
    goto fail; //String
    }
    }


    // ticket_custom_field_details->sudo_password
    if(ticket_custom_field_details->sudo_password) {
    if(cJSON_AddNumberToObject(item, "Sudo Password", ticket_custom_field_details->sudo_password) == NULL) {
    goto fail; //Numeric
    }
    }


    // ticket_custom_field_details->port
    if(ticket_custom_field_details->port) {
    if(cJSON_AddNumberToObject(item, "Port", ticket_custom_field_details->port) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ticket_custom_field_details_t *ticket_custom_field_details_parseFromJSON(cJSON *ticket_custom_field_detailsJSON){

    ticket_custom_field_details_t *ticket_custom_field_details_local_var = NULL;

    // ticket_custom_field_details->customer_server_access
    cJSON *customer_server_access = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Customer Server Access");
    if (cJSON_IsNull(customer_server_access)) {
        customer_server_access = NULL;
    }
    interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_e customer_server_accessVariable;
    if (customer_server_access) { 
    if(!cJSON_IsString(customer_server_access))
    {
    goto end; //Enum
    }
    customer_server_accessVariable = ticket_custom_field_details_customer_server_access_FromString(customer_server_access->valuestring);
    }

    // ticket_custom_field_details->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Ip Address");
    if (cJSON_IsNull(ip_address)) {
        ip_address = NULL;
    }
    if (ip_address) { 
    if(!cJSON_IsString(ip_address) && !cJSON_IsNull(ip_address))
    {
    goto end; //String
    }
    }

    // ticket_custom_field_details->root_password
    cJSON *root_password = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Root Password");
    if (cJSON_IsNull(root_password)) {
        root_password = NULL;
    }
    if (root_password) { 
    if(!cJSON_IsString(root_password) && !cJSON_IsNull(root_password))
    {
    goto end; //String
    }
    }

    // ticket_custom_field_details->sudo_user
    cJSON *sudo_user = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Sudo User");
    if (cJSON_IsNull(sudo_user)) {
        sudo_user = NULL;
    }
    if (sudo_user) { 
    if(!cJSON_IsString(sudo_user) && !cJSON_IsNull(sudo_user))
    {
    goto end; //String
    }
    }

    // ticket_custom_field_details->sudo_password
    cJSON *sudo_password = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Sudo Password");
    if (cJSON_IsNull(sudo_password)) {
        sudo_password = NULL;
    }
    if (sudo_password) { 
    if(!cJSON_IsNumber(sudo_password))
    {
    goto end; //Numeric
    }
    }

    // ticket_custom_field_details->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(ticket_custom_field_detailsJSON, "Port");
    if (cJSON_IsNull(port)) {
        port = NULL;
    }
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    ticket_custom_field_details_local_var = ticket_custom_field_details_create_internal (
        customer_server_access ? customer_server_accessVariable : interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_NULL,
        ip_address && !cJSON_IsNull(ip_address) ? strdup(ip_address->valuestring) : NULL,
        root_password && !cJSON_IsNull(root_password) ? strdup(root_password->valuestring) : NULL,
        sudo_user && !cJSON_IsNull(sudo_user) ? strdup(sudo_user->valuestring) : NULL,
        sudo_password ? sudo_password->valuedouble : 0,
        port ? port->valuedouble : 0
        );

    return ticket_custom_field_details_local_var;
end:
    return NULL;

}
