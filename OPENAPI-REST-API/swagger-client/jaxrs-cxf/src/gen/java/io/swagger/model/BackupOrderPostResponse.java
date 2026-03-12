package io.swagger.model;

import io.swagger.model.BackupOrderPostResponseCjParams;
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
  * Backup Order Placement Response
 **/
@Schema(description="Backup Order Placement Response")
public class BackupOrderPostResponse   {
  
  @Schema(description = "")
  private Boolean _continue = null;
  
  @Schema(description = "")
  private List<String> errors = null;
  
  @Schema(description = "")
  private String totalCost = null;
  
  @Schema(description = "")
  private String iid = null;
  
  @Schema(description = "")
  private List<String> iids = null;
  
  @Schema(description = "")
  private List<String> realIids = null;
  
  @Schema(description = "")
  private Integer serviceId = null;
  
  @Schema(description = "")
  private String invoiceDescription = null;
  
  @Schema(description = "")
  private BackupOrderPostResponseCjParams cjParams = null;
 /**
   * Get _continue
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

  public BackupOrderPostResponse _continue(Boolean _continue) {
    this._continue = _continue;
    return this;
  }

 /**
   * Get errors
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

  public BackupOrderPostResponse errors(List<String> errors) {
    this.errors = errors;
    return this;
  }

  public BackupOrderPostResponse addErrorsItem(String errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }

 /**
   * Get totalCost
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

  public BackupOrderPostResponse totalCost(String totalCost) {
    this.totalCost = totalCost;
    return this;
  }

 /**
   * Get iid
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

  public BackupOrderPostResponse iid(String iid) {
    this.iid = iid;
    return this;
  }

 /**
   * Get iids
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

  public BackupOrderPostResponse iids(List<String> iids) {
    this.iids = iids;
    return this;
  }

  public BackupOrderPostResponse addIidsItem(String iidsItem) {
    this.iids.add(iidsItem);
    return this;
  }

 /**
   * Get realIids
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

  public BackupOrderPostResponse realIids(List<String> realIids) {
    this.realIids = realIids;
    return this;
  }

  public BackupOrderPostResponse addRealIidsItem(String realIidsItem) {
    this.realIids.add(realIidsItem);
    return this;
  }

 /**
   * Get serviceId
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

  public BackupOrderPostResponse serviceId(Integer serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Get invoiceDescription
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

  public BackupOrderPostResponse invoiceDescription(String invoiceDescription) {
    this.invoiceDescription = invoiceDescription;
    return this;
  }

 /**
   * Get cjParams
   * @return cjParams
  **/
  @JsonProperty("cj_params")
  @NotNull
  public BackupOrderPostResponseCjParams getCjParams() {
    return cjParams;
  }

  public void setCjParams(BackupOrderPostResponseCjParams cjParams) {
    this.cjParams = cjParams;
  }

  public BackupOrderPostResponse cjParams(BackupOrderPostResponseCjParams cjParams) {
    this.cjParams = cjParams;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPostResponse {\n");
    
    sb.append("    _continue: ").append(toIndentedString(_continue)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    totalCost: ").append(toIndentedString(totalCost)).append("\n");
    sb.append("    iid: ").append(toIndentedString(iid)).append("\n");
    sb.append("    iids: ").append(toIndentedString(iids)).append("\n");
    sb.append("    realIids: ").append(toIndentedString(realIids)).append("\n");
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
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
