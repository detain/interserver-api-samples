package io.swagger.model;

import java.math.BigDecimal;

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

public class ScrubIpsLogRowSchema   {
  
  @Schema(description = "")
  private String date = null;
  
  @Schema(description = "")
  private String filter = null;
  
  @Schema(description = "")
  private String blockedIp = null;
  
  @Schema(description = "")
  private String targetIp = null;
  
  @Schema(description = "")
  private BigDecimal targetPort = null;
  
  @Schema(description = "")
  private String protocol = null;
  
  @Schema(description = "")
  private BigDecimal byteCount = null;
  
  @Schema(description = "")
  private String xdpAction = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
