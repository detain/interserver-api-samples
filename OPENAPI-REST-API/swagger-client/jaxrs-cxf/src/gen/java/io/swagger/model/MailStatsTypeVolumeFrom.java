package io.swagger.model;

import javax.validation.constraints.*;

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

public class MailStatsTypeVolumeFrom   {
  
  @Schema(description = "")
  private Integer billingAtSomedomainCom = null;
  
  @Schema(description = "")
  private Integer salesAtSomedomainCom = null;
 /**
   * Get billingAtSomedomainCom
   * @return billingAtSomedomainCom
  **/
  @JsonProperty("billing@somedomain.com")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
