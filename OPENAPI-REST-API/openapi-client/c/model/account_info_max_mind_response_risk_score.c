#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_max_mind_response_risk_score.h"



static account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_create_internal(
    ) {
    account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_local_var = malloc(sizeof(account_info_max_mind_response_risk_score_t));
    if (!account_info_max_mind_response_risk_score_local_var) {
        return NULL;
    }

    account_info_max_mind_response_risk_score_local_var->_library_owned = 1;
    return account_info_max_mind_response_risk_score_local_var;
}

__attribute__((deprecated)) account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_create(
    ) {
    return account_info_max_mind_response_risk_score_create_internal (
        );
}

void account_info_max_mind_response_risk_score_free(account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score) {
    if(NULL == account_info_max_mind_response_risk_score){
        return ;
    }
    if(account_info_max_mind_response_risk_score->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_max_mind_response_risk_score_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_info_max_mind_response_risk_score);
}

cJSON *account_info_max_mind_response_risk_score_convertToJSON(account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_parseFromJSON(cJSON *account_info_max_mind_response_risk_scoreJSON){

    account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_local_var = NULL;


    account_info_max_mind_response_risk_score_local_var = account_info_max_mind_response_risk_score_create_internal (
        );

    return account_info_max_mind_response_risk_score_local_var;
end:
    return NULL;

}
