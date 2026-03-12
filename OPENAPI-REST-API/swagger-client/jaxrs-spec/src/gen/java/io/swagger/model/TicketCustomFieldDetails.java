package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Optional fields providing additional info in ticket
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Optional fields providing additional info in ticket")

public class TicketCustomFieldDetails   {

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

  private @Valid String ipAddress = null;

  private @Valid String rootPassword = null;

  private @Valid String sudoUser = null;

  private @Valid Integer sudoPassword = null;

  private @Valid Integer port = null;

  /**
   **/
  public TicketCustomFieldDetails customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public TicketCustomFieldDetails ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public TicketCustomFieldDetails rootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public TicketCustomFieldDetails sudoUser(String sudoUser) {
    this.sudoUser = sudoUser;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public TicketCustomFieldDetails sudoPassword(Integer sudoPassword) {
    this.sudoPassword = sudoPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public TicketCustomFieldDetails port(Integer port) {
    this.port = port;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Port")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
