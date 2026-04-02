package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Information about the IPMI connection.
 **/
@Schema(description = "Information about the IPMI connection.")


public class ServerIpmiLiveInfo   {
  @JsonProperty("text")
  private String text = null;
  @JsonProperty("public_ip")
  private String publicIp = null;
  @JsonProperty("allowed_ip")
  private String allowedIp = null;
  @JsonProperty("client_username")
  private String clientUsername = null;
  @JsonProperty("client_password")
  private String clientPassword = null;
  /**
   **/
  public ServerIpmiLiveInfo text(String text) {
    this.text = text;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("text")
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

  
  @Schema(description = "")
  @JsonProperty("public_ip")
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

  
  @Schema(description = "")
  @JsonProperty("allowed_ip")
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

  
  @Schema(description = "")
  @JsonProperty("client_username")
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

  
  @Schema(description = "")
  @JsonProperty("client_password")
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
