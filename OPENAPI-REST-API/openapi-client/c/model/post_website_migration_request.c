#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_website_migration_request.h"



static post_website_migration_request_t *post_website_migration_request_create_internal(
    char *cust_portal,
    char *reg_email,
    char *password,
    char *ctrl_panel,
    char *ftp_username,
    char *ftp_password,
    char *site_busy_mig,
    char *spl_req_mig,
    char *domain_reg,
    char *data_mig,
    char *domain_reg_portal,
    char *domain_reg_email,
    char *domain_reg_password
    ) {
    post_website_migration_request_t *post_website_migration_request_local_var = malloc(sizeof(post_website_migration_request_t));
    if (!post_website_migration_request_local_var) {
        return NULL;
    }
    post_website_migration_request_local_var->cust_portal = cust_portal;
    post_website_migration_request_local_var->reg_email = reg_email;
    post_website_migration_request_local_var->password = password;
    post_website_migration_request_local_var->ctrl_panel = ctrl_panel;
    post_website_migration_request_local_var->ftp_username = ftp_username;
    post_website_migration_request_local_var->ftp_password = ftp_password;
    post_website_migration_request_local_var->site_busy_mig = site_busy_mig;
    post_website_migration_request_local_var->spl_req_mig = spl_req_mig;
    post_website_migration_request_local_var->domain_reg = domain_reg;
    post_website_migration_request_local_var->data_mig = data_mig;
    post_website_migration_request_local_var->domain_reg_portal = domain_reg_portal;
    post_website_migration_request_local_var->domain_reg_email = domain_reg_email;
    post_website_migration_request_local_var->domain_reg_password = domain_reg_password;

    post_website_migration_request_local_var->_library_owned = 1;
    return post_website_migration_request_local_var;
}

__attribute__((deprecated)) post_website_migration_request_t *post_website_migration_request_create(
    char *cust_portal,
    char *reg_email,
    char *password,
    char *ctrl_panel,
    char *ftp_username,
    char *ftp_password,
    char *site_busy_mig,
    char *spl_req_mig,
    char *domain_reg,
    char *data_mig,
    char *domain_reg_portal,
    char *domain_reg_email,
    char *domain_reg_password
    ) {
    return post_website_migration_request_create_internal (
        cust_portal,
        reg_email,
        password,
        ctrl_panel,
        ftp_username,
        ftp_password,
        site_busy_mig,
        spl_req_mig,
        domain_reg,
        data_mig,
        domain_reg_portal,
        domain_reg_email,
        domain_reg_password
        );
}

void post_website_migration_request_free(post_website_migration_request_t *post_website_migration_request) {
    if(NULL == post_website_migration_request){
        return ;
    }
    if(post_website_migration_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_website_migration_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_website_migration_request->cust_portal) {
        free(post_website_migration_request->cust_portal);
        post_website_migration_request->cust_portal = NULL;
    }
    if (post_website_migration_request->reg_email) {
        free(post_website_migration_request->reg_email);
        post_website_migration_request->reg_email = NULL;
    }
    if (post_website_migration_request->password) {
        free(post_website_migration_request->password);
        post_website_migration_request->password = NULL;
    }
    if (post_website_migration_request->ctrl_panel) {
        free(post_website_migration_request->ctrl_panel);
        post_website_migration_request->ctrl_panel = NULL;
    }
    if (post_website_migration_request->ftp_username) {
        free(post_website_migration_request->ftp_username);
        post_website_migration_request->ftp_username = NULL;
    }
    if (post_website_migration_request->ftp_password) {
        free(post_website_migration_request->ftp_password);
        post_website_migration_request->ftp_password = NULL;
    }
    if (post_website_migration_request->site_busy_mig) {
        free(post_website_migration_request->site_busy_mig);
        post_website_migration_request->site_busy_mig = NULL;
    }
    if (post_website_migration_request->spl_req_mig) {
        free(post_website_migration_request->spl_req_mig);
        post_website_migration_request->spl_req_mig = NULL;
    }
    if (post_website_migration_request->domain_reg) {
        free(post_website_migration_request->domain_reg);
        post_website_migration_request->domain_reg = NULL;
    }
    if (post_website_migration_request->data_mig) {
        free(post_website_migration_request->data_mig);
        post_website_migration_request->data_mig = NULL;
    }
    if (post_website_migration_request->domain_reg_portal) {
        free(post_website_migration_request->domain_reg_portal);
        post_website_migration_request->domain_reg_portal = NULL;
    }
    if (post_website_migration_request->domain_reg_email) {
        free(post_website_migration_request->domain_reg_email);
        post_website_migration_request->domain_reg_email = NULL;
    }
    if (post_website_migration_request->domain_reg_password) {
        free(post_website_migration_request->domain_reg_password);
        post_website_migration_request->domain_reg_password = NULL;
    }
    free(post_website_migration_request);
}

cJSON *post_website_migration_request_convertToJSON(post_website_migration_request_t *post_website_migration_request) {
    cJSON *item = cJSON_CreateObject();

    // post_website_migration_request->cust_portal
    if(post_website_migration_request->cust_portal) {
    if(cJSON_AddStringToObject(item, "custPortal", post_website_migration_request->cust_portal) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->reg_email
    if(post_website_migration_request->reg_email) {
    if(cJSON_AddStringToObject(item, "regEmail", post_website_migration_request->reg_email) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->password
    if(post_website_migration_request->password) {
    if(cJSON_AddStringToObject(item, "password", post_website_migration_request->password) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->ctrl_panel
    if(post_website_migration_request->ctrl_panel) {
    if(cJSON_AddStringToObject(item, "ctrlPanel", post_website_migration_request->ctrl_panel) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->ftp_username
    if(post_website_migration_request->ftp_username) {
    if(cJSON_AddStringToObject(item, "ftpUsername", post_website_migration_request->ftp_username) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->ftp_password
    if(post_website_migration_request->ftp_password) {
    if(cJSON_AddStringToObject(item, "ftpPassword", post_website_migration_request->ftp_password) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->site_busy_mig
    if(post_website_migration_request->site_busy_mig) {
    if(cJSON_AddStringToObject(item, "siteBusyMig", post_website_migration_request->site_busy_mig) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->spl_req_mig
    if(post_website_migration_request->spl_req_mig) {
    if(cJSON_AddStringToObject(item, "splReqMig", post_website_migration_request->spl_req_mig) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->domain_reg
    if(post_website_migration_request->domain_reg) {
    if(cJSON_AddStringToObject(item, "domainReg", post_website_migration_request->domain_reg) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->data_mig
    if(post_website_migration_request->data_mig) {
    if(cJSON_AddStringToObject(item, "dataMig", post_website_migration_request->data_mig) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->domain_reg_portal
    if(post_website_migration_request->domain_reg_portal) {
    if(cJSON_AddStringToObject(item, "domainRegPortal", post_website_migration_request->domain_reg_portal) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->domain_reg_email
    if(post_website_migration_request->domain_reg_email) {
    if(cJSON_AddStringToObject(item, "domainRegEmail", post_website_migration_request->domain_reg_email) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_request->domain_reg_password
    if(post_website_migration_request->domain_reg_password) {
    if(cJSON_AddStringToObject(item, "domainRegPassword", post_website_migration_request->domain_reg_password) == NULL) {
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

post_website_migration_request_t *post_website_migration_request_parseFromJSON(cJSON *post_website_migration_requestJSON){

    post_website_migration_request_t *post_website_migration_request_local_var = NULL;

    // post_website_migration_request->cust_portal
    cJSON *cust_portal = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "custPortal");
    if (cJSON_IsNull(cust_portal)) {
        cust_portal = NULL;
    }
    if (cust_portal) { 
    if(!cJSON_IsString(cust_portal) && !cJSON_IsNull(cust_portal))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->reg_email
    cJSON *reg_email = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "regEmail");
    if (cJSON_IsNull(reg_email)) {
        reg_email = NULL;
    }
    if (reg_email) { 
    if(!cJSON_IsString(reg_email) && !cJSON_IsNull(reg_email))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->ctrl_panel
    cJSON *ctrl_panel = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "ctrlPanel");
    if (cJSON_IsNull(ctrl_panel)) {
        ctrl_panel = NULL;
    }
    if (ctrl_panel) { 
    if(!cJSON_IsString(ctrl_panel) && !cJSON_IsNull(ctrl_panel))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->ftp_username
    cJSON *ftp_username = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "ftpUsername");
    if (cJSON_IsNull(ftp_username)) {
        ftp_username = NULL;
    }
    if (ftp_username) { 
    if(!cJSON_IsString(ftp_username) && !cJSON_IsNull(ftp_username))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->ftp_password
    cJSON *ftp_password = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "ftpPassword");
    if (cJSON_IsNull(ftp_password)) {
        ftp_password = NULL;
    }
    if (ftp_password) { 
    if(!cJSON_IsString(ftp_password) && !cJSON_IsNull(ftp_password))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->site_busy_mig
    cJSON *site_busy_mig = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "siteBusyMig");
    if (cJSON_IsNull(site_busy_mig)) {
        site_busy_mig = NULL;
    }
    if (site_busy_mig) { 
    if(!cJSON_IsString(site_busy_mig) && !cJSON_IsNull(site_busy_mig))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->spl_req_mig
    cJSON *spl_req_mig = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "splReqMig");
    if (cJSON_IsNull(spl_req_mig)) {
        spl_req_mig = NULL;
    }
    if (spl_req_mig) { 
    if(!cJSON_IsString(spl_req_mig) && !cJSON_IsNull(spl_req_mig))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->domain_reg
    cJSON *domain_reg = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "domainReg");
    if (cJSON_IsNull(domain_reg)) {
        domain_reg = NULL;
    }
    if (domain_reg) { 
    if(!cJSON_IsString(domain_reg) && !cJSON_IsNull(domain_reg))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->data_mig
    cJSON *data_mig = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "dataMig");
    if (cJSON_IsNull(data_mig)) {
        data_mig = NULL;
    }
    if (data_mig) { 
    if(!cJSON_IsString(data_mig) && !cJSON_IsNull(data_mig))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->domain_reg_portal
    cJSON *domain_reg_portal = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "domainRegPortal");
    if (cJSON_IsNull(domain_reg_portal)) {
        domain_reg_portal = NULL;
    }
    if (domain_reg_portal) { 
    if(!cJSON_IsString(domain_reg_portal) && !cJSON_IsNull(domain_reg_portal))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->domain_reg_email
    cJSON *domain_reg_email = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "domainRegEmail");
    if (cJSON_IsNull(domain_reg_email)) {
        domain_reg_email = NULL;
    }
    if (domain_reg_email) { 
    if(!cJSON_IsString(domain_reg_email) && !cJSON_IsNull(domain_reg_email))
    {
    goto end; //String
    }
    }

    // post_website_migration_request->domain_reg_password
    cJSON *domain_reg_password = cJSON_GetObjectItemCaseSensitive(post_website_migration_requestJSON, "domainRegPassword");
    if (cJSON_IsNull(domain_reg_password)) {
        domain_reg_password = NULL;
    }
    if (domain_reg_password) { 
    if(!cJSON_IsString(domain_reg_password) && !cJSON_IsNull(domain_reg_password))
    {
    goto end; //String
    }
    }


    post_website_migration_request_local_var = post_website_migration_request_create_internal (
        cust_portal && !cJSON_IsNull(cust_portal) ? strdup(cust_portal->valuestring) : NULL,
        reg_email && !cJSON_IsNull(reg_email) ? strdup(reg_email->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        ctrl_panel && !cJSON_IsNull(ctrl_panel) ? strdup(ctrl_panel->valuestring) : NULL,
        ftp_username && !cJSON_IsNull(ftp_username) ? strdup(ftp_username->valuestring) : NULL,
        ftp_password && !cJSON_IsNull(ftp_password) ? strdup(ftp_password->valuestring) : NULL,
        site_busy_mig && !cJSON_IsNull(site_busy_mig) ? strdup(site_busy_mig->valuestring) : NULL,
        spl_req_mig && !cJSON_IsNull(spl_req_mig) ? strdup(spl_req_mig->valuestring) : NULL,
        domain_reg && !cJSON_IsNull(domain_reg) ? strdup(domain_reg->valuestring) : NULL,
        data_mig && !cJSON_IsNull(data_mig) ? strdup(data_mig->valuestring) : NULL,
        domain_reg_portal && !cJSON_IsNull(domain_reg_portal) ? strdup(domain_reg_portal->valuestring) : NULL,
        domain_reg_email && !cJSON_IsNull(domain_reg_email) ? strdup(domain_reg_email->valuestring) : NULL,
        domain_reg_password && !cJSON_IsNull(domain_reg_password) ? strdup(domain_reg_password->valuestring) : NULL
        );

    return post_website_migration_request_local_var;
end:
    return NULL;

}
