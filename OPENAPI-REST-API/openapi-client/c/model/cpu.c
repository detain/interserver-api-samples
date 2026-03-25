#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cpu.h"



static cpu_t *cpu_create_internal(
    int *id,
    char *short_desc,
    char *long_desc,
    char *type,
    char *speed,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    double *monthly_price,
    char *monthly_price_display,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    char *active
    ) {
    cpu_t *cpu_local_var = malloc(sizeof(cpu_t));
    if (!cpu_local_var) {
        return NULL;
    }
    memset(cpu_local_var, 0, sizeof(cpu_t));
    cpu_local_var->_library_owned = 1;
    cpu_local_var->id = id;
    cpu_local_var->short_desc = short_desc;
    cpu_local_var->long_desc = long_desc;
    cpu_local_var->type = type;
    cpu_local_var->speed = speed;
    cpu_local_var->num_cores = num_cores;
    cpu_local_var->num_cpus = num_cpus;
    cpu_local_var->benchmark = benchmark;
    cpu_local_var->monthly_price = monthly_price;
    cpu_local_var->monthly_price_display = monthly_price_display;
    cpu_local_var->max_ram = max_ram;
    cpu_local_var->min_ram = min_ram;
    cpu_local_var->max_lff = max_lff;
    cpu_local_var->max_sff = max_sff;
    cpu_local_var->max_nve = max_nve;
    cpu_local_var->visible = visible;
    cpu_local_var->active = active;
    return cpu_local_var;
}

__attribute__((deprecated)) cpu_t *cpu_create(
    int *id,
    char *short_desc,
    char *long_desc,
    char *type,
    char *speed,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    double *monthly_price,
    char *monthly_price_display,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    char *active
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    double *monthly_price_copy = NULL;
    if (monthly_price) {
        monthly_price_copy = malloc(sizeof(double));
        if (monthly_price_copy) *monthly_price_copy = *monthly_price;
    }
    cpu_t *result = cpu_create_internal (
        id_copy,
        short_desc,
        long_desc,
        type,
        speed,
        num_cores,
        num_cpus,
        benchmark,
        monthly_price_copy,
        monthly_price_display,
        max_ram,
        min_ram,
        max_lff,
        max_sff,
        max_nve,
        visible,
        active
        );
    if (!result) {
        free(id_copy);
        free(monthly_price_copy);
    }
    return result;
}

void cpu_free(cpu_t *cpu) {
    if(NULL == cpu){
        return ;
    }
    if(cpu->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cpu_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cpu->id) {
        free(cpu->id);
        cpu->id = NULL;
    }
    if (cpu->short_desc) {
        free(cpu->short_desc);
        cpu->short_desc = NULL;
    }
    if (cpu->long_desc) {
        free(cpu->long_desc);
        cpu->long_desc = NULL;
    }
    if (cpu->type) {
        free(cpu->type);
        cpu->type = NULL;
    }
    if (cpu->speed) {
        free(cpu->speed);
        cpu->speed = NULL;
    }
    if (cpu->num_cores) {
        free(cpu->num_cores);
        cpu->num_cores = NULL;
    }
    if (cpu->num_cpus) {
        free(cpu->num_cpus);
        cpu->num_cpus = NULL;
    }
    if (cpu->benchmark) {
        free(cpu->benchmark);
        cpu->benchmark = NULL;
    }
    if (cpu->monthly_price) {
        free(cpu->monthly_price);
        cpu->monthly_price = NULL;
    }
    if (cpu->monthly_price_display) {
        free(cpu->monthly_price_display);
        cpu->monthly_price_display = NULL;
    }
    if (cpu->max_ram) {
        free(cpu->max_ram);
        cpu->max_ram = NULL;
    }
    if (cpu->min_ram) {
        free(cpu->min_ram);
        cpu->min_ram = NULL;
    }
    if (cpu->max_lff) {
        free(cpu->max_lff);
        cpu->max_lff = NULL;
    }
    if (cpu->max_sff) {
        free(cpu->max_sff);
        cpu->max_sff = NULL;
    }
    if (cpu->max_nve) {
        free(cpu->max_nve);
        cpu->max_nve = NULL;
    }
    if (cpu->visible) {
        free(cpu->visible);
        cpu->visible = NULL;
    }
    if (cpu->active) {
        free(cpu->active);
        cpu->active = NULL;
    }
    free(cpu);
}

cJSON *cpu_convertToJSON(cpu_t *cpu) {
    cJSON *item = cJSON_CreateObject();

    // cpu->id
    if(cpu->id) {
    if(cJSON_AddNumberToObject(item, "id", *cpu->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // cpu->short_desc
    if(cpu->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", cpu->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // cpu->long_desc
    if(cpu->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", cpu->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // cpu->type
    if(cpu->type) {
    if(cJSON_AddStringToObject(item, "type", cpu->type) == NULL) {
    goto fail; //String
    }
    }


    // cpu->speed
    if(cpu->speed) {
    if(cJSON_AddStringToObject(item, "speed", cpu->speed) == NULL) {
    goto fail; //String
    }
    }


    // cpu->num_cores
    if(cpu->num_cores) {
    if(cJSON_AddStringToObject(item, "num_cores", cpu->num_cores) == NULL) {
    goto fail; //String
    }
    }


    // cpu->num_cpus
    if(cpu->num_cpus) {
    if(cJSON_AddStringToObject(item, "num_cpus", cpu->num_cpus) == NULL) {
    goto fail; //String
    }
    }


    // cpu->benchmark
    if(cpu->benchmark) {
    if(cJSON_AddStringToObject(item, "benchmark", cpu->benchmark) == NULL) {
    goto fail; //String
    }
    }


    // cpu->monthly_price
    if(cpu->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", *cpu->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // cpu->monthly_price_display
    if(cpu->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", cpu->monthly_price_display) == NULL) {
    goto fail; //String
    }
    }


    // cpu->max_ram
    if(cpu->max_ram) {
    if(cJSON_AddStringToObject(item, "max_ram", cpu->max_ram) == NULL) {
    goto fail; //String
    }
    }


    // cpu->min_ram
    if(cpu->min_ram) {
    if(cJSON_AddStringToObject(item, "min_ram", cpu->min_ram) == NULL) {
    goto fail; //String
    }
    }


    // cpu->max_lff
    if(cpu->max_lff) {
    if(cJSON_AddStringToObject(item, "max_lff", cpu->max_lff) == NULL) {
    goto fail; //String
    }
    }


    // cpu->max_sff
    if(cpu->max_sff) {
    if(cJSON_AddStringToObject(item, "max_sff", cpu->max_sff) == NULL) {
    goto fail; //String
    }
    }


    // cpu->max_nve
    if(cpu->max_nve) {
    if(cJSON_AddStringToObject(item, "max_nve", cpu->max_nve) == NULL) {
    goto fail; //String
    }
    }


    // cpu->visible
    if(cpu->visible) {
    if(cJSON_AddStringToObject(item, "visible", cpu->visible) == NULL) {
    goto fail; //String
    }
    }


    // cpu->active
    if(cpu->active) {
    if(cJSON_AddStringToObject(item, "active", cpu->active) == NULL) {
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

cpu_t *cpu_parseFromJSON(cJSON *cpuJSON){

    cpu_t *cpu_local_var = NULL;

    // define the local variable for cpu->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    char *long_desc_local_str = NULL;

    char *type_local_str = NULL;

    char *speed_local_str = NULL;

    char *num_cores_local_str = NULL;

    char *num_cpus_local_str = NULL;

    char *benchmark_local_str = NULL;

    // define the local variable for cpu->monthly_price
    double *monthly_price_local_var = NULL;

    char *monthly_price_display_local_str = NULL;

    char *max_ram_local_str = NULL;

    char *min_ram_local_str = NULL;

    char *max_lff_local_str = NULL;

    char *max_sff_local_str = NULL;

    char *max_nve_local_str = NULL;

    char *visible_local_str = NULL;

    char *active_local_str = NULL;

    // cpu->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cpuJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
    }

    // cpu->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(cpuJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // cpu->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(cpuJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // cpu->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(cpuJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // cpu->speed
    cJSON *speed = cJSON_GetObjectItemCaseSensitive(cpuJSON, "speed");
    if (cJSON_IsNull(speed)) {
        speed = NULL;
    }
    if (speed) { 
    if(!cJSON_IsString(speed) && !cJSON_IsNull(speed))
    {
    goto end; //String
    }
    }

    // cpu->num_cores
    cJSON *num_cores = cJSON_GetObjectItemCaseSensitive(cpuJSON, "num_cores");
    if (cJSON_IsNull(num_cores)) {
        num_cores = NULL;
    }
    if (num_cores) { 
    if(!cJSON_IsString(num_cores) && !cJSON_IsNull(num_cores))
    {
    goto end; //String
    }
    }

    // cpu->num_cpus
    cJSON *num_cpus = cJSON_GetObjectItemCaseSensitive(cpuJSON, "num_cpus");
    if (cJSON_IsNull(num_cpus)) {
        num_cpus = NULL;
    }
    if (num_cpus) { 
    if(!cJSON_IsString(num_cpus) && !cJSON_IsNull(num_cpus))
    {
    goto end; //String
    }
    }

    // cpu->benchmark
    cJSON *benchmark = cJSON_GetObjectItemCaseSensitive(cpuJSON, "benchmark");
    if (cJSON_IsNull(benchmark)) {
        benchmark = NULL;
    }
    if (benchmark) { 
    if(!cJSON_IsString(benchmark) && !cJSON_IsNull(benchmark))
    {
    goto end; //String
    }
    }

    // cpu->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(cpuJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }

    // cpu->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(cpuJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }

    // cpu->max_ram
    cJSON *max_ram = cJSON_GetObjectItemCaseSensitive(cpuJSON, "max_ram");
    if (cJSON_IsNull(max_ram)) {
        max_ram = NULL;
    }
    if (max_ram) { 
    if(!cJSON_IsString(max_ram) && !cJSON_IsNull(max_ram))
    {
    goto end; //String
    }
    }

    // cpu->min_ram
    cJSON *min_ram = cJSON_GetObjectItemCaseSensitive(cpuJSON, "min_ram");
    if (cJSON_IsNull(min_ram)) {
        min_ram = NULL;
    }
    if (min_ram) { 
    if(!cJSON_IsString(min_ram) && !cJSON_IsNull(min_ram))
    {
    goto end; //String
    }
    }

    // cpu->max_lff
    cJSON *max_lff = cJSON_GetObjectItemCaseSensitive(cpuJSON, "max_lff");
    if (cJSON_IsNull(max_lff)) {
        max_lff = NULL;
    }
    if (max_lff) { 
    if(!cJSON_IsString(max_lff) && !cJSON_IsNull(max_lff))
    {
    goto end; //String
    }
    }

    // cpu->max_sff
    cJSON *max_sff = cJSON_GetObjectItemCaseSensitive(cpuJSON, "max_sff");
    if (cJSON_IsNull(max_sff)) {
        max_sff = NULL;
    }
    if (max_sff) { 
    if(!cJSON_IsString(max_sff) && !cJSON_IsNull(max_sff))
    {
    goto end; //String
    }
    }

    // cpu->max_nve
    cJSON *max_nve = cJSON_GetObjectItemCaseSensitive(cpuJSON, "max_nve");
    if (cJSON_IsNull(max_nve)) {
        max_nve = NULL;
    }
    if (max_nve) { 
    if(!cJSON_IsString(max_nve) && !cJSON_IsNull(max_nve))
    {
    goto end; //String
    }
    }

    // cpu->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(cpuJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // cpu->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(cpuJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsString(active) && !cJSON_IsNull(active))
    {
    goto end; //String
    }
    }


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (long_desc && !cJSON_IsNull(long_desc)) long_desc_local_str = strdup(long_desc->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (speed && !cJSON_IsNull(speed)) speed_local_str = strdup(speed->valuestring);
    if (num_cores && !cJSON_IsNull(num_cores)) num_cores_local_str = strdup(num_cores->valuestring);
    if (num_cpus && !cJSON_IsNull(num_cpus)) num_cpus_local_str = strdup(num_cpus->valuestring);
    if (benchmark && !cJSON_IsNull(benchmark)) benchmark_local_str = strdup(benchmark->valuestring);
    if (monthly_price_display && !cJSON_IsNull(monthly_price_display)) monthly_price_display_local_str = strdup(monthly_price_display->valuestring);
    if (max_ram && !cJSON_IsNull(max_ram)) max_ram_local_str = strdup(max_ram->valuestring);
    if (min_ram && !cJSON_IsNull(min_ram)) min_ram_local_str = strdup(min_ram->valuestring);
    if (max_lff && !cJSON_IsNull(max_lff)) max_lff_local_str = strdup(max_lff->valuestring);
    if (max_sff && !cJSON_IsNull(max_sff)) max_sff_local_str = strdup(max_sff->valuestring);
    if (max_nve && !cJSON_IsNull(max_nve)) max_nve_local_str = strdup(max_nve->valuestring);
    if (visible && !cJSON_IsNull(visible)) visible_local_str = strdup(visible->valuestring);
    if (active && !cJSON_IsNull(active)) active_local_str = strdup(active->valuestring);

    cpu_local_var = cpu_create_internal (
        id_local_var,
        short_desc_local_str,
        long_desc_local_str,
        type_local_str,
        speed_local_str,
        num_cores_local_str,
        num_cpus_local_str,
        benchmark_local_str,
        monthly_price_local_var,
        monthly_price_display_local_str,
        max_ram_local_str,
        min_ram_local_str,
        max_lff_local_str,
        max_sff_local_str,
        max_nve_local_str,
        visible_local_str,
        active_local_str
        );

    if (!cpu_local_var) {
        goto end;
    }

    return cpu_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (long_desc_local_str) {
        free(long_desc_local_str);
        long_desc_local_str = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (speed_local_str) {
        free(speed_local_str);
        speed_local_str = NULL;
    }
    if (num_cores_local_str) {
        free(num_cores_local_str);
        num_cores_local_str = NULL;
    }
    if (num_cpus_local_str) {
        free(num_cpus_local_str);
        num_cpus_local_str = NULL;
    }
    if (benchmark_local_str) {
        free(benchmark_local_str);
        benchmark_local_str = NULL;
    }
    if (monthly_price_local_var) {
        free(monthly_price_local_var);
        monthly_price_local_var = NULL;
    }
    if (monthly_price_display_local_str) {
        free(monthly_price_display_local_str);
        monthly_price_display_local_str = NULL;
    }
    if (max_ram_local_str) {
        free(max_ram_local_str);
        max_ram_local_str = NULL;
    }
    if (min_ram_local_str) {
        free(min_ram_local_str);
        min_ram_local_str = NULL;
    }
    if (max_lff_local_str) {
        free(max_lff_local_str);
        max_lff_local_str = NULL;
    }
    if (max_sff_local_str) {
        free(max_sff_local_str);
        max_sff_local_str = NULL;
    }
    if (max_nve_local_str) {
        free(max_nve_local_str);
        max_nve_local_str = NULL;
    }
    if (visible_local_str) {
        free(visible_local_str);
        visible_local_str = NULL;
    }
    if (active_local_str) {
        free(active_local_str);
        active_local_str = NULL;
    }
    return NULL;

}
