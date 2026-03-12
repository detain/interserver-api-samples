package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewallFiltersInner;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewallRulesInner;

@Canonical
class GetScrubIpDetails200ResponseFilterFirewall {
    
    List<GetScrubIpDetails200ResponseFilterFirewallRulesInner> rules = new ArrayList<>()
    
    List<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> filters = new ArrayList<>()
    
    Integer scrubEnabled
}
