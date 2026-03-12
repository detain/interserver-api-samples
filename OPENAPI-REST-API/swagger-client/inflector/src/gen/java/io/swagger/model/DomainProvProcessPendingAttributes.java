package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class DomainProvProcessPendingAttributes   {
  @JsonProperty("id")
  private String id = null;
  @JsonProperty("order_id")
  private String orderId = null;
  @JsonProperty("registration expiration date")
  private String registrationExpirationDate = null;
  @JsonProperty("f_auto_renew")
  private String fAutoRenew = null;
  /**
   **/
  public DomainProvProcessPendingAttributes id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  public DomainProvProcessPendingAttributes orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("order_id")
  public String getOrderId() {
    return orderId;
  }
  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  /**
   **/
  public DomainProvProcessPendingAttributes registrationExpirationDate(String registrationExpirationDate) {
    this.registrationExpirationDate = registrationExpirationDate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("registration expiration date")
  public String getRegistrationExpirationDate() {
    return registrationExpirationDate;
  }
  public void setRegistrationExpirationDate(String registrationExpirationDate) {
    this.registrationExpirationDate = registrationExpirationDate;
  }

  /**
   **/
  public DomainProvProcessPendingAttributes fAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("f_auto_renew")
  public String getFAutoRenew() {
    return fAutoRenew;
  }
  public void setFAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
