package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.MailBlockClickHouse;
import org.openapitools.model.MailBlockRspamd;

@Canonical
class MailBlocks {
    
    List<MailBlockClickHouse> local = new ArrayList<>()
    
    List<MailBlockClickHouse> mbtrap = new ArrayList<>()
    
    List<MailBlockRspamd> subject = new ArrayList<>()
}
