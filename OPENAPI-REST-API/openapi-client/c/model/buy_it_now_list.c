#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_list.h"



static buy_it_now_list_t *buy_it_now_list_create_internal(
    ) {
    buy_it_now_list_t *buy_it_now_list_local_var = malloc(sizeof(buy_it_now_list_t));
    if (!buy_it_now_list_local_var) {
        return NULL;
    }

    buy_it_now_list_local_var->_library_owned = 1;
    return buy_it_now_list_local_var;
}

__attribute__((deprecated)) buy_it_now_list_t *buy_it_now_list_create(
    ) {
    return buy_it_now_list_create_internal (
        );
}

void buy_it_now_list_free(buy_it_now_list_t *buy_it_now_list) {
    if(NULL == buy_it_now_list){
        return ;
    }
    if(buy_it_now_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_list_free");
        return ;
    }
    listEntry_t *listEntry;
    free(buy_it_now_list);
}

cJSON *buy_it_now_list_convertToJSON(buy_it_now_list_t *buy_it_now_list) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buy_it_now_list_t *buy_it_now_list_parseFromJSON(cJSON *buy_it_now_listJSON){

    buy_it_now_list_t *buy_it_now_list_local_var = NULL;


    buy_it_now_list_local_var = buy_it_now_list_create_internal (
        );

    return buy_it_now_list_local_var;
end:
    return NULL;

}
