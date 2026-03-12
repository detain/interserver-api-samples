package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.VpsTrafficDataSectionResponse;
import org.openapitools.model.VpsTrafficHistoryResponse;
import org.openapitools.model.VpsTrafficTotalsResposne;
import org.openapitools.model.VpsTrafficUsageResponse;

@Canonical
class VpsTrafficResponse {
    
    String name
    
    String target
    
    Integer interval
    
    VpsTrafficHistoryResponse history
    
    Date last
    
    List<Date> times = new ArrayList<>()
    
    VpsTrafficTotalsResposne totals
    
    VpsTrafficUsageResponse usage
    
    List<VpsTrafficDataSectionResponse> data = new ArrayList<>()
}
