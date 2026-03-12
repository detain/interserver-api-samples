package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.GetOrderDetail200ResponseIpsInner;
import org.openapitools.model.GetOrderDetail200ResponsePackageCosts;
import org.openapitools.model.GetOrderDetail200ResponseServiceTypesInner;

@Canonical
class GetOrderDetail200Response {
    
    GetOrderDetail200ResponsePackageCosts packageCosts
    
    List<GetOrderDetail200ResponseServiceTypesInner> serviceTypes = new ArrayList<>()
    
    List<GetOrderDetail200ResponseIpsInner> ips = new ArrayList<>()
}
