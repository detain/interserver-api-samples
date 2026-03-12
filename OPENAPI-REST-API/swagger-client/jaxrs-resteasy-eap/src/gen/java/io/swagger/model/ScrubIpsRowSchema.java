package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ScrubIpsRowSchema   {
  private Integer scrubIpId = null;
  private BigDecimal repeatInvoicesCost = null;
  private String scrubIpIp = null;
  private String scrubIpStatus = null;
  private String servicesName = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_id")
  @NotNull
  public Integer getScrubIpId() {
    return scrubIpId;
  }
  public void setScrubIpId(Integer scrubIpId) {
    this.scrubIpId = scrubIpId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("repeat_invoices_cost")
  @NotNull
  public BigDecimal getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }
  public void setRepeatInvoicesCost(BigDecimal repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_ip")
  @NotNull
  public String getScrubIpIp() {
    return scrubIpIp;
  }
  public void setScrubIpIp(String scrubIpIp) {
    this.scrubIpIp = scrubIpIp;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_status")
  @NotNull
  public String getScrubIpStatus() {
    return scrubIpStatus;
  }
  public void setScrubIpStatus(String scrubIpStatus) {
    this.scrubIpStatus = scrubIpStatus;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
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
    return Objects.equals(scrubIpId, scrubIpsRowSchema.scrubIpId) &&
        Objects.equals(repeatInvoicesCost, scrubIpsRowSchema.repeatInvoicesCost) &&
        Objects.equals(scrubIpIp, scrubIpsRowSchema.scrubIpIp) &&
        Objects.equals(scrubIpStatus, scrubIpsRowSchema.scrubIpStatus) &&
        Objects.equals(servicesName, scrubIpsRowSchema.servicesName);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
