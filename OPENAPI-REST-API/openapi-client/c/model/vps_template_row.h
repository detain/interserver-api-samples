/*
 * vps_template_row.h
 *
 * A VPS OS Template.
 */

#ifndef _vps_template_row_H_
#define _vps_template_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_template_row_t vps_template_row_t;




typedef struct vps_template_row_t {
    char *template_id; // string
    char *template_type; // string
    char *template_os; // string
    char *template_version; // string
    char *template_bits; // string
    char *template_file; // string
    char *template_available; // string
    char *template_name; // string
    char *template_dir; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_template_row_t;

__attribute__((deprecated)) vps_template_row_t *vps_template_row_create(
    char *template_id,
    char *template_type,
    char *template_os,
    char *template_version,
    char *template_bits,
    char *template_file,
    char *template_available,
    char *template_name,
    char *template_dir
);

void vps_template_row_free(vps_template_row_t *vps_template_row);

vps_template_row_t *vps_template_row_parseFromJSON(cJSON *vps_template_rowJSON);

cJSON *vps_template_row_convertToJSON(vps_template_row_t *vps_template_row);

#endif /* _vps_template_row_H_ */

