package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

@Canonical
class MailBlockClickHouse {
    
    Date date
    
    String from
    
    String messageId
    
    String subject
    
    String to
}
