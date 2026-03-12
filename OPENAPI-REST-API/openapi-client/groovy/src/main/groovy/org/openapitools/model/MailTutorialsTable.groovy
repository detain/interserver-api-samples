package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.MailTutorialsTableRow;

@Canonical
class MailTutorialsTable {
    /* The title of the tutorials table. */
    String title
    /* The rows of the tutorials table. */
    List<MailTutorialsTableRow> rows = new ArrayList<>()
}
