package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class DomainProvProcessPendingAttributes   {
  private String id = null;
  private String orderId = null;
  private String registrationExpirationDate = null;
  private String fAutoRenew = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("order_id")
  @NotNull
  public String getOrderId() {
    return orderId;
  }
  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("registration expiration date")
  @NotNull
  public String getRegistrationExpirationDate() {
    return registrationExpirationDate;
  }
  public void setRegistrationExpirationDate(String registrationExpirationDate) {
    this.registrationExpirationDate = registrationExpirationDate;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("f_auto_renew")
  @NotNull
  public String getFAutoRenew() {
    return fAutoRenew;
  }
  public void setFAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainProvProcessPendingAttributes domainProvProcessPendingAttributes = (DomainProvProcessPendingAttributes) o;
    return Objects.equals(id, domainProvProcessPendingAttributes.id) &&
        Objects.equals(orderId, domainProvProcessPendingAttributes.orderId) &&
        Objects.equals(registrationExpirationDate, domainProvProcessPendingAttributes.registrationExpirationDate) &&
        Objects.equals(fAutoRenew, domainProvProcessPendingAttributes.fAutoRenew);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, orderId, registrationExpirationDate, fAutoRenew);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
