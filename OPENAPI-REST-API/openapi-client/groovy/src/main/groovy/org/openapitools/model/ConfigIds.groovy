package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

@Canonical
class ConfigIds {
    /* Configuration ID for the selected memory option. */
    Integer memory
    /* Configuration ID for the selected hard drive option. */
    Integer hd
    /* Configuration ID for the selected bandwidth option. */
    Integer bandwidth
    /* Configuration ID for the selected IP block option. */
    Integer ips
    /* Configuration ID for the selected operating system. */
    Integer os
    /* Configuration ID for the selected control panel. */
    Integer cp
    /* Configuration ID for the selected RAID option. */
    Integer raid
}
