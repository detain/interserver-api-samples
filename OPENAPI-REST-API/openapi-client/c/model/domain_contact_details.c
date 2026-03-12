#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_contact_details.h"



static domain_contact_details_t *domain_contact_details_create_internal(
    char *status,
    char *state,
    char *org_name,
    char *country,
    char *postal_code,
    char *email,
    char *fax,
    char *address2,
    char *address3,
    char *address1,
    char *city,
    char *phone,
    char *first_name,
    char *last_name
    ) {
    domain_contact_details_t *domain_contact_details_local_var = malloc(sizeof(domain_contact_details_t));
    if (!domain_contact_details_local_var) {
        return NULL;
    }
    domain_contact_details_local_var->status = status;
    domain_contact_details_local_var->state = state;
    domain_contact_details_local_var->org_name = org_name;
    domain_contact_details_local_var->country = country;
    domain_contact_details_local_var->postal_code = postal_code;
    domain_contact_details_local_var->email = email;
    domain_contact_details_local_var->fax = fax;
    domain_contact_details_local_var->address2 = address2;
    domain_contact_details_local_var->address3 = address3;
    domain_contact_details_local_var->address1 = address1;
    domain_contact_details_local_var->city = city;
    domain_contact_details_local_var->phone = phone;
    domain_contact_details_local_var->first_name = first_name;
    domain_contact_details_local_var->last_name = last_name;

    domain_contact_details_local_var->_library_owned = 1;
    return domain_contact_details_local_var;
}

__attribute__((deprecated)) domain_contact_details_t *domain_contact_details_create(
    char *status,
    char *state,
    char *org_name,
    char *country,
    char *postal_code,
    char *email,
    char *fax,
    char *address2,
    char *address3,
    char *address1,
    char *city,
    char *phone,
    char *first_name,
    char *last_name
    ) {
    return domain_contact_details_create_internal (
        status,
        state,
        org_name,
        country,
        postal_code,
        email,
        fax,
        address2,
        address3,
        address1,
        city,
        phone,
        first_name,
        last_name
        );
}

void domain_contact_details_free(domain_contact_details_t *domain_contact_details) {
    if(NULL == domain_contact_details){
        return ;
    }
    if(domain_contact_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_contact_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_contact_details->status) {
        free(domain_contact_details->status);
        domain_contact_details->status = NULL;
    }
    if (domain_contact_details->state) {
        free(domain_contact_details->state);
        domain_contact_details->state = NULL;
    }
    if (domain_contact_details->org_name) {
        free(domain_contact_details->org_name);
        domain_contact_details->org_name = NULL;
    }
    if (domain_contact_details->country) {
        free(domain_contact_details->country);
        domain_contact_details->country = NULL;
    }
    if (domain_contact_details->postal_code) {
        free(domain_contact_details->postal_code);
        domain_contact_details->postal_code = NULL;
    }
    if (domain_contact_details->email) {
        free(domain_contact_details->email);
        domain_contact_details->email = NULL;
    }
    if (domain_contact_details->fax) {
        free(domain_contact_details->fax);
        domain_contact_details->fax = NULL;
    }
    if (domain_contact_details->address2) {
        free(domain_contact_details->address2);
        domain_contact_details->address2 = NULL;
    }
    if (domain_contact_details->address3) {
        free(domain_contact_details->address3);
        domain_contact_details->address3 = NULL;
    }
    if (domain_contact_details->address1) {
        free(domain_contact_details->address1);
        domain_contact_details->address1 = NULL;
    }
    if (domain_contact_details->city) {
        free(domain_contact_details->city);
        domain_contact_details->city = NULL;
    }
    if (domain_contact_details->phone) {
        free(domain_contact_details->phone);
        domain_contact_details->phone = NULL;
    }
    if (domain_contact_details->first_name) {
        free(domain_contact_details->first_name);
        domain_contact_details->first_name = NULL;
    }
    if (domain_contact_details->last_name) {
        free(domain_contact_details->last_name);
        domain_contact_details->last_name = NULL;
    }
    free(domain_contact_details);
}

cJSON *domain_contact_details_convertToJSON(domain_contact_details_t *domain_contact_details) {
    cJSON *item = cJSON_CreateObject();

    // domain_contact_details->status
    if(domain_contact_details->status) {
    if(cJSON_AddStringToObject(item, "status", domain_contact_details->status) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->state
    if(domain_contact_details->state) {
    if(cJSON_AddStringToObject(item, "state", domain_contact_details->state) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->org_name
    if(domain_contact_details->org_name) {
    if(cJSON_AddStringToObject(item, "org_name", domain_contact_details->org_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->country
    if(domain_contact_details->country) {
    if(cJSON_AddStringToObject(item, "country", domain_contact_details->country) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->postal_code
    if(domain_contact_details->postal_code) {
    if(cJSON_AddStringToObject(item, "postal_code", domain_contact_details->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->email
    if(domain_contact_details->email) {
    if(cJSON_AddStringToObject(item, "email", domain_contact_details->email) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->fax
    if(domain_contact_details->fax) {
    if(cJSON_AddStringToObject(item, "fax", domain_contact_details->fax) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->address2
    if(domain_contact_details->address2) {
    if(cJSON_AddStringToObject(item, "address2", domain_contact_details->address2) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->address3
    if(domain_contact_details->address3) {
    if(cJSON_AddStringToObject(item, "address3", domain_contact_details->address3) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->address1
    if(domain_contact_details->address1) {
    if(cJSON_AddStringToObject(item, "address1", domain_contact_details->address1) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->city
    if(domain_contact_details->city) {
    if(cJSON_AddStringToObject(item, "city", domain_contact_details->city) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->phone
    if(domain_contact_details->phone) {
    if(cJSON_AddStringToObject(item, "phone", domain_contact_details->phone) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->first_name
    if(domain_contact_details->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", domain_contact_details->first_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_contact_details->last_name
    if(domain_contact_details->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", domain_contact_details->last_name) == NULL) {
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

domain_contact_details_t *domain_contact_details_parseFromJSON(cJSON *domain_contact_detailsJSON){

    domain_contact_details_t *domain_contact_details_local_var = NULL;

    // domain_contact_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // domain_contact_details->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // domain_contact_details->org_name
    cJSON *org_name = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "org_name");
    if (cJSON_IsNull(org_name)) {
        org_name = NULL;
    }
    if (org_name) { 
    if(!cJSON_IsString(org_name) && !cJSON_IsNull(org_name))
    {
    goto end; //String
    }
    }

    // domain_contact_details->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // domain_contact_details->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "postal_code");
    if (cJSON_IsNull(postal_code)) {
        postal_code = NULL;
    }
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // domain_contact_details->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // domain_contact_details->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // domain_contact_details->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // domain_contact_details->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "address3");
    if (cJSON_IsNull(address3)) {
        address3 = NULL;
    }
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // domain_contact_details->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "address1");
    if (cJSON_IsNull(address1)) {
        address1 = NULL;
    }
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // domain_contact_details->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // domain_contact_details->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // domain_contact_details->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // domain_contact_details->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(domain_contact_detailsJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }


    domain_contact_details_local_var = domain_contact_details_create_internal (
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        org_name && !cJSON_IsNull(org_name) ? strdup(org_name->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        address3 && !cJSON_IsNull(address3) ? strdup(address3->valuestring) : NULL,
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL
        );

    return domain_contact_details_local_var;
end:
    return NULL;

}
