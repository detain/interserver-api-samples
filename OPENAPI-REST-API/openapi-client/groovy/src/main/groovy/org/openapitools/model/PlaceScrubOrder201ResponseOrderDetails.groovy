package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.PlaceScrubOrder201ResponseOrderDetailsCjParams;

@Canonical
class PlaceScrubOrder201ResponseOrderDetails {
    
    Integer totalCost
    
    Integer serviceId
    
    Integer invoiceId
    
    String invoiceDescription
    
    PlaceScrubOrder201ResponseOrderDetailsCjParams cjParams
}
