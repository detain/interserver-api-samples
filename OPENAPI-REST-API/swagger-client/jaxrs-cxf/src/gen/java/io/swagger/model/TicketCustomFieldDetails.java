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
  * Optional fields providing additional info in ticket
 **/
@Schema(description="Optional fields providing additional info in ticket")
public class TicketCustomFieldDetails   {
  public enum CustomerServerAccessEnum {
    Y("y"),
    N("n");

    private String value;

    CustomerServerAccessEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
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
  @Schema(description = "")
  private CustomerServerAccessEnum customerServerAccess = null;
  
  @Schema(description = "")
  private String ipAddress = null;
  
  @Schema(description = "")
  private String rootPassword = null;
  
  @Schema(description = "")
  private String sudoUser = null;
  
  @Schema(description = "")
  private Integer sudoPassword = null;
  
  @Schema(description = "")
  private Integer port = null;
 /**
   * Get customerServerAccess
   * @return customerServerAccess
  **/
  @JsonProperty("Customer Server Access")
  @NotNull
  public String getCustomerServerAccess() {
    if (customerServerAccess == null) {
      return null;
    }
    return customerServerAccess.getValue();
  }

  public void setCustomerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
  }

  public TicketCustomFieldDetails customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

 /**
   * Get ipAddress
   * @return ipAddress
  **/
  @JsonProperty("Ip Address")
  @NotNull
  public String getIpAddress() {
    return ipAddress;
  }

  public void setIpAddress(String ipAddress) {
    this.ipAddress = ipAddress;
  }

  public TicketCustomFieldDetails ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
    return this;
  }

 /**
   * Get rootPassword
   * @return rootPassword
  **/
  @JsonProperty("Root Password")
  @NotNull
  public String getRootPassword() {
    return rootPassword;
  }

  public void setRootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
  }

  public TicketCustomFieldDetails rootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
    return this;
  }

 /**
   * Get sudoUser
   * @return sudoUser
  **/
  @JsonProperty("Sudo User")
  @NotNull
  public String getSudoUser() {
    return sudoUser;
  }

  public void setSudoUser(String sudoUser) {
    this.sudoUser = sudoUser;
  }

  public TicketCustomFieldDetails sudoUser(String sudoUser) {
    this.sudoUser = sudoUser;
    return this;
  }

 /**
   * Get sudoPassword
   * @return sudoPassword
  **/
  @JsonProperty("Sudo Password")
  @NotNull
  public Integer getSudoPassword() {
    return sudoPassword;
  }

  public void setSudoPassword(Integer sudoPassword) {
    this.sudoPassword = sudoPassword;
  }

  public TicketCustomFieldDetails sudoPassword(Integer sudoPassword) {
    this.sudoPassword = sudoPassword;
    return this;
  }

 /**
   * Get port
   * @return port
  **/
  @JsonProperty("Port")
  @NotNull
  public Integer getPort() {
    return port;
  }

  public void setPort(Integer port) {
    this.port = port;
  }

  public TicketCustomFieldDetails port(Integer port) {
    this.port = port;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
