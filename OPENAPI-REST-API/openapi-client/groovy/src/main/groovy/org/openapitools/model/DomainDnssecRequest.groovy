package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;

@Canonical
class DomainDnssecRequest {
    /* List of DNSSEC algorithm IDs for each record. */
    List<Integer> algorithm = new ArrayList<>()
    /* List of digest type IDs for each record. */
    List<Integer> digestType = new ArrayList<>()
    /* List of hex digests for each record. */
    List<String> digest = new ArrayList<>()
    /* List of key tag values corresponding to each record. */
    List<Integer> keyTag = new ArrayList<>()
}
