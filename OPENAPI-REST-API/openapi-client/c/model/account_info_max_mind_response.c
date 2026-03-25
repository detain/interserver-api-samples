#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_max_mind_response.h"



static account_info_max_mind_response_t *account_info_max_mind_response_create_internal(
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
    ) {
    account_info_max_mind_response_t *account_info_max_mind_response_local_var = malloc(sizeof(account_info_max_mind_response_t));
    if (!account_info_max_mind_response_local_var) {
        return NULL;
    }
    memset(account_info_max_mind_response_local_var, 0, sizeof(account_info_max_mind_response_t));
    account_info_max_mind_response_local_var->_library_owned = 1;
    account_info_max_mind_response_local_var->distance = distance;
    account_info_max_mind_response_local_var->country_match = country_match;
    account_info_max_mind_response_local_var->country_code = country_code;
    account_info_max_mind_response_local_var->free_mail = free_mail;
    account_info_max_mind_response_local_var->anonymous_proxy = anonymous_proxy;
    account_info_max_mind_response_local_var->score = score;
    account_info_max_mind_response_local_var->bin_match = bin_match;
    account_info_max_mind_response_local_var->bin_country = bin_country;
    account_info_max_mind_response_local_var->err = err;
    account_info_max_mind_response_local_var->proxy_score = proxy_score;
    account_info_max_mind_response_local_var->ip_region = ip_region;
    account_info_max_mind_response_local_var->ip_city = ip_city;
    account_info_max_mind_response_local_var->ip_latitude = ip_latitude;
    account_info_max_mind_response_local_var->ip_longitude = ip_longitude;
    account_info_max_mind_response_local_var->bin_name = bin_name;
    account_info_max_mind_response_local_var->ip_isp = ip_isp;
    account_info_max_mind_response_local_var->ip_org = ip_org;
    account_info_max_mind_response_local_var->bin_name_match = bin_name_match;
    account_info_max_mind_response_local_var->bin_phone_match = bin_phone_match;
    account_info_max_mind_response_local_var->bin_phone = bin_phone;
    account_info_max_mind_response_local_var->cust_phone_in_billing_loc = cust_phone_in_billing_loc;
    account_info_max_mind_response_local_var->high_risk_country = high_risk_country;
    account_info_max_mind_response_local_var->queries_remaining = queries_remaining;
    account_info_max_mind_response_local_var->city_postal_match = city_postal_match;
    account_info_max_mind_response_local_var->ship_city_postal_match = ship_city_postal_match;
    account_info_max_mind_response_local_var->maxmind_id = maxmind_id;
    account_info_max_mind_response_local_var->ip_asnum = ip_asnum;
    account_info_max_mind_response_local_var->ip_user_type = ip_user_type;
    account_info_max_mind_response_local_var->ip_country_conf = ip_country_conf;
    account_info_max_mind_response_local_var->ip_region_conf = ip_region_conf;
    account_info_max_mind_response_local_var->ip_city_conf = ip_city_conf;
    account_info_max_mind_response_local_var->ip_postal_code = ip_postal_code;
    account_info_max_mind_response_local_var->ip_postal_conf = ip_postal_conf;
    account_info_max_mind_response_local_var->ip_accuracy_radius = ip_accuracy_radius;
    account_info_max_mind_response_local_var->ip_net_speed_cell = ip_net_speed_cell;
    account_info_max_mind_response_local_var->ip_metro_code = ip_metro_code;
    account_info_max_mind_response_local_var->ip_area_code = ip_area_code;
    account_info_max_mind_response_local_var->ip_time_zone = ip_time_zone;
    account_info_max_mind_response_local_var->ip_region_name = ip_region_name;
    account_info_max_mind_response_local_var->ip_domain = ip_domain;
    account_info_max_mind_response_local_var->ip_country_name = ip_country_name;
    account_info_max_mind_response_local_var->ip_continent_code = ip_continent_code;
    account_info_max_mind_response_local_var->ip_corporate_proxy = ip_corporate_proxy;
    account_info_max_mind_response_local_var->carder_email = carder_email;
    account_info_max_mind_response_local_var->high_risk_username = high_risk_username;
    account_info_max_mind_response_local_var->high_risk_password = high_risk_password;
    account_info_max_mind_response_local_var->risk_score = risk_score;
    account_info_max_mind_response_local_var->is_trans_proxy = is_trans_proxy;
    account_info_max_mind_response_local_var->prepaid = prepaid;
    account_info_max_mind_response_local_var->minfraud_version = minfraud_version;
    account_info_max_mind_response_local_var->service_level = service_level;
    account_info_max_mind_response_local_var->explanation = explanation;
    account_info_max_mind_response_local_var->female_name = female_name;
    return account_info_max_mind_response_local_var;
}

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
    ) {
    account_info_max_mind_response_t *result = account_info_max_mind_response_create_internal (
        distance,
        country_match,
        country_code,
        free_mail,
        anonymous_proxy,
        score,
        bin_match,
        bin_country,
        err,
        proxy_score,
        ip_region,
        ip_city,
        ip_latitude,
        ip_longitude,
        bin_name,
        ip_isp,
        ip_org,
        bin_name_match,
        bin_phone_match,
        bin_phone,
        cust_phone_in_billing_loc,
        high_risk_country,
        queries_remaining,
        city_postal_match,
        ship_city_postal_match,
        maxmind_id,
        ip_asnum,
        ip_user_type,
        ip_country_conf,
        ip_region_conf,
        ip_city_conf,
        ip_postal_code,
        ip_postal_conf,
        ip_accuracy_radius,
        ip_net_speed_cell,
        ip_metro_code,
        ip_area_code,
        ip_time_zone,
        ip_region_name,
        ip_domain,
        ip_country_name,
        ip_continent_code,
        ip_corporate_proxy,
        carder_email,
        high_risk_username,
        high_risk_password,
        risk_score,
        is_trans_proxy,
        prepaid,
        minfraud_version,
        service_level,
        explanation,
        female_name
        );
    if (!result) {
    }
    return result;
}

void account_info_max_mind_response_free(account_info_max_mind_response_t *account_info_max_mind_response) {
    if(NULL == account_info_max_mind_response){
        return ;
    }
    if(account_info_max_mind_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_max_mind_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_max_mind_response->distance) {
        free(account_info_max_mind_response->distance);
        account_info_max_mind_response->distance = NULL;
    }
    if (account_info_max_mind_response->country_match) {
        free(account_info_max_mind_response->country_match);
        account_info_max_mind_response->country_match = NULL;
    }
    if (account_info_max_mind_response->country_code) {
        free(account_info_max_mind_response->country_code);
        account_info_max_mind_response->country_code = NULL;
    }
    if (account_info_max_mind_response->free_mail) {
        free(account_info_max_mind_response->free_mail);
        account_info_max_mind_response->free_mail = NULL;
    }
    if (account_info_max_mind_response->anonymous_proxy) {
        free(account_info_max_mind_response->anonymous_proxy);
        account_info_max_mind_response->anonymous_proxy = NULL;
    }
    if (account_info_max_mind_response->score) {
        free(account_info_max_mind_response->score);
        account_info_max_mind_response->score = NULL;
    }
    if (account_info_max_mind_response->bin_match) {
        free(account_info_max_mind_response->bin_match);
        account_info_max_mind_response->bin_match = NULL;
    }
    if (account_info_max_mind_response->bin_country) {
        free(account_info_max_mind_response->bin_country);
        account_info_max_mind_response->bin_country = NULL;
    }
    if (account_info_max_mind_response->err) {
        free(account_info_max_mind_response->err);
        account_info_max_mind_response->err = NULL;
    }
    if (account_info_max_mind_response->proxy_score) {
        free(account_info_max_mind_response->proxy_score);
        account_info_max_mind_response->proxy_score = NULL;
    }
    if (account_info_max_mind_response->ip_region) {
        free(account_info_max_mind_response->ip_region);
        account_info_max_mind_response->ip_region = NULL;
    }
    if (account_info_max_mind_response->ip_city) {
        free(account_info_max_mind_response->ip_city);
        account_info_max_mind_response->ip_city = NULL;
    }
    if (account_info_max_mind_response->ip_latitude) {
        free(account_info_max_mind_response->ip_latitude);
        account_info_max_mind_response->ip_latitude = NULL;
    }
    if (account_info_max_mind_response->ip_longitude) {
        free(account_info_max_mind_response->ip_longitude);
        account_info_max_mind_response->ip_longitude = NULL;
    }
    if (account_info_max_mind_response->bin_name) {
        free(account_info_max_mind_response->bin_name);
        account_info_max_mind_response->bin_name = NULL;
    }
    if (account_info_max_mind_response->ip_isp) {
        free(account_info_max_mind_response->ip_isp);
        account_info_max_mind_response->ip_isp = NULL;
    }
    if (account_info_max_mind_response->ip_org) {
        free(account_info_max_mind_response->ip_org);
        account_info_max_mind_response->ip_org = NULL;
    }
    if (account_info_max_mind_response->bin_name_match) {
        free(account_info_max_mind_response->bin_name_match);
        account_info_max_mind_response->bin_name_match = NULL;
    }
    if (account_info_max_mind_response->bin_phone_match) {
        free(account_info_max_mind_response->bin_phone_match);
        account_info_max_mind_response->bin_phone_match = NULL;
    }
    if (account_info_max_mind_response->bin_phone) {
        free(account_info_max_mind_response->bin_phone);
        account_info_max_mind_response->bin_phone = NULL;
    }
    if (account_info_max_mind_response->cust_phone_in_billing_loc) {
        free(account_info_max_mind_response->cust_phone_in_billing_loc);
        account_info_max_mind_response->cust_phone_in_billing_loc = NULL;
    }
    if (account_info_max_mind_response->high_risk_country) {
        free(account_info_max_mind_response->high_risk_country);
        account_info_max_mind_response->high_risk_country = NULL;
    }
    if (account_info_max_mind_response->queries_remaining) {
        free(account_info_max_mind_response->queries_remaining);
        account_info_max_mind_response->queries_remaining = NULL;
    }
    if (account_info_max_mind_response->city_postal_match) {
        free(account_info_max_mind_response->city_postal_match);
        account_info_max_mind_response->city_postal_match = NULL;
    }
    if (account_info_max_mind_response->ship_city_postal_match) {
        free(account_info_max_mind_response->ship_city_postal_match);
        account_info_max_mind_response->ship_city_postal_match = NULL;
    }
    if (account_info_max_mind_response->maxmind_id) {
        free(account_info_max_mind_response->maxmind_id);
        account_info_max_mind_response->maxmind_id = NULL;
    }
    if (account_info_max_mind_response->ip_asnum) {
        free(account_info_max_mind_response->ip_asnum);
        account_info_max_mind_response->ip_asnum = NULL;
    }
    if (account_info_max_mind_response->ip_user_type) {
        free(account_info_max_mind_response->ip_user_type);
        account_info_max_mind_response->ip_user_type = NULL;
    }
    if (account_info_max_mind_response->ip_country_conf) {
        free(account_info_max_mind_response->ip_country_conf);
        account_info_max_mind_response->ip_country_conf = NULL;
    }
    if (account_info_max_mind_response->ip_region_conf) {
        free(account_info_max_mind_response->ip_region_conf);
        account_info_max_mind_response->ip_region_conf = NULL;
    }
    if (account_info_max_mind_response->ip_city_conf) {
        free(account_info_max_mind_response->ip_city_conf);
        account_info_max_mind_response->ip_city_conf = NULL;
    }
    if (account_info_max_mind_response->ip_postal_code) {
        free(account_info_max_mind_response->ip_postal_code);
        account_info_max_mind_response->ip_postal_code = NULL;
    }
    if (account_info_max_mind_response->ip_postal_conf) {
        free(account_info_max_mind_response->ip_postal_conf);
        account_info_max_mind_response->ip_postal_conf = NULL;
    }
    if (account_info_max_mind_response->ip_accuracy_radius) {
        free(account_info_max_mind_response->ip_accuracy_radius);
        account_info_max_mind_response->ip_accuracy_radius = NULL;
    }
    if (account_info_max_mind_response->ip_net_speed_cell) {
        free(account_info_max_mind_response->ip_net_speed_cell);
        account_info_max_mind_response->ip_net_speed_cell = NULL;
    }
    if (account_info_max_mind_response->ip_metro_code) {
        free(account_info_max_mind_response->ip_metro_code);
        account_info_max_mind_response->ip_metro_code = NULL;
    }
    if (account_info_max_mind_response->ip_area_code) {
        free(account_info_max_mind_response->ip_area_code);
        account_info_max_mind_response->ip_area_code = NULL;
    }
    if (account_info_max_mind_response->ip_time_zone) {
        free(account_info_max_mind_response->ip_time_zone);
        account_info_max_mind_response->ip_time_zone = NULL;
    }
    if (account_info_max_mind_response->ip_region_name) {
        free(account_info_max_mind_response->ip_region_name);
        account_info_max_mind_response->ip_region_name = NULL;
    }
    if (account_info_max_mind_response->ip_domain) {
        free(account_info_max_mind_response->ip_domain);
        account_info_max_mind_response->ip_domain = NULL;
    }
    if (account_info_max_mind_response->ip_country_name) {
        free(account_info_max_mind_response->ip_country_name);
        account_info_max_mind_response->ip_country_name = NULL;
    }
    if (account_info_max_mind_response->ip_continent_code) {
        free(account_info_max_mind_response->ip_continent_code);
        account_info_max_mind_response->ip_continent_code = NULL;
    }
    if (account_info_max_mind_response->ip_corporate_proxy) {
        free(account_info_max_mind_response->ip_corporate_proxy);
        account_info_max_mind_response->ip_corporate_proxy = NULL;
    }
    if (account_info_max_mind_response->carder_email) {
        free(account_info_max_mind_response->carder_email);
        account_info_max_mind_response->carder_email = NULL;
    }
    if (account_info_max_mind_response->high_risk_username) {
        free(account_info_max_mind_response->high_risk_username);
        account_info_max_mind_response->high_risk_username = NULL;
    }
    if (account_info_max_mind_response->high_risk_password) {
        free(account_info_max_mind_response->high_risk_password);
        account_info_max_mind_response->high_risk_password = NULL;
    }
    if (account_info_max_mind_response->risk_score) {
        account_info_max_mind_response_risk_score_free(account_info_max_mind_response->risk_score);
        account_info_max_mind_response->risk_score = NULL;
    }
    if (account_info_max_mind_response->is_trans_proxy) {
        free(account_info_max_mind_response->is_trans_proxy);
        account_info_max_mind_response->is_trans_proxy = NULL;
    }
    if (account_info_max_mind_response->prepaid) {
        free(account_info_max_mind_response->prepaid);
        account_info_max_mind_response->prepaid = NULL;
    }
    if (account_info_max_mind_response->minfraud_version) {
        free(account_info_max_mind_response->minfraud_version);
        account_info_max_mind_response->minfraud_version = NULL;
    }
    if (account_info_max_mind_response->service_level) {
        free(account_info_max_mind_response->service_level);
        account_info_max_mind_response->service_level = NULL;
    }
    if (account_info_max_mind_response->explanation) {
        free(account_info_max_mind_response->explanation);
        account_info_max_mind_response->explanation = NULL;
    }
    if (account_info_max_mind_response->female_name) {
        free(account_info_max_mind_response->female_name);
        account_info_max_mind_response->female_name = NULL;
    }
    free(account_info_max_mind_response);
}

cJSON *account_info_max_mind_response_convertToJSON(account_info_max_mind_response_t *account_info_max_mind_response) {
    cJSON *item = cJSON_CreateObject();

    // account_info_max_mind_response->distance
    if(account_info_max_mind_response->distance) {
    if(cJSON_AddStringToObject(item, "distance", account_info_max_mind_response->distance) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->country_match
    if(account_info_max_mind_response->country_match) {
    if(cJSON_AddStringToObject(item, "countryMatch", account_info_max_mind_response->country_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->country_code
    if(account_info_max_mind_response->country_code) {
    if(cJSON_AddStringToObject(item, "countryCode", account_info_max_mind_response->country_code) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->free_mail
    if(account_info_max_mind_response->free_mail) {
    if(cJSON_AddStringToObject(item, "freeMail", account_info_max_mind_response->free_mail) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->anonymous_proxy
    if(account_info_max_mind_response->anonymous_proxy) {
    if(cJSON_AddStringToObject(item, "anonymousProxy", account_info_max_mind_response->anonymous_proxy) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->score
    if(account_info_max_mind_response->score) {
    if(cJSON_AddStringToObject(item, "score", account_info_max_mind_response->score) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_match
    if(account_info_max_mind_response->bin_match) {
    if(cJSON_AddStringToObject(item, "binMatch", account_info_max_mind_response->bin_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_country
    if(account_info_max_mind_response->bin_country) {
    if(cJSON_AddStringToObject(item, "binCountry", account_info_max_mind_response->bin_country) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->err
    if(account_info_max_mind_response->err) {
    if(cJSON_AddStringToObject(item, "err", account_info_max_mind_response->err) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->proxy_score
    if(account_info_max_mind_response->proxy_score) {
    if(cJSON_AddStringToObject(item, "proxyScore", account_info_max_mind_response->proxy_score) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_region
    if(account_info_max_mind_response->ip_region) {
    if(cJSON_AddStringToObject(item, "ip_region", account_info_max_mind_response->ip_region) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_city
    if(account_info_max_mind_response->ip_city) {
    if(cJSON_AddStringToObject(item, "ip_city", account_info_max_mind_response->ip_city) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_latitude
    if(account_info_max_mind_response->ip_latitude) {
    if(cJSON_AddStringToObject(item, "ip_latitude", account_info_max_mind_response->ip_latitude) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_longitude
    if(account_info_max_mind_response->ip_longitude) {
    if(cJSON_AddStringToObject(item, "ip_longitude", account_info_max_mind_response->ip_longitude) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_name
    if(account_info_max_mind_response->bin_name) {
    if(cJSON_AddStringToObject(item, "binName", account_info_max_mind_response->bin_name) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_isp
    if(account_info_max_mind_response->ip_isp) {
    if(cJSON_AddStringToObject(item, "ip_isp", account_info_max_mind_response->ip_isp) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_org
    if(account_info_max_mind_response->ip_org) {
    if(cJSON_AddStringToObject(item, "ip_org", account_info_max_mind_response->ip_org) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_name_match
    if(account_info_max_mind_response->bin_name_match) {
    if(cJSON_AddStringToObject(item, "binNameMatch", account_info_max_mind_response->bin_name_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_phone_match
    if(account_info_max_mind_response->bin_phone_match) {
    if(cJSON_AddStringToObject(item, "binPhoneMatch", account_info_max_mind_response->bin_phone_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->bin_phone
    if(account_info_max_mind_response->bin_phone) {
    if(cJSON_AddStringToObject(item, "binPhone", account_info_max_mind_response->bin_phone) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->cust_phone_in_billing_loc
    if(account_info_max_mind_response->cust_phone_in_billing_loc) {
    if(cJSON_AddStringToObject(item, "custPhoneInBillingLoc", account_info_max_mind_response->cust_phone_in_billing_loc) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->high_risk_country
    if(account_info_max_mind_response->high_risk_country) {
    if(cJSON_AddStringToObject(item, "highRiskCountry", account_info_max_mind_response->high_risk_country) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->queries_remaining
    if(account_info_max_mind_response->queries_remaining) {
    if(cJSON_AddStringToObject(item, "queriesRemaining", account_info_max_mind_response->queries_remaining) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->city_postal_match
    if(account_info_max_mind_response->city_postal_match) {
    if(cJSON_AddStringToObject(item, "cityPostalMatch", account_info_max_mind_response->city_postal_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ship_city_postal_match
    if(account_info_max_mind_response->ship_city_postal_match) {
    if(cJSON_AddStringToObject(item, "shipCityPostalMatch", account_info_max_mind_response->ship_city_postal_match) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->maxmind_id
    if(account_info_max_mind_response->maxmind_id) {
    if(cJSON_AddStringToObject(item, "maxmindID", account_info_max_mind_response->maxmind_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_asnum
    if(account_info_max_mind_response->ip_asnum) {
    if(cJSON_AddStringToObject(item, "ip_asnum", account_info_max_mind_response->ip_asnum) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_user_type
    if(account_info_max_mind_response->ip_user_type) {
    if(cJSON_AddStringToObject(item, "ip_userType", account_info_max_mind_response->ip_user_type) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_country_conf
    if(account_info_max_mind_response->ip_country_conf) {
    if(cJSON_AddStringToObject(item, "ip_countryConf", account_info_max_mind_response->ip_country_conf) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_region_conf
    if(account_info_max_mind_response->ip_region_conf) {
    if(cJSON_AddStringToObject(item, "ip_regionConf", account_info_max_mind_response->ip_region_conf) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_city_conf
    if(account_info_max_mind_response->ip_city_conf) {
    if(cJSON_AddStringToObject(item, "ip_cityConf", account_info_max_mind_response->ip_city_conf) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_postal_code
    if(account_info_max_mind_response->ip_postal_code) {
    if(cJSON_AddStringToObject(item, "ip_postalCode", account_info_max_mind_response->ip_postal_code) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_postal_conf
    if(account_info_max_mind_response->ip_postal_conf) {
    if(cJSON_AddStringToObject(item, "ip_postalConf", account_info_max_mind_response->ip_postal_conf) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_accuracy_radius
    if(account_info_max_mind_response->ip_accuracy_radius) {
    if(cJSON_AddStringToObject(item, "ip_accuracyRadius", account_info_max_mind_response->ip_accuracy_radius) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_net_speed_cell
    if(account_info_max_mind_response->ip_net_speed_cell) {
    if(cJSON_AddStringToObject(item, "ip_netSpeedCell", account_info_max_mind_response->ip_net_speed_cell) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_metro_code
    if(account_info_max_mind_response->ip_metro_code) {
    if(cJSON_AddStringToObject(item, "ip_metroCode", account_info_max_mind_response->ip_metro_code) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_area_code
    if(account_info_max_mind_response->ip_area_code) {
    if(cJSON_AddStringToObject(item, "ip_areaCode", account_info_max_mind_response->ip_area_code) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_time_zone
    if(account_info_max_mind_response->ip_time_zone) {
    if(cJSON_AddStringToObject(item, "ip_timeZone", account_info_max_mind_response->ip_time_zone) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_region_name
    if(account_info_max_mind_response->ip_region_name) {
    if(cJSON_AddStringToObject(item, "ip_regionName", account_info_max_mind_response->ip_region_name) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_domain
    if(account_info_max_mind_response->ip_domain) {
    if(cJSON_AddStringToObject(item, "ip_domain", account_info_max_mind_response->ip_domain) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_country_name
    if(account_info_max_mind_response->ip_country_name) {
    if(cJSON_AddStringToObject(item, "ip_countryName", account_info_max_mind_response->ip_country_name) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_continent_code
    if(account_info_max_mind_response->ip_continent_code) {
    if(cJSON_AddStringToObject(item, "ip_continentCode", account_info_max_mind_response->ip_continent_code) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->ip_corporate_proxy
    if(account_info_max_mind_response->ip_corporate_proxy) {
    if(cJSON_AddStringToObject(item, "ip_corporateProxy", account_info_max_mind_response->ip_corporate_proxy) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->carder_email
    if(account_info_max_mind_response->carder_email) {
    if(cJSON_AddStringToObject(item, "carderEmail", account_info_max_mind_response->carder_email) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->high_risk_username
    if(account_info_max_mind_response->high_risk_username) {
    if(cJSON_AddStringToObject(item, "highRiskUsername", account_info_max_mind_response->high_risk_username) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->high_risk_password
    if(account_info_max_mind_response->high_risk_password) {
    if(cJSON_AddStringToObject(item, "highRiskPassword", account_info_max_mind_response->high_risk_password) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->risk_score
    if(account_info_max_mind_response->risk_score) {
    cJSON *risk_score_local_JSON = account_info_max_mind_response_risk_score_convertToJSON(account_info_max_mind_response->risk_score);
    if(risk_score_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "riskScore", risk_score_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_max_mind_response->is_trans_proxy
    if(account_info_max_mind_response->is_trans_proxy) {
    if(cJSON_AddStringToObject(item, "isTransProxy", account_info_max_mind_response->is_trans_proxy) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->prepaid
    if(account_info_max_mind_response->prepaid) {
    if(cJSON_AddStringToObject(item, "prepaid", account_info_max_mind_response->prepaid) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->minfraud_version
    if(account_info_max_mind_response->minfraud_version) {
    if(cJSON_AddStringToObject(item, "minfraud_version", account_info_max_mind_response->minfraud_version) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->service_level
    if(account_info_max_mind_response->service_level) {
    if(cJSON_AddStringToObject(item, "service_level", account_info_max_mind_response->service_level) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->explanation
    if(account_info_max_mind_response->explanation) {
    if(cJSON_AddStringToObject(item, "explanation", account_info_max_mind_response->explanation) == NULL) {
    goto fail; //String
    }
    }


    // account_info_max_mind_response->female_name
    if(account_info_max_mind_response->female_name) {
    if(cJSON_AddStringToObject(item, "female_name", account_info_max_mind_response->female_name) == NULL) {
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

account_info_max_mind_response_t *account_info_max_mind_response_parseFromJSON(cJSON *account_info_max_mind_responseJSON){

    account_info_max_mind_response_t *account_info_max_mind_response_local_var = NULL;

    char *distance_local_str = NULL;

    char *country_match_local_str = NULL;

    char *country_code_local_str = NULL;

    char *free_mail_local_str = NULL;

    char *anonymous_proxy_local_str = NULL;

    char *score_local_str = NULL;

    char *bin_match_local_str = NULL;

    char *bin_country_local_str = NULL;

    char *err_local_str = NULL;

    char *proxy_score_local_str = NULL;

    char *ip_region_local_str = NULL;

    char *ip_city_local_str = NULL;

    char *ip_latitude_local_str = NULL;

    char *ip_longitude_local_str = NULL;

    char *bin_name_local_str = NULL;

    char *ip_isp_local_str = NULL;

    char *ip_org_local_str = NULL;

    char *bin_name_match_local_str = NULL;

    char *bin_phone_match_local_str = NULL;

    char *bin_phone_local_str = NULL;

    char *cust_phone_in_billing_loc_local_str = NULL;

    char *high_risk_country_local_str = NULL;

    char *queries_remaining_local_str = NULL;

    char *city_postal_match_local_str = NULL;

    char *ship_city_postal_match_local_str = NULL;

    char *maxmind_id_local_str = NULL;

    char *ip_asnum_local_str = NULL;

    char *ip_user_type_local_str = NULL;

    char *ip_country_conf_local_str = NULL;

    char *ip_region_conf_local_str = NULL;

    char *ip_city_conf_local_str = NULL;

    char *ip_postal_code_local_str = NULL;

    char *ip_postal_conf_local_str = NULL;

    char *ip_accuracy_radius_local_str = NULL;

    char *ip_net_speed_cell_local_str = NULL;

    char *ip_metro_code_local_str = NULL;

    char *ip_area_code_local_str = NULL;

    char *ip_time_zone_local_str = NULL;

    char *ip_region_name_local_str = NULL;

    char *ip_domain_local_str = NULL;

    char *ip_country_name_local_str = NULL;

    char *ip_continent_code_local_str = NULL;

    char *ip_corporate_proxy_local_str = NULL;

    char *carder_email_local_str = NULL;

    char *high_risk_username_local_str = NULL;

    char *high_risk_password_local_str = NULL;

    // define the local variable for account_info_max_mind_response->risk_score
    account_info_max_mind_response_risk_score_t *risk_score_local_nonprim = NULL;

    char *is_trans_proxy_local_str = NULL;

    char *prepaid_local_str = NULL;

    char *minfraud_version_local_str = NULL;

    char *service_level_local_str = NULL;

    char *explanation_local_str = NULL;

    char *female_name_local_str = NULL;

    // account_info_max_mind_response->distance
    cJSON *distance = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "distance");
    if (cJSON_IsNull(distance)) {
        distance = NULL;
    }
    if (distance) { 
    if(!cJSON_IsString(distance) && !cJSON_IsNull(distance))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->country_match
    cJSON *country_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "countryMatch");
    if (cJSON_IsNull(country_match)) {
        country_match = NULL;
    }
    if (country_match) { 
    if(!cJSON_IsString(country_match) && !cJSON_IsNull(country_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->country_code
    cJSON *country_code = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "countryCode");
    if (cJSON_IsNull(country_code)) {
        country_code = NULL;
    }
    if (country_code) { 
    if(!cJSON_IsString(country_code) && !cJSON_IsNull(country_code))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->free_mail
    cJSON *free_mail = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "freeMail");
    if (cJSON_IsNull(free_mail)) {
        free_mail = NULL;
    }
    if (free_mail) { 
    if(!cJSON_IsString(free_mail) && !cJSON_IsNull(free_mail))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->anonymous_proxy
    cJSON *anonymous_proxy = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "anonymousProxy");
    if (cJSON_IsNull(anonymous_proxy)) {
        anonymous_proxy = NULL;
    }
    if (anonymous_proxy) { 
    if(!cJSON_IsString(anonymous_proxy) && !cJSON_IsNull(anonymous_proxy))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->score
    cJSON *score = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "score");
    if (cJSON_IsNull(score)) {
        score = NULL;
    }
    if (score) { 
    if(!cJSON_IsString(score) && !cJSON_IsNull(score))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_match
    cJSON *bin_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binMatch");
    if (cJSON_IsNull(bin_match)) {
        bin_match = NULL;
    }
    if (bin_match) { 
    if(!cJSON_IsString(bin_match) && !cJSON_IsNull(bin_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_country
    cJSON *bin_country = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binCountry");
    if (cJSON_IsNull(bin_country)) {
        bin_country = NULL;
    }
    if (bin_country) { 
    if(!cJSON_IsString(bin_country) && !cJSON_IsNull(bin_country))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->err
    cJSON *err = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "err");
    if (cJSON_IsNull(err)) {
        err = NULL;
    }
    if (err) { 
    if(!cJSON_IsString(err) && !cJSON_IsNull(err))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->proxy_score
    cJSON *proxy_score = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "proxyScore");
    if (cJSON_IsNull(proxy_score)) {
        proxy_score = NULL;
    }
    if (proxy_score) { 
    if(!cJSON_IsString(proxy_score) && !cJSON_IsNull(proxy_score))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_region
    cJSON *ip_region = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_region");
    if (cJSON_IsNull(ip_region)) {
        ip_region = NULL;
    }
    if (ip_region) { 
    if(!cJSON_IsString(ip_region) && !cJSON_IsNull(ip_region))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_city
    cJSON *ip_city = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_city");
    if (cJSON_IsNull(ip_city)) {
        ip_city = NULL;
    }
    if (ip_city) { 
    if(!cJSON_IsString(ip_city) && !cJSON_IsNull(ip_city))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_latitude
    cJSON *ip_latitude = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_latitude");
    if (cJSON_IsNull(ip_latitude)) {
        ip_latitude = NULL;
    }
    if (ip_latitude) { 
    if(!cJSON_IsString(ip_latitude) && !cJSON_IsNull(ip_latitude))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_longitude
    cJSON *ip_longitude = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_longitude");
    if (cJSON_IsNull(ip_longitude)) {
        ip_longitude = NULL;
    }
    if (ip_longitude) { 
    if(!cJSON_IsString(ip_longitude) && !cJSON_IsNull(ip_longitude))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_name
    cJSON *bin_name = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binName");
    if (cJSON_IsNull(bin_name)) {
        bin_name = NULL;
    }
    if (bin_name) { 
    if(!cJSON_IsString(bin_name) && !cJSON_IsNull(bin_name))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_isp
    cJSON *ip_isp = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_isp");
    if (cJSON_IsNull(ip_isp)) {
        ip_isp = NULL;
    }
    if (ip_isp) { 
    if(!cJSON_IsString(ip_isp) && !cJSON_IsNull(ip_isp))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_org
    cJSON *ip_org = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_org");
    if (cJSON_IsNull(ip_org)) {
        ip_org = NULL;
    }
    if (ip_org) { 
    if(!cJSON_IsString(ip_org) && !cJSON_IsNull(ip_org))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_name_match
    cJSON *bin_name_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binNameMatch");
    if (cJSON_IsNull(bin_name_match)) {
        bin_name_match = NULL;
    }
    if (bin_name_match) { 
    if(!cJSON_IsString(bin_name_match) && !cJSON_IsNull(bin_name_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_phone_match
    cJSON *bin_phone_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binPhoneMatch");
    if (cJSON_IsNull(bin_phone_match)) {
        bin_phone_match = NULL;
    }
    if (bin_phone_match) { 
    if(!cJSON_IsString(bin_phone_match) && !cJSON_IsNull(bin_phone_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->bin_phone
    cJSON *bin_phone = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "binPhone");
    if (cJSON_IsNull(bin_phone)) {
        bin_phone = NULL;
    }
    if (bin_phone) { 
    if(!cJSON_IsString(bin_phone) && !cJSON_IsNull(bin_phone))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->cust_phone_in_billing_loc
    cJSON *cust_phone_in_billing_loc = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "custPhoneInBillingLoc");
    if (cJSON_IsNull(cust_phone_in_billing_loc)) {
        cust_phone_in_billing_loc = NULL;
    }
    if (cust_phone_in_billing_loc) { 
    if(!cJSON_IsString(cust_phone_in_billing_loc) && !cJSON_IsNull(cust_phone_in_billing_loc))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->high_risk_country
    cJSON *high_risk_country = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "highRiskCountry");
    if (cJSON_IsNull(high_risk_country)) {
        high_risk_country = NULL;
    }
    if (high_risk_country) { 
    if(!cJSON_IsString(high_risk_country) && !cJSON_IsNull(high_risk_country))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->queries_remaining
    cJSON *queries_remaining = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "queriesRemaining");
    if (cJSON_IsNull(queries_remaining)) {
        queries_remaining = NULL;
    }
    if (queries_remaining) { 
    if(!cJSON_IsString(queries_remaining) && !cJSON_IsNull(queries_remaining))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->city_postal_match
    cJSON *city_postal_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "cityPostalMatch");
    if (cJSON_IsNull(city_postal_match)) {
        city_postal_match = NULL;
    }
    if (city_postal_match) { 
    if(!cJSON_IsString(city_postal_match) && !cJSON_IsNull(city_postal_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ship_city_postal_match
    cJSON *ship_city_postal_match = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "shipCityPostalMatch");
    if (cJSON_IsNull(ship_city_postal_match)) {
        ship_city_postal_match = NULL;
    }
    if (ship_city_postal_match) { 
    if(!cJSON_IsString(ship_city_postal_match) && !cJSON_IsNull(ship_city_postal_match))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->maxmind_id
    cJSON *maxmind_id = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "maxmindID");
    if (cJSON_IsNull(maxmind_id)) {
        maxmind_id = NULL;
    }
    if (maxmind_id) { 
    if(!cJSON_IsString(maxmind_id) && !cJSON_IsNull(maxmind_id))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_asnum
    cJSON *ip_asnum = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_asnum");
    if (cJSON_IsNull(ip_asnum)) {
        ip_asnum = NULL;
    }
    if (ip_asnum) { 
    if(!cJSON_IsString(ip_asnum) && !cJSON_IsNull(ip_asnum))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_user_type
    cJSON *ip_user_type = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_userType");
    if (cJSON_IsNull(ip_user_type)) {
        ip_user_type = NULL;
    }
    if (ip_user_type) { 
    if(!cJSON_IsString(ip_user_type) && !cJSON_IsNull(ip_user_type))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_country_conf
    cJSON *ip_country_conf = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_countryConf");
    if (cJSON_IsNull(ip_country_conf)) {
        ip_country_conf = NULL;
    }
    if (ip_country_conf) { 
    if(!cJSON_IsString(ip_country_conf) && !cJSON_IsNull(ip_country_conf))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_region_conf
    cJSON *ip_region_conf = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_regionConf");
    if (cJSON_IsNull(ip_region_conf)) {
        ip_region_conf = NULL;
    }
    if (ip_region_conf) { 
    if(!cJSON_IsString(ip_region_conf) && !cJSON_IsNull(ip_region_conf))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_city_conf
    cJSON *ip_city_conf = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_cityConf");
    if (cJSON_IsNull(ip_city_conf)) {
        ip_city_conf = NULL;
    }
    if (ip_city_conf) { 
    if(!cJSON_IsString(ip_city_conf) && !cJSON_IsNull(ip_city_conf))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_postal_code
    cJSON *ip_postal_code = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_postalCode");
    if (cJSON_IsNull(ip_postal_code)) {
        ip_postal_code = NULL;
    }
    if (ip_postal_code) { 
    if(!cJSON_IsString(ip_postal_code) && !cJSON_IsNull(ip_postal_code))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_postal_conf
    cJSON *ip_postal_conf = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_postalConf");
    if (cJSON_IsNull(ip_postal_conf)) {
        ip_postal_conf = NULL;
    }
    if (ip_postal_conf) { 
    if(!cJSON_IsString(ip_postal_conf) && !cJSON_IsNull(ip_postal_conf))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_accuracy_radius
    cJSON *ip_accuracy_radius = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_accuracyRadius");
    if (cJSON_IsNull(ip_accuracy_radius)) {
        ip_accuracy_radius = NULL;
    }
    if (ip_accuracy_radius) { 
    if(!cJSON_IsString(ip_accuracy_radius) && !cJSON_IsNull(ip_accuracy_radius))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_net_speed_cell
    cJSON *ip_net_speed_cell = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_netSpeedCell");
    if (cJSON_IsNull(ip_net_speed_cell)) {
        ip_net_speed_cell = NULL;
    }
    if (ip_net_speed_cell) { 
    if(!cJSON_IsString(ip_net_speed_cell) && !cJSON_IsNull(ip_net_speed_cell))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_metro_code
    cJSON *ip_metro_code = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_metroCode");
    if (cJSON_IsNull(ip_metro_code)) {
        ip_metro_code = NULL;
    }
    if (ip_metro_code) { 
    if(!cJSON_IsString(ip_metro_code) && !cJSON_IsNull(ip_metro_code))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_area_code
    cJSON *ip_area_code = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_areaCode");
    if (cJSON_IsNull(ip_area_code)) {
        ip_area_code = NULL;
    }
    if (ip_area_code) { 
    if(!cJSON_IsString(ip_area_code) && !cJSON_IsNull(ip_area_code))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_time_zone
    cJSON *ip_time_zone = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_timeZone");
    if (cJSON_IsNull(ip_time_zone)) {
        ip_time_zone = NULL;
    }
    if (ip_time_zone) { 
    if(!cJSON_IsString(ip_time_zone) && !cJSON_IsNull(ip_time_zone))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_region_name
    cJSON *ip_region_name = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_regionName");
    if (cJSON_IsNull(ip_region_name)) {
        ip_region_name = NULL;
    }
    if (ip_region_name) { 
    if(!cJSON_IsString(ip_region_name) && !cJSON_IsNull(ip_region_name))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_domain
    cJSON *ip_domain = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_domain");
    if (cJSON_IsNull(ip_domain)) {
        ip_domain = NULL;
    }
    if (ip_domain) { 
    if(!cJSON_IsString(ip_domain) && !cJSON_IsNull(ip_domain))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_country_name
    cJSON *ip_country_name = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_countryName");
    if (cJSON_IsNull(ip_country_name)) {
        ip_country_name = NULL;
    }
    if (ip_country_name) { 
    if(!cJSON_IsString(ip_country_name) && !cJSON_IsNull(ip_country_name))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_continent_code
    cJSON *ip_continent_code = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_continentCode");
    if (cJSON_IsNull(ip_continent_code)) {
        ip_continent_code = NULL;
    }
    if (ip_continent_code) { 
    if(!cJSON_IsString(ip_continent_code) && !cJSON_IsNull(ip_continent_code))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->ip_corporate_proxy
    cJSON *ip_corporate_proxy = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "ip_corporateProxy");
    if (cJSON_IsNull(ip_corporate_proxy)) {
        ip_corporate_proxy = NULL;
    }
    if (ip_corporate_proxy) { 
    if(!cJSON_IsString(ip_corporate_proxy) && !cJSON_IsNull(ip_corporate_proxy))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->carder_email
    cJSON *carder_email = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "carderEmail");
    if (cJSON_IsNull(carder_email)) {
        carder_email = NULL;
    }
    if (carder_email) { 
    if(!cJSON_IsString(carder_email) && !cJSON_IsNull(carder_email))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->high_risk_username
    cJSON *high_risk_username = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "highRiskUsername");
    if (cJSON_IsNull(high_risk_username)) {
        high_risk_username = NULL;
    }
    if (high_risk_username) { 
    if(!cJSON_IsString(high_risk_username) && !cJSON_IsNull(high_risk_username))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->high_risk_password
    cJSON *high_risk_password = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "highRiskPassword");
    if (cJSON_IsNull(high_risk_password)) {
        high_risk_password = NULL;
    }
    if (high_risk_password) { 
    if(!cJSON_IsString(high_risk_password) && !cJSON_IsNull(high_risk_password))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->risk_score
    cJSON *risk_score = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "riskScore");
    if (cJSON_IsNull(risk_score)) {
        risk_score = NULL;
    }
    if (risk_score) { 
    risk_score_local_nonprim = account_info_max_mind_response_risk_score_parseFromJSON(risk_score); //nonprimitive
    }

    // account_info_max_mind_response->is_trans_proxy
    cJSON *is_trans_proxy = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "isTransProxy");
    if (cJSON_IsNull(is_trans_proxy)) {
        is_trans_proxy = NULL;
    }
    if (is_trans_proxy) { 
    if(!cJSON_IsString(is_trans_proxy) && !cJSON_IsNull(is_trans_proxy))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->prepaid
    cJSON *prepaid = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "prepaid");
    if (cJSON_IsNull(prepaid)) {
        prepaid = NULL;
    }
    if (prepaid) { 
    if(!cJSON_IsString(prepaid) && !cJSON_IsNull(prepaid))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->minfraud_version
    cJSON *minfraud_version = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "minfraud_version");
    if (cJSON_IsNull(minfraud_version)) {
        minfraud_version = NULL;
    }
    if (minfraud_version) { 
    if(!cJSON_IsString(minfraud_version) && !cJSON_IsNull(minfraud_version))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->service_level
    cJSON *service_level = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "service_level");
    if (cJSON_IsNull(service_level)) {
        service_level = NULL;
    }
    if (service_level) { 
    if(!cJSON_IsString(service_level) && !cJSON_IsNull(service_level))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->explanation
    cJSON *explanation = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "explanation");
    if (cJSON_IsNull(explanation)) {
        explanation = NULL;
    }
    if (explanation) { 
    if(!cJSON_IsString(explanation) && !cJSON_IsNull(explanation))
    {
    goto end; //String
    }
    }

    // account_info_max_mind_response->female_name
    cJSON *female_name = cJSON_GetObjectItemCaseSensitive(account_info_max_mind_responseJSON, "female_name");
    if (cJSON_IsNull(female_name)) {
        female_name = NULL;
    }
    if (female_name) { 
    if(!cJSON_IsString(female_name) && !cJSON_IsNull(female_name))
    {
    goto end; //String
    }
    }


    if (distance && !cJSON_IsNull(distance)) distance_local_str = strdup(distance->valuestring);
    if (country_match && !cJSON_IsNull(country_match)) country_match_local_str = strdup(country_match->valuestring);
    if (country_code && !cJSON_IsNull(country_code)) country_code_local_str = strdup(country_code->valuestring);
    if (free_mail && !cJSON_IsNull(free_mail)) free_mail_local_str = strdup(free_mail->valuestring);
    if (anonymous_proxy && !cJSON_IsNull(anonymous_proxy)) anonymous_proxy_local_str = strdup(anonymous_proxy->valuestring);
    if (score && !cJSON_IsNull(score)) score_local_str = strdup(score->valuestring);
    if (bin_match && !cJSON_IsNull(bin_match)) bin_match_local_str = strdup(bin_match->valuestring);
    if (bin_country && !cJSON_IsNull(bin_country)) bin_country_local_str = strdup(bin_country->valuestring);
    if (err && !cJSON_IsNull(err)) err_local_str = strdup(err->valuestring);
    if (proxy_score && !cJSON_IsNull(proxy_score)) proxy_score_local_str = strdup(proxy_score->valuestring);
    if (ip_region && !cJSON_IsNull(ip_region)) ip_region_local_str = strdup(ip_region->valuestring);
    if (ip_city && !cJSON_IsNull(ip_city)) ip_city_local_str = strdup(ip_city->valuestring);
    if (ip_latitude && !cJSON_IsNull(ip_latitude)) ip_latitude_local_str = strdup(ip_latitude->valuestring);
    if (ip_longitude && !cJSON_IsNull(ip_longitude)) ip_longitude_local_str = strdup(ip_longitude->valuestring);
    if (bin_name && !cJSON_IsNull(bin_name)) bin_name_local_str = strdup(bin_name->valuestring);
    if (ip_isp && !cJSON_IsNull(ip_isp)) ip_isp_local_str = strdup(ip_isp->valuestring);
    if (ip_org && !cJSON_IsNull(ip_org)) ip_org_local_str = strdup(ip_org->valuestring);
    if (bin_name_match && !cJSON_IsNull(bin_name_match)) bin_name_match_local_str = strdup(bin_name_match->valuestring);
    if (bin_phone_match && !cJSON_IsNull(bin_phone_match)) bin_phone_match_local_str = strdup(bin_phone_match->valuestring);
    if (bin_phone && !cJSON_IsNull(bin_phone)) bin_phone_local_str = strdup(bin_phone->valuestring);
    if (cust_phone_in_billing_loc && !cJSON_IsNull(cust_phone_in_billing_loc)) cust_phone_in_billing_loc_local_str = strdup(cust_phone_in_billing_loc->valuestring);
    if (high_risk_country && !cJSON_IsNull(high_risk_country)) high_risk_country_local_str = strdup(high_risk_country->valuestring);
    if (queries_remaining && !cJSON_IsNull(queries_remaining)) queries_remaining_local_str = strdup(queries_remaining->valuestring);
    if (city_postal_match && !cJSON_IsNull(city_postal_match)) city_postal_match_local_str = strdup(city_postal_match->valuestring);
    if (ship_city_postal_match && !cJSON_IsNull(ship_city_postal_match)) ship_city_postal_match_local_str = strdup(ship_city_postal_match->valuestring);
    if (maxmind_id && !cJSON_IsNull(maxmind_id)) maxmind_id_local_str = strdup(maxmind_id->valuestring);
    if (ip_asnum && !cJSON_IsNull(ip_asnum)) ip_asnum_local_str = strdup(ip_asnum->valuestring);
    if (ip_user_type && !cJSON_IsNull(ip_user_type)) ip_user_type_local_str = strdup(ip_user_type->valuestring);
    if (ip_country_conf && !cJSON_IsNull(ip_country_conf)) ip_country_conf_local_str = strdup(ip_country_conf->valuestring);
    if (ip_region_conf && !cJSON_IsNull(ip_region_conf)) ip_region_conf_local_str = strdup(ip_region_conf->valuestring);
    if (ip_city_conf && !cJSON_IsNull(ip_city_conf)) ip_city_conf_local_str = strdup(ip_city_conf->valuestring);
    if (ip_postal_code && !cJSON_IsNull(ip_postal_code)) ip_postal_code_local_str = strdup(ip_postal_code->valuestring);
    if (ip_postal_conf && !cJSON_IsNull(ip_postal_conf)) ip_postal_conf_local_str = strdup(ip_postal_conf->valuestring);
    if (ip_accuracy_radius && !cJSON_IsNull(ip_accuracy_radius)) ip_accuracy_radius_local_str = strdup(ip_accuracy_radius->valuestring);
    if (ip_net_speed_cell && !cJSON_IsNull(ip_net_speed_cell)) ip_net_speed_cell_local_str = strdup(ip_net_speed_cell->valuestring);
    if (ip_metro_code && !cJSON_IsNull(ip_metro_code)) ip_metro_code_local_str = strdup(ip_metro_code->valuestring);
    if (ip_area_code && !cJSON_IsNull(ip_area_code)) ip_area_code_local_str = strdup(ip_area_code->valuestring);
    if (ip_time_zone && !cJSON_IsNull(ip_time_zone)) ip_time_zone_local_str = strdup(ip_time_zone->valuestring);
    if (ip_region_name && !cJSON_IsNull(ip_region_name)) ip_region_name_local_str = strdup(ip_region_name->valuestring);
    if (ip_domain && !cJSON_IsNull(ip_domain)) ip_domain_local_str = strdup(ip_domain->valuestring);
    if (ip_country_name && !cJSON_IsNull(ip_country_name)) ip_country_name_local_str = strdup(ip_country_name->valuestring);
    if (ip_continent_code && !cJSON_IsNull(ip_continent_code)) ip_continent_code_local_str = strdup(ip_continent_code->valuestring);
    if (ip_corporate_proxy && !cJSON_IsNull(ip_corporate_proxy)) ip_corporate_proxy_local_str = strdup(ip_corporate_proxy->valuestring);
    if (carder_email && !cJSON_IsNull(carder_email)) carder_email_local_str = strdup(carder_email->valuestring);
    if (high_risk_username && !cJSON_IsNull(high_risk_username)) high_risk_username_local_str = strdup(high_risk_username->valuestring);
    if (high_risk_password && !cJSON_IsNull(high_risk_password)) high_risk_password_local_str = strdup(high_risk_password->valuestring);
    if (is_trans_proxy && !cJSON_IsNull(is_trans_proxy)) is_trans_proxy_local_str = strdup(is_trans_proxy->valuestring);
    if (prepaid && !cJSON_IsNull(prepaid)) prepaid_local_str = strdup(prepaid->valuestring);
    if (minfraud_version && !cJSON_IsNull(minfraud_version)) minfraud_version_local_str = strdup(minfraud_version->valuestring);
    if (service_level && !cJSON_IsNull(service_level)) service_level_local_str = strdup(service_level->valuestring);
    if (explanation && !cJSON_IsNull(explanation)) explanation_local_str = strdup(explanation->valuestring);
    if (female_name && !cJSON_IsNull(female_name)) female_name_local_str = strdup(female_name->valuestring);

    account_info_max_mind_response_local_var = account_info_max_mind_response_create_internal (
        distance_local_str,
        country_match_local_str,
        country_code_local_str,
        free_mail_local_str,
        anonymous_proxy_local_str,
        score_local_str,
        bin_match_local_str,
        bin_country_local_str,
        err_local_str,
        proxy_score_local_str,
        ip_region_local_str,
        ip_city_local_str,
        ip_latitude_local_str,
        ip_longitude_local_str,
        bin_name_local_str,
        ip_isp_local_str,
        ip_org_local_str,
        bin_name_match_local_str,
        bin_phone_match_local_str,
        bin_phone_local_str,
        cust_phone_in_billing_loc_local_str,
        high_risk_country_local_str,
        queries_remaining_local_str,
        city_postal_match_local_str,
        ship_city_postal_match_local_str,
        maxmind_id_local_str,
        ip_asnum_local_str,
        ip_user_type_local_str,
        ip_country_conf_local_str,
        ip_region_conf_local_str,
        ip_city_conf_local_str,
        ip_postal_code_local_str,
        ip_postal_conf_local_str,
        ip_accuracy_radius_local_str,
        ip_net_speed_cell_local_str,
        ip_metro_code_local_str,
        ip_area_code_local_str,
        ip_time_zone_local_str,
        ip_region_name_local_str,
        ip_domain_local_str,
        ip_country_name_local_str,
        ip_continent_code_local_str,
        ip_corporate_proxy_local_str,
        carder_email_local_str,
        high_risk_username_local_str,
        high_risk_password_local_str,
        risk_score ? risk_score_local_nonprim : NULL,
        is_trans_proxy_local_str,
        prepaid_local_str,
        minfraud_version_local_str,
        service_level_local_str,
        explanation_local_str,
        female_name_local_str
        );

    if (!account_info_max_mind_response_local_var) {
        goto end;
    }

    return account_info_max_mind_response_local_var;
end:
    if (distance_local_str) {
        free(distance_local_str);
        distance_local_str = NULL;
    }
    if (country_match_local_str) {
        free(country_match_local_str);
        country_match_local_str = NULL;
    }
    if (country_code_local_str) {
        free(country_code_local_str);
        country_code_local_str = NULL;
    }
    if (free_mail_local_str) {
        free(free_mail_local_str);
        free_mail_local_str = NULL;
    }
    if (anonymous_proxy_local_str) {
        free(anonymous_proxy_local_str);
        anonymous_proxy_local_str = NULL;
    }
    if (score_local_str) {
        free(score_local_str);
        score_local_str = NULL;
    }
    if (bin_match_local_str) {
        free(bin_match_local_str);
        bin_match_local_str = NULL;
    }
    if (bin_country_local_str) {
        free(bin_country_local_str);
        bin_country_local_str = NULL;
    }
    if (err_local_str) {
        free(err_local_str);
        err_local_str = NULL;
    }
    if (proxy_score_local_str) {
        free(proxy_score_local_str);
        proxy_score_local_str = NULL;
    }
    if (ip_region_local_str) {
        free(ip_region_local_str);
        ip_region_local_str = NULL;
    }
    if (ip_city_local_str) {
        free(ip_city_local_str);
        ip_city_local_str = NULL;
    }
    if (ip_latitude_local_str) {
        free(ip_latitude_local_str);
        ip_latitude_local_str = NULL;
    }
    if (ip_longitude_local_str) {
        free(ip_longitude_local_str);
        ip_longitude_local_str = NULL;
    }
    if (bin_name_local_str) {
        free(bin_name_local_str);
        bin_name_local_str = NULL;
    }
    if (ip_isp_local_str) {
        free(ip_isp_local_str);
        ip_isp_local_str = NULL;
    }
    if (ip_org_local_str) {
        free(ip_org_local_str);
        ip_org_local_str = NULL;
    }
    if (bin_name_match_local_str) {
        free(bin_name_match_local_str);
        bin_name_match_local_str = NULL;
    }
    if (bin_phone_match_local_str) {
        free(bin_phone_match_local_str);
        bin_phone_match_local_str = NULL;
    }
    if (bin_phone_local_str) {
        free(bin_phone_local_str);
        bin_phone_local_str = NULL;
    }
    if (cust_phone_in_billing_loc_local_str) {
        free(cust_phone_in_billing_loc_local_str);
        cust_phone_in_billing_loc_local_str = NULL;
    }
    if (high_risk_country_local_str) {
        free(high_risk_country_local_str);
        high_risk_country_local_str = NULL;
    }
    if (queries_remaining_local_str) {
        free(queries_remaining_local_str);
        queries_remaining_local_str = NULL;
    }
    if (city_postal_match_local_str) {
        free(city_postal_match_local_str);
        city_postal_match_local_str = NULL;
    }
    if (ship_city_postal_match_local_str) {
        free(ship_city_postal_match_local_str);
        ship_city_postal_match_local_str = NULL;
    }
    if (maxmind_id_local_str) {
        free(maxmind_id_local_str);
        maxmind_id_local_str = NULL;
    }
    if (ip_asnum_local_str) {
        free(ip_asnum_local_str);
        ip_asnum_local_str = NULL;
    }
    if (ip_user_type_local_str) {
        free(ip_user_type_local_str);
        ip_user_type_local_str = NULL;
    }
    if (ip_country_conf_local_str) {
        free(ip_country_conf_local_str);
        ip_country_conf_local_str = NULL;
    }
    if (ip_region_conf_local_str) {
        free(ip_region_conf_local_str);
        ip_region_conf_local_str = NULL;
    }
    if (ip_city_conf_local_str) {
        free(ip_city_conf_local_str);
        ip_city_conf_local_str = NULL;
    }
    if (ip_postal_code_local_str) {
        free(ip_postal_code_local_str);
        ip_postal_code_local_str = NULL;
    }
    if (ip_postal_conf_local_str) {
        free(ip_postal_conf_local_str);
        ip_postal_conf_local_str = NULL;
    }
    if (ip_accuracy_radius_local_str) {
        free(ip_accuracy_radius_local_str);
        ip_accuracy_radius_local_str = NULL;
    }
    if (ip_net_speed_cell_local_str) {
        free(ip_net_speed_cell_local_str);
        ip_net_speed_cell_local_str = NULL;
    }
    if (ip_metro_code_local_str) {
        free(ip_metro_code_local_str);
        ip_metro_code_local_str = NULL;
    }
    if (ip_area_code_local_str) {
        free(ip_area_code_local_str);
        ip_area_code_local_str = NULL;
    }
    if (ip_time_zone_local_str) {
        free(ip_time_zone_local_str);
        ip_time_zone_local_str = NULL;
    }
    if (ip_region_name_local_str) {
        free(ip_region_name_local_str);
        ip_region_name_local_str = NULL;
    }
    if (ip_domain_local_str) {
        free(ip_domain_local_str);
        ip_domain_local_str = NULL;
    }
    if (ip_country_name_local_str) {
        free(ip_country_name_local_str);
        ip_country_name_local_str = NULL;
    }
    if (ip_continent_code_local_str) {
        free(ip_continent_code_local_str);
        ip_continent_code_local_str = NULL;
    }
    if (ip_corporate_proxy_local_str) {
        free(ip_corporate_proxy_local_str);
        ip_corporate_proxy_local_str = NULL;
    }
    if (carder_email_local_str) {
        free(carder_email_local_str);
        carder_email_local_str = NULL;
    }
    if (high_risk_username_local_str) {
        free(high_risk_username_local_str);
        high_risk_username_local_str = NULL;
    }
    if (high_risk_password_local_str) {
        free(high_risk_password_local_str);
        high_risk_password_local_str = NULL;
    }
    if (risk_score_local_nonprim) {
        account_info_max_mind_response_risk_score_free(risk_score_local_nonprim);
        risk_score_local_nonprim = NULL;
    }
    if (is_trans_proxy_local_str) {
        free(is_trans_proxy_local_str);
        is_trans_proxy_local_str = NULL;
    }
    if (prepaid_local_str) {
        free(prepaid_local_str);
        prepaid_local_str = NULL;
    }
    if (minfraud_version_local_str) {
        free(minfraud_version_local_str);
        minfraud_version_local_str = NULL;
    }
    if (service_level_local_str) {
        free(service_level_local_str);
        service_level_local_str = NULL;
    }
    if (explanation_local_str) {
        free(explanation_local_str);
        explanation_local_str = NULL;
    }
    if (female_name_local_str) {
        free(female_name_local_str);
        female_name_local_str = NULL;
    }
    return NULL;

}
