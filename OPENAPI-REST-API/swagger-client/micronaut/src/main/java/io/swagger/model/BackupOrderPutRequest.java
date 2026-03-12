package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Parameters to submit to validate your backup order
 */
@Schema(description = "Parameters to submit to validate your backup order")
@Validated
@Introspected

public class BackupOrderPutRequest   {
  @JsonProperty("validateOnly")
  private Boolean validateOnly = null;

  @JsonProperty("serviceType")
  private Integer serviceType = null;

  @JsonProperty("coupon")
  private String coupon = null;

  public BackupOrderPutRequest validateOnly(Boolean validateOnly) {
    this.validateOnly = validateOnly;
    return this;
  }

  /**
   * Get validateOnly
   * @return validateOnly
  **/
  @Schema(description = "")
  @NotNull

  public Boolean isValidateOnly() {
    return validateOnly;
  }

  public void setValidateOnly(Boolean validateOnly) {
    this.validateOnly = validateOnly;
  }

  public BackupOrderPutRequest serviceType(Integer serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  /**
   * Get serviceType
   * @return serviceType
  **/
  @Schema(description = "")
  @NotNull

  public Integer getServiceType() {
    return serviceType;
  }

  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  public BackupOrderPutRequest coupon(String coupon) {
    this.coupon = coupon;
    return this;
  }

  /**
   * Get coupon
   * @return coupon
  **/
  @Schema(description = "")
  @NotNull

  public String getCoupon() {
    return coupon;
  }

  public void setCoupon(String coupon) {
    this.coupon = coupon;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupOrderPutRequest backupOrderPutRequest = (BackupOrderPutRequest) o;
    return Objects.equals(this.validateOnly, backupOrderPutRequest.validateOnly) &&
        Objects.equals(this.serviceType, backupOrderPutRequest.serviceType) &&
        Objects.equals(this.coupon, backupOrderPutRequest.coupon);
  }

  @Override
  public int hashCode() {
    return Objects.hash(validateOnly, serviceType, coupon);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPutRequest {\n");
    
    sb.append("    validateOnly: ").append(toIndentedString(validateOnly)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    coupon: ").append(toIndentedString(coupon)).append("\n");
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
