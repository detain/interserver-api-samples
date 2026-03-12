package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.MailExtraInfoTableRow;

@Canonical
class MailExtraInfoTable {
    /* The title of the extra info table. */
    String title
    /* The rows of the extra info table. */
    List<MailExtraInfoTableRow> rows = new ArrayList<>()
}
