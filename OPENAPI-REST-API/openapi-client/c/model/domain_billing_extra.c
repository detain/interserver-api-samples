#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_billing_extra.h"



static domain_billing_extra_t *domain_billing_extra_create_internal(
    domain_order_response_t *order,
    char *order_id,
    char *domain_id,
    domain_prov_process_pending_t *prov_process_pending,
    char *email,
    char *firstname,
    char *lastname,
    char *company,
    char *address,
    char *address2,
    char *address3,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *fax
    ) {
    domain_billing_extra_t *domain_billing_extra_local_var = malloc(sizeof(domain_billing_extra_t));
    if (!domain_billing_extra_local_var) {
        return NULL;
    }
    domain_billing_extra_local_var->order = order;
    domain_billing_extra_local_var->order_id = order_id;
    domain_billing_extra_local_var->domain_id = domain_id;
    domain_billing_extra_local_var->prov_process_pending = prov_process_pending;
    domain_billing_extra_local_var->email = email;
    domain_billing_extra_local_var->firstname = firstname;
    domain_billing_extra_local_var->lastname = lastname;
    domain_billing_extra_local_var->company = company;
    domain_billing_extra_local_var->address = address;
    domain_billing_extra_local_var->address2 = address2;
    domain_billing_extra_local_var->address3 = address3;
    domain_billing_extra_local_var->city = city;
    domain_billing_extra_local_var->state = state;
    domain_billing_extra_local_var->zip = zip;
    domain_billing_extra_local_var->country = country;
    domain_billing_extra_local_var->phone = phone;
    domain_billing_extra_local_var->fax = fax;

    domain_billing_extra_local_var->_library_owned = 1;
    return domain_billing_extra_local_var;
}

__attribute__((deprecated)) domain_billing_extra_t *domain_billing_extra_create(
    domain_order_response_t *order,
    char *order_id,
    char *domain_id,
    domain_prov_process_pending_t *prov_process_pending,
    char *email,
    char *firstname,
    char *lastname,
    char *company,
    char *address,
    char *address2,
    char *address3,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *fax
    ) {
    return domain_billing_extra_create_internal (
        order,
        order_id,
        domain_id,
        prov_process_pending,
        email,
        firstname,
        lastname,
        company,
        address,
        address2,
        address3,
        city,
        state,
        zip,
        country,
        phone,
        fax
        );
}

void domain_billing_extra_free(domain_billing_extra_t *domain_billing_extra) {
    if(NULL == domain_billing_extra){
        return ;
    }
    if(domain_billing_extra->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_billing_extra_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_billing_extra->order) {
        domain_order_response_free(domain_billing_extra->order);
        domain_billing_extra->order = NULL;
    }
    if (domain_billing_extra->order_id) {
        free(domain_billing_extra->order_id);
        domain_billing_extra->order_id = NULL;
    }
    if (domain_billing_extra->domain_id) {
        free(domain_billing_extra->domain_id);
        domain_billing_extra->domain_id = NULL;
    }
    if (domain_billing_extra->prov_process_pending) {
        domain_prov_process_pending_free(domain_billing_extra->prov_process_pending);
        domain_billing_extra->prov_process_pending = NULL;
    }
    if (domain_billing_extra->email) {
        free(domain_billing_extra->email);
        domain_billing_extra->email = NULL;
    }
    if (domain_billing_extra->firstname) {
        free(domain_billing_extra->firstname);
        domain_billing_extra->firstname = NULL;
    }
    if (domain_billing_extra->lastname) {
        free(domain_billing_extra->lastname);
        domain_billing_extra->lastname = NULL;
    }
    if (domain_billing_extra->company) {
        free(domain_billing_extra->company);
        domain_billing_extra->company = NULL;
    }
    if (domain_billing_extra->address) {
        free(domain_billing_extra->address);
        domain_billing_extra->address = NULL;
    }
    if (domain_billing_extra->address2) {
        free(domain_billing_extra->address2);
        domain_billing_extra->address2 = NULL;
    }
    if (domain_billing_extra->address3) {
        free(domain_billing_extra->address3);
        domain_billing_extra->address3 = NULL;
    }
    if (domain_billing_extra->city) {
        free(domain_billing_extra->city);
        domain_billing_extra->city = NULL;
    }
    if (domain_billing_extra->state) {
        free(domain_billing_extra->state);
        domain_billing_extra->state = NULL;
    }
    if (domain_billing_extra->zip) {
        free(domain_billing_extra->zip);
        domain_billing_extra->zip = NULL;
    }
    if (domain_billing_extra->country) {
        free(domain_billing_extra->country);
        domain_billing_extra->country = NULL;
    }
    if (domain_billing_extra->phone) {
        free(domain_billing_extra->phone);
        domain_billing_extra->phone = NULL;
    }
    if (domain_billing_extra->fax) {
        free(domain_billing_extra->fax);
        domain_billing_extra->fax = NULL;
    }
    free(domain_billing_extra);
}

cJSON *domain_billing_extra_convertToJSON(domain_billing_extra_t *domain_billing_extra) {
    cJSON *item = cJSON_CreateObject();

    // domain_billing_extra->order
    if(domain_billing_extra->order) {
    cJSON *order_local_JSON = domain_order_response_convertToJSON(domain_billing_extra->order);
    if(order_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "order", order_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_billing_extra->order_id
    if(domain_billing_extra->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", domain_billing_extra->order_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->domain_id
    if(domain_billing_extra->domain_id) {
    if(cJSON_AddStringToObject(item, "domain_id", domain_billing_extra->domain_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->prov_process_pending
    if(domain_billing_extra->prov_process_pending) {
    cJSON *prov_process_pending_local_JSON = domain_prov_process_pending_convertToJSON(domain_billing_extra->prov_process_pending);
    if(prov_process_pending_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "provProcessPending", prov_process_pending_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_billing_extra->email
    if(domain_billing_extra->email) {
    if(cJSON_AddStringToObject(item, "email", domain_billing_extra->email) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->firstname
    if(domain_billing_extra->firstname) {
    if(cJSON_AddStringToObject(item, "firstname", domain_billing_extra->firstname) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->lastname
    if(domain_billing_extra->lastname) {
    if(cJSON_AddStringToObject(item, "lastname", domain_billing_extra->lastname) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->company
    if(domain_billing_extra->company) {
    if(cJSON_AddStringToObject(item, "company", domain_billing_extra->company) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->address
    if(domain_billing_extra->address) {
    if(cJSON_AddStringToObject(item, "address", domain_billing_extra->address) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->address2
    if(domain_billing_extra->address2) {
    if(cJSON_AddStringToObject(item, "address2", domain_billing_extra->address2) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->address3
    if(domain_billing_extra->address3) {
    if(cJSON_AddStringToObject(item, "address3", domain_billing_extra->address3) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->city
    if(domain_billing_extra->city) {
    if(cJSON_AddStringToObject(item, "city", domain_billing_extra->city) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->state
    if(domain_billing_extra->state) {
    if(cJSON_AddStringToObject(item, "state", domain_billing_extra->state) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->zip
    if(domain_billing_extra->zip) {
    if(cJSON_AddStringToObject(item, "zip", domain_billing_extra->zip) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->country
    if(domain_billing_extra->country) {
    if(cJSON_AddStringToObject(item, "country", domain_billing_extra->country) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->phone
    if(domain_billing_extra->phone) {
    if(cJSON_AddStringToObject(item, "phone", domain_billing_extra->phone) == NULL) {
    goto fail; //String
    }
    }


    // domain_billing_extra->fax
    if(domain_billing_extra->fax) {
    if(cJSON_AddStringToObject(item, "fax", domain_billing_extra->fax) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_billing_extra_t *domain_billing_extra_parseFromJSON(cJSON *domain_billing_extraJSON){

    domain_billing_extra_t *domain_billing_extra_local_var = NULL;

    // define the local variable for domain_billing_extra->order
    domain_order_response_t *order_local_nonprim = NULL;

    // define the local variable for domain_billing_extra->prov_process_pending
    domain_prov_process_pending_t *prov_process_pending_local_nonprim = NULL;

    // domain_billing_extra->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "order");
    if (cJSON_IsNull(order)) {
        order = NULL;
    }
    if (order) { 
    order_local_nonprim = domain_order_response_parseFromJSON(order); //nonprimitive
    }

    // domain_billing_extra->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->domain_id
    cJSON *domain_id = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "domain_id");
    if (cJSON_IsNull(domain_id)) {
        domain_id = NULL;
    }
    if (domain_id) { 
    if(!cJSON_IsString(domain_id) && !cJSON_IsNull(domain_id))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->prov_process_pending
    cJSON *prov_process_pending = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "provProcessPending");
    if (cJSON_IsNull(prov_process_pending)) {
        prov_process_pending = NULL;
    }
    if (prov_process_pending) { 
    prov_process_pending_local_nonprim = domain_prov_process_pending_parseFromJSON(prov_process_pending); //nonprimitive
    }

    // domain_billing_extra->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->firstname
    cJSON *firstname = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "firstname");
    if (cJSON_IsNull(firstname)) {
        firstname = NULL;
    }
    if (firstname) { 
    if(!cJSON_IsString(firstname) && !cJSON_IsNull(firstname))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->lastname
    cJSON *lastname = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "lastname");
    if (cJSON_IsNull(lastname)) {
        lastname = NULL;
    }
    if (lastname) { 
    if(!cJSON_IsString(lastname) && !cJSON_IsNull(lastname))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "address3");
    if (cJSON_IsNull(address3)) {
        address3 = NULL;
    }
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->zip
    cJSON *zip = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "zip");
    if (cJSON_IsNull(zip)) {
        zip = NULL;
    }
    if (zip) { 
    if(!cJSON_IsString(zip) && !cJSON_IsNull(zip))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // domain_billing_extra->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(domain_billing_extraJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }


    domain_billing_extra_local_var = domain_billing_extra_create_internal (
        order ? order_local_nonprim : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        domain_id && !cJSON_IsNull(domain_id) ? strdup(domain_id->valuestring) : NULL,
        prov_process_pending ? prov_process_pending_local_nonprim : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        firstname && !cJSON_IsNull(firstname) ? strdup(firstname->valuestring) : NULL,
        lastname && !cJSON_IsNull(lastname) ? strdup(lastname->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        address3 && !cJSON_IsNull(address3) ? strdup(address3->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        zip && !cJSON_IsNull(zip) ? strdup(zip->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL
        );

    return domain_billing_extra_local_var;
end:
    if (order_local_nonprim) {
        domain_order_response_free(order_local_nonprim);
        order_local_nonprim = NULL;
    }
    if (prov_process_pending_local_nonprim) {
        domain_prov_process_pending_free(prov_process_pending_local_nonprim);
        prov_process_pending_local_nonprim = NULL;
    }
    return NULL;

}
