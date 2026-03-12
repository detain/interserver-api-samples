package org.openapitools.model;

import org.openapitools.model.MailStatsTypeVolumeFrom;
import org.openapitools.model.MailStatsTypeVolumeIp;
import org.openapitools.model.MailStatsTypeVolumeTo;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolume  {
  
  @ApiModelProperty(value = "")

  private MailStatsTypeVolumeTo to;

  @ApiModelProperty(value = "")

  private MailStatsTypeVolumeFrom from;

  @ApiModelProperty(value = "")

  private MailStatsTypeVolumeIp ip;
 /**
   * Get to
   * @return to
  **/
  @JsonProperty("to")
  public MailStatsTypeVolumeTo getTo() {
    return to;
  }

  public void setTo(MailStatsTypeVolumeTo to) {
    this.to = to;
  }

  public MailStatsTypeVolume to(MailStatsTypeVolumeTo to) {
    this.to = to;
    return this;
  }

 /**
   * Get from
   * @return from
  **/
  @JsonProperty("from")
  public MailStatsTypeVolumeFrom getFrom() {
    return from;
  }

  public void setFrom(MailStatsTypeVolumeFrom from) {
    this.from = from;
  }

  public MailStatsTypeVolume from(MailStatsTypeVolumeFrom from) {
    this.from = from;
    return this;
  }

 /**
   * Get ip
   * @return ip
  **/
  @JsonProperty("ip")
  public MailStatsTypeVolumeIp getIp() {
    return ip;
  }

  public void setIp(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
  }

  public MailStatsTypeVolume ip(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolume mailStatsTypeVolume = (MailStatsTypeVolume) o;
    return Objects.equals(this.to, mailStatsTypeVolume.to) &&
        Objects.equals(this.from, mailStatsTypeVolume.from) &&
        Objects.equals(this.ip, mailStatsTypeVolume.ip);
  }

  @Override
  public int hashCode() {
    return Objects.hash(to, from, ip);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsTypeVolume {\n");
    
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

