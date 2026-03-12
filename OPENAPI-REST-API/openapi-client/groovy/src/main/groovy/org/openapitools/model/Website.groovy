package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.WebsiteBillingDetails;
import org.openapitools.model.WebsiteClientLink;
import org.openapitools.model.WebsiteExtraInfoTables;
import org.openapitools.model.WebsiteServiceInfo;
import org.openapitools.model.WebsiteServiceMaster;

@Canonical
class Website {
    
    WebsiteServiceInfo serviceInfo
    
    List<WebsiteClientLink> clientLinks = new ArrayList<>()
    
    WebsiteBillingDetails billingDetails
    /* Customer's currency */
    String custCurrency
    /* Customer currency symbol */
    String custCurrencySymbol
    
    WebsiteServiceMaster serviceMaster
    /* Package information */
    String _package
    
    List<Object> serviceExtra = new ArrayList<>()
    
    WebsiteExtraInfoTables extraInfoTables
}
