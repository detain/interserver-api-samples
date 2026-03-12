#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home.h"



static home_t *home_create_internal(
    char *last_login_ip,
    char *last_login,
    char *currency,
    char *amount,
    int invoice_list,
    char *balance,
    char *full_name,
    char *email,
    list_t *tickets,
    home_ticket_status_t *ticket_status,
    home_ticket_status_view_t *ticket_status_view,
    home_details_t *details,
    home_services_t *services,
    char *affiliate_amount
    ) {
    home_t *home_local_var = malloc(sizeof(home_t));
    if (!home_local_var) {
        return NULL;
    }
    home_local_var->last_login_ip = last_login_ip;
    home_local_var->last_login = last_login;
    home_local_var->currency = currency;
    home_local_var->amount = amount;
    home_local_var->invoice_list = invoice_list;
    home_local_var->balance = balance;
    home_local_var->full_name = full_name;
    home_local_var->email = email;
    home_local_var->tickets = tickets;
    home_local_var->ticket_status = ticket_status;
    home_local_var->ticket_status_view = ticket_status_view;
    home_local_var->details = details;
    home_local_var->services = services;
    home_local_var->affiliate_amount = affiliate_amount;

    home_local_var->_library_owned = 1;
    return home_local_var;
}

__attribute__((deprecated)) home_t *home_create(
    char *last_login_ip,
    char *last_login,
    char *currency,
    char *amount,
    int invoice_list,
    char *balance,
    char *full_name,
    char *email,
    list_t *tickets,
    home_ticket_status_t *ticket_status,
    home_ticket_status_view_t *ticket_status_view,
    home_details_t *details,
    home_services_t *services,
    char *affiliate_amount
    ) {
    return home_create_internal (
        last_login_ip,
        last_login,
        currency,
        amount,
        invoice_list,
        balance,
        full_name,
        email,
        tickets,
        ticket_status,
        ticket_status_view,
        details,
        services,
        affiliate_amount
        );
}

void home_free(home_t *home) {
    if(NULL == home){
        return ;
    }
    if(home->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home->last_login_ip) {
        free(home->last_login_ip);
        home->last_login_ip = NULL;
    }
    if (home->last_login) {
        free(home->last_login);
        home->last_login = NULL;
    }
    if (home->currency) {
        free(home->currency);
        home->currency = NULL;
    }
    if (home->amount) {
        free(home->amount);
        home->amount = NULL;
    }
    if (home->balance) {
        free(home->balance);
        home->balance = NULL;
    }
    if (home->full_name) {
        free(home->full_name);
        home->full_name = NULL;
    }
    if (home->email) {
        free(home->email);
        home->email = NULL;
    }
    if (home->tickets) {
        list_ForEach(listEntry, home->tickets) {
            free(listEntry->data);
        }
        list_freeList(home->tickets);
        home->tickets = NULL;
    }
    if (home->ticket_status) {
        home_ticket_status_free(home->ticket_status);
        home->ticket_status = NULL;
    }
    if (home->ticket_status_view) {
        home_ticket_status_view_free(home->ticket_status_view);
        home->ticket_status_view = NULL;
    }
    if (home->details) {
        home_details_free(home->details);
        home->details = NULL;
    }
    if (home->services) {
        home_services_free(home->services);
        home->services = NULL;
    }
    if (home->affiliate_amount) {
        free(home->affiliate_amount);
        home->affiliate_amount = NULL;
    }
    free(home);
}

cJSON *home_convertToJSON(home_t *home) {
    cJSON *item = cJSON_CreateObject();

    // home->last_login_ip
    if (!home->last_login_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "last_login_ip", home->last_login_ip) == NULL) {
    goto fail; //String
    }


    // home->last_login
    if (!home->last_login) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "last_login", home->last_login) == NULL) {
    goto fail; //String
    }


    // home->currency
    if (!home->currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currency", home->currency) == NULL) {
    goto fail; //String
    }


    // home->amount
    if (!home->amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "amount", home->amount) == NULL) {
    goto fail; //String
    }


    // home->invoice_list
    if (!home->invoice_list) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "invoice_list", home->invoice_list) == NULL) {
    goto fail; //Numeric
    }


    // home->balance
    if (!home->balance) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "balance", home->balance) == NULL) {
    goto fail; //String
    }


    // home->full_name
    if (!home->full_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "full_name", home->full_name) == NULL) {
    goto fail; //String
    }


    // home->email
    if (!home->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", home->email) == NULL) {
    goto fail; //String
    }


    // home->tickets
    if (!home->tickets) {
        goto fail;
    }
    cJSON *tickets = cJSON_AddArrayToObject(item, "tickets");
    if(tickets == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *ticketsListEntry;
    list_ForEach(ticketsListEntry, home->tickets) {
    if(cJSON_AddStringToObject(tickets, "", ticketsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // home->ticket_status
    if (!home->ticket_status) {
        goto fail;
    }
    cJSON *ticket_status_local_JSON = home_ticket_status_convertToJSON(home->ticket_status);
    if(ticket_status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ticketStatus", ticket_status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // home->ticket_status_view
    if (!home->ticket_status_view) {
        goto fail;
    }
    cJSON *ticket_status_view_local_JSON = home_ticket_status_view_convertToJSON(home->ticket_status_view);
    if(ticket_status_view_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ticketStatusView", ticket_status_view_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // home->details
    if (!home->details) {
        goto fail;
    }
    cJSON *details_local_JSON = home_details_convertToJSON(home->details);
    if(details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "details", details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // home->services
    if (!home->services) {
        goto fail;
    }
    cJSON *services_local_JSON = home_services_convertToJSON(home->services);
    if(services_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "services", services_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // home->affiliate_amount
    if (!home->affiliate_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "AFFILIATE_AMOUNT", home->affiliate_amount) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

home_t *home_parseFromJSON(cJSON *homeJSON){

    home_t *home_local_var = NULL;

    // define the local list for home->tickets
    list_t *ticketsList = NULL;

    // define the local variable for home->ticket_status
    home_ticket_status_t *ticket_status_local_nonprim = NULL;

    // define the local variable for home->ticket_status_view
    home_ticket_status_view_t *ticket_status_view_local_nonprim = NULL;

    // define the local variable for home->details
    home_details_t *details_local_nonprim = NULL;

    // define the local variable for home->services
    home_services_t *services_local_nonprim = NULL;

    // home->last_login_ip
    cJSON *last_login_ip = cJSON_GetObjectItemCaseSensitive(homeJSON, "last_login_ip");
    if (cJSON_IsNull(last_login_ip)) {
        last_login_ip = NULL;
    }
    if (!last_login_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(last_login_ip))
    {
    goto end; //String
    }

    // home->last_login
    cJSON *last_login = cJSON_GetObjectItemCaseSensitive(homeJSON, "last_login");
    if (cJSON_IsNull(last_login)) {
        last_login = NULL;
    }
    if (!last_login) {
        goto end;
    }

    
    if(!cJSON_IsString(last_login))
    {
    goto end; //String
    }

    // home->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(homeJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // home->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(homeJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }

    // home->invoice_list
    cJSON *invoice_list = cJSON_GetObjectItemCaseSensitive(homeJSON, "invoice_list");
    if (cJSON_IsNull(invoice_list)) {
        invoice_list = NULL;
    }
    if (!invoice_list) {
        goto end;
    }

    
    if(!cJSON_IsNumber(invoice_list))
    {
    goto end; //Numeric
    }

    // home->balance
    cJSON *balance = cJSON_GetObjectItemCaseSensitive(homeJSON, "balance");
    if (cJSON_IsNull(balance)) {
        balance = NULL;
    }
    if (!balance) {
        goto end;
    }

    
    if(!cJSON_IsString(balance))
    {
    goto end; //String
    }

    // home->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(homeJSON, "full_name");
    if (cJSON_IsNull(full_name)) {
        full_name = NULL;
    }
    if (!full_name) {
        goto end;
    }

    
    if(!cJSON_IsString(full_name))
    {
    goto end; //String
    }

    // home->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(homeJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // home->tickets
    cJSON *tickets = cJSON_GetObjectItemCaseSensitive(homeJSON, "tickets");
    if (cJSON_IsNull(tickets)) {
        tickets = NULL;
    }
    if (!tickets) {
        goto end;
    }

    
    cJSON *tickets_local = NULL;
    if(!cJSON_IsArray(tickets)) {
        goto end;//primitive container
    }
    ticketsList = list_createList();

    cJSON_ArrayForEach(tickets_local, tickets)
    {
        if(!cJSON_IsString(tickets_local))
        {
            goto end;
        }
        list_addElement(ticketsList , strdup(tickets_local->valuestring));
    }

    // home->ticket_status
    cJSON *ticket_status = cJSON_GetObjectItemCaseSensitive(homeJSON, "ticketStatus");
    if (cJSON_IsNull(ticket_status)) {
        ticket_status = NULL;
    }
    if (!ticket_status) {
        goto end;
    }

    
    ticket_status_local_nonprim = home_ticket_status_parseFromJSON(ticket_status); //nonprimitive

    // home->ticket_status_view
    cJSON *ticket_status_view = cJSON_GetObjectItemCaseSensitive(homeJSON, "ticketStatusView");
    if (cJSON_IsNull(ticket_status_view)) {
        ticket_status_view = NULL;
    }
    if (!ticket_status_view) {
        goto end;
    }

    
    ticket_status_view_local_nonprim = home_ticket_status_view_parseFromJSON(ticket_status_view); //nonprimitive

    // home->details
    cJSON *details = cJSON_GetObjectItemCaseSensitive(homeJSON, "details");
    if (cJSON_IsNull(details)) {
        details = NULL;
    }
    if (!details) {
        goto end;
    }

    
    details_local_nonprim = home_details_parseFromJSON(details); //nonprimitive

    // home->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(homeJSON, "services");
    if (cJSON_IsNull(services)) {
        services = NULL;
    }
    if (!services) {
        goto end;
    }

    
    services_local_nonprim = home_services_parseFromJSON(services); //nonprimitive

    // home->affiliate_amount
    cJSON *affiliate_amount = cJSON_GetObjectItemCaseSensitive(homeJSON, "AFFILIATE_AMOUNT");
    if (cJSON_IsNull(affiliate_amount)) {
        affiliate_amount = NULL;
    }
    if (!affiliate_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(affiliate_amount))
    {
    goto end; //String
    }


    home_local_var = home_create_internal (
        strdup(last_login_ip->valuestring),
        strdup(last_login->valuestring),
        strdup(currency->valuestring),
        strdup(amount->valuestring),
        invoice_list->valuedouble,
        strdup(balance->valuestring),
        strdup(full_name->valuestring),
        strdup(email->valuestring),
        ticketsList,
        ticket_status_local_nonprim,
        ticket_status_view_local_nonprim,
        details_local_nonprim,
        services_local_nonprim,
        strdup(affiliate_amount->valuestring)
        );

    return home_local_var;
end:
    if (ticketsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ticketsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ticketsList);
        ticketsList = NULL;
    }
    if (ticket_status_local_nonprim) {
        home_ticket_status_free(ticket_status_local_nonprim);
        ticket_status_local_nonprim = NULL;
    }
    if (ticket_status_view_local_nonprim) {
        home_ticket_status_view_free(ticket_status_view_local_nonprim);
        ticket_status_view_local_nonprim = NULL;
    }
    if (details_local_nonprim) {
        home_details_free(details_local_nonprim);
        details_local_nonprim = NULL;
    }
    if (services_local_nonprim) {
        home_services_free(services_local_nonprim);
        services_local_nonprim = NULL;
    }
    return NULL;

}
