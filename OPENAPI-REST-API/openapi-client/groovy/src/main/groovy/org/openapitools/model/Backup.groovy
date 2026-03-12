package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.BackupBillingDetails;
import org.openapitools.model.BackupClientLink;
import org.openapitools.model.BackupExtraInfoTables;
import org.openapitools.model.BackupServiceInfo;
import org.openapitools.model.BackupServiceMaster;

@Canonical
class Backup {
    
    BackupServiceInfo serviceInfo
    
    List<BackupClientLink> clientLinks = new ArrayList<>()
    
    BackupBillingDetails billingDetails
    /* Customer's currency. */
    String custCurrency
    /* Customer's currency symbol. */
    String custCurrencySymbol
    
    BackupServiceMaster serviceMaster
    /* Package information. */
    String _package
    
    String serviceExtra
    
    BackupExtraInfoTables extraInfoTables
}
