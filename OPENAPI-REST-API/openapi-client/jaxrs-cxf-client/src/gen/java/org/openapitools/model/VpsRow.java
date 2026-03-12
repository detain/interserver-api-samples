package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Vps` `GET` request.
 */
@ApiModel(description="A result row from the `Vps` `GET` request.")

public class VpsRow  {
  
 /**
  * The id of the vps.
  */
  @ApiModelProperty(example = "100", required = true, value = "The id of the vps.")

  private String vpsId;

 /**
  * The name of the vps.
  */
  @ApiModelProperty(example = "Builder", required = true, value = "The name of the vps.")

  private String vpsName;

 /**
  * The repeat invoices cost of the vps.
  */
  @ApiModelProperty(example = "10.00", required = true, value = "The repeat invoices cost of the vps.")

  private String repeatInvoicesCost;

 /**
  * The hostname of the vps.
  */
  @ApiModelProperty(example = "vps100", required = true, value = "The hostname of the vps.")

  private String vpsHostname;

 /**
  * The ip of the vps.
  */
  @ApiModelProperty(example = "64.20.46.220", required = true, value = "The ip of the vps.")

  private String vpsIp;

 /**
  * The status of the vps.
  */
  @ApiModelProperty(example = "active", required = true, value = "The status of the vps.")

  private String vpsStatus;

 /**
  * The services name of the vps.
  */
  @ApiModelProperty(example = "KVM Windows VPS Slice", required = true, value = "The services name of the vps.")

  private String servicesName;

 /**
  * The comment of the vps.
  */
  @ApiModelProperty(example = "", required = true, value = "The comment of the vps.")

  private String vpsComment;
 /**
   * The id of the vps.
   * @return vpsId
  **/
  @JsonProperty("vps_id")
  public String getVpsId() {
    return vpsId;
  }

  public void setVpsId(String vpsId) {
    this.vpsId = vpsId;
  }

  public VpsRow vpsId(String vpsId) {
    this.vpsId = vpsId;
    return this;
  }

 /**
   * The name of the vps.
   * @return vpsName
  **/
  @JsonProperty("vps_name")
  public String getVpsName() {
    return vpsName;
  }

  public void setVpsName(String vpsName) {
    this.vpsName = vpsName;
  }

  public VpsRow vpsName(String vpsName) {
    this.vpsName = vpsName;
    return this;
  }

 /**
   * The repeat invoices cost of the vps.
   * @return repeatInvoicesCost
  **/
  @JsonProperty("repeat_invoices_cost")
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public VpsRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

 /**
   * The hostname of the vps.
   * @return vpsHostname
  **/
  @JsonProperty("vps_hostname")
  public String getVpsHostname() {
    return vpsHostname;
  }

  public void setVpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
  }

  public VpsRow vpsHostname(String vpsHostname) {
    this.vpsHostname = vpsHostname;
    return this;
  }

 /**
   * The ip of the vps.
   * @return vpsIp
  **/
  @JsonProperty("vps_ip")
  public String getVpsIp() {
    return vpsIp;
  }

  public void setVpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
  }

  public VpsRow vpsIp(String vpsIp) {
    this.vpsIp = vpsIp;
    return this;
  }

 /**
   * The status of the vps.
   * @return vpsStatus
  **/
  @JsonProperty("vps_status")
  public String getVpsStatus() {
    return vpsStatus;
  }

  public void setVpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
  }

  public VpsRow vpsStatus(String vpsStatus) {
    this.vpsStatus = vpsStatus;
    return this;
  }

 /**
   * The services name of the vps.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public VpsRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The comment of the vps.
   * @return vpsComment
  **/
  @JsonProperty("vps_comment")
  public String getVpsComment() {
    return vpsComment;
  }

  public void setVpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
  }

  public VpsRow vpsComment(String vpsComment) {
    this.vpsComment = vpsComment;
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
    VpsRow vpsRow = (VpsRow) o;
    return Objects.equals(this.vpsId, vpsRow.vpsId) &&
        Objects.equals(this.vpsName, vpsRow.vpsName) &&
        Objects.equals(this.repeatInvoicesCost, vpsRow.repeatInvoicesCost) &&
        Objects.equals(this.vpsHostname, vpsRow.vpsHostname) &&
        Objects.equals(this.vpsIp, vpsRow.vpsIp) &&
        Objects.equals(this.vpsStatus, vpsRow.vpsStatus) &&
        Objects.equals(this.servicesName, vpsRow.servicesName) &&
        Objects.equals(this.vpsComment, vpsRow.vpsComment);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

