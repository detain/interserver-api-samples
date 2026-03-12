package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Update custom fields of the ticket
 */
@Schema(description = "Update custom fields of the ticket")
@Validated
@Introspected

public class UpdateTicket   {
  @JsonProperty("ip")
  private String ip = null;

  @JsonProperty("ip_address")
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

    @JsonCreator
    public static CustomerServerAccessEnum fromValue(String text) {
      for (CustomerServerAccessEnum b : CustomerServerAccessEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }
  @JsonProperty("customer_server_access")
  private CustomerServerAccessEnum customerServerAccess = null;

  @JsonProperty("root_password")
  private String rootPassword = null;

  @JsonProperty("sudo_username")
  private String sudoUsername = null;

  @JsonProperty("sudo_password")
  private String sudoPassword = null;

  @JsonProperty("port")
  private Integer port = null;

  public UpdateTicket ip(String ip) {
    this.ip = ip;
    return this;
  }

  /**
   * Get ip
   * @return ip
  **/
  @Schema(description = "")
  @NotNull

  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public UpdateTicket ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
    return this;
  }

  /**
   * Get ipAddress
   * @return ipAddress
  **/
  @Schema(description = "")
  @NotNull

  public String getIpAddress() {
    return ipAddress;
  }

  public void setIpAddress(String ipAddress) {
    this.ipAddress = ipAddress;
  }

  public UpdateTicket customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

  /**
   * Get customerServerAccess
   * @return customerServerAccess
  **/
  @Schema(description = "")
  @NotNull

  public CustomerServerAccessEnum getCustomerServerAccess() {
    return customerServerAccess;
  }

  public void setCustomerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
  }

  public UpdateTicket rootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
    return this;
  }

  /**
   * Get rootPassword
   * @return rootPassword
  **/
  @Schema(description = "")
  @NotNull

  public String getRootPassword() {
    return rootPassword;
  }

  public void setRootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
  }

  public UpdateTicket sudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
    return this;
  }

  /**
   * Get sudoUsername
   * @return sudoUsername
  **/
  @Schema(description = "")
  @NotNull

  public String getSudoUsername() {
    return sudoUsername;
  }

  public void setSudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
  }

  public UpdateTicket sudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
    return this;
  }

  /**
   * Get sudoPassword
   * @return sudoPassword
  **/
  @Schema(description = "")
  @NotNull

  public String getSudoPassword() {
    return sudoPassword;
  }

  public void setSudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
  }

  public UpdateTicket port(Integer port) {
    this.port = port;
    return this;
  }

  /**
   * Get port
   * @return port
  **/
  @Schema(description = "")
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
    return Objects.equals(this.ip, updateTicket.ip) &&
        Objects.equals(this.ipAddress, updateTicket.ipAddress) &&
        Objects.equals(this.customerServerAccess, updateTicket.customerServerAccess) &&
        Objects.equals(this.rootPassword, updateTicket.rootPassword) &&
        Objects.equals(this.sudoUsername, updateTicket.sudoUsername) &&
        Objects.equals(this.sudoPassword, updateTicket.sudoPassword) &&
        Objects.equals(this.port, updateTicket.port);
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
