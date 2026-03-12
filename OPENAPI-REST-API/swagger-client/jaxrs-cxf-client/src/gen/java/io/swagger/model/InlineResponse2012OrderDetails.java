package io.swagger.model;

import io.swagger.model.InlineResponse2012OrderDetailsCjParams;

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

public class InlineResponse2012OrderDetails   {
  
  @Schema(example = "5", description = "")
  private Integer totalCost = null;
  
  @Schema(example = "12346", description = "")
  private Integer serviceId = null;
  
  @Schema(example = "2746273", description = "")
  private Integer invoiceId = null;
  
  @Schema(example = "Scrub + Current Ip", description = "")
  private String invoiceDescription = null;
  
  @Schema(description = "")
  private InlineResponse2012OrderDetailsCjParams cjParams = null;
 /**
   * Get totalCost
   * @return totalCost
  **/
  @JsonProperty("total_cost")
  public Integer getTotalCost() {
    return totalCost;
  }

  public void setTotalCost(Integer totalCost) {
    this.totalCost = totalCost;
  }

  public InlineResponse2012OrderDetails totalCost(Integer totalCost) {
    this.totalCost = totalCost;
    return this;
  }

 /**
   * Get serviceId
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public Integer getServiceId() {
    return serviceId;
  }

  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  public InlineResponse2012OrderDetails serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Get invoiceId
   * @return invoiceId
  **/
  @JsonProperty("invoice_id")
  public Integer getInvoiceId() {
    return invoiceId;
  }

  public void setInvoiceId(Integer invoiceId) {
    this.invoiceId = invoiceId;
  }

  public InlineResponse2012OrderDetails invoiceId(Integer invoiceId) {
    this.invoiceId = invoiceId;
    return this;
  }

 /**
   * Get invoiceDescription
   * @return invoiceDescription
  **/
  @JsonProperty("invoice_description")
  public String getInvoiceDescription() {
    return invoiceDescription;
  }

  public void setInvoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
  }

  public InlineResponse2012OrderDetails invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
  }

 /**
   * Get cjParams
   * @return cjParams
  **/
  @JsonProperty("cj_params")
  public InlineResponse2012OrderDetailsCjParams getCjParams() {
    return cjParams;
  }

  public void setCjParams(InlineResponse2012OrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
  }

  public InlineResponse2012OrderDetails cjParams(InlineResponse2012OrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2012OrderDetails {\n");
    
    sb.append("    totalCost: ").append(toIndentedString(totalCost)).append("\n");
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    invoiceId: ").append(toIndentedString(invoiceId)).append("\n");
    sb.append("    invoiceDescription: ").append(toIndentedString(invoiceDescription)).append("\n");
    sb.append("    cjParams: ").append(toIndentedString(cjParams)).append("\n");
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
