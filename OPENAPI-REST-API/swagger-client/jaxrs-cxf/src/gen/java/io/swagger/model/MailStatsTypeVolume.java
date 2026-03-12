package io.swagger.model;

import io.swagger.model.MailStatsTypeVolumeFrom;
import io.swagger.model.MailStatsTypeVolumeIp;
import io.swagger.model.MailStatsTypeVolumeTo;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class MailStatsTypeVolume   {
  
  @Schema(description = "")
  private MailStatsTypeVolumeTo to = null;
  
  @Schema(description = "")
  private MailStatsTypeVolumeFrom from = null;
  
  @Schema(description = "")
  private MailStatsTypeVolumeIp ip = null;
 /**
   * Get to
   * @return to
  **/
  @JsonProperty("to")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
