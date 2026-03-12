package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.PlaceScrubOrder201ResponseOrderDetails;

@Canonical
class PlaceScrubOrder201Response {
    
    Boolean success
    
    String text
    
    PlaceScrubOrder201ResponseOrderDetails orderDetails
}
