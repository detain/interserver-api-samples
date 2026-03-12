package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ServersBuyNowResponseOrderDetails;

@Canonical
class ServersBuyNowResponse {
    /* Whether the order was placed successfully. */
    Boolean success
    /* Human-readable status message. */
    String text
    
    ServersBuyNowResponseOrderDetails orderDetails
}
