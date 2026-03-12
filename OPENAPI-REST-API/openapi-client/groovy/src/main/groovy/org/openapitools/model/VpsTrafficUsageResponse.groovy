package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.VpsTrafficTotalsSectionResponse;
import org.openapitools.model.VpsTrafficUsageAverageResponse;

@Canonical
class VpsTrafficUsageResponse {
    
    VpsTrafficTotalsSectionResponse current
    
    VpsTrafficTotalsSectionResponse peak
    
    VpsTrafficUsageAverageResponse average
}
