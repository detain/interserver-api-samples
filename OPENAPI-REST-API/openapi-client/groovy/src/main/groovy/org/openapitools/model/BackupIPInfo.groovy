package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.BackupIPInfoRow;

@Canonical
class BackupIPInfo {
    /* Title of the IP information table. */
    String title
    
    List<BackupIPInfoRow> rows = new ArrayList<>()
}
