package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 **/
@Schema(description = "Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.")


public class ServiceOrderPostResponse   {
  @JsonProperty("continue")
  private Boolean _continue = null;
  @JsonProperty("errors")
  private List<String> errors = null;
  @JsonProperty("total_cost")
  private String totalCost = null;
  @JsonProperty("iid")
  private String iid = null;
  @JsonProperty("iids")
  private List<String> iids = null;
  @JsonProperty("real_iids")
  private List<String> realIids = null;
  @JsonProperty("serviceId")
  private Integer serviceId = null;
  @JsonProperty("invoice_description")
  private String invoiceDescription = null;
  /**
   * Whether the order was accepted and can proceed to payment.
   **/
  public ServiceOrderPostResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

  
  @Schema(description = "Whether the order was accepted and can proceed to payment.")
  @JsonProperty("continue")
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

  
  @Schema(description = "List of validation errors (empty on success).")
  @JsonProperty("errors")
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

  
  @Schema(description = "Total cost of the order.")
  @JsonProperty("total_cost")
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

  
  @Schema(description = "Primary invoice ID for payment.")
  @JsonProperty("iid")
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

  
  @Schema(description = "All invoice identifiers associated with the order.")
  @JsonProperty("iids")
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

  
  @Schema(description = "Numeric invoice IDs for use with billing endpoints.")
  @JsonProperty("real_iids")
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

  
  @Schema(description = "The new service ID created by the order.")
  @JsonProperty("serviceId")
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

  
  @Schema(description = "Human-readable description of the invoice.")
  @JsonProperty("invoice_description")
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
