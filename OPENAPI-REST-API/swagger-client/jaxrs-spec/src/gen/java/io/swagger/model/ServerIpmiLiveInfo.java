package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Information about the IPMI connectioj.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Information about the IPMI connectioj.")

public class ServerIpmiLiveInfo   {

  private @Valid String text = null;

  private @Valid String publicIp = null;

  private @Valid String allowedIp = null;

  private @Valid String clientUsername = null;

  private @Valid String clientPassword = null;

  /**
   **/
  public ServerIpmiLiveInfo text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   **/
  public ServerIpmiLiveInfo publicIp(String publicIp) {
    this.publicIp = publicIp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("public_ip")
  @NotNull

  public String getPublicIp() {
    return publicIp;
  }
  public void setPublicIp(String publicIp) {
    this.publicIp = publicIp;
  }

  /**
   **/
  public ServerIpmiLiveInfo allowedIp(String allowedIp) {
    this.allowedIp = allowedIp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("allowed_ip")
  @NotNull

  public String getAllowedIp() {
    return allowedIp;
  }
  public void setAllowedIp(String allowedIp) {
    this.allowedIp = allowedIp;
  }

  /**
   **/
  public ServerIpmiLiveInfo clientUsername(String clientUsername) {
    this.clientUsername = clientUsername;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("client_username")
  @NotNull

  public String getClientUsername() {
    return clientUsername;
  }
  public void setClientUsername(String clientUsername) {
    this.clientUsername = clientUsername;
  }

  /**
   **/
  public ServerIpmiLiveInfo clientPassword(String clientPassword) {
    this.clientPassword = clientPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("client_password")
  @NotNull

  public String getClientPassword() {
    return clientPassword;
  }
  public void setClientPassword(String clientPassword) {
    this.clientPassword = clientPassword;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerIpmiLiveInfo serverIpmiLiveInfo = (ServerIpmiLiveInfo) o;
    return Objects.equals(text, serverIpmiLiveInfo.text) &&
        Objects.equals(publicIp, serverIpmiLiveInfo.publicIp) &&
        Objects.equals(allowedIp, serverIpmiLiveInfo.allowedIp) &&
        Objects.equals(clientUsername, serverIpmiLiveInfo.clientUsername) &&
        Objects.equals(clientPassword, serverIpmiLiveInfo.clientPassword);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
