package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ScrubIpsLogRowSchema  {
  
  @ApiModelProperty(value = "")

  private String date;

  @ApiModelProperty(value = "")

  private String filter;

  @ApiModelProperty(value = "")

  private String blockedIp;

  @ApiModelProperty(value = "")

  private String targetIp;

  @ApiModelProperty(value = "")

  private BigDecimal targetPort;

  @ApiModelProperty(value = "")

  private String protocol;

  @ApiModelProperty(value = "")

  private BigDecimal byteCount;

  @ApiModelProperty(value = "")

  private String xdpAction;
 /**
   * Get date
   * @return date
  **/
  @JsonProperty("date")
  public String getDate() {
    return date;
  }

  public void setDate(String date) {
    this.date = date;
  }

  public ScrubIpsLogRowSchema date(String date) {
    this.date = date;
    return this;
  }

 /**
   * Get filter
   * @return filter
  **/
  @JsonProperty("filter")
  public String getFilter() {
    return filter;
  }

  public void setFilter(String filter) {
    this.filter = filter;
  }

  public ScrubIpsLogRowSchema filter(String filter) {
    this.filter = filter;
    return this;
  }

 /**
   * Get blockedIp
   * @return blockedIp
  **/
  @JsonProperty("blocked_ip")
  public String getBlockedIp() {
    return blockedIp;
  }

  public void setBlockedIp(String blockedIp) {
    this.blockedIp = blockedIp;
  }

  public ScrubIpsLogRowSchema blockedIp(String blockedIp) {
    this.blockedIp = blockedIp;
    return this;
  }

 /**
   * Get targetIp
   * @return targetIp
  **/
  @JsonProperty("target_ip")
  public String getTargetIp() {
    return targetIp;
  }

  public void setTargetIp(String targetIp) {
    this.targetIp = targetIp;
  }

  public ScrubIpsLogRowSchema targetIp(String targetIp) {
    this.targetIp = targetIp;
    return this;
  }

 /**
   * Get targetPort
   * @return targetPort
  **/
  @JsonProperty("target_port")
  public BigDecimal getTargetPort() {
    return targetPort;
  }

  public void setTargetPort(BigDecimal targetPort) {
    this.targetPort = targetPort;
  }

  public ScrubIpsLogRowSchema targetPort(BigDecimal targetPort) {
    this.targetPort = targetPort;
    return this;
  }

 /**
   * Get protocol
   * @return protocol
  **/
  @JsonProperty("protocol")
  public String getProtocol() {
    return protocol;
  }

  public void setProtocol(String protocol) {
    this.protocol = protocol;
  }

  public ScrubIpsLogRowSchema protocol(String protocol) {
    this.protocol = protocol;
    return this;
  }

 /**
   * Get byteCount
   * @return byteCount
  **/
  @JsonProperty("byte_count")
  public BigDecimal getByteCount() {
    return byteCount;
  }

  public void setByteCount(BigDecimal byteCount) {
    this.byteCount = byteCount;
  }

  public ScrubIpsLogRowSchema byteCount(BigDecimal byteCount) {
    this.byteCount = byteCount;
    return this;
  }

 /**
   * Get xdpAction
   * @return xdpAction
  **/
  @JsonProperty("xdp_action")
  public String getXdpAction() {
    return xdpAction;
  }

  public void setXdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
  }

  public ScrubIpsLogRowSchema xdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
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
    ScrubIpsLogRowSchema scrubIpsLogRowSchema = (ScrubIpsLogRowSchema) o;
    return Objects.equals(this.date, scrubIpsLogRowSchema.date) &&
        Objects.equals(this.filter, scrubIpsLogRowSchema.filter) &&
        Objects.equals(this.blockedIp, scrubIpsLogRowSchema.blockedIp) &&
        Objects.equals(this.targetIp, scrubIpsLogRowSchema.targetIp) &&
        Objects.equals(this.targetPort, scrubIpsLogRowSchema.targetPort) &&
        Objects.equals(this.protocol, scrubIpsLogRowSchema.protocol) &&
        Objects.equals(this.byteCount, scrubIpsLogRowSchema.byteCount) &&
        Objects.equals(this.xdpAction, scrubIpsLogRowSchema.xdpAction);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

