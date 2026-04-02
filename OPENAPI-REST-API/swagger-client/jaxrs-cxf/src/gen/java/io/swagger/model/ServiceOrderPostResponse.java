package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
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

/**
  * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 **/
@Schema(description="Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.")
public class ServiceOrderPostResponse   {
  
  @Schema(description = "Whether the order was accepted and can proceed to payment.")
 /**
   * Whether the order was accepted and can proceed to payment.  
  **/
  private Boolean _continue = null;
  
  @Schema(description = "List of validation errors (empty on success).")
 /**
   * List of validation errors (empty on success).  
  **/
  private List<String> errors = null;
  
  @Schema(description = "Total cost of the order.")
 /**
   * Total cost of the order.  
  **/
  private String totalCost = null;
  
  @Schema(description = "Primary invoice ID for payment.")
 /**
   * Primary invoice ID for payment.  
  **/
  private String iid = null;
  
  @Schema(description = "All invoice identifiers associated with the order.")
 /**
   * All invoice identifiers associated with the order.  
  **/
  private List<String> iids = null;
  
  @Schema(description = "Numeric invoice IDs for use with billing endpoints.")
 /**
   * Numeric invoice IDs for use with billing endpoints.  
  **/
  private List<String> realIids = null;
  
  @Schema(description = "The new service ID created by the order.")
 /**
   * The new service ID created by the order.  
  **/
  private Integer serviceId = null;
  
  @Schema(description = "Human-readable description of the invoice.")
 /**
   * Human-readable description of the invoice.  
  **/
  private String invoiceDescription = null;
 /**
   * Whether the order was accepted and can proceed to payment.
   * @return _continue
  **/
  @JsonProperty("continue")
  @NotNull
  public Boolean isContinue() {
    return _continue;
  }

  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  public ServiceOrderPostResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

 /**
   * List of validation errors (empty on success).
   * @return errors
  **/
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }

  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  public ServiceOrderPostResponse errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public ServiceOrderPostResponse addErrorsItem(String errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }

 /**
   * Total cost of the order.
   * @return totalCost
  **/
  @JsonProperty("total_cost")
  @NotNull
  public String getTotalCost() {
    return totalCost;
  }

  public void setTotalCost(String totalCost) {
    this.totalCost = totalCost;
  }

  public ServiceOrderPostResponse totalCost(String totalCost) {
    this.totalCost = totalCost;
    return this;
  }

 /**
   * Primary invoice ID for payment.
   * @return iid
  **/
  @JsonProperty("iid")
  @NotNull
  public String getIid() {
    return iid;
  }

  public void setIid(String iid) {
    this.iid = iid;
  }

  public ServiceOrderPostResponse iid(String iid) {
    this.iid = iid;
    return this;
  }

 /**
   * All invoice identifiers associated with the order.
   * @return iids
  **/
  @JsonProperty("iids")
  @NotNull
  public List<String> getIids() {
    return iids;
  }

  public void setIids(List<String> iids) {
    this.iids = iids;
  }

  public ServiceOrderPostResponse iids(List<String> iids) {
    this.iids = iids;
    return this;
  }

  public ServiceOrderPostResponse addIidsItem(String iidsItem) {
    this.iids.add(iidsItem);
    return this;
  }

 /**
   * Numeric invoice IDs for use with billing endpoints.
   * @return realIids
  **/
  @JsonProperty("real_iids")
  @NotNull
  public List<String> getRealIids() {
    return realIids;
  }

  public void setRealIids(List<String> realIids) {
    this.realIids = realIids;
  }

  public ServiceOrderPostResponse realIids(List<String> realIids) {
    this.realIids = realIids;
    return this;
  }

  public ServiceOrderPostResponse addRealIidsItem(String realIidsItem) {
    this.realIids.add(realIidsItem);
    return this;
  }

 /**
   * The new service ID created by the order.
   * @return serviceId
  **/
  @JsonProperty("serviceId")
  @NotNull
  public Integer getServiceId() {
    return serviceId;
  }

  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  public ServiceOrderPostResponse serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Human-readable description of the invoice.
   * @return invoiceDescription
  **/
  @JsonProperty("invoice_description")
  @NotNull
  public String getInvoiceDescription() {
    return invoiceDescription;
  }

  public void setInvoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
  }

  public ServiceOrderPostResponse invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
