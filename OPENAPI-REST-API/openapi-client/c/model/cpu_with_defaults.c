#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cpu_with_defaults.h"



static cpu_with_defaults_t *cpu_with_defaults_create_internal(
    int id,
    char *short_desc,
    char *long_desc,
    char *type,
    char *speed,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    double monthly_price,
    char *monthly_price_display,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    char *active,
    memory_option_t *memory_det,
    hard_drive_t *hd_det,
    char *monthly_fee
    ) {
    cpu_with_defaults_t *cpu_with_defaults_local_var = malloc(sizeof(cpu_with_defaults_t));
    if (!cpu_with_defaults_local_var) {
        return NULL;
    }
    cpu_with_defaults_local_var->id = id;
    cpu_with_defaults_local_var->short_desc = short_desc;
    cpu_with_defaults_local_var->long_desc = long_desc;
    cpu_with_defaults_local_var->type = type;
    cpu_with_defaults_local_var->speed = speed;
    cpu_with_defaults_local_var->num_cores = num_cores;
    cpu_with_defaults_local_var->num_cpus = num_cpus;
    cpu_with_defaults_local_var->benchmark = benchmark;
    cpu_with_defaults_local_var->monthly_price = monthly_price;
    cpu_with_defaults_local_var->monthly_price_display = monthly_price_display;
    cpu_with_defaults_local_var->max_ram = max_ram;
    cpu_with_defaults_local_var->min_ram = min_ram;
    cpu_with_defaults_local_var->max_lff = max_lff;
    cpu_with_defaults_local_var->max_sff = max_sff;
    cpu_with_defaults_local_var->max_nve = max_nve;
    cpu_with_defaults_local_var->visible = visible;
    cpu_with_defaults_local_var->active = active;
    cpu_with_defaults_local_var->memory_det = memory_det;
    cpu_with_defaults_local_var->hd_det = hd_det;
    cpu_with_defaults_local_var->monthly_fee = monthly_fee;

    cpu_with_defaults_local_var->_library_owned = 1;
    return cpu_with_defaults_local_var;
}

__attribute__((deprecated)) cpu_with_defaults_t *cpu_with_defaults_create(
    int id,
    char *short_desc,
    char *long_desc,
    char *type,
    char *speed,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    double monthly_price,
    char *monthly_price_display,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    char *active,
    memory_option_t *memory_det,
    hard_drive_t *hd_det,
    char *monthly_fee
    ) {
    return cpu_with_defaults_create_internal (
        id,
        short_desc,
        long_desc,
        type,
        speed,
        num_cores,
        num_cpus,
        benchmark,
        monthly_price,
        monthly_price_display,
        max_ram,
        min_ram,
        max_lff,
        max_sff,
        max_nve,
        visible,
        active,
        memory_det,
        hd_det,
        monthly_fee
        );
}

void cpu_with_defaults_free(cpu_with_defaults_t *cpu_with_defaults) {
    if(NULL == cpu_with_defaults){
        return ;
    }
    if(cpu_with_defaults->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cpu_with_defaults_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cpu_with_defaults->short_desc) {
        free(cpu_with_defaults->short_desc);
        cpu_with_defaults->short_desc = NULL;
    }
    if (cpu_with_defaults->long_desc) {
        free(cpu_with_defaults->long_desc);
        cpu_with_defaults->long_desc = NULL;
    }
    if (cpu_with_defaults->type) {
        free(cpu_with_defaults->type);
        cpu_with_defaults->type = NULL;
    }
    if (cpu_with_defaults->speed) {
        free(cpu_with_defaults->speed);
        cpu_with_defaults->speed = NULL;
    }
    if (cpu_with_defaults->num_cores) {
        free(cpu_with_defaults->num_cores);
        cpu_with_defaults->num_cores = NULL;
    }
    if (cpu_with_defaults->num_cpus) {
        free(cpu_with_defaults->num_cpus);
        cpu_with_defaults->num_cpus = NULL;
    }
    if (cpu_with_defaults->benchmark) {
        free(cpu_with_defaults->benchmark);
        cpu_with_defaults->benchmark = NULL;
    }
    if (cpu_with_defaults->monthly_price_display) {
        free(cpu_with_defaults->monthly_price_display);
        cpu_with_defaults->monthly_price_display = NULL;
    }
    if (cpu_with_defaults->max_ram) {
        free(cpu_with_defaults->max_ram);
        cpu_with_defaults->max_ram = NULL;
    }
    if (cpu_with_defaults->min_ram) {
        free(cpu_with_defaults->min_ram);
        cpu_with_defaults->min_ram = NULL;
    }
    if (cpu_with_defaults->max_lff) {
        free(cpu_with_defaults->max_lff);
        cpu_with_defaults->max_lff = NULL;
    }
    if (cpu_with_defaults->max_sff) {
        free(cpu_with_defaults->max_sff);
        cpu_with_defaults->max_sff = NULL;
    }
    if (cpu_with_defaults->max_nve) {
        free(cpu_with_defaults->max_nve);
        cpu_with_defaults->max_nve = NULL;
    }
    if (cpu_with_defaults->visible) {
        free(cpu_with_defaults->visible);
        cpu_with_defaults->visible = NULL;
    }
    if (cpu_with_defaults->active) {
        free(cpu_with_defaults->active);
        cpu_with_defaults->active = NULL;
    }
    if (cpu_with_defaults->memory_det) {
        memory_option_free(cpu_with_defaults->memory_det);
        cpu_with_defaults->memory_det = NULL;
    }
    if (cpu_with_defaults->hd_det) {
        hard_drive_free(cpu_with_defaults->hd_det);
        cpu_with_defaults->hd_det = NULL;
    }
    if (cpu_with_defaults->monthly_fee) {
        free(cpu_with_defaults->monthly_fee);
        cpu_with_defaults->monthly_fee = NULL;
    }
    free(cpu_with_defaults);
}

cJSON *cpu_with_defaults_convertToJSON(cpu_with_defaults_t *cpu_with_defaults) {
    cJSON *item = cJSON_CreateObject();

    // cpu_with_defaults->id
    if(cpu_with_defaults->id) {
    if(cJSON_AddNumberToObject(item, "id", cpu_with_defaults->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // cpu_with_defaults->short_desc
    if(cpu_with_defaults->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", cpu_with_defaults->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->long_desc
    if(cpu_with_defaults->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", cpu_with_defaults->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->type
    if(cpu_with_defaults->type) {
    if(cJSON_AddStringToObject(item, "type", cpu_with_defaults->type) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->speed
    if(cpu_with_defaults->speed) {
    if(cJSON_AddStringToObject(item, "speed", cpu_with_defaults->speed) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->num_cores
    if(cpu_with_defaults->num_cores) {
    if(cJSON_AddStringToObject(item, "num_cores", cpu_with_defaults->num_cores) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->num_cpus
    if(cpu_with_defaults->num_cpus) {
    if(cJSON_AddStringToObject(item, "num_cpus", cpu_with_defaults->num_cpus) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->benchmark
    if(cpu_with_defaults->benchmark) {
    if(cJSON_AddStringToObject(item, "benchmark", cpu_with_defaults->benchmark) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->monthly_price
    if(cpu_with_defaults->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", cpu_with_defaults->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // cpu_with_defaults->monthly_price_display
    if(cpu_with_defaults->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", cpu_with_defaults->monthly_price_display) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->max_ram
    if(cpu_with_defaults->max_ram) {
    if(cJSON_AddStringToObject(item, "max_ram", cpu_with_defaults->max_ram) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->min_ram
    if(cpu_with_defaults->min_ram) {
    if(cJSON_AddStringToObject(item, "min_ram", cpu_with_defaults->min_ram) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->max_lff
    if(cpu_with_defaults->max_lff) {
    if(cJSON_AddStringToObject(item, "max_lff", cpu_with_defaults->max_lff) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->max_sff
    if(cpu_with_defaults->max_sff) {
    if(cJSON_AddStringToObject(item, "max_sff", cpu_with_defaults->max_sff) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->max_nve
    if(cpu_with_defaults->max_nve) {
    if(cJSON_AddStringToObject(item, "max_nve", cpu_with_defaults->max_nve) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->visible
    if(cpu_with_defaults->visible) {
    if(cJSON_AddStringToObject(item, "visible", cpu_with_defaults->visible) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->active
    if(cpu_with_defaults->active) {
    if(cJSON_AddStringToObject(item, "active", cpu_with_defaults->active) == NULL) {
    goto fail; //String
    }
    }


    // cpu_with_defaults->memory_det
    if(cpu_with_defaults->memory_det) {
    cJSON *memory_det_local_JSON = memory_option_convertToJSON(cpu_with_defaults->memory_det);
    if(memory_det_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_det", memory_det_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cpu_with_defaults->hd_det
    if(cpu_with_defaults->hd_det) {
    cJSON *hd_det_local_JSON = hard_drive_convertToJSON(cpu_with_defaults->hd_det);
    if(hd_det_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hd_det", hd_det_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cpu_with_defaults->monthly_fee
    if(cpu_with_defaults->monthly_fee) {
    if(cJSON_AddStringToObject(item, "monthly_fee", cpu_with_defaults->monthly_fee) == NULL) {
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

cpu_with_defaults_t *cpu_with_defaults_parseFromJSON(cJSON *cpu_with_defaultsJSON){

    cpu_with_defaults_t *cpu_with_defaults_local_var = NULL;

    // define the local variable for cpu_with_defaults->memory_det
    memory_option_t *memory_det_local_nonprim = NULL;

    // define the local variable for cpu_with_defaults->hd_det
    hard_drive_t *hd_det_local_nonprim = NULL;

    // cpu_with_defaults->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // cpu_with_defaults->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->speed
    cJSON *speed = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "speed");
    if (cJSON_IsNull(speed)) {
        speed = NULL;
    }
    if (speed) { 
    if(!cJSON_IsString(speed) && !cJSON_IsNull(speed))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->num_cores
    cJSON *num_cores = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "num_cores");
    if (cJSON_IsNull(num_cores)) {
        num_cores = NULL;
    }
    if (num_cores) { 
    if(!cJSON_IsString(num_cores) && !cJSON_IsNull(num_cores))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->num_cpus
    cJSON *num_cpus = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "num_cpus");
    if (cJSON_IsNull(num_cpus)) {
        num_cpus = NULL;
    }
    if (num_cpus) { 
    if(!cJSON_IsString(num_cpus) && !cJSON_IsNull(num_cpus))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->benchmark
    cJSON *benchmark = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "benchmark");
    if (cJSON_IsNull(benchmark)) {
        benchmark = NULL;
    }
    if (benchmark) { 
    if(!cJSON_IsString(benchmark) && !cJSON_IsNull(benchmark))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // cpu_with_defaults->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->max_ram
    cJSON *max_ram = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "max_ram");
    if (cJSON_IsNull(max_ram)) {
        max_ram = NULL;
    }
    if (max_ram) { 
    if(!cJSON_IsString(max_ram) && !cJSON_IsNull(max_ram))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->min_ram
    cJSON *min_ram = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "min_ram");
    if (cJSON_IsNull(min_ram)) {
        min_ram = NULL;
    }
    if (min_ram) { 
    if(!cJSON_IsString(min_ram) && !cJSON_IsNull(min_ram))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->max_lff
    cJSON *max_lff = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "max_lff");
    if (cJSON_IsNull(max_lff)) {
        max_lff = NULL;
    }
    if (max_lff) { 
    if(!cJSON_IsString(max_lff) && !cJSON_IsNull(max_lff))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->max_sff
    cJSON *max_sff = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "max_sff");
    if (cJSON_IsNull(max_sff)) {
        max_sff = NULL;
    }
    if (max_sff) { 
    if(!cJSON_IsString(max_sff) && !cJSON_IsNull(max_sff))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->max_nve
    cJSON *max_nve = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "max_nve");
    if (cJSON_IsNull(max_nve)) {
        max_nve = NULL;
    }
    if (max_nve) { 
    if(!cJSON_IsString(max_nve) && !cJSON_IsNull(max_nve))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsString(active) && !cJSON_IsNull(active))
    {
    goto end; //String
    }
    }

    // cpu_with_defaults->memory_det
    cJSON *memory_det = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "memory_det");
    if (cJSON_IsNull(memory_det)) {
        memory_det = NULL;
    }
    if (memory_det) { 
    memory_det_local_nonprim = memory_option_parseFromJSON(memory_det); //nonprimitive
    }

    // cpu_with_defaults->hd_det
    cJSON *hd_det = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "hd_det");
    if (cJSON_IsNull(hd_det)) {
        hd_det = NULL;
    }
    if (hd_det) { 
    hd_det_local_nonprim = hard_drive_parseFromJSON(hd_det); //nonprimitive
    }

    // cpu_with_defaults->monthly_fee
    cJSON *monthly_fee = cJSON_GetObjectItemCaseSensitive(cpu_with_defaultsJSON, "monthly_fee");
    if (cJSON_IsNull(monthly_fee)) {
        monthly_fee = NULL;
    }
    if (monthly_fee) { 
    if(!cJSON_IsString(monthly_fee) && !cJSON_IsNull(monthly_fee))
    {
    goto end; //String
    }
    }


    cpu_with_defaults_local_var = cpu_with_defaults_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        speed && !cJSON_IsNull(speed) ? strdup(speed->valuestring) : NULL,
        num_cores && !cJSON_IsNull(num_cores) ? strdup(num_cores->valuestring) : NULL,
        num_cpus && !cJSON_IsNull(num_cpus) ? strdup(num_cpus->valuestring) : NULL,
        benchmark && !cJSON_IsNull(benchmark) ? strdup(benchmark->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL,
        max_ram && !cJSON_IsNull(max_ram) ? strdup(max_ram->valuestring) : NULL,
        min_ram && !cJSON_IsNull(min_ram) ? strdup(min_ram->valuestring) : NULL,
        max_lff && !cJSON_IsNull(max_lff) ? strdup(max_lff->valuestring) : NULL,
        max_sff && !cJSON_IsNull(max_sff) ? strdup(max_sff->valuestring) : NULL,
        max_nve && !cJSON_IsNull(max_nve) ? strdup(max_nve->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        active && !cJSON_IsNull(active) ? strdup(active->valuestring) : NULL,
        memory_det ? memory_det_local_nonprim : NULL,
        hd_det ? hd_det_local_nonprim : NULL,
        monthly_fee && !cJSON_IsNull(monthly_fee) ? strdup(monthly_fee->valuestring) : NULL
        );

    return cpu_with_defaults_local_var;
end:
    if (memory_det_local_nonprim) {
        memory_option_free(memory_det_local_nonprim);
        memory_det_local_nonprim = NULL;
    }
    if (hd_det_local_nonprim) {
        hard_drive_free(hd_det_local_nonprim);
        hd_det_local_nonprim = NULL;
    }
    return NULL;

}
