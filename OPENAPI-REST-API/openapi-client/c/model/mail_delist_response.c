#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_delist_response.h"



static mail_delist_response_t *mail_delist_response_create_internal(
    int id,
    list_t *local,
    list_t *mbtrap,
    list_t *subject,
    list_t *manual
    ) {
    mail_delist_response_t *mail_delist_response_local_var = malloc(sizeof(mail_delist_response_t));
    if (!mail_delist_response_local_var) {
        return NULL;
    }
    mail_delist_response_local_var->id = id;
    mail_delist_response_local_var->local = local;
    mail_delist_response_local_var->mbtrap = mbtrap;
    mail_delist_response_local_var->subject = subject;
    mail_delist_response_local_var->manual = manual;

    mail_delist_response_local_var->_library_owned = 1;
    return mail_delist_response_local_var;
}

__attribute__((deprecated)) mail_delist_response_t *mail_delist_response_create(
    int id,
    list_t *local,
    list_t *mbtrap,
    list_t *subject,
    list_t *manual
    ) {
    return mail_delist_response_create_internal (
        id,
        local,
        mbtrap,
        subject,
        manual
        );
}

void mail_delist_response_free(mail_delist_response_t *mail_delist_response) {
    if(NULL == mail_delist_response){
        return ;
    }
    if(mail_delist_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_delist_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_delist_response->local) {
        list_ForEach(listEntry, mail_delist_response->local) {
            object_free(listEntry->data);
        }
        list_freeList(mail_delist_response->local);
        mail_delist_response->local = NULL;
    }
    if (mail_delist_response->mbtrap) {
        list_ForEach(listEntry, mail_delist_response->mbtrap) {
            object_free(listEntry->data);
        }
        list_freeList(mail_delist_response->mbtrap);
        mail_delist_response->mbtrap = NULL;
    }
    if (mail_delist_response->subject) {
        list_ForEach(listEntry, mail_delist_response->subject) {
            object_free(listEntry->data);
        }
        list_freeList(mail_delist_response->subject);
        mail_delist_response->subject = NULL;
    }
    if (mail_delist_response->manual) {
        list_ForEach(listEntry, mail_delist_response->manual) {
            object_free(listEntry->data);
        }
        list_freeList(mail_delist_response->manual);
        mail_delist_response->manual = NULL;
    }
    free(mail_delist_response);
}

cJSON *mail_delist_response_convertToJSON(mail_delist_response_t *mail_delist_response) {
    cJSON *item = cJSON_CreateObject();

    // mail_delist_response->id
    if(mail_delist_response->id) {
    if(cJSON_AddNumberToObject(item, "id", mail_delist_response->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_delist_response->local
    if(mail_delist_response->local) {
    cJSON *local = cJSON_AddArrayToObject(item, "local");
    if(local == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *localListEntry;
    if (mail_delist_response->local) {
    list_ForEach(localListEntry, mail_delist_response->local) {
    cJSON *itemLocal = object_convertToJSON(localListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(local, itemLocal);
    }
    }
    }


    // mail_delist_response->mbtrap
    if(mail_delist_response->mbtrap) {
    cJSON *mbtrap = cJSON_AddArrayToObject(item, "mbtrap");
    if(mbtrap == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mbtrapListEntry;
    if (mail_delist_response->mbtrap) {
    list_ForEach(mbtrapListEntry, mail_delist_response->mbtrap) {
    cJSON *itemLocal = object_convertToJSON(mbtrapListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(mbtrap, itemLocal);
    }
    }
    }


    // mail_delist_response->subject
    if(mail_delist_response->subject) {
    cJSON *subject = cJSON_AddArrayToObject(item, "subject");
    if(subject == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subjectListEntry;
    if (mail_delist_response->subject) {
    list_ForEach(subjectListEntry, mail_delist_response->subject) {
    cJSON *itemLocal = object_convertToJSON(subjectListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subject, itemLocal);
    }
    }
    }


    // mail_delist_response->manual
    if(mail_delist_response->manual) {
    cJSON *manual = cJSON_AddArrayToObject(item, "manual");
    if(manual == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *manualListEntry;
    if (mail_delist_response->manual) {
    list_ForEach(manualListEntry, mail_delist_response->manual) {
    cJSON *itemLocal = object_convertToJSON(manualListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(manual, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_delist_response_t *mail_delist_response_parseFromJSON(cJSON *mail_delist_responseJSON){

    mail_delist_response_t *mail_delist_response_local_var = NULL;

    // define the local list for mail_delist_response->local
    list_t *localList = NULL;

    // define the local list for mail_delist_response->mbtrap
    list_t *mbtrapList = NULL;

    // define the local list for mail_delist_response->subject
    list_t *subjectList = NULL;

    // define the local list for mail_delist_response->manual
    list_t *manualList = NULL;

    // mail_delist_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(mail_delist_responseJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // mail_delist_response->local
    cJSON *local = cJSON_GetObjectItemCaseSensitive(mail_delist_responseJSON, "local");
    if (cJSON_IsNull(local)) {
        local = NULL;
    }
    if (local) { 
    cJSON *local_local_nonprimitive = NULL;
    if(!cJSON_IsArray(local)){
        goto end; //nonprimitive container
    }

    localList = list_createList();

    cJSON_ArrayForEach(local_local_nonprimitive,local )
    {
        if(!cJSON_IsObject(local_local_nonprimitive)){
            goto end;
        }
        object_t *localItem = object_parseFromJSON(local_local_nonprimitive);

        list_addElement(localList, localItem);
    }
    }

    // mail_delist_response->mbtrap
    cJSON *mbtrap = cJSON_GetObjectItemCaseSensitive(mail_delist_responseJSON, "mbtrap");
    if (cJSON_IsNull(mbtrap)) {
        mbtrap = NULL;
    }
    if (mbtrap) { 
    cJSON *mbtrap_local_nonprimitive = NULL;
    if(!cJSON_IsArray(mbtrap)){
        goto end; //nonprimitive container
    }

    mbtrapList = list_createList();

    cJSON_ArrayForEach(mbtrap_local_nonprimitive,mbtrap )
    {
        if(!cJSON_IsObject(mbtrap_local_nonprimitive)){
            goto end;
        }
        object_t *mbtrapItem = object_parseFromJSON(mbtrap_local_nonprimitive);

        list_addElement(mbtrapList, mbtrapItem);
    }
    }

    // mail_delist_response->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_delist_responseJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (subject) { 
    cJSON *subject_local_nonprimitive = NULL;
    if(!cJSON_IsArray(subject)){
        goto end; //nonprimitive container
    }

    subjectList = list_createList();

    cJSON_ArrayForEach(subject_local_nonprimitive,subject )
    {
        if(!cJSON_IsObject(subject_local_nonprimitive)){
            goto end;
        }
        object_t *subjectItem = object_parseFromJSON(subject_local_nonprimitive);

        list_addElement(subjectList, subjectItem);
    }
    }

    // mail_delist_response->manual
    cJSON *manual = cJSON_GetObjectItemCaseSensitive(mail_delist_responseJSON, "manual");
    if (cJSON_IsNull(manual)) {
        manual = NULL;
    }
    if (manual) { 
    cJSON *manual_local_nonprimitive = NULL;
    if(!cJSON_IsArray(manual)){
        goto end; //nonprimitive container
    }

    manualList = list_createList();

    cJSON_ArrayForEach(manual_local_nonprimitive,manual )
    {
        if(!cJSON_IsObject(manual_local_nonprimitive)){
            goto end;
        }
        object_t *manualItem = object_parseFromJSON(manual_local_nonprimitive);

        list_addElement(manualList, manualItem);
    }
    }


    mail_delist_response_local_var = mail_delist_response_create_internal (
        id ? id->valuedouble : 0,
        local ? localList : NULL,
        mbtrap ? mbtrapList : NULL,
        subject ? subjectList : NULL,
        manual ? manualList : NULL
        );

    return mail_delist_response_local_var;
end:
    if (localList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, localList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(localList);
        localList = NULL;
    }
    if (mbtrapList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, mbtrapList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(mbtrapList);
        mbtrapList = NULL;
    }
    if (subjectList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, subjectList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(subjectList);
        subjectList = NULL;
    }
    if (manualList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, manualList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(manualList);
        manualList = NULL;
    }
    return NULL;

}
