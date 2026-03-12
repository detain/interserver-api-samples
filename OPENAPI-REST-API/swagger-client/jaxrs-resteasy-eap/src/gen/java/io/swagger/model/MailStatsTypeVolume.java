package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailStatsTypeVolumeFrom;
import io.swagger.model.MailStatsTypeVolumeIp;
import io.swagger.model.MailStatsTypeVolumeTo;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class MailStatsTypeVolume   {
  private MailStatsTypeVolumeTo to = null;
  private MailStatsTypeVolumeFrom from = null;
  private MailStatsTypeVolumeIp ip = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("to")
  @NotNull
  public MailStatsTypeVolumeTo getTo() {
    return to;
  }
  public void setTo(MailStatsTypeVolumeTo to) {
    this.to = to;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("from")
  @NotNull
  public MailStatsTypeVolumeFrom getFrom() {
    return from;
  }
  public void setFrom(MailStatsTypeVolumeFrom from) {
    this.from = from;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip")
  @NotNull
  public MailStatsTypeVolumeIp getIp() {
    return ip;
  }
  public void setIp(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
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
    return Objects.equals(to, mailStatsTypeVolume.to) &&
        Objects.equals(from, mailStatsTypeVolume.from) &&
        Objects.equals(ip, mailStatsTypeVolume.ip);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
