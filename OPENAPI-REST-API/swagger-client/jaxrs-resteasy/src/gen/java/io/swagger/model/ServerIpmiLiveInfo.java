package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Information about the IPMI connectioj.")

public class ServerIpmiLiveInfo   {
  private String text = null;  private String publicIp = null;  private String allowedIp = null;  private String clientUsername = null;  private String clientPassword = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
