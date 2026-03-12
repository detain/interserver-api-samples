package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Information about the IPMI connectioj.
 */
@ApiModel(description="Information about the IPMI connectioj.")

public class ServerIpmiLiveInfo  {
  
  @ApiModelProperty(value = "")

  private String text;

  @ApiModelProperty(value = "")

  private String publicIp;

  @ApiModelProperty(value = "")

  private String allowedIp;

  @ApiModelProperty(value = "")

  private String clientUsername;

  @ApiModelProperty(value = "")

  private String clientPassword;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerIpmiLiveInfo serverIpmiLiveInfo = (ServerIpmiLiveInfo) o;
    return Objects.equals(this.text, serverIpmiLiveInfo.text) &&
        Objects.equals(this.publicIp, serverIpmiLiveInfo.publicIp) &&
        Objects.equals(this.allowedIp, serverIpmiLiveInfo.allowedIp) &&
        Objects.equals(this.clientUsername, serverIpmiLiveInfo.clientUsername) &&
        Objects.equals(this.clientPassword, serverIpmiLiveInfo.clientPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, publicIp, allowedIp, clientUsername, clientPassword);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

