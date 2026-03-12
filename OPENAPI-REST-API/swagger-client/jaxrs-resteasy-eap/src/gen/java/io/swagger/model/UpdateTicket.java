package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Update custom fields of the ticket")

public class UpdateTicket   {
  private String ip = null;
  private String ipAddress = null;
  /**
   * Gets or Sets customerServerAccess
   */
  public enum CustomerServerAccessEnum {
    Y("y"),
    N("n");
    private String value;

    CustomerServerAccessEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private CustomerServerAccessEnum customerServerAccess = null;
  private String rootPassword = null;
  private String sudoUsername = null;
  private String sudoPassword = null;
  private Integer port = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip")
  @NotNull
  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip_address")
  @NotNull
  public String getIpAddress() {
    return ipAddress;
  }
  public void setIpAddress(String ipAddress) {
    this.ipAddress = ipAddress;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("customer_server_access")
  @NotNull
  public CustomerServerAccessEnum getCustomerServerAccess() {
    return customerServerAccess;
  }
  public void setCustomerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("root_password")
  @NotNull
  public String getRootPassword() {
    return rootPassword;
  }
  public void setRootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("sudo_username")
  @NotNull
  public String getSudoUsername() {
    return sudoUsername;
  }
  public void setSudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("sudo_password")
  @NotNull
  public String getSudoPassword() {
    return sudoPassword;
  }
  public void setSudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("port")
  @NotNull
  public Integer getPort() {
    return port;
  }
  public void setPort(Integer port) {
    this.port = port;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UpdateTicket updateTicket = (UpdateTicket) o;
    return Objects.equals(ip, updateTicket.ip) &&
        Objects.equals(ipAddress, updateTicket.ipAddress) &&
        Objects.equals(customerServerAccess, updateTicket.customerServerAccess) &&
        Objects.equals(rootPassword, updateTicket.rootPassword) &&
        Objects.equals(sudoUsername, updateTicket.sudoUsername) &&
        Objects.equals(sudoPassword, updateTicket.sudoPassword) &&
        Objects.equals(port, updateTicket.port);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UpdateTicket {\n");
    
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
    sb.append("    ipAddress: ").append(toIndentedString(ipAddress)).append("\n");
    sb.append("    customerServerAccess: ").append(toIndentedString(customerServerAccess)).append("\n");
    sb.append("    rootPassword: ").append(toIndentedString(rootPassword)).append("\n");
    sb.append("    sudoUsername: ").append(toIndentedString(sudoUsername)).append("\n");
    sb.append("    sudoPassword: ").append(toIndentedString(sudoPassword)).append("\n");
    sb.append("    port: ").append(toIndentedString(port)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
