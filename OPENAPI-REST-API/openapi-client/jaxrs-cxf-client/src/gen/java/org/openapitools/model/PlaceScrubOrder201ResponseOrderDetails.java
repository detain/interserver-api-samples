package org.openapitools.model;

import org.openapitools.model.PlaceScrubOrder201ResponseOrderDetailsCjParams;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PlaceScrubOrder201ResponseOrderDetails  {
  
  @ApiModelProperty(example = "5", value = "")

  private Integer totalCost;

  @ApiModelProperty(example = "12346", value = "")

  private Integer serviceId;

  @ApiModelProperty(example = "2746273", value = "")

  private Integer invoiceId;

  @ApiModelProperty(example = "Scrub + Current Ip", value = "")

  private String invoiceDescription;

  @ApiModelProperty(value = "")

  private PlaceScrubOrder201ResponseOrderDetailsCjParams cjParams;
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

  public PlaceScrubOrder201ResponseOrderDetails totalCost(Integer totalCost) {
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

  public PlaceScrubOrder201ResponseOrderDetails serviceId(Integer serviceId) {
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

  public PlaceScrubOrder201ResponseOrderDetails invoiceId(Integer invoiceId) {
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

  public PlaceScrubOrder201ResponseOrderDetails invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
  }

 /**
   * Get cjParams
   * @return cjParams
  **/
  @JsonProperty("cj_params")
  public PlaceScrubOrder201ResponseOrderDetailsCjParams getCjParams() {
    return cjParams;
  }

  public void setCjParams(PlaceScrubOrder201ResponseOrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
  }

  public PlaceScrubOrder201ResponseOrderDetails cjParams(PlaceScrubOrder201ResponseOrderDetailsCjParams cjParams) {
    this.cjParams = cjParams;
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
    PlaceScrubOrder201ResponseOrderDetails placeScrubOrder201ResponseOrderDetails = (PlaceScrubOrder201ResponseOrderDetails) o;
    return Objects.equals(this.totalCost, placeScrubOrder201ResponseOrderDetails.totalCost) &&
        Objects.equals(this.serviceId, placeScrubOrder201ResponseOrderDetails.serviceId) &&
        Objects.equals(this.invoiceId, placeScrubOrder201ResponseOrderDetails.invoiceId) &&
        Objects.equals(this.invoiceDescription, placeScrubOrder201ResponseOrderDetails.invoiceDescription) &&
        Objects.equals(this.cjParams, placeScrubOrder201ResponseOrderDetails.cjParams);
  }

  @Override
  public int hashCode() {
    return Objects.hash(totalCost, serviceId, invoiceId, invoiceDescription, cjParams);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PlaceScrubOrder201ResponseOrderDetails {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

