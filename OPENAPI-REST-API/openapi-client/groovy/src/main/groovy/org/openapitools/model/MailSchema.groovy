package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.MailBillingDetails;
import org.openapitools.model.MailClientLink;
import org.openapitools.model.MailSchemaExtraInfoTables;
import org.openapitools.model.MailServiceInfo;
import org.openapitools.model.MailServiceType;

@Canonical
class MailSchema {
    
    MailServiceInfo serviceInfo
    /* Links related to the mail service for clients. */
    List<MailClientLink> clientLinks = new ArrayList<>()
    
    MailBillingDetails billingDetails
    /* The customer's currency. */
    String custCurrency
    /* The currency symbol for the customer. */
    String custCurrencySymbol
    /* The package of the mail service. */
    String _package
    
    MailSchemaExtraInfoTables extraInfoTables
    
    MailServiceType serviceType
    /* The usage count of the mail service. */
    String usageCount
    /* Extra information for the mail service. */
    List<String> serviceExtra = new ArrayList<>()
}
