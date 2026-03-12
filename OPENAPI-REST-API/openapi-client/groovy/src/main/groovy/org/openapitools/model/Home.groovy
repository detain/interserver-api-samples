package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.HomeDetails;
import org.openapitools.model.HomeServices;
import org.openapitools.model.HomeTicketStatus;
import org.openapitools.model.HomeTicketStatusView;

@Canonical
class Home {
    /* Last login IP. */
    String lastLoginIp
    /* Last login time. */
    String lastLogin
    /* Currency symbol. */
    String currency
    /* Amount with currency. */
    String amount
    /* Number of invoices. */
    Integer invoiceList
    /* Balance with currency. */
    String balance
    /* Users full name. */
    String fullName
    /* User email address. */
    String email
    /* List of tickets. */
    List<String> tickets = new ArrayList<>()
    
    HomeTicketStatus ticketStatus
    
    HomeTicketStatusView ticketStatusView
    
    HomeDetails details
    
    HomeServices services
    /* Affiliate amount with currency. */
    String AFFILIATE_AMOUNT
}
