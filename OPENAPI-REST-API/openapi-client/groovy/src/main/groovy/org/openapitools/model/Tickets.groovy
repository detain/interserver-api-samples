package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.TicketsCountArray;
import org.openapitools.model.TicketsRow;

@Canonical
class Tickets {
    
    String ima
    
    String custid
    
    String view
    
    Integer currentPage
    
    Integer limit
    
    Integer sortcol
    
    Integer sortdir
    
    Integer rowsOffset
    
    List<TicketsRow> tickets = new ArrayList<>()
    
    Integer pages
    
    Integer rowsTotal
    
    Integer inboxCount
    
    TicketsCountArray countArray
    
    String viewText
}
