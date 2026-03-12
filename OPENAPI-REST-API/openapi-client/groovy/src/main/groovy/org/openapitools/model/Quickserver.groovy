package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.QuickserverBillingDetails;
import org.openapitools.model.QuickserverClientLink;
import org.openapitools.model.QuickserverExtraInfoTables;
import org.openapitools.model.QuickserverServiceExtra;
import org.openapitools.model.QuickserverServiceInfo;
import org.openapitools.model.QuickserverServiceMaster;

@Canonical
class Quickserver {
    
    QuickserverServiceInfo serviceInfo
    
    List<QuickserverClientLink> clientLinks = new ArrayList<>()
    
    QuickserverBillingDetails billingDetails
    /* Currency of the customer */
    String custCurrency
    /* Currency symbol of the customer */
    String custCurrencySymbol
    
    QuickserverServiceMaster serviceMaster
    /* Package name */
    String _package
    /* Operating system template */
    String osTemplate
    
    QuickserverServiceExtra serviceExtra
    
    QuickserverExtraInfoTables extraInfoTables
    /* CPU graph data */
    String cpuGraphData
    /* Bandwidth x-axis data */
    String bandwidthXaxis
    /* Bandwidth y-axis data */
    String bandwidthYaxis
    /* Module information */
    String module
    /* Authentication token */
    String token
    /* Used disk space */
    String serviceDiskUsed
    /* Total disk space */
    String serviceDiskTotal
    /* Disk usage percentage */
    BigDecimal diskPercentage
    /* Memory information */
    String memory
    /* HDD information */
    String hdd
    
    List<String> serviceOverviewExtra = new ArrayList<>()
}
