package io.swagger.model;

import io.swagger.model.InlineResponse2012OrderDetailsCjParams;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse2012OrderDetails   {

  private @Valid Integer totalCost = null;

  private @Valid Integer serviceId = null;

  private @Valid Integer invoiceId = null;

  private @Valid String invoiceDescription = null;

  private @Valid InlineResponse2012OrderDetailsCjParams cjParams = null;

  /**
   **/
  public InlineResponse2012OrderDetails totalCost(Integer totalCost) {
    this.totalCost = totalCost;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "")
  @JsonProperty("total_cost")
  @NotNull

  public Integer getTotalCost() {
    return totalCost;
  }
  public void setTotalCost(Integer totalCost) {
    this.totalCost = totalCost;
  }

  /**
   **/
  public InlineResponse2012OrderDetails serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @ApiModelProperty(example = "12346", value = "")
  @JsonProperty("service_id")
  @NotNull

  public Integer getServiceId() {
    return serviceId;
  }
  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  /**
   **/
  public InlineResponse2012OrderDetails invoiceId(Integer invoiceId) {
    this.invoiceId = invoiceId;
    return this;
  }

  
  @ApiModelProperty(example = "2746273", value = "")
  @JsonProperty("invoice_id")
  @NotNull

  public Integer getInvoiceId() {
    return invoiceId;
  }
  public void setInvoiceId(Integer invoiceId) {
    this.invoiceId = invoiceId;
  }

  /**
   **/
  public InlineResponse2012OrderDetails invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
  }

  
  @ApiModelProperty(example = "Scrub + Current Ip", value = "")
  @JsonProperty("invoice_description")
  @NotNull

  public String getInvoiceDescription() {
    return invoiceDescription;
  }
  public void setInvoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
  }

  /**
   **/
  public InlineResponse2012OrderDetails cjParams(InlineResponse2012OrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cj_params")
  @NotNull

  public InlineResponse2012OrderDetailsCjParams getCjParams() {
    return cjParams;
  }
  public void setCjParams(InlineResponse2012OrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2012OrderDetails inlineResponse2012OrderDetails = (InlineResponse2012OrderDetails) o;
    return Objects.equals(totalCost, inlineResponse2012OrderDetails.totalCost) &&
        Objects.equals(serviceId, inlineResponse2012OrderDetails.serviceId) &&
        Objects.equals(invoiceId, inlineResponse2012OrderDetails.invoiceId) &&
        Objects.equals(invoiceDescription, inlineResponse2012OrderDetails.invoiceDescription) &&
        Objects.equals(cjParams, inlineResponse2012OrderDetails.cjParams);
  }

  @Override
  public int hashCode() {
    return Objects.hash(totalCost, serviceId, invoiceId, invoiceDescription, cjParams);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
