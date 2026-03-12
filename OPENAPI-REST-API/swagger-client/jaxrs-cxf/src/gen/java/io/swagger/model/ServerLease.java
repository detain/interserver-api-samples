package io.swagger.model;

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

public class ServerLease   {
  
  @Schema(example = "0c:c4:7a:af:35:00", required = true, description = "MAC address associated with the lease.")
 /**
   * MAC address associated with the lease.  
  **/
  private String mac = null;
  
  @Schema(example = "false", required = true, description = "Indicates if the lease is authenticated.")
 /**
   * Indicates if the lease is authenticated.  
  **/
  private Boolean authenticated = null;
  
  @Schema(example = "1", required = true, description = "Group identifier for the lease.")
 /**
   * Group identifier for the lease.  
  **/
  private String group = null;
 /**
   * MAC address associated with the lease.
   * @return mac
  **/
  @JsonProperty("mac")
  @NotNull
  public String getMac() {
    return mac;
  }

  public void setMac(String mac) {
    this.mac = mac;
  }

  public ServerLease mac(String mac) {
    this.mac = mac;
    return this;
  }

 /**
   * Indicates if the lease is authenticated.
   * @return authenticated
  **/
  @JsonProperty("authenticated")
  @NotNull
  public Boolean isAuthenticated() {
    return authenticated;
  }

  public void setAuthenticated(Boolean authenticated) {
    this.authenticated = authenticated;
  }

  public ServerLease authenticated(Boolean authenticated) {
    this.authenticated = authenticated;
    return this;
  }

 /**
   * Group identifier for the lease.
   * @return group
  **/
  @JsonProperty("group")
  @NotNull
  public String getGroup() {
    return group;
  }

  public void setGroup(String group) {
    this.group = group;
  }

  public ServerLease group(String group) {
    this.group = group;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerLease {\n");
    
    sb.append("    mac: ").append(toIndentedString(mac)).append("\n");
    sb.append("    authenticated: ").append(toIndentedString(authenticated)).append("\n");
    sb.append("    group: ").append(toIndentedString(group)).append("\n");
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
