package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Vps&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Vps` `GET` request.")

public class VpsRow   {

  private @Valid String vpsId = null;

  private @Valid String vpsName = null;

  private @Valid String repeatInvoicesCost = null;

  private @Valid String vpsHostname = null;

  private @Valid String vpsIp = null;

  private @Valid String vpsStatus = null;

  private @Valid String servicesName = null;

  private @Valid String vpsComment = null;

  /**
   * The id of the vps.
   **/
  public VpsRow vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

  
  @ApiModelProperty(example = "100", required = true, value = "The id of the vps.")
  @JsonProperty("vps_id")
  @NotNull

  public String getVpsId() {
    return vpsId;
  }
  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  /**
   * The name of the vps.
   **/
  public VpsRow vpsName(String vpsName) {
    this.vpsName = vpsName;
    return this;
  }

  
  @ApiModelProperty(example = "Builder", required = true, value = "The name of the vps.")
  @JsonProperty("vps_name")
  @NotNull

  public String getVpsName() {
    return vpsName;
  }
  public void setVpsName(String vpsName) {
    this.vpsName = vpsName;
  }

  /**
   * The repeat invoices cost of the vps.
   **/
  public VpsRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

  
  @ApiModelProperty(example = "10.00", required = true, value = "The repeat invoices cost of the vps.")
  @JsonProperty("repeat_invoices_cost")
  @NotNull

  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }
  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  /**
   * The hostname of the vps.
   **/
  public VpsRow vpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
    return this;
  }

  
  @ApiModelProperty(example = "vps100", required = true, value = "The hostname of the vps.")
  @JsonProperty("vps_hostname")
  @NotNull

  public String getVpsHostname() {
    return vpsHostname;
  }
  public void setVpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
  }

  /**
   * The ip of the vps.
   **/
  public VpsRow vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

  
  @ApiModelProperty(example = "64.20.46.220", required = true, value = "The ip of the vps.")
  @JsonProperty("vps_ip")
  @NotNull

  public String getVpsIp() {
    return vpsIp;
  }
  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  /**
   * The status of the vps.
   **/
  public VpsRow vpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
    return this;
  }

  
  @ApiModelProperty(example = "active", required = true, value = "The status of the vps.")
  @JsonProperty("vps_status")
  @NotNull

  public String getVpsStatus() {
    return vpsStatus;
  }
  public void setVpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
  }

  /**
   * The services name of the vps.
   **/
  public VpsRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = "KVM Windows VPS Slice", required = true, value = "The services name of the vps.")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The comment of the vps.
   **/
  public VpsRow vpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The comment of the vps.")
  @JsonProperty("vps_comment")
  @NotNull

  public String getVpsComment() {
    return vpsComment;
  }
  public void setVpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsRow vpsRow = (VpsRow) o;
    return Objects.equals(vpsId, vpsRow.vpsId) &&
        Objects.equals(vpsName, vpsRow.vpsName) &&
        Objects.equals(repeatInvoicesCost, vpsRow.repeatInvoicesCost) &&
        Objects.equals(vpsHostname, vpsRow.vpsHostname) &&
        Objects.equals(vpsIp, vpsRow.vpsIp) &&
        Objects.equals(vpsStatus, vpsRow.vpsStatus) &&
        Objects.equals(servicesName, vpsRow.servicesName) &&
        Objects.equals(vpsComment, vpsRow.vpsComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vpsId, vpsName, repeatInvoicesCost, vpsHostname, vpsIp, vpsStatus, servicesName, vpsComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsRow {\n");
    
    sb.append("    vpsId: ").append(toIndentedString(vpsId)).append("\n");
    sb.append("    vpsName: ").append(toIndentedString(vpsName)).append("\n");
    sb.append("    repeatInvoicesCost: ").append(toIndentedString(repeatInvoicesCost)).append("\n");
    sb.append("    vpsHostname: ").append(toIndentedString(vpsHostname)).append("\n");
    sb.append("    vpsIp: ").append(toIndentedString(vpsIp)).append("\n");
    sb.append("    vpsStatus: ").append(toIndentedString(vpsStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    vpsComment: ").append(toIndentedString(vpsComment)).append("\n");
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
