#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_label.h"



static field_label_t *field_label_create_internal(
    char *name,
    int active
    ) {
    field_label_t *field_label_local_var = malloc(sizeof(field_label_t));
    if (!field_label_local_var) {
        return NULL;
    }
    field_label_local_var->name = name;
    field_label_local_var->active = active;

    field_label_local_var->_library_owned = 1;
    return field_label_local_var;
}

__attribute__((deprecated)) field_label_t *field_label_create(
    char *name,
    int active
    ) {
    return field_label_create_internal (
        name,
        active
        );
}

void field_label_free(field_label_t *field_label) {
    if(NULL == field_label){
        return ;
    }
    if(field_label->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "field_label_free");
        return ;
    }
    listEntry_t *listEntry;
    if (field_label->name) {
        free(field_label->name);
        field_label->name = NULL;
    }
    free(field_label);
}

cJSON *field_label_convertToJSON(field_label_t *field_label) {
    cJSON *item = cJSON_CreateObject();

    // field_label->name
    if(field_label->name) {
    if(cJSON_AddStringToObject(item, "name", field_label->name) == NULL) {
    goto fail; //String
    }
    }


    // field_label->active
    if(field_label->active) {
    if(cJSON_AddNumberToObject(item, "active", field_label->active) == NULL) {
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

field_label_t *field_label_parseFromJSON(cJSON *field_labelJSON){

    field_label_t *field_label_local_var = NULL;

    // field_label->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(field_labelJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // field_label->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(field_labelJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsNumber(active))
    {
    goto end; //Numeric
    }
    }


    field_label_local_var = field_label_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        active ? active->valuedouble : 0
        );

    return field_label_local_var;
end:
    return NULL;

}
