package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse2012OrderDetailsCjParams;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class InlineResponse2012OrderDetails   {
  private Integer totalCost = null;
  private Integer serviceId = null;
  private Integer invoiceId = null;
  private String invoiceDescription = null;
  private InlineResponse2012OrderDetailsCjParams cjParams = null;

  /**
   **/
  
  @Schema(example = "5", description = "")
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
  
  @Schema(example = "12346", description = "")
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
  
  @Schema(example = "2746273", description = "")
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
  
  @Schema(example = "Scrub + Current Ip", description = "")
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
  
  @Schema(description = "")
  @JsonProperty("cj_params")
  @NotNull
  public InlineResponse2012OrderDetailsCjParams getCjParams() {
    return cjParams;
  }
  public void setCjParams(InlineResponse2012OrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
