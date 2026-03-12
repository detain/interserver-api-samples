package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;





public class OrderBuyNowServerBody   {
  @JsonProperty("server_id")
  private BigDecimal serverId = null;
  @JsonProperty("server_hostname")
  private String serverHostname = null;
  @JsonProperty("server_root_password")
  private String serverRootPassword = null;
  /**
   * The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
   **/
  public OrderBuyNowServerBody serverId(BigDecimal serverId) {
    this.serverId = serverId;
    return this;
  }

  
  @Schema(example = "2343", description = "The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.")
  @JsonProperty("server_id")
  public BigDecimal getServerId() {
    return serverId;
  }
  public void setServerId(BigDecimal serverId) {
    this.serverId = serverId;
  }

  /**
   * The fully-qualified hostname to assign to the server.
   **/
  public OrderBuyNowServerBody serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

  
  @Schema(example = "server.int.com", description = "The fully-qualified hostname to assign to the server.")
  @JsonProperty("server_hostname")
  public String getServerHostname() {
    return serverHostname;
  }
  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  /**
   * The root or administrator password to set on the server.
   **/
  public OrderBuyNowServerBody serverRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
    return this;
  }

  
  @Schema(example = "uD1c!@cgD", description = "The root or administrator password to set on the server.")
  @JsonProperty("server_root_password")
  public String getServerRootPassword() {
    return serverRootPassword;
  }
  public void setServerRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrderBuyNowServerBody orderBuyNowServerBody = (OrderBuyNowServerBody) o;
    return Objects.equals(serverId, orderBuyNowServerBody.serverId) &&
        Objects.equals(serverHostname, orderBuyNowServerBody.serverHostname) &&
        Objects.equals(serverRootPassword, orderBuyNowServerBody.serverRootPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serverId, serverHostname, serverRootPassword);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
