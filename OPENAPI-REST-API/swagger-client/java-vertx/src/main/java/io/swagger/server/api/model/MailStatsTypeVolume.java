package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.MailStatsTypeVolumeFrom;
import io.swagger.server.api.model.MailStatsTypeVolumeIp;
import io.swagger.server.api.model.MailStatsTypeVolumeTo;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * MailStatsTypeVolume
 */




public class MailStatsTypeVolume   {
  private MailStatsTypeVolumeTo to = null;

  private MailStatsTypeVolumeFrom from = null;

  private MailStatsTypeVolumeIp ip = null;

  public MailStatsTypeVolume to(MailStatsTypeVolumeTo to) {
    this.to = to;
    return this;
  }

  /**
   * Get to
   * @return to
   **/
    public MailStatsTypeVolumeTo getTo() {
    return to;
  }

  public void setTo(MailStatsTypeVolumeTo to) {
    this.to = to;
  }

  public MailStatsTypeVolume from(MailStatsTypeVolumeFrom from) {
    this.from = from;
    return this;
  }

  /**
   * Get from
   * @return from
   **/
    public MailStatsTypeVolumeFrom getFrom() {
    return from;
  }

  public void setFrom(MailStatsTypeVolumeFrom from) {
    this.from = from;
  }

  public MailStatsTypeVolume ip(MailStatsTypeVolumeIp ip) {
    this.ip = ip;
    return this;
  }

  /**
   * Get ip
   * @return ip
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
