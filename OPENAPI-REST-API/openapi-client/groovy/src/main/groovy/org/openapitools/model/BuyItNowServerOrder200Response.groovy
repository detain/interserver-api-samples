package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.BuyItNowServerOrder200ResponseBandwidthInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseCpInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseIpsInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseOsInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseRaidInner;

@Canonical
class BuyItNowServerOrder200Response {
    
    List<BuyItNowServerOrder200ResponseBandwidthInner> bandwidth = new ArrayList<>()
    
    List<BuyItNowServerOrder200ResponseIpsInner> ips = new ArrayList<>()
    
    List<BuyItNowServerOrder200ResponseOsInner> os = new ArrayList<>()
    
    List<BuyItNowServerOrder200ResponseCpInner> cp = new ArrayList<>()
    
    List<BuyItNowServerOrder200ResponseRaidInner> raid = new ArrayList<>()
}
