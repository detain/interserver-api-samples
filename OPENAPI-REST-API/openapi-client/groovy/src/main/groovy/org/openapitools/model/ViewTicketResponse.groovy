package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.TicketCustomFieldDetails;
import org.openapitools.model.TicketDetails;
import org.openapitools.model.TicketPostDetails;

@Canonical
class ViewTicketResponse {
    
    Boolean success
    
    TicketDetails ticket
    
    TicketCustomFieldDetails ticketCustomFields
    
    TicketPostDetails ticketPosts = new ArrayList<>()
}
