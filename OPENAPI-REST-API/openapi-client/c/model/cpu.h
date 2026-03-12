/*
 * cpu.h
 *
 * A CPU option available for dedicated server ordering.
 */

#ifndef _cpu_H_
#define _cpu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cpu_t cpu_t;




typedef struct cpu_t {
    int id; //numeric
    char *short_desc; // string
    char *long_desc; // string
    char *type; // string
    char *speed; // string
    char *num_cores; // string
    char *num_cpus; // string
    char *benchmark; // string
    double monthly_price; //numeric
    char *monthly_price_display; // string
    char *max_ram; // string
    char *min_ram; // string
    char *max_lff; // string
    char *max_sff; // string
    char *max_nve; // string
    char *visible; // string
    char *active; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cpu_t;

__attribute__((deprecated)) cpu_t *cpu_create(
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
    char *active
);

void cpu_free(cpu_t *cpu);

cpu_t *cpu_parseFromJSON(cJSON *cpuJSON);

cJSON *cpu_convertToJSON(cpu_t *cpu);

#endif /* _cpu_H_ */

