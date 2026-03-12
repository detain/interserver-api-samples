package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * A result row from the `Servers` `GET` request.
 **/
@Schema(description="A result row from the `Servers` `GET` request.")
public class ServerRow   {
  
  @Schema(example = "8404", required = true, description = "The id of the server.")
 /**
   * The id of the server.  
  **/
  private String serverId = null;
  
  @Schema(example = "detain@interserver.net", required = true, description = "The account lid of the server.")
 /**
   * The account lid of the server.  
  **/
  private String accountLid = null;
  
  @Schema(example = "testsignup.is.net", required = true, description = "The hostname of the server.")
 /**
   * The hostname of the server.  
  **/
  private String serverHostname = null;
  
  @Schema(example = "deleted", required = true, description = "The status of the server.")
 /**
   * The status of the server.  
  **/
  private String serverStatus = null;
 /**
   * The id of the server.
   * @return serverId
  **/
  @JsonProperty("server_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
