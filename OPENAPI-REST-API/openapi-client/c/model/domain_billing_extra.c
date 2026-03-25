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
    memset(domain_billing_extra_local_var, 0, sizeof(domain_billing_extra_t));
    domain_billing_extra_local_var->_library_owned = 1;
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
    domain_billing_extra_t *result = domain_billing_extra_create_internal (
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
    if (!result) {
    }
    return result;
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

    char *order_id_local_str = NULL;

    char *domain_id_local_str = NULL;

    // define the local variable for domain_billing_extra->prov_process_pending
    domain_prov_process_pending_t *prov_process_pending_local_nonprim = NULL;

    char *email_local_str = NULL;

    char *firstname_local_str = NULL;

    char *lastname_local_str = NULL;

    char *company_local_str = NULL;

    char *address_local_str = NULL;

    char *address2_local_str = NULL;

    char *address3_local_str = NULL;

    char *city_local_str = NULL;

    char *state_local_str = NULL;

    char *zip_local_str = NULL;

    char *country_local_str = NULL;

    char *phone_local_str = NULL;

    char *fax_local_str = NULL;

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


    if (order_id && !cJSON_IsNull(order_id)) order_id_local_str = strdup(order_id->valuestring);
    if (domain_id && !cJSON_IsNull(domain_id)) domain_id_local_str = strdup(domain_id->valuestring);
    if (email && !cJSON_IsNull(email)) email_local_str = strdup(email->valuestring);
    if (firstname && !cJSON_IsNull(firstname)) firstname_local_str = strdup(firstname->valuestring);
    if (lastname && !cJSON_IsNull(lastname)) lastname_local_str = strdup(lastname->valuestring);
    if (company && !cJSON_IsNull(company)) company_local_str = strdup(company->valuestring);
    if (address && !cJSON_IsNull(address)) address_local_str = strdup(address->valuestring);
    if (address2 && !cJSON_IsNull(address2)) address2_local_str = strdup(address2->valuestring);
    if (address3 && !cJSON_IsNull(address3)) address3_local_str = strdup(address3->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (state && !cJSON_IsNull(state)) state_local_str = strdup(state->valuestring);
    if (zip && !cJSON_IsNull(zip)) zip_local_str = strdup(zip->valuestring);
    if (country && !cJSON_IsNull(country)) country_local_str = strdup(country->valuestring);
    if (phone && !cJSON_IsNull(phone)) phone_local_str = strdup(phone->valuestring);
    if (fax && !cJSON_IsNull(fax)) fax_local_str = strdup(fax->valuestring);

    domain_billing_extra_local_var = domain_billing_extra_create_internal (
        order ? order_local_nonprim : NULL,
        order_id_local_str,
        domain_id_local_str,
        prov_process_pending ? prov_process_pending_local_nonprim : NULL,
        email_local_str,
        firstname_local_str,
        lastname_local_str,
        company_local_str,
        address_local_str,
        address2_local_str,
        address3_local_str,
        city_local_str,
        state_local_str,
        zip_local_str,
        country_local_str,
        phone_local_str,
        fax_local_str
        );

    if (!domain_billing_extra_local_var) {
        goto end;
    }

    return domain_billing_extra_local_var;
end:
    if (order_local_nonprim) {
        domain_order_response_free(order_local_nonprim);
        order_local_nonprim = NULL;
    }
    if (order_id_local_str) {
        free(order_id_local_str);
        order_id_local_str = NULL;
    }
    if (domain_id_local_str) {
        free(domain_id_local_str);
        domain_id_local_str = NULL;
    }
    if (prov_process_pending_local_nonprim) {
        domain_prov_process_pending_free(prov_process_pending_local_nonprim);
        prov_process_pending_local_nonprim = NULL;
    }
    if (email_local_str) {
        free(email_local_str);
        email_local_str = NULL;
    }
    if (firstname_local_str) {
        free(firstname_local_str);
        firstname_local_str = NULL;
    }
    if (lastname_local_str) {
        free(lastname_local_str);
        lastname_local_str = NULL;
    }
    if (company_local_str) {
        free(company_local_str);
        company_local_str = NULL;
    }
    if (address_local_str) {
        free(address_local_str);
        address_local_str = NULL;
    }
    if (address2_local_str) {
        free(address2_local_str);
        address2_local_str = NULL;
    }
    if (address3_local_str) {
        free(address3_local_str);
        address3_local_str = NULL;
    }
    if (city_local_str) {
        free(city_local_str);
        city_local_str = NULL;
    }
    if (state_local_str) {
        free(state_local_str);
        state_local_str = NULL;
    }
    if (zip_local_str) {
        free(zip_local_str);
        zip_local_str = NULL;
    }
    if (country_local_str) {
        free(country_local_str);
        country_local_str = NULL;
    }
    if (phone_local_str) {
        free(phone_local_str);
        phone_local_str = NULL;
    }
    if (fax_local_str) {
        free(fax_local_str);
        fax_local_str = NULL;
    }
    return NULL;

}
