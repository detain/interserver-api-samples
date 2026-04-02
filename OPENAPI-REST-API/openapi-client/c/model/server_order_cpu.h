/*
 * server_order_cpu.h
 *
 * A CPU option available when ordering a dedicated server.
 */

#ifndef _server_order_cpu_H_
#define _server_order_cpu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_cpu_t server_order_cpu_t;




typedef struct server_order_cpu_t {
    char *id; // string
    int *price; //numeric
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    char *location; // string
    char *fsb; // string
    char *manu; // string
    char *type; // string
    char *speed; // string
    char *cache; // string
    char *active; // string
    char *num_cores; // string
    char *num_cpus; // string
    char *benchmark; // string
    int *monthly_price; //numeric
    char *max_ram; // string
    char *min_ram; // string
    char *max_lff; // string
    char *max_sff; // string
    char *max_nve; // string
    char *visible; // string
    char *hd_ids; // string
    char *price_display; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_cpu_t;

__attribute__((deprecated)) server_order_cpu_t *server_order_cpu_create(
    char *id,
    int *price,
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
    int *monthly_price,
    char *max_ram,
    char *min_ram,
    char *max_lff,
    char *max_sff,
    char *max_nve,
    char *visible,
    char *hd_ids,
    char *price_display,
    char *monthly_price_display
);

void server_order_cpu_free(server_order_cpu_t *server_order_cpu);

server_order_cpu_t *server_order_cpu_parseFromJSON(cJSON *server_order_cpuJSON);

cJSON *server_order_cpu_convertToJSON(server_order_cpu_t *server_order_cpu);

#endif /* _server_order_cpu_H_ */

