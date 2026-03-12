package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PlaceBuyNowServerRequest  {
  
 /**
  * The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
  */
  @ApiModelProperty(example = "2343", value = "The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.")

  private BigDecimal serverId;

 /**
  * The fully-qualified hostname to assign to the server.
  */
  @ApiModelProperty(example = "server.int.com", value = "The fully-qualified hostname to assign to the server.")

  private String serverHostname;

 /**
  * The root or administrator password to set on the server.
  */
  @ApiModelProperty(example = "uD1c!@cgD", value = "The root or administrator password to set on the server.")

  private String serverRootPassword;
 /**
   * The ID of the buy-it-now server configuration to order. Use the server listing from &#x60;GET /servers/order/buy_now_server&#x60; to find valid IDs.
   * @return serverId
  **/
  @JsonProperty("server_id")
  public BigDecimal getServerId() {
    return serverId;
  }

  public void setServerId(BigDecimal serverId) {
    this.serverId = serverId;
  }

  public PlaceBuyNowServerRequest serverId(BigDecimal serverId) {
    this.serverId = serverId;
    return this;
  }

 /**
   * The fully-qualified hostname to assign to the server.
   * @return serverHostname
  **/
  @JsonProperty("server_hostname")
  public String getServerHostname() {
    return serverHostname;
  }

  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  public PlaceBuyNowServerRequest serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

 /**
   * The root or administrator password to set on the server.
   * @return serverRootPassword
  **/
  @JsonProperty("server_root_password")
  public String getServerRootPassword() {
    return serverRootPassword;
  }

  public void setServerRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
  }

  public PlaceBuyNowServerRequest serverRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
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
    PlaceBuyNowServerRequest placeBuyNowServerRequest = (PlaceBuyNowServerRequest) o;
    return Objects.equals(this.serverId, placeBuyNowServerRequest.serverId) &&
        Objects.equals(this.serverHostname, placeBuyNowServerRequest.serverHostname) &&
        Objects.equals(this.serverRootPassword, placeBuyNowServerRequest.serverRootPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serverId, serverHostname, serverRootPassword);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PlaceBuyNowServerRequest {\n");
    
    sb.append("    serverId: ").append(toIndentedString(serverId)).append("\n");
    sb.append("    serverHostname: ").append(toIndentedString(serverHostname)).append("\n");
    sb.append("    serverRootPassword: ").append(toIndentedString(serverRootPassword)).append("\n");
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

