package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainProvProcessPendingAttributes  {
  
  @ApiModelProperty(value = "")

  private String id;

  @ApiModelProperty(value = "")

  private String orderId;

  @ApiModelProperty(value = "")

  private String registrationExpirationDate;

  @ApiModelProperty(value = "")

  private String fAutoRenew;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
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
  public String getfAutoRenew() {
    return fAutoRenew;
  }

  public void setfAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
  }

  public DomainProvProcessPendingAttributes fAutoRenew(String fAutoRenew) {
    this.fAutoRenew = fAutoRenew;
    return this;
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
    return Objects.equals(this.id, domainProvProcessPendingAttributes.id) &&
        Objects.equals(this.orderId, domainProvProcessPendingAttributes.orderId) &&
        Objects.equals(this.registrationExpirationDate, domainProvProcessPendingAttributes.registrationExpirationDate) &&
        Objects.equals(this.fAutoRenew, domainProvProcessPendingAttributes.fAutoRenew);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

