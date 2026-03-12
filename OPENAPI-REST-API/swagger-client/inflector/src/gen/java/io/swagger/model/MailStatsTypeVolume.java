package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailStatsTypeVolumeFrom;
import io.swagger.model.MailStatsTypeVolumeIp;
import io.swagger.model.MailStatsTypeVolumeTo;
import io.swagger.v3.oas.annotations.media.Schema;





public class MailStatsTypeVolume   {
  @JsonProperty("to")
  private MailStatsTypeVolumeTo to = null;
  @JsonProperty("from")
  private MailStatsTypeVolumeFrom from = null;
  @JsonProperty("ip")
  private MailStatsTypeVolumeIp ip = null;
  /**
   **/
  public MailStatsTypeVolume to(MailStatsTypeVolumeTo to) {
    this.to = to;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("to")
  public MailStatsTypeVolumeTo getTo() {
    return to;
  }
  public void setTo(MailStatsTypeVolumeTo to) {
    this.to = to;
  }

  /**
   **/
  public MailStatsTypeVolume from(MailStatsTypeVolumeFrom from) {
    this.from = from;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("from")
  public MailStatsTypeVolumeFrom getFrom() {
    return from;
  }
  public void setFrom(MailStatsTypeVolumeFrom from) {
    this.from = from;
  }

  /**
   **/
  public MailStatsTypeVolume ip(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ip")
  public MailStatsTypeVolumeIp getIp() {
    return ip;
  }
  public void setIp(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
