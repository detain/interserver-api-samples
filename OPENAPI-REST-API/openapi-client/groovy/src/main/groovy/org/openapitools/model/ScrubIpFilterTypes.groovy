package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.HashMap;
import org.openapitools.model.ScrubIpFilterTypesFiltersValue;

@Canonical
class ScrubIpFilterTypes {
    
    Boolean success
    
    Map<String, ScrubIpFilterTypesFiltersValue> filters = new HashMap<>()
}
