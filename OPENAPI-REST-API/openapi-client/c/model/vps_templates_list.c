#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_templates_list.h"



static vps_templates_list_t *vps_templates_list_create_internal(
    list_t *templates
    ) {
    vps_templates_list_t *vps_templates_list_local_var = malloc(sizeof(vps_templates_list_t));
    if (!vps_templates_list_local_var) {
        return NULL;
    }
    memset(vps_templates_list_local_var, 0, sizeof(vps_templates_list_t));
    vps_templates_list_local_var->_library_owned = 1;
    vps_templates_list_local_var->templates = templates;
    return vps_templates_list_local_var;
}

__attribute__((deprecated)) vps_templates_list_t *vps_templates_list_create(
    list_t *templates
    ) {
    vps_templates_list_t *result = vps_templates_list_create_internal (
        templates
        );
    if (!result) {
    }
    return result;
}

void vps_templates_list_free(vps_templates_list_t *vps_templates_list) {
    if(NULL == vps_templates_list){
        return ;
    }
    if(vps_templates_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_templates_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_templates_list->templates) {
        list_ForEach(listEntry, vps_templates_list->templates) {
            vps_template_row_free(listEntry->data);
        }
        list_freeList(vps_templates_list->templates);
        vps_templates_list->templates = NULL;
    }
    free(vps_templates_list);
}

cJSON *vps_templates_list_convertToJSON(vps_templates_list_t *vps_templates_list) {
    cJSON *item = cJSON_CreateObject();

    // vps_templates_list->templates
    if (!vps_templates_list->templates) {
        goto fail;
    }
    cJSON *templates = cJSON_AddArrayToObject(item, "templates");
    if(templates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *templatesListEntry;
    if (vps_templates_list->templates) {
    list_ForEach(templatesListEntry, vps_templates_list->templates) {
    cJSON *itemLocal = vps_template_row_convertToJSON(templatesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(templates, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_templates_list_t *vps_templates_list_parseFromJSON(cJSON *vps_templates_listJSON){

    vps_templates_list_t *vps_templates_list_local_var = NULL;

    // define the local list for vps_templates_list->templates
    list_t *templatesList = NULL;

    // vps_templates_list->templates
    cJSON *templates = cJSON_GetObjectItemCaseSensitive(vps_templates_listJSON, "templates");
    if (cJSON_IsNull(templates)) {
        templates = NULL;
    }
    if (!templates) {
        goto end;
    }

    
    cJSON *templates_local_nonprimitive = NULL;
    if(!cJSON_IsArray(templates)){
        goto end; //nonprimitive container
    }

    templatesList = list_createList();

    cJSON_ArrayForEach(templates_local_nonprimitive,templates )
    {
        if(!cJSON_IsObject(templates_local_nonprimitive)){
            goto end;
        }
        vps_template_row_t *templatesItem = vps_template_row_parseFromJSON(templates_local_nonprimitive);

        list_addElement(templatesList, templatesItem);
    }



    vps_templates_list_local_var = vps_templates_list_create_internal (
        templatesList
        );

    if (!vps_templates_list_local_var) {
        goto end;
    }

    return vps_templates_list_local_var;
end:
    if (templatesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, templatesList) {
            vps_template_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(templatesList);
        templatesList = NULL;
    }
    return NULL;

}
