package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.LicenseBillingDetails;
import org.openapitools.model.LicenseClientLink;
import org.openapitools.model.LicenseExtraInfoTables;
import org.openapitools.model.LicenseServiceInfo;
import org.openapitools.model.LicenseServiceType;

@Canonical
class License {
    
    LicenseServiceInfo serviceInfo
    
    List<LicenseClientLink> clientLinks = new ArrayList<>()
    
    LicenseBillingDetails billingDetails
    /* Customer's currency */
    String custCurrency
    /* Currency symbol for customer */
    String custCurrencySymbol
    /* Package name */
    String _package
    /* Extra service information */
    List<String> serviceExtra = new ArrayList<>()
    
    LicenseExtraInfoTables extraInfoTables
    /* Extra service overview information */
    String serviceOverviewExtra
    
    LicenseServiceType serviceType
    /* License key */
    String licenseKey
}
