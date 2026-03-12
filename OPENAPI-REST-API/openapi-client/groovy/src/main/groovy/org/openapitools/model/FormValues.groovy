package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

@Canonical
class FormValues {
    /* Selected memory option ID. */
    Integer memory
    /* Selected bandwidth option ID. */
    Integer bandwidth
    /* Selected IP block option ID. */
    Integer ips
    /* Selected operating system option ID. */
    Integer os
    /* Selected control panel option ID. */
    Integer cp
    /* Selected RAID option ID. */
    Integer raid
    /* Selected hard drive option ID. */
    Integer hd
    /* Selected datacenter region ID. */
    Integer region
}
