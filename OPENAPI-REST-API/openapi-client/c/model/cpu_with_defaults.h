/*
 * cpu_with_defaults.h
 *
 * 
 */

#ifndef _cpu_with_defaults_H_
#define _cpu_with_defaults_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cpu_with_defaults_t cpu_with_defaults_t;

#include "hard_drive.h"
#include "memory_option.h"



typedef struct cpu_with_defaults_t {
    int *id; //numeric
    char *short_desc; // string
    char *long_desc; // string
    char *type; // string
    char *speed; // string
    char *num_cores; // string
    char *num_cpus; // string
    char *benchmark; // string
    double *monthly_price; //numeric
    char *monthly_price_display; // string
    char *max_ram; // string
    char *min_ram; // string
    char *max_lff; // string
    char *max_sff; // string
    char *max_nve; // string
    char *visible; // string
    char *active; // string
    struct memory_option_t *memory_det; //model
    struct hard_drive_t *hd_det; //model
    char *monthly_fee; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cpu_with_defaults_t;

__attribute__((deprecated)) cpu_with_defaults_t *cpu_with_defaults_create(
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
    char *active,
    memory_option_t *memory_det,
    hard_drive_t *hd_det,
    char *monthly_fee
);

void cpu_with_defaults_free(cpu_with_defaults_t *cpu_with_defaults);

cpu_with_defaults_t *cpu_with_defaults_parseFromJSON(cJSON *cpu_with_defaultsJSON);

cJSON *cpu_with_defaults_convertToJSON(cpu_with_defaults_t *cpu_with_defaults);

#endif /* _cpu_with_defaults_H_ */

