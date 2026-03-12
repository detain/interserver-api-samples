package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.VpsBillingDetails;
import org.openapitools.model.VpsCPData;
import org.openapitools.model.VpsClientLink;
import org.openapitools.model.VpsDAData;
import org.openapitools.model.VpsExtraInfoTables;
import org.openapitools.model.VpsPlesk12Data;
import org.openapitools.model.VpsServiceAddons;
import org.openapitools.model.VpsServiceExtra;
import org.openapitools.model.VpsServiceInfo;
import org.openapitools.model.VpsServiceMaster;

@Canonical
class Vps {
    
    VpsServiceInfo serviceInfo
    
    List<VpsClientLink> clientLinks = new ArrayList<>()
    
    VpsBillingDetails billingDetails
    
    String custCurrency
    
    String custCurrencySymbol
    
    VpsServiceMaster serviceMaster
    
    String _package
    
    VpsServiceExtra serviceExtra
    
    VpsExtraInfoTables extraInfoTables
    
    String module
    
    String token
    
    Integer daLink
    
    Integer srLink
    
    VpsCPData cpData
    
    VpsDAData daData
    
    VpsPlesk12Data plesk12Data
    
    VpsServiceAddons serviceAddons
    
    String osTemplate
    
    Object cpuGraphData = null
}
