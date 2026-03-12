package io.swagger.model;

import java.math.BigDecimal;
import javax.validation.constraints.*;

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

public class OrderBuyNowServerBody   {
  
  @Schema(example = "2343", description = "The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.")
 /**
   * The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.  
  **/
  private BigDecimal serverId = null;
  
  @Schema(example = "server.int.com", description = "The fully-qualified hostname to assign to the server.")
 /**
   * The fully-qualified hostname to assign to the server.  
  **/
  private String serverHostname = null;
  
  @Schema(example = "uD1c!@cgD", description = "The root or administrator password to set on the server.")
 /**
   * The root or administrator password to set on the server.  
  **/
  private String serverRootPassword = null;
 /**
   * The ID of the buy-it-now server configuration to order. Use the server listing from &#x60;GET /servers/order/buy_now_server&#x60; to find valid IDs.
   * @return serverId
  **/
  @JsonProperty("server_id")
  @NotNull
  public BigDecimal getServerId() {
    return serverId;
  }

  public void setServerId(BigDecimal serverId) {
    this.serverId = serverId;
  }

  public OrderBuyNowServerBody serverId(BigDecimal serverId) {
    this.serverId = serverId;
    return this;
  }

 /**
   * The fully-qualified hostname to assign to the server.
   * @return serverHostname
  **/
  @JsonProperty("server_hostname")
  @NotNull
  public String getServerHostname() {
    return serverHostname;
  }

  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  public OrderBuyNowServerBody serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

 /**
   * The root or administrator password to set on the server.
   * @return serverRootPassword
  **/
  @JsonProperty("server_root_password")
  @NotNull
  public String getServerRootPassword() {
    return serverRootPassword;
  }

  public void setServerRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
  }

  public OrderBuyNowServerBody serverRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrderBuyNowServerBody {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
