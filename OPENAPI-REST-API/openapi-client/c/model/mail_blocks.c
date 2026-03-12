#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_blocks.h"



static mail_blocks_t *mail_blocks_create_internal(
    list_t *local,
    list_t *mbtrap,
    list_t *subject
    ) {
    mail_blocks_t *mail_blocks_local_var = malloc(sizeof(mail_blocks_t));
    if (!mail_blocks_local_var) {
        return NULL;
    }
    mail_blocks_local_var->local = local;
    mail_blocks_local_var->mbtrap = mbtrap;
    mail_blocks_local_var->subject = subject;

    mail_blocks_local_var->_library_owned = 1;
    return mail_blocks_local_var;
}

__attribute__((deprecated)) mail_blocks_t *mail_blocks_create(
    list_t *local,
    list_t *mbtrap,
    list_t *subject
    ) {
    return mail_blocks_create_internal (
        local,
        mbtrap,
        subject
        );
}

void mail_blocks_free(mail_blocks_t *mail_blocks) {
    if(NULL == mail_blocks){
        return ;
    }
    if(mail_blocks->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_blocks_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_blocks->local) {
        list_ForEach(listEntry, mail_blocks->local) {
            mail_block_click_house_free(listEntry->data);
        }
        list_freeList(mail_blocks->local);
        mail_blocks->local = NULL;
    }
    if (mail_blocks->mbtrap) {
        list_ForEach(listEntry, mail_blocks->mbtrap) {
            mail_block_click_house_free(listEntry->data);
        }
        list_freeList(mail_blocks->mbtrap);
        mail_blocks->mbtrap = NULL;
    }
    if (mail_blocks->subject) {
        list_ForEach(listEntry, mail_blocks->subject) {
            mail_block_rspamd_free(listEntry->data);
        }
        list_freeList(mail_blocks->subject);
        mail_blocks->subject = NULL;
    }
    free(mail_blocks);
}

cJSON *mail_blocks_convertToJSON(mail_blocks_t *mail_blocks) {
    cJSON *item = cJSON_CreateObject();

    // mail_blocks->local
    if (!mail_blocks->local) {
        goto fail;
    }
    cJSON *local = cJSON_AddArrayToObject(item, "local");
    if(local == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *localListEntry;
    if (mail_blocks->local) {
    list_ForEach(localListEntry, mail_blocks->local) {
    cJSON *itemLocal = mail_block_click_house_convertToJSON(localListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(local, itemLocal);
    }
    }


    // mail_blocks->mbtrap
    if (!mail_blocks->mbtrap) {
        goto fail;
    }
    cJSON *mbtrap = cJSON_AddArrayToObject(item, "mbtrap");
    if(mbtrap == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mbtrapListEntry;
    if (mail_blocks->mbtrap) {
    list_ForEach(mbtrapListEntry, mail_blocks->mbtrap) {
    cJSON *itemLocal = mail_block_click_house_convertToJSON(mbtrapListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(mbtrap, itemLocal);
    }
    }


    // mail_blocks->subject
    if (!mail_blocks->subject) {
        goto fail;
    }
    cJSON *subject = cJSON_AddArrayToObject(item, "subject");
    if(subject == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subjectListEntry;
    if (mail_blocks->subject) {
    list_ForEach(subjectListEntry, mail_blocks->subject) {
    cJSON *itemLocal = mail_block_rspamd_convertToJSON(subjectListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subject, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_blocks_t *mail_blocks_parseFromJSON(cJSON *mail_blocksJSON){

    mail_blocks_t *mail_blocks_local_var = NULL;

    // define the local list for mail_blocks->local
    list_t *localList = NULL;

    // define the local list for mail_blocks->mbtrap
    list_t *mbtrapList = NULL;

    // define the local list for mail_blocks->subject
    list_t *subjectList = NULL;

    // mail_blocks->local
    cJSON *local = cJSON_GetObjectItemCaseSensitive(mail_blocksJSON, "local");
    if (cJSON_IsNull(local)) {
        local = NULL;
    }
    if (!local) {
        goto end;
    }

    
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
        mail_block_click_house_t *localItem = mail_block_click_house_parseFromJSON(local_local_nonprimitive);

        list_addElement(localList, localItem);
    }

    // mail_blocks->mbtrap
    cJSON *mbtrap = cJSON_GetObjectItemCaseSensitive(mail_blocksJSON, "mbtrap");
    if (cJSON_IsNull(mbtrap)) {
        mbtrap = NULL;
    }
    if (!mbtrap) {
        goto end;
    }

    
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
        mail_block_click_house_t *mbtrapItem = mail_block_click_house_parseFromJSON(mbtrap_local_nonprimitive);

        list_addElement(mbtrapList, mbtrapItem);
    }

    // mail_blocks->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_blocksJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (!subject) {
        goto end;
    }

    
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
        mail_block_rspamd_t *subjectItem = mail_block_rspamd_parseFromJSON(subject_local_nonprimitive);

        list_addElement(subjectList, subjectItem);
    }


    mail_blocks_local_var = mail_blocks_create_internal (
        localList,
        mbtrapList,
        subjectList
        );

    return mail_blocks_local_var;
end:
    if (localList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, localList) {
            mail_block_click_house_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(localList);
        localList = NULL;
    }
    if (mbtrapList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, mbtrapList) {
            mail_block_click_house_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(mbtrapList);
        mbtrapList = NULL;
    }
    if (subjectList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, subjectList) {
            mail_block_rspamd_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(subjectList);
        subjectList = NULL;
    }
    return NULL;

}
