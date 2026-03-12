package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.MailStatsTypeVolumeFrom;
import org.openapitools.model.MailStatsTypeVolumeIp;
import org.openapitools.model.MailStatsTypeVolumeTo;

@Canonical
class MailStatsTypeVolume {
    
    MailStatsTypeVolumeTo to
    
    MailStatsTypeVolumeFrom from
    
    MailStatsTypeVolumeIp ip
}
