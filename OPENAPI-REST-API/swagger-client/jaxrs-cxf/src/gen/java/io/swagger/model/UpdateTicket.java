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
  * Update custom fields of the ticket
 **/
@Schema(description="Update custom fields of the ticket")
public class UpdateTicket   {
  
  @Schema(description = "")
  private String ip = null;
  
  @Schema(description = "")
  private String ipAddress = null;
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
  private String rootPassword = null;
  
  @Schema(description = "")
  private String sudoUsername = null;
  
  @Schema(description = "")
  private String sudoPassword = null;
  
  @Schema(description = "")
  private Integer port = null;
 /**
   * Get ip
   * @return ip
  **/
  @JsonProperty("ip")
  @NotNull
  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public UpdateTicket ip(String ip) {
    this.ip = ip;
    return this;
  }

 /**
   * Get ipAddress
   * @return ipAddress
  **/
  @JsonProperty("ip_address")
  @NotNull
  public String getIpAddress() {
    return ipAddress;
  }

  public void setIpAddress(String ipAddress) {
    this.ipAddress = ipAddress;
  }

  public UpdateTicket ipAddress(String ipAddress) {
    this.ipAddress = ipAddress;
    return this;
  }

 /**
   * Get customerServerAccess
   * @return customerServerAccess
  **/
  @JsonProperty("customer_server_access")
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

  public UpdateTicket customerServerAccess(CustomerServerAccessEnum customerServerAccess) {
    this.customerServerAccess = customerServerAccess;
    return this;
  }

 /**
   * Get rootPassword
   * @return rootPassword
  **/
  @JsonProperty("root_password")
  @NotNull
  public String getRootPassword() {
    return rootPassword;
  }

  public void setRootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
  }

  public UpdateTicket rootPassword(String rootPassword) {
    this.rootPassword = rootPassword;
    return this;
  }

 /**
   * Get sudoUsername
   * @return sudoUsername
  **/
  @JsonProperty("sudo_username")
  @NotNull
  public String getSudoUsername() {
    return sudoUsername;
  }

  public void setSudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
  }

  public UpdateTicket sudoUsername(String sudoUsername) {
    this.sudoUsername = sudoUsername;
    return this;
  }

 /**
   * Get sudoPassword
   * @return sudoPassword
  **/
  @JsonProperty("sudo_password")
  @NotNull
  public String getSudoPassword() {
    return sudoPassword;
  }

  public void setSudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
  }

  public UpdateTicket sudoPassword(String sudoPassword) {
    this.sudoPassword = sudoPassword;
    return this;
  }

 /**
   * Get port
   * @return port
  **/
  @JsonProperty("port")
  @NotNull
  public Integer getPort() {
    return port;
  }

  public void setPort(Integer port) {
    this.port = port;
  }

  public UpdateTicket port(Integer port) {
    this.port = port;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
