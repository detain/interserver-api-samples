package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.")

public class ServiceOrderPostResponse   {
  private Boolean _continue = null;  private List<String> errors = new ArrayList<String>();  private String totalCost = null;  private String iid = null;  private List<String> iids = new ArrayList<String>();  private List<String> realIids = new ArrayList<String>();  private Integer serviceId = null;  private String invoiceDescription = null;

  /**
   * Whether the order was accepted and can proceed to payment.
   **/
  
  @Schema(description = "Whether the order was accepted and can proceed to payment.")
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
  
  @Schema(description = "List of validation errors (empty on success).")
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
  
  @Schema(description = "Total cost of the order.")
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
  
  @Schema(description = "Primary invoice ID for payment.")
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
  
  @Schema(description = "All invoice identifiers associated with the order.")
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
  
  @Schema(description = "Numeric invoice IDs for use with billing endpoints.")
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
  
  @Schema(description = "The new service ID created by the order.")
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
  
  @Schema(description = "Human-readable description of the invoice.")
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
