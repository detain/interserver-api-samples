package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class ServerLease   {
  @JsonProperty("mac")
  private String mac = null;
  @JsonProperty("authenticated")
  private Boolean authenticated = null;
  @JsonProperty("group")
  private String group = null;
  /**
   * MAC address associated with the lease.
   **/
  public ServerLease mac(String mac) {
    this.mac = mac;
    return this;
  }

  
  @Schema(example = "0c:c4:7a:af:35:00", required = true, description = "MAC address associated with the lease.")
  @JsonProperty("mac")
  public String getMac() {
    return mac;
  }
  public void setMac(String mac) {
    this.mac = mac;
  }

  /**
   * Indicates if the lease is authenticated.
   **/
  public ServerLease authenticated(Boolean authenticated) {
    this.authenticated = authenticated;
    return this;
  }

  
  @Schema(example = "false", required = true, description = "Indicates if the lease is authenticated.")
  @JsonProperty("authenticated")
  public Boolean isAuthenticated() {
    return authenticated;
  }
  public void setAuthenticated(Boolean authenticated) {
    this.authenticated = authenticated;
  }

  /**
   * Group identifier for the lease.
   **/
  public ServerLease group(String group) {
    this.group = group;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "Group identifier for the lease.")
  @JsonProperty("group")
  public String getGroup() {
    return group;
  }
  public void setGroup(String group) {
    this.group = group;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerLease serverLease = (ServerLease) o;
    return Objects.equals(mac, serverLease.mac) &&
        Objects.equals(authenticated, serverLease.authenticated) &&
        Objects.equals(group, serverLease.group);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mac, authenticated, group);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
