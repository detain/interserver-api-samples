#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_settings.h"



static module_settings_t *module_settings_create_internal(
    int service_id_offset,
    int use_repeat_invoice,
    int use_packages,
    int billing_days_offset,
    char *imgname,
    int repeat_billing_method,
    int delete_pending_days,
    int suspend_days,
    int suspend_warning_days,
    char *title,
    char *menuname,
    char *email_from,
    char *tblname,
    char *table,
    char *title_field,
    char *prefix,
    char *title_field2,
    char *title_field3
    ) {
    module_settings_t *module_settings_local_var = malloc(sizeof(module_settings_t));
    if (!module_settings_local_var) {
        return NULL;
    }
    module_settings_local_var->service_id_offset = service_id_offset;
    module_settings_local_var->use_repeat_invoice = use_repeat_invoice;
    module_settings_local_var->use_packages = use_packages;
    module_settings_local_var->billing_days_offset = billing_days_offset;
    module_settings_local_var->imgname = imgname;
    module_settings_local_var->repeat_billing_method = repeat_billing_method;
    module_settings_local_var->delete_pending_days = delete_pending_days;
    module_settings_local_var->suspend_days = suspend_days;
    module_settings_local_var->suspend_warning_days = suspend_warning_days;
    module_settings_local_var->title = title;
    module_settings_local_var->menuname = menuname;
    module_settings_local_var->email_from = email_from;
    module_settings_local_var->tblname = tblname;
    module_settings_local_var->table = table;
    module_settings_local_var->title_field = title_field;
    module_settings_local_var->prefix = prefix;
    module_settings_local_var->title_field2 = title_field2;
    module_settings_local_var->title_field3 = title_field3;

    module_settings_local_var->_library_owned = 1;
    return module_settings_local_var;
}

__attribute__((deprecated)) module_settings_t *module_settings_create(
    int service_id_offset,
    int use_repeat_invoice,
    int use_packages,
    int billing_days_offset,
    char *imgname,
    int repeat_billing_method,
    int delete_pending_days,
    int suspend_days,
    int suspend_warning_days,
    char *title,
    char *menuname,
    char *email_from,
    char *tblname,
    char *table,
    char *title_field,
    char *prefix,
    char *title_field2,
    char *title_field3
    ) {
    return module_settings_create_internal (
        service_id_offset,
        use_repeat_invoice,
        use_packages,
        billing_days_offset,
        imgname,
        repeat_billing_method,
        delete_pending_days,
        suspend_days,
        suspend_warning_days,
        title,
        menuname,
        email_from,
        tblname,
        table,
        title_field,
        prefix,
        title_field2,
        title_field3
        );
}

void module_settings_free(module_settings_t *module_settings) {
    if(NULL == module_settings){
        return ;
    }
    if(module_settings->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "module_settings_free");
        return ;
    }
    listEntry_t *listEntry;
    if (module_settings->imgname) {
        free(module_settings->imgname);
        module_settings->imgname = NULL;
    }
    if (module_settings->title) {
        free(module_settings->title);
        module_settings->title = NULL;
    }
    if (module_settings->menuname) {
        free(module_settings->menuname);
        module_settings->menuname = NULL;
    }
    if (module_settings->email_from) {
        free(module_settings->email_from);
        module_settings->email_from = NULL;
    }
    if (module_settings->tblname) {
        free(module_settings->tblname);
        module_settings->tblname = NULL;
    }
    if (module_settings->table) {
        free(module_settings->table);
        module_settings->table = NULL;
    }
    if (module_settings->title_field) {
        free(module_settings->title_field);
        module_settings->title_field = NULL;
    }
    if (module_settings->prefix) {
        free(module_settings->prefix);
        module_settings->prefix = NULL;
    }
    if (module_settings->title_field2) {
        free(module_settings->title_field2);
        module_settings->title_field2 = NULL;
    }
    if (module_settings->title_field3) {
        free(module_settings->title_field3);
        module_settings->title_field3 = NULL;
    }
    free(module_settings);
}

cJSON *module_settings_convertToJSON(module_settings_t *module_settings) {
    cJSON *item = cJSON_CreateObject();

    // module_settings->service_id_offset
    if (!module_settings->service_id_offset) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "SERVICE_ID_OFFSET", module_settings->service_id_offset) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->use_repeat_invoice
    if (!module_settings->use_repeat_invoice) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "USE_REPEAT_INVOICE", module_settings->use_repeat_invoice) == NULL) {
    goto fail; //Bool
    }


    // module_settings->use_packages
    if (!module_settings->use_packages) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "USE_PACKAGES", module_settings->use_packages) == NULL) {
    goto fail; //Bool
    }


    // module_settings->billing_days_offset
    if (!module_settings->billing_days_offset) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "BILLING_DAYS_OFFSET", module_settings->billing_days_offset) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->imgname
    if (!module_settings->imgname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "IMGNAME", module_settings->imgname) == NULL) {
    goto fail; //String
    }


    // module_settings->repeat_billing_method
    if (!module_settings->repeat_billing_method) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "REPEAT_BILLING_METHOD", module_settings->repeat_billing_method) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->delete_pending_days
    if (!module_settings->delete_pending_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "DELETE_PENDING_DAYS", module_settings->delete_pending_days) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->suspend_days
    if (!module_settings->suspend_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "SUSPEND_DAYS", module_settings->suspend_days) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->suspend_warning_days
    if (!module_settings->suspend_warning_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "SUSPEND_WARNING_DAYS", module_settings->suspend_warning_days) == NULL) {
    goto fail; //Numeric
    }


    // module_settings->title
    if (!module_settings->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "TITLE", module_settings->title) == NULL) {
    goto fail; //String
    }


    // module_settings->menuname
    if (!module_settings->menuname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "MENUNAME", module_settings->menuname) == NULL) {
    goto fail; //String
    }


    // module_settings->email_from
    if (!module_settings->email_from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "EMAIL_FROM", module_settings->email_from) == NULL) {
    goto fail; //String
    }


    // module_settings->tblname
    if (!module_settings->tblname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "TBLNAME", module_settings->tblname) == NULL) {
    goto fail; //String
    }


    // module_settings->table
    if (!module_settings->table) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "TABLE", module_settings->table) == NULL) {
    goto fail; //String
    }


    // module_settings->title_field
    if (!module_settings->title_field) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "TITLE_FIELD", module_settings->title_field) == NULL) {
    goto fail; //String
    }


    // module_settings->prefix
    if (!module_settings->prefix) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "PREFIX", module_settings->prefix) == NULL) {
    goto fail; //String
    }


    // module_settings->title_field2
    if(module_settings->title_field2) {
    if(cJSON_AddStringToObject(item, "TITLE_FIELD2", module_settings->title_field2) == NULL) {
    goto fail; //String
    }
    }


    // module_settings->title_field3
    if(module_settings->title_field3) {
    if(cJSON_AddStringToObject(item, "TITLE_FIELD3", module_settings->title_field3) == NULL) {
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

module_settings_t *module_settings_parseFromJSON(cJSON *module_settingsJSON){

    module_settings_t *module_settings_local_var = NULL;

    // module_settings->service_id_offset
    cJSON *service_id_offset = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "SERVICE_ID_OFFSET");
    if (cJSON_IsNull(service_id_offset)) {
        service_id_offset = NULL;
    }
    if (!service_id_offset) {
        goto end;
    }

    
    if(!cJSON_IsNumber(service_id_offset))
    {
    goto end; //Numeric
    }

    // module_settings->use_repeat_invoice
    cJSON *use_repeat_invoice = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "USE_REPEAT_INVOICE");
    if (cJSON_IsNull(use_repeat_invoice)) {
        use_repeat_invoice = NULL;
    }
    if (!use_repeat_invoice) {
        goto end;
    }

    
    if(!cJSON_IsBool(use_repeat_invoice))
    {
    goto end; //Bool
    }

    // module_settings->use_packages
    cJSON *use_packages = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "USE_PACKAGES");
    if (cJSON_IsNull(use_packages)) {
        use_packages = NULL;
    }
    if (!use_packages) {
        goto end;
    }

    
    if(!cJSON_IsBool(use_packages))
    {
    goto end; //Bool
    }

    // module_settings->billing_days_offset
    cJSON *billing_days_offset = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "BILLING_DAYS_OFFSET");
    if (cJSON_IsNull(billing_days_offset)) {
        billing_days_offset = NULL;
    }
    if (!billing_days_offset) {
        goto end;
    }

    
    if(!cJSON_IsNumber(billing_days_offset))
    {
    goto end; //Numeric
    }

    // module_settings->imgname
    cJSON *imgname = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "IMGNAME");
    if (cJSON_IsNull(imgname)) {
        imgname = NULL;
    }
    if (!imgname) {
        goto end;
    }

    
    if(!cJSON_IsString(imgname))
    {
    goto end; //String
    }

    // module_settings->repeat_billing_method
    cJSON *repeat_billing_method = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "REPEAT_BILLING_METHOD");
    if (cJSON_IsNull(repeat_billing_method)) {
        repeat_billing_method = NULL;
    }
    if (!repeat_billing_method) {
        goto end;
    }

    
    if(!cJSON_IsNumber(repeat_billing_method))
    {
    goto end; //Numeric
    }

    // module_settings->delete_pending_days
    cJSON *delete_pending_days = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "DELETE_PENDING_DAYS");
    if (cJSON_IsNull(delete_pending_days)) {
        delete_pending_days = NULL;
    }
    if (!delete_pending_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(delete_pending_days))
    {
    goto end; //Numeric
    }

    // module_settings->suspend_days
    cJSON *suspend_days = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "SUSPEND_DAYS");
    if (cJSON_IsNull(suspend_days)) {
        suspend_days = NULL;
    }
    if (!suspend_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(suspend_days))
    {
    goto end; //Numeric
    }

    // module_settings->suspend_warning_days
    cJSON *suspend_warning_days = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "SUSPEND_WARNING_DAYS");
    if (cJSON_IsNull(suspend_warning_days)) {
        suspend_warning_days = NULL;
    }
    if (!suspend_warning_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(suspend_warning_days))
    {
    goto end; //Numeric
    }

    // module_settings->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TITLE");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // module_settings->menuname
    cJSON *menuname = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "MENUNAME");
    if (cJSON_IsNull(menuname)) {
        menuname = NULL;
    }
    if (!menuname) {
        goto end;
    }

    
    if(!cJSON_IsString(menuname))
    {
    goto end; //String
    }

    // module_settings->email_from
    cJSON *email_from = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "EMAIL_FROM");
    if (cJSON_IsNull(email_from)) {
        email_from = NULL;
    }
    if (!email_from) {
        goto end;
    }

    
    if(!cJSON_IsString(email_from))
    {
    goto end; //String
    }

    // module_settings->tblname
    cJSON *tblname = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TBLNAME");
    if (cJSON_IsNull(tblname)) {
        tblname = NULL;
    }
    if (!tblname) {
        goto end;
    }

    
    if(!cJSON_IsString(tblname))
    {
    goto end; //String
    }

    // module_settings->table
    cJSON *table = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TABLE");
    if (cJSON_IsNull(table)) {
        table = NULL;
    }
    if (!table) {
        goto end;
    }

    
    if(!cJSON_IsString(table))
    {
    goto end; //String
    }

    // module_settings->title_field
    cJSON *title_field = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TITLE_FIELD");
    if (cJSON_IsNull(title_field)) {
        title_field = NULL;
    }
    if (!title_field) {
        goto end;
    }

    
    if(!cJSON_IsString(title_field))
    {
    goto end; //String
    }

    // module_settings->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "PREFIX");
    if (cJSON_IsNull(prefix)) {
        prefix = NULL;
    }
    if (!prefix) {
        goto end;
    }

    
    if(!cJSON_IsString(prefix))
    {
    goto end; //String
    }

    // module_settings->title_field2
    cJSON *title_field2 = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TITLE_FIELD2");
    if (cJSON_IsNull(title_field2)) {
        title_field2 = NULL;
    }
    if (title_field2) { 
    if(!cJSON_IsString(title_field2) && !cJSON_IsNull(title_field2))
    {
    goto end; //String
    }
    }

    // module_settings->title_field3
    cJSON *title_field3 = cJSON_GetObjectItemCaseSensitive(module_settingsJSON, "TITLE_FIELD3");
    if (cJSON_IsNull(title_field3)) {
        title_field3 = NULL;
    }
    if (title_field3) { 
    if(!cJSON_IsString(title_field3) && !cJSON_IsNull(title_field3))
    {
    goto end; //String
    }
    }


    module_settings_local_var = module_settings_create_internal (
        service_id_offset->valuedouble,
        use_repeat_invoice->valueint,
        use_packages->valueint,
        billing_days_offset->valuedouble,
        strdup(imgname->valuestring),
        repeat_billing_method->valuedouble,
        delete_pending_days->valuedouble,
        suspend_days->valuedouble,
        suspend_warning_days->valuedouble,
        strdup(title->valuestring),
        strdup(menuname->valuestring),
        strdup(email_from->valuestring),
        strdup(tblname->valuestring),
        strdup(table->valuestring),
        strdup(title_field->valuestring),
        strdup(prefix->valuestring),
        title_field2 && !cJSON_IsNull(title_field2) ? strdup(title_field2->valuestring) : NULL,
        title_field3 && !cJSON_IsNull(title_field3) ? strdup(title_field3->valuestring) : NULL
        );

    return module_settings_local_var;
end:
    return NULL;

}
