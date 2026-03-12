package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;





public class ScrubIpsLogRowSchema   {
  @JsonProperty("date")
  private String date = null;
  @JsonProperty("filter")
  private String filter = null;
  @JsonProperty("blocked_ip")
  private String blockedIp = null;
  @JsonProperty("target_ip")
  private String targetIp = null;
  @JsonProperty("target_port")
  private BigDecimal targetPort = null;
  @JsonProperty("protocol")
  private String protocol = null;
  @JsonProperty("byte_count")
  private BigDecimal byteCount = null;
  @JsonProperty("xdp_action")
  private String xdpAction = null;
  /**
   **/
  public ScrubIpsLogRowSchema date(String date) {
    this.date = date;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("date")
  public String getDate() {
    return date;
  }
  public void setDate(String date) {
    this.date = date;
  }

  /**
   **/
  public ScrubIpsLogRowSchema filter(String filter) {
    this.filter = filter;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("filter")
  public String getFilter() {
    return filter;
  }
  public void setFilter(String filter) {
    this.filter = filter;
  }

  /**
   **/
  public ScrubIpsLogRowSchema blockedIp(String blockedIp) {
    this.blockedIp = blockedIp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("blocked_ip")
  public String getBlockedIp() {
    return blockedIp;
  }
  public void setBlockedIp(String blockedIp) {
    this.blockedIp = blockedIp;
  }

  /**
   **/
  public ScrubIpsLogRowSchema targetIp(String targetIp) {
    this.targetIp = targetIp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("target_ip")
  public String getTargetIp() {
    return targetIp;
  }
  public void setTargetIp(String targetIp) {
    this.targetIp = targetIp;
  }

  /**
   **/
  public ScrubIpsLogRowSchema targetPort(BigDecimal targetPort) {
    this.targetPort = targetPort;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("target_port")
  public BigDecimal getTargetPort() {
    return targetPort;
  }
  public void setTargetPort(BigDecimal targetPort) {
    this.targetPort = targetPort;
  }

  /**
   **/
  public ScrubIpsLogRowSchema protocol(String protocol) {
    this.protocol = protocol;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("protocol")
  public String getProtocol() {
    return protocol;
  }
  public void setProtocol(String protocol) {
    this.protocol = protocol;
  }

  /**
   **/
  public ScrubIpsLogRowSchema byteCount(BigDecimal byteCount) {
    this.byteCount = byteCount;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("byte_count")
  public BigDecimal getByteCount() {
    return byteCount;
  }
  public void setByteCount(BigDecimal byteCount) {
    this.byteCount = byteCount;
  }

  /**
   **/
  public ScrubIpsLogRowSchema xdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("xdp_action")
  public String getXdpAction() {
    return xdpAction;
  }
  public void setXdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ScrubIpsLogRowSchema scrubIpsLogRowSchema = (ScrubIpsLogRowSchema) o;
    return Objects.equals(date, scrubIpsLogRowSchema.date) &&
        Objects.equals(filter, scrubIpsLogRowSchema.filter) &&
        Objects.equals(blockedIp, scrubIpsLogRowSchema.blockedIp) &&
        Objects.equals(targetIp, scrubIpsLogRowSchema.targetIp) &&
        Objects.equals(targetPort, scrubIpsLogRowSchema.targetPort) &&
        Objects.equals(protocol, scrubIpsLogRowSchema.protocol) &&
        Objects.equals(byteCount, scrubIpsLogRowSchema.byteCount) &&
        Objects.equals(xdpAction, scrubIpsLogRowSchema.xdpAction);
  }

  @Override
  public int hashCode() {
    return Objects.hash(date, filter, blockedIp, targetIp, targetPort, protocol, byteCount, xdpAction);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpsLogRowSchema {\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    filter: ").append(toIndentedString(filter)).append("\n");
    sb.append("    blockedIp: ").append(toIndentedString(blockedIp)).append("\n");
    sb.append("    targetIp: ").append(toIndentedString(targetIp)).append("\n");
    sb.append("    targetPort: ").append(toIndentedString(targetPort)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    byteCount: ").append(toIndentedString(byteCount)).append("\n");
    sb.append("    xdpAction: ").append(toIndentedString(xdpAction)).append("\n");
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
