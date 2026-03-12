package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.MonthlyCounts;

@Canonical
class StatusMonthlyBreakdown {
    
    MonthlyCounts _default = new HashMap<>()
    
    MonthlyCounts failed = new HashMap<>()
    
    MonthlyCounts rejected = new HashMap<>()
    
    MonthlyCounts pending = new HashMap<>()
    
    MonthlyCounts locked = new HashMap<>()
    
    MonthlyCounts paid = new HashMap<>()
}
