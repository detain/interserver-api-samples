package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolumeFrom   {

  private @Valid Integer billingAtSomedomainCom = null;

  private @Valid Integer salesAtSomedomainCom = null;

  /**
   **/
  public MailStatsTypeVolumeFrom billingAtSomedomainCom(Integer billingAtSomedomainCom) {
    this.billingAtSomedomainCom = billingAtSomedomainCom;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("billing@somedomain.com")
  @NotNull

  public Integer getBillingAtSomedomainCom() {
    return billingAtSomedomainCom;
  }
  public void setBillingAtSomedomainCom(Integer billingAtSomedomainCom) {
    this.billingAtSomedomainCom = billingAtSomedomainCom;
  }

  /**
   **/
  public MailStatsTypeVolumeFrom salesAtSomedomainCom(Integer salesAtSomedomainCom) {
    this.salesAtSomedomainCom = salesAtSomedomainCom;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("sales@somedomain.com")
  @NotNull

  public Integer getSalesAtSomedomainCom() {
    return salesAtSomedomainCom;
  }
  public void setSalesAtSomedomainCom(Integer salesAtSomedomainCom) {
    this.salesAtSomedomainCom = salesAtSomedomainCom;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolumeFrom mailStatsTypeVolumeFrom = (MailStatsTypeVolumeFrom) o;
    return Objects.equals(billingAtSomedomainCom, mailStatsTypeVolumeFrom.billingAtSomedomainCom) &&
        Objects.equals(salesAtSomedomainCom, mailStatsTypeVolumeFrom.salesAtSomedomainCom);
  }

  @Override
  public int hashCode() {
    return Objects.hash(billingAtSomedomainCom, salesAtSomedomainCom);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsTypeVolumeFrom {\n");
    
    sb.append("    billingAtSomedomainCom: ").append(toIndentedString(billingAtSomedomainCom)).append("\n");
    sb.append("    salesAtSomedomainCom: ").append(toIndentedString(salesAtSomedomainCom)).append("\n");
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
