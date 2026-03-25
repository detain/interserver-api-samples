#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_ticket.h"


char* update_ticket_customer_server_access_ToString(interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_e customer_server_access) {
    char* customer_server_accessArray[] =  { "NULL", "y", "n" };
    return customer_server_accessArray[customer_server_access];
}

interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_e update_ticket_customer_server_access_FromString(char* customer_server_access){
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

static update_ticket_t *update_ticket_create_internal(
    char *ip,
    char *ip_address,
    interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_e customer_server_access,
    char *root_password,
    char *sudo_username,
    char *sudo_password,
    int *port
    ) {
    update_ticket_t *update_ticket_local_var = malloc(sizeof(update_ticket_t));
    if (!update_ticket_local_var) {
        return NULL;
    }
    memset(update_ticket_local_var, 0, sizeof(update_ticket_t));
    update_ticket_local_var->_library_owned = 1;
    update_ticket_local_var->ip = ip;
    update_ticket_local_var->ip_address = ip_address;
    update_ticket_local_var->customer_server_access = customer_server_access;
    update_ticket_local_var->root_password = root_password;
    update_ticket_local_var->sudo_username = sudo_username;
    update_ticket_local_var->sudo_password = sudo_password;
    update_ticket_local_var->port = port;
    return update_ticket_local_var;
}

__attribute__((deprecated)) update_ticket_t *update_ticket_create(
    char *ip,
    char *ip_address,
    interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_e customer_server_access,
    char *root_password,
    char *sudo_username,
    char *sudo_password,
    int *port
    ) {
    int *port_copy = NULL;
    if (port) {
        port_copy = malloc(sizeof(int));
        if (port_copy) *port_copy = *port;
    }
    update_ticket_t *result = update_ticket_create_internal (
        ip,
        ip_address,
        customer_server_access,
        root_password,
        sudo_username,
        sudo_password,
        port_copy
        );
    if (!result) {
        free(port_copy);
    }
    return result;
}

void update_ticket_free(update_ticket_t *update_ticket) {
    if(NULL == update_ticket){
        return ;
    }
    if(update_ticket->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "update_ticket_free");
        return ;
    }
    listEntry_t *listEntry;
    if (update_ticket->ip) {
        free(update_ticket->ip);
        update_ticket->ip = NULL;
    }
    if (update_ticket->ip_address) {
        free(update_ticket->ip_address);
        update_ticket->ip_address = NULL;
    }
    if (update_ticket->root_password) {
        free(update_ticket->root_password);
        update_ticket->root_password = NULL;
    }
    if (update_ticket->sudo_username) {
        free(update_ticket->sudo_username);
        update_ticket->sudo_username = NULL;
    }
    if (update_ticket->sudo_password) {
        free(update_ticket->sudo_password);
        update_ticket->sudo_password = NULL;
    }
    if (update_ticket->port) {
        free(update_ticket->port);
        update_ticket->port = NULL;
    }
    free(update_ticket);
}

cJSON *update_ticket_convertToJSON(update_ticket_t *update_ticket) {
    cJSON *item = cJSON_CreateObject();

    // update_ticket->ip
    if(update_ticket->ip) {
    if(cJSON_AddStringToObject(item, "ip", update_ticket->ip) == NULL) {
    goto fail; //String
    }
    }


    // update_ticket->ip_address
    if(update_ticket->ip_address) {
    if(cJSON_AddStringToObject(item, "ip_address", update_ticket->ip_address) == NULL) {
    goto fail; //String
    }
    }


    // update_ticket->customer_server_access
    if(update_ticket->customer_server_access != interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_NULL) {
    if(cJSON_AddStringToObject(item, "customer_server_access", update_ticket_customer_server_access_ToString(update_ticket->customer_server_access)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // update_ticket->root_password
    if(update_ticket->root_password) {
    if(cJSON_AddStringToObject(item, "root_password", update_ticket->root_password) == NULL) {
    goto fail; //String
    }
    }


    // update_ticket->sudo_username
    if(update_ticket->sudo_username) {
    if(cJSON_AddStringToObject(item, "sudo_username", update_ticket->sudo_username) == NULL) {
    goto fail; //String
    }
    }


    // update_ticket->sudo_password
    if(update_ticket->sudo_password) {
    if(cJSON_AddStringToObject(item, "sudo_password", update_ticket->sudo_password) == NULL) {
    goto fail; //String
    }
    }


    // update_ticket->port
    if(update_ticket->port) {
    if(cJSON_AddNumberToObject(item, "port", *update_ticket->port) == NULL) {
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

update_ticket_t *update_ticket_parseFromJSON(cJSON *update_ticketJSON){

    update_ticket_t *update_ticket_local_var = NULL;

    char *ip_local_str = NULL;

    char *ip_address_local_str = NULL;

    char *root_password_local_str = NULL;

    char *sudo_username_local_str = NULL;

    char *sudo_password_local_str = NULL;

    // define the local variable for update_ticket->port
    int *port_local_var = NULL;

    // update_ticket->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (ip) { 
    if(!cJSON_IsString(ip) && !cJSON_IsNull(ip))
    {
    goto end; //String
    }
    }

    // update_ticket->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "ip_address");
    if (cJSON_IsNull(ip_address)) {
        ip_address = NULL;
    }
    if (ip_address) { 
    if(!cJSON_IsString(ip_address) && !cJSON_IsNull(ip_address))
    {
    goto end; //String
    }
    }

    // update_ticket->customer_server_access
    cJSON *customer_server_access = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "customer_server_access");
    if (cJSON_IsNull(customer_server_access)) {
        customer_server_access = NULL;
    }
    interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_e customer_server_accessVariable;
    if (customer_server_access) { 
    if(!cJSON_IsString(customer_server_access))
    {
    goto end; //Enum
    }
    customer_server_accessVariable = update_ticket_customer_server_access_FromString(customer_server_access->valuestring);
    }

    // update_ticket->root_password
    cJSON *root_password = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "root_password");
    if (cJSON_IsNull(root_password)) {
        root_password = NULL;
    }
    if (root_password) { 
    if(!cJSON_IsString(root_password) && !cJSON_IsNull(root_password))
    {
    goto end; //String
    }
    }

    // update_ticket->sudo_username
    cJSON *sudo_username = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "sudo_username");
    if (cJSON_IsNull(sudo_username)) {
        sudo_username = NULL;
    }
    if (sudo_username) { 
    if(!cJSON_IsString(sudo_username) && !cJSON_IsNull(sudo_username))
    {
    goto end; //String
    }
    }

    // update_ticket->sudo_password
    cJSON *sudo_password = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "sudo_password");
    if (cJSON_IsNull(sudo_password)) {
        sudo_password = NULL;
    }
    if (sudo_password) { 
    if(!cJSON_IsString(sudo_password) && !cJSON_IsNull(sudo_password))
    {
    goto end; //String
    }
    }

    // update_ticket->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(update_ticketJSON, "port");
    if (cJSON_IsNull(port)) {
        port = NULL;
    }
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    port_local_var = malloc(sizeof(int));
    if(!port_local_var)
    {
        goto end;
    }
    *port_local_var = port->valuedouble;
    }


    if (ip && !cJSON_IsNull(ip)) ip_local_str = strdup(ip->valuestring);
    if (ip_address && !cJSON_IsNull(ip_address)) ip_address_local_str = strdup(ip_address->valuestring);
    if (root_password && !cJSON_IsNull(root_password)) root_password_local_str = strdup(root_password->valuestring);
    if (sudo_username && !cJSON_IsNull(sudo_username)) sudo_username_local_str = strdup(sudo_username->valuestring);
    if (sudo_password && !cJSON_IsNull(sudo_password)) sudo_password_local_str = strdup(sudo_password->valuestring);

    update_ticket_local_var = update_ticket_create_internal (
        ip_local_str,
        ip_address_local_str,
        customer_server_access ? customer_server_accessVariable : interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_NULL,
        root_password_local_str,
        sudo_username_local_str,
        sudo_password_local_str,
        port_local_var
        );

    if (!update_ticket_local_var) {
        goto end;
    }

    return update_ticket_local_var;
end:
    if (ip_local_str) {
        free(ip_local_str);
        ip_local_str = NULL;
    }
    if (ip_address_local_str) {
        free(ip_address_local_str);
        ip_address_local_str = NULL;
    }
    if (root_password_local_str) {
        free(root_password_local_str);
        root_password_local_str = NULL;
    }
    if (sudo_username_local_str) {
        free(sudo_username_local_str);
        sudo_username_local_str = NULL;
    }
    if (sudo_password_local_str) {
        free(sudo_password_local_str);
        sudo_password_local_str = NULL;
    }
    if (port_local_var) {
        free(port_local_var);
        port_local_var = NULL;
    }
    return NULL;

}
