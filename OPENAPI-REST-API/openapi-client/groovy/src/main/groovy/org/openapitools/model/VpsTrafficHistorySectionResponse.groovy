package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.VpsTrafficHistorySectionDataResponse;

@Canonical
class VpsTrafficHistorySectionResponse {
    
    List<VpsTrafficHistorySectionDataResponse> data = new ArrayList<>()
    
    List<Date> times = new ArrayList<>()
}
