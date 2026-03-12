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

@Schema(description="Optional fields providing additional info in ticket")

public class TicketCustomFieldDetails   {
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
  private String ipAddress = null;
  private String rootPassword = null;
  private String sudoUser = null;
  private Integer sudoPassword = null;
  private Integer port = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("Customer Server Access")
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
  @JsonProperty("Ip Address")
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
  @JsonProperty("Root Password")
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
  @JsonProperty("Sudo User")
  @NotNull
  public String getSudoUser() {
    return sudoUser;
  }
  public void setSudoUser(String sudoUser) {
    this.sudoUser = sudoUser;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("Sudo Password")
  @NotNull
  public Integer getSudoPassword() {
    return sudoPassword;
  }
  public void setSudoPassword(Integer sudoPassword) {
    this.sudoPassword = sudoPassword;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("Port")
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
    TicketCustomFieldDetails ticketCustomFieldDetails = (TicketCustomFieldDetails) o;
    return Objects.equals(customerServerAccess, ticketCustomFieldDetails.customerServerAccess) &&
        Objects.equals(ipAddress, ticketCustomFieldDetails.ipAddress) &&
        Objects.equals(rootPassword, ticketCustomFieldDetails.rootPassword) &&
        Objects.equals(sudoUser, ticketCustomFieldDetails.sudoUser) &&
        Objects.equals(sudoPassword, ticketCustomFieldDetails.sudoPassword) &&
        Objects.equals(port, ticketCustomFieldDetails.port);
  }

  @Override
  public int hashCode() {
    return Objects.hash(customerServerAccess, ipAddress, rootPassword, sudoUser, sudoPassword, port);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketCustomFieldDetails {\n");
    
    sb.append("    customerServerAccess: ").append(toIndentedString(customerServerAccess)).append("\n");
    sb.append("    ipAddress: ").append(toIndentedString(ipAddress)).append("\n");
    sb.append("    rootPassword: ").append(toIndentedString(rootPassword)).append("\n");
    sb.append("    sudoUser: ").append(toIndentedString(sudoUser)).append("\n");
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
