package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.ServerBillingDetails;
import org.openapitools.model.ServerClientLink;
import org.openapitools.model.ServerExtraInfoTables;
import org.openapitools.model.ServerLocations;
import org.openapitools.model.ServerNetworkInfo;
import org.openapitools.model.ServerServiceInfo;

@Canonical
class Server {
    
    Boolean ipmiAuth
    
    List<ServerClientLink> clientLinks = new ArrayList<>()
    
    ServerBillingDetails billingDetails
    
    String custCurrency
    
    String custCurrencySymbol
    
    String _package
    
    List<String> serviceExtra = new ArrayList<>()
    
    ServerLocations locations
    
    ServerNetworkInfo networkInfo
    
    ServerExtraInfoTables extraInfoTables
    
    ServerServiceInfo serviceInfo
}
