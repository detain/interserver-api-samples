package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.GetScrubIpDetails200ResponseBillingDetails;
import org.openapitools.model.GetScrubIpDetails200ResponseClientLinksInner;
import org.openapitools.model.GetScrubIpDetails200ResponseExtraInfoTables;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewall;
import org.openapitools.model.GetScrubIpDetails200ResponseServiceInfo;

@Canonical
class GetScrubIpDetails200Response {
    
    GetScrubIpDetails200ResponseServiceInfo serviceInfo
    
    List<GetScrubIpDetails200ResponseClientLinksInner> clientLinks = new ArrayList<>()
    
    GetScrubIpDetails200ResponseBillingDetails billingDetails
    
    String custCurrency
    
    String custCurrencySymbol
    
    String _package
    
    GetScrubIpDetails200ResponseExtraInfoTables extraInfoTables
    
    GetScrubIpDetails200ResponseFilterFirewall filterFirewall
}
