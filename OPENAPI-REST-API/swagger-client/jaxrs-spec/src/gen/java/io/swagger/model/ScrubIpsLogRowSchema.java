package io.swagger.model;

import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ScrubIpsLogRowSchema   {

  private @Valid String date = null;

  private @Valid String filter = null;

  private @Valid String blockedIp = null;

  private @Valid String targetIp = null;

  private @Valid BigDecimal targetPort = null;

  private @Valid String protocol = null;

  private @Valid BigDecimal byteCount = null;

  private @Valid String xdpAction = null;

  /**
   **/
  public ScrubIpsLogRowSchema date(String date) {
    this.date = date;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("date")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("filter")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("blocked_ip")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("target_ip")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("target_port")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("protocol")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("byte_count")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("xdp_action")
  @NotNull

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
