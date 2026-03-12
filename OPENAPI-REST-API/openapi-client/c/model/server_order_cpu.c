#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_cpu.h"



static server_order_cpu_t *server_order_cpu_create_internal(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *location,
    char *fsb,
    char *manu,
    char *type,
    char *speed,
    char *cache,
    char *active,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    int monthly_price,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    any_type_t *hd_ids,
    char *price_display,
    char *monthly_price_display
    ) {
    server_order_cpu_t *server_order_cpu_local_var = malloc(sizeof(server_order_cpu_t));
    if (!server_order_cpu_local_var) {
        return NULL;
    }
    server_order_cpu_local_var->id = id;
    server_order_cpu_local_var->price = price;
    server_order_cpu_local_var->img = img;
    server_order_cpu_local_var->short_desc = short_desc;
    server_order_cpu_local_var->long_desc = long_desc;
    server_order_cpu_local_var->location = location;
    server_order_cpu_local_var->fsb = fsb;
    server_order_cpu_local_var->manu = manu;
    server_order_cpu_local_var->type = type;
    server_order_cpu_local_var->speed = speed;
    server_order_cpu_local_var->cache = cache;
    server_order_cpu_local_var->active = active;
    server_order_cpu_local_var->num_cores = num_cores;
    server_order_cpu_local_var->num_cpus = num_cpus;
    server_order_cpu_local_var->benchmark = benchmark;
    server_order_cpu_local_var->monthly_price = monthly_price;
    server_order_cpu_local_var->max_ram = max_ram;
    server_order_cpu_local_var->min_ram = min_ram;
    server_order_cpu_local_var->max_lff = max_lff;
    server_order_cpu_local_var->max_sff = max_sff;
    server_order_cpu_local_var->max_nve = max_nve;
    server_order_cpu_local_var->visible = visible;
    server_order_cpu_local_var->hd_ids = hd_ids;
    server_order_cpu_local_var->price_display = price_display;
    server_order_cpu_local_var->monthly_price_display = monthly_price_display;

    server_order_cpu_local_var->_library_owned = 1;
    return server_order_cpu_local_var;
}

__attribute__((deprecated)) server_order_cpu_t *server_order_cpu_create(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *location,
    char *fsb,
    char *manu,
    char *type,
    char *speed,
    char *cache,
    char *active,
    char *num_cores,
    char *num_cpus,
    char *benchmark,
    int monthly_price,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    any_type_t *hd_ids,
    char *price_display,
    char *monthly_price_display
    ) {
    return server_order_cpu_create_internal (
        id,
        price,
        img,
        short_desc,
        long_desc,
        location,
        fsb,
        manu,
        type,
        speed,
        cache,
        active,
        num_cores,
        num_cpus,
        benchmark,
        monthly_price,
        max_ram,
        min_ram,
        max_lff,
        max_sff,
        max_nve,
        visible,
        hd_ids,
        price_display,
        monthly_price_display
        );
}

void server_order_cpu_free(server_order_cpu_t *server_order_cpu) {
    if(NULL == server_order_cpu){
        return ;
    }
    if(server_order_cpu->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_cpu_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_cpu->id) {
        free(server_order_cpu->id);
        server_order_cpu->id = NULL;
    }
    if (server_order_cpu->img) {
        free(server_order_cpu->img);
        server_order_cpu->img = NULL;
    }
    if (server_order_cpu->short_desc) {
        free(server_order_cpu->short_desc);
        server_order_cpu->short_desc = NULL;
    }
    if (server_order_cpu->long_desc) {
        free(server_order_cpu->long_desc);
        server_order_cpu->long_desc = NULL;
    }
    if (server_order_cpu->location) {
        free(server_order_cpu->location);
        server_order_cpu->location = NULL;
    }
    if (server_order_cpu->fsb) {
        free(server_order_cpu->fsb);
        server_order_cpu->fsb = NULL;
    }
    if (server_order_cpu->manu) {
        free(server_order_cpu->manu);
        server_order_cpu->manu = NULL;
    }
    if (server_order_cpu->type) {
        free(server_order_cpu->type);
        server_order_cpu->type = NULL;
    }
    if (server_order_cpu->speed) {
        free(server_order_cpu->speed);
        server_order_cpu->speed = NULL;
    }
    if (server_order_cpu->cache) {
        free(server_order_cpu->cache);
        server_order_cpu->cache = NULL;
    }
    if (server_order_cpu->active) {
        free(server_order_cpu->active);
        server_order_cpu->active = NULL;
    }
    if (server_order_cpu->num_cores) {
        free(server_order_cpu->num_cores);
        server_order_cpu->num_cores = NULL;
    }
    if (server_order_cpu->num_cpus) {
        free(server_order_cpu->num_cpus);
        server_order_cpu->num_cpus = NULL;
    }
    if (server_order_cpu->benchmark) {
        free(server_order_cpu->benchmark);
        server_order_cpu->benchmark = NULL;
    }
    if (server_order_cpu->max_ram) {
        free(server_order_cpu->max_ram);
        server_order_cpu->max_ram = NULL;
    }
    if (server_order_cpu->min_ram) {
        free(server_order_cpu->min_ram);
        server_order_cpu->min_ram = NULL;
    }
    if (server_order_cpu->max_lff) {
        free(server_order_cpu->max_lff);
        server_order_cpu->max_lff = NULL;
    }
    if (server_order_cpu->max_sff) {
        free(server_order_cpu->max_sff);
        server_order_cpu->max_sff = NULL;
    }
    if (server_order_cpu->max_nve) {
        free(server_order_cpu->max_nve);
        server_order_cpu->max_nve = NULL;
    }
    if (server_order_cpu->visible) {
        free(server_order_cpu->visible);
        server_order_cpu->visible = NULL;
    }
    if (server_order_cpu->hd_ids) {
        _free(server_order_cpu->hd_ids);
        server_order_cpu->hd_ids = NULL;
    }
    if (server_order_cpu->price_display) {
        free(server_order_cpu->price_display);
        server_order_cpu->price_display = NULL;
    }
    if (server_order_cpu->monthly_price_display) {
        free(server_order_cpu->monthly_price_display);
        server_order_cpu->monthly_price_display = NULL;
    }
    free(server_order_cpu);
}

cJSON *server_order_cpu_convertToJSON(server_order_cpu_t *server_order_cpu) {
    cJSON *item = cJSON_CreateObject();

    // server_order_cpu->id
    if(server_order_cpu->id) {
    if(cJSON_AddStringToObject(item, "id", server_order_cpu->id) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->price
    if(server_order_cpu->price) {
    if(cJSON_AddNumberToObject(item, "price", server_order_cpu->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_cpu->img
    if(server_order_cpu->img) {
    if(cJSON_AddStringToObject(item, "img", server_order_cpu->img) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->short_desc
    if(server_order_cpu->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", server_order_cpu->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->long_desc
    if(server_order_cpu->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", server_order_cpu->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->location
    if(server_order_cpu->location) {
    if(cJSON_AddStringToObject(item, "location", server_order_cpu->location) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->fsb
    if(server_order_cpu->fsb) {
    if(cJSON_AddStringToObject(item, "fsb", server_order_cpu->fsb) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->manu
    if(server_order_cpu->manu) {
    if(cJSON_AddStringToObject(item, "manu", server_order_cpu->manu) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->type
    if(server_order_cpu->type) {
    if(cJSON_AddStringToObject(item, "type", server_order_cpu->type) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->speed
    if(server_order_cpu->speed) {
    if(cJSON_AddStringToObject(item, "speed", server_order_cpu->speed) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->cache
    if(server_order_cpu->cache) {
    if(cJSON_AddStringToObject(item, "cache", server_order_cpu->cache) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->active
    if(server_order_cpu->active) {
    if(cJSON_AddStringToObject(item, "active", server_order_cpu->active) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->num_cores
    if(server_order_cpu->num_cores) {
    if(cJSON_AddStringToObject(item, "num_cores", server_order_cpu->num_cores) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->num_cpus
    if(server_order_cpu->num_cpus) {
    if(cJSON_AddStringToObject(item, "num_cpus", server_order_cpu->num_cpus) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->benchmark
    if(server_order_cpu->benchmark) {
    if(cJSON_AddStringToObject(item, "benchmark", server_order_cpu->benchmark) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->monthly_price
    if(server_order_cpu->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", server_order_cpu->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_cpu->max_ram
    if(server_order_cpu->max_ram) {
    if(cJSON_AddStringToObject(item, "max_ram", server_order_cpu->max_ram) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->min_ram
    if(server_order_cpu->min_ram) {
    if(cJSON_AddStringToObject(item, "min_ram", server_order_cpu->min_ram) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->max_lff
    if(server_order_cpu->max_lff) {
    if(cJSON_AddStringToObject(item, "max_lff", server_order_cpu->max_lff) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->max_sff
    if(server_order_cpu->max_sff) {
    if(cJSON_AddStringToObject(item, "max_sff", server_order_cpu->max_sff) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->max_nve
    if(server_order_cpu->max_nve) {
    if(cJSON_AddStringToObject(item, "max_nve", server_order_cpu->max_nve) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->visible
    if(server_order_cpu->visible) {
    if(cJSON_AddStringToObject(item, "visible", server_order_cpu->visible) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->hd_ids
    if(server_order_cpu->hd_ids) {
    cJSON *hd_ids_local_JSON = _convertToJSON(server_order_cpu->hd_ids);
    if(hd_ids_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "hd_ids", hd_ids_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // server_order_cpu->price_display
    if(server_order_cpu->price_display) {
    if(cJSON_AddStringToObject(item, "price_display", server_order_cpu->price_display) == NULL) {
    goto fail; //String
    }
    }


    // server_order_cpu->monthly_price_display
    if(server_order_cpu->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", server_order_cpu->monthly_price_display) == NULL) {
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

server_order_cpu_t *server_order_cpu_parseFromJSON(cJSON *server_order_cpuJSON){

    server_order_cpu_t *server_order_cpu_local_var = NULL;

    // define the local variable for server_order_cpu->hd_ids
    _t *hd_ids_local_nonprim = NULL;

    // server_order_cpu->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // server_order_cpu->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // server_order_cpu->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // server_order_cpu->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // server_order_cpu->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // server_order_cpu->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // server_order_cpu->fsb
    cJSON *fsb = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "fsb");
    if (cJSON_IsNull(fsb)) {
        fsb = NULL;
    }
    if (fsb) { 
    if(!cJSON_IsString(fsb) && !cJSON_IsNull(fsb))
    {
    goto end; //String
    }
    }

    // server_order_cpu->manu
    cJSON *manu = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "manu");
    if (cJSON_IsNull(manu)) {
        manu = NULL;
    }
    if (manu) { 
    if(!cJSON_IsString(manu) && !cJSON_IsNull(manu))
    {
    goto end; //String
    }
    }

    // server_order_cpu->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // server_order_cpu->speed
    cJSON *speed = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "speed");
    if (cJSON_IsNull(speed)) {
        speed = NULL;
    }
    if (speed) { 
    if(!cJSON_IsString(speed) && !cJSON_IsNull(speed))
    {
    goto end; //String
    }
    }

    // server_order_cpu->cache
    cJSON *cache = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "cache");
    if (cJSON_IsNull(cache)) {
        cache = NULL;
    }
    if (cache) { 
    if(!cJSON_IsString(cache) && !cJSON_IsNull(cache))
    {
    goto end; //String
    }
    }

    // server_order_cpu->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsString(active) && !cJSON_IsNull(active))
    {
    goto end; //String
    }
    }

    // server_order_cpu->num_cores
    cJSON *num_cores = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "num_cores");
    if (cJSON_IsNull(num_cores)) {
        num_cores = NULL;
    }
    if (num_cores) { 
    if(!cJSON_IsString(num_cores) && !cJSON_IsNull(num_cores))
    {
    goto end; //String
    }
    }

    // server_order_cpu->num_cpus
    cJSON *num_cpus = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "num_cpus");
    if (cJSON_IsNull(num_cpus)) {
        num_cpus = NULL;
    }
    if (num_cpus) { 
    if(!cJSON_IsString(num_cpus) && !cJSON_IsNull(num_cpus))
    {
    goto end; //String
    }
    }

    // server_order_cpu->benchmark
    cJSON *benchmark = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "benchmark");
    if (cJSON_IsNull(benchmark)) {
        benchmark = NULL;
    }
    if (benchmark) { 
    if(!cJSON_IsString(benchmark) && !cJSON_IsNull(benchmark))
    {
    goto end; //String
    }
    }

    // server_order_cpu->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // server_order_cpu->max_ram
    cJSON *max_ram = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "max_ram");
    if (cJSON_IsNull(max_ram)) {
        max_ram = NULL;
    }
    if (max_ram) { 
    if(!cJSON_IsString(max_ram) && !cJSON_IsNull(max_ram))
    {
    goto end; //String
    }
    }

    // server_order_cpu->min_ram
    cJSON *min_ram = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "min_ram");
    if (cJSON_IsNull(min_ram)) {
        min_ram = NULL;
    }
    if (min_ram) { 
    if(!cJSON_IsString(min_ram) && !cJSON_IsNull(min_ram))
    {
    goto end; //String
    }
    }

    // server_order_cpu->max_lff
    cJSON *max_lff = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "max_lff");
    if (cJSON_IsNull(max_lff)) {
        max_lff = NULL;
    }
    if (max_lff) { 
    if(!cJSON_IsString(max_lff) && !cJSON_IsNull(max_lff))
    {
    goto end; //String
    }
    }

    // server_order_cpu->max_sff
    cJSON *max_sff = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "max_sff");
    if (cJSON_IsNull(max_sff)) {
        max_sff = NULL;
    }
    if (max_sff) { 
    if(!cJSON_IsString(max_sff) && !cJSON_IsNull(max_sff))
    {
    goto end; //String
    }
    }

    // server_order_cpu->max_nve
    cJSON *max_nve = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "max_nve");
    if (cJSON_IsNull(max_nve)) {
        max_nve = NULL;
    }
    if (max_nve) { 
    if(!cJSON_IsString(max_nve) && !cJSON_IsNull(max_nve))
    {
    goto end; //String
    }
    }

    // server_order_cpu->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // server_order_cpu->hd_ids
    cJSON *hd_ids = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "hd_ids");
    if (cJSON_IsNull(hd_ids)) {
        hd_ids = NULL;
    }
    if (hd_ids) { 
    hd_ids_local_nonprim = _parseFromJSON(hd_ids); //custom
    }

    // server_order_cpu->price_display
    cJSON *price_display = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "price_display");
    if (cJSON_IsNull(price_display)) {
        price_display = NULL;
    }
    if (price_display) { 
    if(!cJSON_IsString(price_display) && !cJSON_IsNull(price_display))
    {
    goto end; //String
    }
    }

    // server_order_cpu->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(server_order_cpuJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    server_order_cpu_local_var = server_order_cpu_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        img && !cJSON_IsNull(img) ? strdup(img->valuestring) : NULL,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        fsb && !cJSON_IsNull(fsb) ? strdup(fsb->valuestring) : NULL,
        manu && !cJSON_IsNull(manu) ? strdup(manu->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        speed && !cJSON_IsNull(speed) ? strdup(speed->valuestring) : NULL,
        cache && !cJSON_IsNull(cache) ? strdup(cache->valuestring) : NULL,
        active && !cJSON_IsNull(active) ? strdup(active->valuestring) : NULL,
        num_cores && !cJSON_IsNull(num_cores) ? strdup(num_cores->valuestring) : NULL,
        num_cpus && !cJSON_IsNull(num_cpus) ? strdup(num_cpus->valuestring) : NULL,
        benchmark && !cJSON_IsNull(benchmark) ? strdup(benchmark->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        max_ram && !cJSON_IsNull(max_ram) ? strdup(max_ram->valuestring) : NULL,
        min_ram && !cJSON_IsNull(min_ram) ? strdup(min_ram->valuestring) : NULL,
        max_lff && !cJSON_IsNull(max_lff) ? strdup(max_lff->valuestring) : NULL,
        max_sff && !cJSON_IsNull(max_sff) ? strdup(max_sff->valuestring) : NULL,
        max_nve && !cJSON_IsNull(max_nve) ? strdup(max_nve->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        hd_ids ? hd_ids_local_nonprim : NULL,
        price_display && !cJSON_IsNull(price_display) ? strdup(price_display->valuestring) : NULL,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return server_order_cpu_local_var;
end:
    if (hd_ids_local_nonprim) {
        _free(hd_ids_local_nonprim);
        hd_ids_local_nonprim = NULL;
    }
    return NULL;

}
