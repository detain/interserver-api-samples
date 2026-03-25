package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ScrubIpsRowSchema  {
  
  @ApiModelProperty(value = "")

  private Integer scrubIpId;

  @ApiModelProperty(value = "")

  private BigDecimal repeatInvoicesCost;

  @ApiModelProperty(value = "")

  private String scrubIpIp;

  @ApiModelProperty(value = "")

  private String scrubIpStatus;

  @ApiModelProperty(value = "")

  private String servicesName;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ScrubIpsRowSchema scrubIpsRowSchema = (ScrubIpsRowSchema) o;
    return Objects.equals(this.scrubIpId, scrubIpsRowSchema.scrubIpId) &&
        Objects.equals(this.repeatInvoicesCost, scrubIpsRowSchema.repeatInvoicesCost) &&
        Objects.equals(this.scrubIpIp, scrubIpsRowSchema.scrubIpIp) &&
        Objects.equals(this.scrubIpStatus, scrubIpsRowSchema.scrubIpStatus) &&
        Objects.equals(this.servicesName, scrubIpsRowSchema.servicesName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(scrubIpId, repeatInvoicesCost, scrubIpIp, scrubIpStatus, servicesName);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

