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

public class DomainProvProcessPendingAttributes   {
  
  @Schema(description = "")
  private String id = null;
  
  @Schema(description = "")
  private String orderId = null;
  
  @Schema(description = "")
  private String registrationExpirationDate = null;
  
  @Schema(description = "")
  private String fAutoRenew = null;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DomainProvProcessPendingAttributes id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Get orderId
   * @return orderId
  **/
  @JsonProperty("order_id")
  @NotNull
  public String getOrderId() {
    return orderId;
  }

  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  public DomainProvProcessPendingAttributes orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

 /**
   * Get registrationExpirationDate
   * @return registrationExpirationDate
  **/
  @JsonProperty("registration expiration date")
  @NotNull
  public String getRegistrationExpirationDate() {
    return registrationExpirationDate;
  }

  public void setRegistrationExpirationDate(String registrationExpirationDate) {
    this.registrationExpirationDate = registrationExpirationDate;
  }

  public DomainProvProcessPendingAttributes registrationExpirationDate(String registrationExpirationDate) {
    this.registrationExpirationDate = registrationExpirationDate;
    return this;
  }

 /**
   * Get fAutoRenew
   * @return fAutoRenew
  **/
  @JsonProperty("f_auto_renew")
  @NotNull
  public String getFAutoRenew() {
    return fAutoRenew;
  }

  public void setFAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
  }

  public DomainProvProcessPendingAttributes fAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainProvProcessPendingAttributes {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
    sb.append("    registrationExpirationDate: ").append(toIndentedString(registrationExpirationDate)).append("\n");
    sb.append("    fAutoRenew: ").append(toIndentedString(fAutoRenew)).append("\n");
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
