#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_totals_resposne.h"



static vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_create_internal(
    vps_traffic_totals_section_response_t *day,
    vps_traffic_totals_section_response_t *month,
    vps_traffic_totals_section_response_t *year,
    vps_traffic_totals_section_response_t *all
    ) {
    vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_local_var = malloc(sizeof(vps_traffic_totals_resposne_t));
    if (!vps_traffic_totals_resposne_local_var) {
        return NULL;
    }
    vps_traffic_totals_resposne_local_var->day = day;
    vps_traffic_totals_resposne_local_var->month = month;
    vps_traffic_totals_resposne_local_var->year = year;
    vps_traffic_totals_resposne_local_var->all = all;

    vps_traffic_totals_resposne_local_var->_library_owned = 1;
    return vps_traffic_totals_resposne_local_var;
}

__attribute__((deprecated)) vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_create(
    vps_traffic_totals_section_response_t *day,
    vps_traffic_totals_section_response_t *month,
    vps_traffic_totals_section_response_t *year,
    vps_traffic_totals_section_response_t *all
    ) {
    return vps_traffic_totals_resposne_create_internal (
        day,
        month,
        year,
        all
        );
}

void vps_traffic_totals_resposne_free(vps_traffic_totals_resposne_t *vps_traffic_totals_resposne) {
    if(NULL == vps_traffic_totals_resposne){
        return ;
    }
    if(vps_traffic_totals_resposne->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_totals_resposne_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_totals_resposne->day) {
        vps_traffic_totals_section_response_free(vps_traffic_totals_resposne->day);
        vps_traffic_totals_resposne->day = NULL;
    }
    if (vps_traffic_totals_resposne->month) {
        vps_traffic_totals_section_response_free(vps_traffic_totals_resposne->month);
        vps_traffic_totals_resposne->month = NULL;
    }
    if (vps_traffic_totals_resposne->year) {
        vps_traffic_totals_section_response_free(vps_traffic_totals_resposne->year);
        vps_traffic_totals_resposne->year = NULL;
    }
    if (vps_traffic_totals_resposne->all) {
        vps_traffic_totals_section_response_free(vps_traffic_totals_resposne->all);
        vps_traffic_totals_resposne->all = NULL;
    }
    free(vps_traffic_totals_resposne);
}

cJSON *vps_traffic_totals_resposne_convertToJSON(vps_traffic_totals_resposne_t *vps_traffic_totals_resposne) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_totals_resposne->day
    if (!vps_traffic_totals_resposne->day) {
        goto fail;
    }
    cJSON *day_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_resposne->day);
    if(day_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "day", day_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_totals_resposne->month
    if (!vps_traffic_totals_resposne->month) {
        goto fail;
    }
    cJSON *month_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_resposne->month);
    if(month_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "month", month_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_totals_resposne->year
    if (!vps_traffic_totals_resposne->year) {
        goto fail;
    }
    cJSON *year_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_resposne->year);
    if(year_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "year", year_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_totals_resposne->all
    if (!vps_traffic_totals_resposne->all) {
        goto fail;
    }
    cJSON *all_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_resposne->all);
    if(all_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "all", all_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_parseFromJSON(cJSON *vps_traffic_totals_resposneJSON){

    vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_local_var = NULL;

    // define the local variable for vps_traffic_totals_resposne->day
    vps_traffic_totals_section_response_t *day_local_nonprim = NULL;

    // define the local variable for vps_traffic_totals_resposne->month
    vps_traffic_totals_section_response_t *month_local_nonprim = NULL;

    // define the local variable for vps_traffic_totals_resposne->year
    vps_traffic_totals_section_response_t *year_local_nonprim = NULL;

    // define the local variable for vps_traffic_totals_resposne->all
    vps_traffic_totals_section_response_t *all_local_nonprim = NULL;

    // vps_traffic_totals_resposne->day
    cJSON *day = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_resposneJSON, "day");
    if (cJSON_IsNull(day)) {
        day = NULL;
    }
    if (!day) {
        goto end;
    }

    
    day_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(day); //nonprimitive

    // vps_traffic_totals_resposne->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_resposneJSON, "month");
    if (cJSON_IsNull(month)) {
        month = NULL;
    }
    if (!month) {
        goto end;
    }

    
    month_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(month); //nonprimitive

    // vps_traffic_totals_resposne->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_resposneJSON, "year");
    if (cJSON_IsNull(year)) {
        year = NULL;
    }
    if (!year) {
        goto end;
    }

    
    year_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(year); //nonprimitive

    // vps_traffic_totals_resposne->all
    cJSON *all = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_resposneJSON, "all");
    if (cJSON_IsNull(all)) {
        all = NULL;
    }
    if (!all) {
        goto end;
    }

    
    all_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(all); //nonprimitive


    vps_traffic_totals_resposne_local_var = vps_traffic_totals_resposne_create_internal (
        day_local_nonprim,
        month_local_nonprim,
        year_local_nonprim,
        all_local_nonprim
        );

    return vps_traffic_totals_resposne_local_var;
end:
    if (day_local_nonprim) {
        vps_traffic_totals_section_response_free(day_local_nonprim);
        day_local_nonprim = NULL;
    }
    if (month_local_nonprim) {
        vps_traffic_totals_section_response_free(month_local_nonprim);
        month_local_nonprim = NULL;
    }
    if (year_local_nonprim) {
        vps_traffic_totals_section_response_free(year_local_nonprim);
        year_local_nonprim = NULL;
    }
    if (all_local_nonprim) {
        vps_traffic_totals_section_response_free(all_local_nonprim);
        all_local_nonprim = NULL;
    }
    return NULL;

}
