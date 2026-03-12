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
  * Information about the IPMI connectioj.
 **/
@Schema(description="Information about the IPMI connectioj.")
public class ServerIpmiLiveInfo   {
  
  @Schema(description = "")
  private String text = null;
  
  @Schema(description = "")
  private String publicIp = null;
  
  @Schema(description = "")
  private String allowedIp = null;
  
  @Schema(description = "")
  private String clientUsername = null;
  
  @Schema(description = "")
  private String clientPassword = null;
 /**
   * Get text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public ServerIpmiLiveInfo text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Get publicIp
   * @return publicIp
  **/
  @JsonProperty("public_ip")
  public String getPublicIp() {
    return publicIp;
  }

  public void setPublicIp(String publicIp) {
    this.publicIp = publicIp;
  }

  public ServerIpmiLiveInfo publicIp(String publicIp) {
    this.publicIp = publicIp;
    return this;
  }

 /**
   * Get allowedIp
   * @return allowedIp
  **/
  @JsonProperty("allowed_ip")
  public String getAllowedIp() {
    return allowedIp;
  }

  public void setAllowedIp(String allowedIp) {
    this.allowedIp = allowedIp;
  }

  public ServerIpmiLiveInfo allowedIp(String allowedIp) {
    this.allowedIp = allowedIp;
    return this;
  }

 /**
   * Get clientUsername
   * @return clientUsername
  **/
  @JsonProperty("client_username")
  public String getClientUsername() {
    return clientUsername;
  }

  public void setClientUsername(String clientUsername) {
    this.clientUsername = clientUsername;
  }

  public ServerIpmiLiveInfo clientUsername(String clientUsername) {
    this.clientUsername = clientUsername;
    return this;
  }

 /**
   * Get clientPassword
   * @return clientPassword
  **/
  @JsonProperty("client_password")
  public String getClientPassword() {
    return clientPassword;
  }

  public void setClientPassword(String clientPassword) {
    this.clientPassword = clientPassword;
  }

  public ServerIpmiLiveInfo clientPassword(String clientPassword) {
    this.clientPassword = clientPassword;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerIpmiLiveInfo {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    publicIp: ").append(toIndentedString(publicIp)).append("\n");
    sb.append("    allowedIp: ").append(toIndentedString(allowedIp)).append("\n");
    sb.append("    clientUsername: ").append(toIndentedString(clientUsername)).append("\n");
    sb.append("    clientPassword: ").append(toIndentedString(clientPassword)).append("\n");
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
