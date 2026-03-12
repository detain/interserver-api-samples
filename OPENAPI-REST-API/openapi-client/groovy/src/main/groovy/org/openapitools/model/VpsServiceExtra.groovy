package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.VpsSnapshot;

@Canonical
class VpsServiceExtra {
    /* Spice */
    Integer spice
    
    List<VpsSnapshot> snapshots = new ArrayList<>()
}
