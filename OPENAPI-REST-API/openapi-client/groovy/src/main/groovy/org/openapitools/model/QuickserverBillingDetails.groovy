package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.QuickserverServiceExtra;

@Canonical
class QuickserverBillingDetails {
    /* Last invoice date */
    String serviceLastInvoiceDate
    /* Payment status */
    String servicePaymentStatus
    /* Service frequency */
    String serviceFrequency
    /* Next date */
    String nextDate
    /* Next invoice date */
    String serviceNextInvoiceDate
    /* Currency */
    String serviceCurrency
    /* Currency symbol */
    String serviceCurrencySymbol
    /* Cost information */
    String serviceCostInfo
    
    QuickserverServiceExtra serviceExtra
    /* Extra information (JSON format) */
    String serviceExtraJson
}
