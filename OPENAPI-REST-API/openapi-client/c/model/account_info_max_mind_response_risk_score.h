/*
 * account_info_max_mind_response_risk_score.h
 *
 * 
 */

#ifndef _account_info_max_mind_response_risk_score_H_
#define _account_info_max_mind_response_risk_score_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_max_mind_response_risk_score_t account_info_max_mind_response_risk_score_t;




typedef struct account_info_max_mind_response_risk_score_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_max_mind_response_risk_score_t;

__attribute__((deprecated)) account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_create(
);

void account_info_max_mind_response_risk_score_free(account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score);

account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score_parseFromJSON(cJSON *account_info_max_mind_response_risk_scoreJSON);

cJSON *account_info_max_mind_response_risk_score_convertToJSON(account_info_max_mind_response_risk_score_t *account_info_max_mind_response_risk_score);

#endif /* _account_info_max_mind_response_risk_score_H_ */

