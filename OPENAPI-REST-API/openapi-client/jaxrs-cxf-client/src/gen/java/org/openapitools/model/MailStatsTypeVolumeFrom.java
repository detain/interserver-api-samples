package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolumeFrom  {
  
  @ApiModelProperty(value = "")

  private Integer billingAtSomedomainCom;

  @ApiModelProperty(value = "")

  private Integer salesAtSomedomainCom;
 /**
   * Get billingAtSomedomainCom
   * @return billingAtSomedomainCom
  **/
  @JsonProperty("billing@somedomain.com")
  public Integer getBillingAtSomedomainCom() {
    return billingAtSomedomainCom;
  }

  public void setBillingAtSomedomainCom(Integer billingAtSomedomainCom) {
    this.billingAtSomedomainCom = billingAtSomedomainCom;
  }

  public MailStatsTypeVolumeFrom billingAtSomedomainCom(Integer billingAtSomedomainCom) {
    this.billingAtSomedomainCom = billingAtSomedomainCom;
    return this;
  }

 /**
   * Get salesAtSomedomainCom
   * @return salesAtSomedomainCom
  **/
  @JsonProperty("sales@somedomain.com")
  public Integer getSalesAtSomedomainCom() {
    return salesAtSomedomainCom;
  }

  public void setSalesAtSomedomainCom(Integer salesAtSomedomainCom) {
    this.salesAtSomedomainCom = salesAtSomedomainCom;
  }

  public MailStatsTypeVolumeFrom salesAtSomedomainCom(Integer salesAtSomedomainCom) {
    this.salesAtSomedomainCom = salesAtSomedomainCom;
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
    MailStatsTypeVolumeFrom mailStatsTypeVolumeFrom = (MailStatsTypeVolumeFrom) o;
    return Objects.equals(this.billingAtSomedomainCom, mailStatsTypeVolumeFrom.billingAtSomedomainCom) &&
        Objects.equals(this.salesAtSomedomainCom, mailStatsTypeVolumeFrom.salesAtSomedomainCom);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

