package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupOrderPostResponseCjParams;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Backup Order Placement Response")

public class BackupOrderPostResponse   {
  private Boolean _continue = null;  private List<String> errors = new ArrayList<String>();  private String totalCost = null;  private String iid = null;  private List<String> iids = new ArrayList<String>();  private List<String> realIids = new ArrayList<String>();  private Integer serviceId = null;  private String invoiceDescription = null;  private BackupOrderPostResponseCjParams cjParams = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("continue")
  @NotNull
  public Boolean isContinue() {
    return _continue;
  }
  public void setContinue(Boolean _continue) {
    this._continue = _continue;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("errors")
  @NotNull
  public List<String> getErrors() {
    return errors;
  }
  public void setErrors(List<String> errors) {
    this.errors = errors;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("total_cost")
  @NotNull
  public String getTotalCost() {
    return totalCost;
  }
  public void setTotalCost(String totalCost) {
    this.totalCost = totalCost;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("iid")
  @NotNull
  public String getIid() {
    return iid;
  }
  public void setIid(String iid) {
    this.iid = iid;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("iids")
  @NotNull
  public List<String> getIids() {
    return iids;
  }
  public void setIids(List<String> iids) {
    this.iids = iids;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("real_iids")
  @NotNull
  public List<String> getRealIids() {
    return realIids;
  }
  public void setRealIids(List<String> realIids) {
    this.realIids = realIids;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("serviceId")
  @NotNull
  public Integer getServiceId() {
    return serviceId;
  }
  public void setServiceId(Integer serviceId) {
    this.serviceId = serviceId;
  }

  /**
   **/
  
  @Schema(description = "")
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
  public BackupOrderPostResponseCjParams getCjParams() {
    return cjParams;
  }
  public void setCjParams(BackupOrderPostResponseCjParams cjParams) {
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
    BackupOrderPostResponse backupOrderPostResponse = (BackupOrderPostResponse) o;
    return Objects.equals(_continue, backupOrderPostResponse._continue) &&
        Objects.equals(errors, backupOrderPostResponse.errors) &&
        Objects.equals(totalCost, backupOrderPostResponse.totalCost) &&
        Objects.equals(iid, backupOrderPostResponse.iid) &&
        Objects.equals(iids, backupOrderPostResponse.iids) &&
        Objects.equals(realIids, backupOrderPostResponse.realIids) &&
        Objects.equals(serviceId, backupOrderPostResponse.serviceId) &&
        Objects.equals(invoiceDescription, backupOrderPostResponse.invoiceDescription) &&
        Objects.equals(cjParams, backupOrderPostResponse.cjParams);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_continue, errors, totalCost, iid, iids, realIids, serviceId, invoiceDescription, cjParams);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
