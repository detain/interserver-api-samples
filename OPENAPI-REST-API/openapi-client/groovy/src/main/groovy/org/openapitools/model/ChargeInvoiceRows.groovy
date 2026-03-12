package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.HashMap;
import org.openapitools.model.ChargeInvoiceRowsInvoicesValue;

@Canonical
class ChargeInvoiceRows {
    /* Whether the invoice retrieval was successful. */
    Boolean success
    /* List of invoices for the service. */
    Map<String, ChargeInvoiceRowsInvoicesValue> invoices = new HashMap<>()
}
