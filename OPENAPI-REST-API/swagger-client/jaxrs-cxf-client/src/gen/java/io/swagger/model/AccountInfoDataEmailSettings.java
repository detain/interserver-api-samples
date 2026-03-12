package io.swagger.model;


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

public class AccountInfoDataEmailSettings   {
  
  @Schema(description = "")
  private String adminccBadResponse = null;
  
  @Schema(description = "")
  private String adminmassCommunicationsTpl = null;
 /**
   * Get adminccBadResponse
   * @return adminccBadResponse
  **/
  @JsonProperty("admin/cc_bad_response")
  public String getAdminccBadResponse() {
    return adminccBadResponse;
  }

  public void setAdminccBadResponse(String adminccBadResponse) {
    this.adminccBadResponse = adminccBadResponse;
  }

  public AccountInfoDataEmailSettings adminccBadResponse(String adminccBadResponse) {
    this.adminccBadResponse = adminccBadResponse;
    return this;
  }

 /**
   * Get adminmassCommunicationsTpl
   * @return adminmassCommunicationsTpl
  **/
  @JsonProperty("admin/mass_communications.tpl")
  public String getAdminmassCommunicationsTpl() {
    return adminmassCommunicationsTpl;
  }

  public void setAdminmassCommunicationsTpl(String adminmassCommunicationsTpl) {
    this.adminmassCommunicationsTpl = adminmassCommunicationsTpl;
  }

  public AccountInfoDataEmailSettings adminmassCommunicationsTpl(String adminmassCommunicationsTpl) {
    this.adminmassCommunicationsTpl = adminmassCommunicationsTpl;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataEmailSettings {\n");
    
    sb.append("    adminccBadResponse: ").append(toIndentedString(adminccBadResponse)).append("\n");
    sb.append("    adminmassCommunicationsTpl: ").append(toIndentedString(adminmassCommunicationsTpl)).append("\n");
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
