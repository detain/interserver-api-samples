/*
 * account_info_max_mind_response.h
 *
 * MaxMind fraud detection scoring data for a credit card transaction.
 */

#ifndef _account_info_max_mind_response_H_
#define _account_info_max_mind_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_max_mind_response_t account_info_max_mind_response_t;

#include "account_info_max_mind_response_risk_score.h"



typedef struct account_info_max_mind_response_t {
    char *distance; // string
    char *country_match; // string
    char *country_code; // string
    char *free_mail; // string
    char *anonymous_proxy; // string
    char *score; // string
    char *bin_match; // string
    char *bin_country; // string
    char *err; // string
    char *proxy_score; // string
    char *ip_region; // string
    char *ip_city; // string
    char *ip_latitude; // string
    char *ip_longitude; // string
    char *bin_name; // string
    char *ip_isp; // string
    char *ip_org; // string
    char *bin_name_match; // string
    char *bin_phone_match; // string
    char *bin_phone; // string
    char *cust_phone_in_billing_loc; // string
    char *high_risk_country; // string
    char *queries_remaining; // string
    char *city_postal_match; // string
    char *ship_city_postal_match; // string
    char *maxmind_id; // string
    char *ip_asnum; // string
    char *ip_user_type; // string
    char *ip_country_conf; // string
    char *ip_region_conf; // string
    char *ip_city_conf; // string
    char *ip_postal_code; // string
    char *ip_postal_conf; // string
    char *ip_accuracy_radius; // string
    char *ip_net_speed_cell; // string
    char *ip_metro_code; // string
    char *ip_area_code; // string
    char *ip_time_zone; // string
    char *ip_region_name; // string
    char *ip_domain; // string
    char *ip_country_name; // string
    char *ip_continent_code; // string
    char *ip_corporate_proxy; // string
    char *carder_email; // string
    char *high_risk_username; // string
    char *high_risk_password; // string
    struct account_info_max_mind_response_risk_score_t *risk_score; //model
    char *is_trans_proxy; // string
    char *prepaid; // string
    char *minfraud_version; // string
    char *service_level; // string
    char *explanation; // string
    char *female_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_max_mind_response_t;

__attribute__((deprecated)) account_info_max_mind_response_t *account_info_max_mind_response_create(
    char *distance,
    char *country_match,
    char *country_code,
    char *free_mail,
    char *anonymous_proxy,
    char *score,
    char *bin_match,
    char *bin_country,
    char *err,
    char *proxy_score,
    char *ip_region,
    char *ip_city,
    char *ip_latitude,
    char *ip_longitude,
    char *bin_name,
    char *ip_isp,
    char *ip_org,
    char *bin_name_match,
    char *bin_phone_match,
    char *bin_phone,
    char *cust_phone_in_billing_loc,
    char *high_risk_country,
    char *queries_remaining,
    char *city_postal_match,
    char *ship_city_postal_match,
    char *maxmind_id,
    char *ip_asnum,
    char *ip_user_type,
    char *ip_country_conf,
    char *ip_region_conf,
    char *ip_city_conf,
    char *ip_postal_code,
    char *ip_postal_conf,
    char *ip_accuracy_radius,
    char *ip_net_speed_cell,
    char *ip_metro_code,
    char *ip_area_code,
    char *ip_time_zone,
    char *ip_region_name,
    char *ip_domain,
    char *ip_country_name,
    char *ip_continent_code,
    char *ip_corporate_proxy,
    char *carder_email,
    char *high_risk_username,
    char *high_risk_password,
    account_info_max_mind_response_risk_score_t *risk_score,
    char *is_trans_proxy,
    char *prepaid,
    char *minfraud_version,
    char *service_level,
    char *explanation,
    char *female_name
);

void account_info_max_mind_response_free(account_info_max_mind_response_t *account_info_max_mind_response);

account_info_max_mind_response_t *account_info_max_mind_response_parseFromJSON(cJSON *account_info_max_mind_responseJSON);

cJSON *account_info_max_mind_response_convertToJSON(account_info_max_mind_response_t *account_info_max_mind_response);

#endif /* _account_info_max_mind_response_H_ */

