package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Optional fields providing additional info in ticket
 **/
@Schema(description = "Optional fields providing additional info in ticket")


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
  @JsonProperty("Customer Server Access")
  private CustomerServerAccessEnum customerServerAccess = null;
  @JsonProperty("Ip Address")
  private String ipAddress = null;
  @JsonProperty("Root Password")
  private String rootPassword = null;
  @JsonProperty("Sudo User")
  private String sudoUser = null;
  @JsonProperty("Sudo Password")
  private Integer sudoPassword = null;
  @JsonProperty("Port")
  private Integer port = null;
  /**
   **/
  public TicketCustomFieldDetails customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("Customer Server Access")
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

  
  @Schema(description = "")
  @JsonProperty("Ip Address")
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

  
  @Schema(description = "")
  @JsonProperty("Root Password")
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

  
  @Schema(description = "")
  @JsonProperty("Sudo User")
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

  
  @Schema(description = "")
  @JsonProperty("Sudo Password")
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

  
  @Schema(description = "")
  @JsonProperty("Port")
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
