package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Servers` `GET` request.")

public class ServerRow   {

  private @Valid String serverId = null;

  private @Valid String accountLid = null;

  private @Valid String serverHostname = null;

  private @Valid String serverStatus = null;

  /**
   * The id of the server.
   **/
  public ServerRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

  
  @ApiModelProperty(example = "8404", required = true, value = "The id of the server.")
  @JsonProperty("server_id")
  @NotNull

  public String getServerId() {
    return serverId;
  }
  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  /**
   * The account lid of the server.
   **/
  public ServerRow accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

  
  @ApiModelProperty(example = "detain@interserver.net", required = true, value = "The account lid of the server.")
  @JsonProperty("account_lid")
  @NotNull

  public String getAccountLid() {
    return accountLid;
  }
  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  /**
   * The hostname of the server.
   **/
  public ServerRow serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

  
  @ApiModelProperty(example = "testsignup.is.net", required = true, value = "The hostname of the server.")
  @JsonProperty("server_hostname")
  @NotNull

  public String getServerHostname() {
    return serverHostname;
  }
  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  /**
   * The status of the server.
   **/
  public ServerRow serverStatus(String serverStatus) {
    this.serverStatus = serverStatus;
    return this;
  }

  
  @ApiModelProperty(example = "deleted", required = true, value = "The status of the server.")
  @JsonProperty("server_status")
  @NotNull

  public String getServerStatus() {
    return serverStatus;
  }
  public void setServerStatus(String serverStatus) {
    this.serverStatus = serverStatus;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerRow serverRow = (ServerRow) o;
    return Objects.equals(serverId, serverRow.serverId) &&
        Objects.equals(accountLid, serverRow.accountLid) &&
        Objects.equals(serverHostname, serverRow.serverHostname) &&
        Objects.equals(serverStatus, serverRow.serverStatus);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serverId, accountLid, serverHostname, serverStatus);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerRow {\n");
    
    sb.append("    serverId: ").append(toIndentedString(serverId)).append("\n");
    sb.append("    accountLid: ").append(toIndentedString(accountLid)).append("\n");
    sb.append("    serverHostname: ").append(toIndentedString(serverHostname)).append("\n");
    sb.append("    serverStatus: ").append(toIndentedString(serverStatus)).append("\n");
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
