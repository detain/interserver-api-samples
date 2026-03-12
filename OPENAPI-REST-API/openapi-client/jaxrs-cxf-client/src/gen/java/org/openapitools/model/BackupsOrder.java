package org.openapitools.model;

import org.openapitools.model.BackupsOrderPackageCosts;
import org.openapitools.model.BackupsOrderServiceTypes;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Available backup storage packages and pricing for ordering a new backup service.
 */
@ApiModel(description="Available backup storage packages and pricing for ordering a new backup service.")

public class BackupsOrder  {
  
  @ApiModelProperty(required = true, value = "")

  private BackupsOrderPackageCosts packageCosts;

  @ApiModelProperty(required = true, value = "")

  private BackupsOrderServiceTypes serviceTypes;
 /**
   * Get packageCosts
   * @return packageCosts
  **/
  @JsonProperty("packageCosts")
  public BackupsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public BackupsOrder packageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public BackupsOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public BackupsOrder serviceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
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
    BackupsOrder backupsOrder = (BackupsOrder) o;
    return Objects.equals(this.packageCosts, backupsOrder.packageCosts) &&
        Objects.equals(this.serviceTypes, backupsOrder.serviceTypes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageCosts, serviceTypes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupsOrder {\n");
    
    sb.append("    packageCosts: ").append(toIndentedString(packageCosts)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

