package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.VpsServiceExtra;

@Canonical
class VpsBillingDetails {
    /* Last invoice date */
    String serviceLastInvoiceDate
    /* Payment status */
    String servicePaymentStatus
    /* Billing frequency */
    String serviceFrequency
    /* Next billing date */
    String nextDate
    /* Next invoice date */
    String serviceNextInvoiceDate
    /* Currency used for billing */
    String serviceCurrency
    /* Currency symbol */
    String serviceCurrencySymbol
    /* Billing coupon code */
    String serviceCoupon
    /* Cost information */
    String serviceCostInfo
    
    VpsServiceExtra serviceExtra
    /* Additional information in JSON format */
    String serviceExtraJson
}
