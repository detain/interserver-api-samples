package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * A result row from the `Vps` `GET` request.
 **/
@Schema(description="A result row from the `Vps` `GET` request.")
public class VpsRow   {
  
  @Schema(example = "100", required = true, description = "The id of the vps.")
 /**
   * The id of the vps.  
  **/
  private String vpsId = null;
  
  @Schema(example = "Builder", required = true, description = "The name of the vps.")
 /**
   * The name of the vps.  
  **/
  private String vpsName = null;
  
  @Schema(example = "10.00", required = true, description = "The repeat invoices cost of the vps.")
 /**
   * The repeat invoices cost of the vps.  
  **/
  private String repeatInvoicesCost = null;
  
  @Schema(example = "vps100", required = true, description = "The hostname of the vps.")
 /**
   * The hostname of the vps.  
  **/
  private String vpsHostname = null;
  
  @Schema(example = "64.20.46.220", required = true, description = "The ip of the vps.")
 /**
   * The ip of the vps.  
  **/
  private String vpsIp = null;
  
  @Schema(example = "active", required = true, description = "The status of the vps.")
 /**
   * The status of the vps.  
  **/
  private String vpsStatus = null;
  
  @Schema(example = "KVM Windows VPS Slice", required = true, description = "The services name of the vps.")
 /**
   * The services name of the vps.  
  **/
  private String servicesName = null;
  
  @Schema(required = true, description = "The comment of the vps.")
 /**
   * The comment of the vps.  
  **/
  private String vpsComment = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
