package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Servers` `GET` request.
 */
@ApiModel(description="A result row from the `Servers` `GET` request.")

public class ServerRow  {
  
 /**
  * The id of the server.
  */
  @ApiModelProperty(example = "8404", required = true, value = "The id of the server.")

  private String serverId;

 /**
  * The account lid of the server.
  */
  @ApiModelProperty(example = "detain@interserver.net", required = true, value = "The account lid of the server.")

  private String accountLid;

 /**
  * The hostname of the server.
  */
  @ApiModelProperty(example = "testsignup.is.net", required = true, value = "The hostname of the server.")

  private String serverHostname;

 /**
  * The status of the server.
  */
  @ApiModelProperty(example = "deleted", required = true, value = "The status of the server.")

  private String serverStatus;
 /**
   * The id of the server.
   * @return serverId
  **/
  @JsonProperty("server_id")
  public String getServerId() {
    return serverId;
  }

  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  public ServerRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

 /**
   * The account lid of the server.
   * @return accountLid
  **/
  @JsonProperty("account_lid")
  public String getAccountLid() {
    return accountLid;
  }

  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  public ServerRow accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

 /**
   * The hostname of the server.
   * @return serverHostname
  **/
  @JsonProperty("server_hostname")
  public String getServerHostname() {
    return serverHostname;
  }

  public void setServerHostname(String serverHostname) {
    this.serverHostname = serverHostname;
  }

  public ServerRow serverHostname(String serverHostname) {
    this.serverHostname = serverHostname;
    return this;
  }

 /**
   * The status of the server.
   * @return serverStatus
  **/
  @JsonProperty("server_status")
  public String getServerStatus() {
    return serverStatus;
  }

  public void setServerStatus(String serverStatus) {
    this.serverStatus = serverStatus;
  }

  public ServerRow serverStatus(String serverStatus) {
    this.serverStatus = serverStatus;
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
    ServerRow serverRow = (ServerRow) o;
    return Objects.equals(this.serverId, serverRow.serverId) &&
        Objects.equals(this.accountLid, serverRow.accountLid) &&
        Objects.equals(this.serverHostname, serverRow.serverHostname) &&
        Objects.equals(this.serverStatus, serverRow.serverStatus);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

