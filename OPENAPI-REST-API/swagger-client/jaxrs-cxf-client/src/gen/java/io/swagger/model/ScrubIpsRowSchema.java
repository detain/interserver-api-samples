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

public class ScrubIpsRowSchema   {
  
  @Schema(description = "")
  private Integer scrubIpId = null;
  
  @Schema(description = "")
  private BigDecimal repeatInvoicesCost = null;
  
  @Schema(description = "")
  private String scrubIpIp = null;
  
  @Schema(description = "")
  private String scrubIpStatus = null;
  
  @Schema(description = "")
  private String servicesName = null;
 /**
   * Get scrubIpId
   * @return scrubIpId
  **/
  @JsonProperty("scrub_ip_id")
  public Integer getScrubIpId() {
    return scrubIpId;
  }

  public void setScrubIpId(Integer scrubIpId) {
    this.scrubIpId = scrubIpId;
  }

  public ScrubIpsRowSchema scrubIpId(Integer scrubIpId) {
    this.scrubIpId = scrubIpId;
    return this;
  }

 /**
   * Get repeatInvoicesCost
   * @return repeatInvoicesCost
  **/
  @JsonProperty("repeat_invoices_cost")
  public BigDecimal getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(BigDecimal repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public ScrubIpsRowSchema repeatInvoicesCost(BigDecimal repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

 /**
   * Get scrubIpIp
   * @return scrubIpIp
  **/
  @JsonProperty("scrub_ip_ip")
  public String getScrubIpIp() {
    return scrubIpIp;
  }

  public void setScrubIpIp(String scrubIpIp) {
    this.scrubIpIp = scrubIpIp;
  }

  public ScrubIpsRowSchema scrubIpIp(String scrubIpIp) {
    this.scrubIpIp = scrubIpIp;
    return this;
  }

 /**
   * Get scrubIpStatus
   * @return scrubIpStatus
  **/
  @JsonProperty("scrub_ip_status")
  public String getScrubIpStatus() {
    return scrubIpStatus;
  }

  public void setScrubIpStatus(String scrubIpStatus) {
    this.scrubIpStatus = scrubIpStatus;
  }

  public ScrubIpsRowSchema scrubIpStatus(String scrubIpStatus) {
    this.scrubIpStatus = scrubIpStatus;
    return this;
  }

 /**
   * Get servicesName
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public ScrubIpsRowSchema servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpsRowSchema {\n");
    
    sb.append("    scrubIpId: ").append(toIndentedString(scrubIpId)).append("\n");
    sb.append("    repeatInvoicesCost: ").append(toIndentedString(repeatInvoicesCost)).append("\n");
    sb.append("    scrubIpIp: ").append(toIndentedString(scrubIpIp)).append("\n");
    sb.append("    scrubIpStatus: ").append(toIndentedString(scrubIpStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
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
