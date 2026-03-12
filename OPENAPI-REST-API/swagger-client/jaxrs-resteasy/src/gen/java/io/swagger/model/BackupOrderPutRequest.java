package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Parameters to submit to validate your backup order")

public class BackupOrderPutRequest   {
  private Boolean validateOnly = null;  private Integer serviceType = null;  private String coupon = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("validateOnly")
  @NotNull
  public Boolean isValidateOnly() {
    return validateOnly;
  }
  public void setValidateOnly(Boolean validateOnly) {
    this.validateOnly = validateOnly;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("serviceType")
  @NotNull
  public Integer getServiceType() {
    return serviceType;
  }
  public void setServiceType(Integer serviceType) {
    this.serviceType = serviceType;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("coupon")
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
    return Objects.equals(validateOnly, backupOrderPutRequest.validateOnly) &&
        Objects.equals(serviceType, backupOrderPutRequest.serviceType) &&
        Objects.equals(coupon, backupOrderPutRequest.coupon);
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
