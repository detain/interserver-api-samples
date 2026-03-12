package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * OrderBuyNowServerBody
 */
@Validated
@Introspected

public class OrderBuyNowServerBody   {
  @JsonProperty("server_id")
  private BigDecimal serverId = null;

  @JsonProperty("server_hostname")
  private String serverHostname = null;

  @JsonProperty("server_root_password")
  private String serverRootPassword = null;

  public OrderBuyNowServerBody serverId(BigDecimal serverId) {
    this.serverId = serverId;
    return this;
  }

  /**
   * The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
   * @return serverId
  **/
  @Schema(example = "2343", description = "The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.")
  @NotNull

  @Valid
  public BigDecimal getServerId() {
    return serverId;
  }

  public void setServerId(BigDecimal serverId) {
    this.serverId = serverId;
  }

  public OrderBuyNowServerBody serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

  /**
   * The fully-qualified hostname to assign to the server.
   * @return serverHostname
  **/
  @Schema(example = "server.int.com", description = "The fully-qualified hostname to assign to the server.")
  @NotNull

  public String getServerHostname() {
    return serverHostname;
  }

  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  public OrderBuyNowServerBody serverRootPassword(String serverRootPassword) {
    this.serverRootPassword = serverRootPassword;
    return this;
  }

  /**
   * The root or administrator password to set on the server.
   * @return serverRootPassword
  **/
  @Schema(example = "uD1c!@cgD", description = "The root or administrator password to set on the server.")
  @NotNull

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
    return Objects.equals(this.serverId, orderBuyNowServerBody.serverId) &&
        Objects.equals(this.serverHostname, orderBuyNowServerBody.serverHostname) &&
        Objects.equals(this.serverRootPassword, orderBuyNowServerBody.serverRootPassword);
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
