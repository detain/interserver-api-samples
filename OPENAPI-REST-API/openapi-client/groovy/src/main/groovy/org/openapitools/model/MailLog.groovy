package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.MailLogEntry;

@Canonical
class MailLog {
    /* total number of mail log entries */
    Integer total
    /* number of emails skipped in listing */
    Integer skip
    /* number of emails to return */
    Integer limit
    
    List<MailLogEntry> emails = new ArrayList<>()
}
