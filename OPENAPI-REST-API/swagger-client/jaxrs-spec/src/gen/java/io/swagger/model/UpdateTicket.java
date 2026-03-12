package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Update custom fields of the ticket
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Update custom fields of the ticket")

public class UpdateTicket   {

  private @Valid String ip = null;

  private @Valid String ipAddress = null;

public enum CustomerServerAccessEnum {

    Y(String.valueOf("y")), N(String.valueOf("n"));


    private String value;

    CustomerServerAccessEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static CustomerServerAccessEnum fromValue(String v) {
        for (CustomerServerAccessEnum b : CustomerServerAccessEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid CustomerServerAccessEnum customerServerAccess = null;

  private @Valid String rootPassword = null;

  private @Valid String sudoUsername = null;

  private @Valid String sudoPassword = null;

  private @Valid Integer port = null;

  /**
   **/
  public UpdateTicket ip(String ip) {
    this.ip = ip;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket rootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket sudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket sudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public UpdateTicket port(Integer port) {
    this.port = port;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("port")
  @NotNull

  public Integer getPort() {
    return port;
  }
  public void setPort(Integer port) {
    this.port = port;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
