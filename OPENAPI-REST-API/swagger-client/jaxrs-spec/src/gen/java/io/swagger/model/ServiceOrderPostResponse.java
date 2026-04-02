package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.")

public class ServiceOrderPostResponse   {

  private @Valid Boolean _continue = null;

  private @Valid List<String> errors = new ArrayList<String>();

  private @Valid String totalCost = null;

  private @Valid String iid = null;

  private @Valid List<String> iids = new ArrayList<String>();

  private @Valid List<String> realIids = new ArrayList<String>();

  private @Valid Integer serviceId = null;

  private @Valid String invoiceDescription = null;

  /**
   * Whether the order was accepted and can proceed to payment.
   **/
  public ServiceOrderPostResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

  
  @ApiModelProperty(value = "Whether the order was accepted and can proceed to payment.")
  @JsonProperty("continue")
  @NotNull

  public Boolean isContinue() {
    return _continue;
  }
  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  /**
   * List of validation errors (empty on success).
   **/
  public ServiceOrderPostResponse errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  
  @ApiModelProperty(value = "List of validation errors (empty on success).")
  @JsonProperty("errors")
  @NotNull

  public List<String> getErrors() {
    return errors;
  }
  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  /**
   * Total cost of the order.
   **/
  public ServiceOrderPostResponse totalCost(String totalCost) {
    this.totalCost = totalCost;
    return this;
  }

  
  @ApiModelProperty(value = "Total cost of the order.")
  @JsonProperty("total_cost")
  @NotNull

  public String getTotalCost() {
    return totalCost;
  }
  public void setTotalCost(String totalCost) {
    this.totalCost = totalCost;
  }

  /**
   * Primary invoice ID for payment.
   **/
  public ServiceOrderPostResponse iid(String iid) {
    this.iid = iid;
    return this;
  }

  
  @ApiModelProperty(value = "Primary invoice ID for payment.")
  @JsonProperty("iid")
  @NotNull

  public String getIid() {
    return iid;
  }
  public void setIid(String iid) {
    this.iid = iid;
  }

  /**
   * All invoice identifiers associated with the order.
   **/
  public ServiceOrderPostResponse iids(List<String> iids) {
    this.iids = iids;
    return this;
  }

  
  @ApiModelProperty(value = "All invoice identifiers associated with the order.")
  @JsonProperty("iids")
  @NotNull

  public List<String> getIids() {
    return iids;
  }
  public void setIids(List<String> iids) {
    this.iids = iids;
  }

  /**
   * Numeric invoice IDs for use with billing endpoints.
   **/
  public ServiceOrderPostResponse realIids(List<String> realIids) {
    this.realIids = realIids;
    return this;
  }

  
  @ApiModelProperty(value = "Numeric invoice IDs for use with billing endpoints.")
  @JsonProperty("real_iids")
  @NotNull

  public List<String> getRealIids() {
    return realIids;
  }
  public void setRealIids(List<String> realIids) {
    this.realIids = realIids;
  }

  /**
   * The new service ID created by the order.
   **/
  public ServiceOrderPostResponse serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @ApiModelProperty(value = "The new service ID created by the order.")
  @JsonProperty("serviceId")
  @NotNull

  public Integer getServiceId() {
    return serviceId;
  }
  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  /**
   * Human-readable description of the invoice.
   **/
  public ServiceOrderPostResponse invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
  }

  
  @ApiModelProperty(value = "Human-readable description of the invoice.")
  @JsonProperty("invoice_description")
  @NotNull

  public String getInvoiceDescription() {
    return invoiceDescription;
  }
  public void setInvoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServiceOrderPostResponse serviceOrderPostResponse = (ServiceOrderPostResponse) o;
    return Objects.equals(_continue, serviceOrderPostResponse._continue) &&
        Objects.equals(errors, serviceOrderPostResponse.errors) &&
        Objects.equals(totalCost, serviceOrderPostResponse.totalCost) &&
        Objects.equals(iid, serviceOrderPostResponse.iid) &&
        Objects.equals(iids, serviceOrderPostResponse.iids) &&
        Objects.equals(realIids, serviceOrderPostResponse.realIids) &&
        Objects.equals(serviceId, serviceOrderPostResponse.serviceId) &&
        Objects.equals(invoiceDescription, serviceOrderPostResponse.invoiceDescription);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_continue, errors, totalCost, iid, iids, realIids, serviceId, invoiceDescription);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServiceOrderPostResponse {\n");
    
    sb.append("    _continue: ").append(toIndentedString(_continue)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    totalCost: ").append(toIndentedString(totalCost)).append("\n");
    sb.append("    iid: ").append(toIndentedString(iid)).append("\n");
    sb.append("    iids: ").append(toIndentedString(iids)).append("\n");
    sb.append("    realIids: ").append(toIndentedString(realIids)).append("\n");
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    invoiceDescription: ").append(toIndentedString(invoiceDescription)).append("\n");
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
