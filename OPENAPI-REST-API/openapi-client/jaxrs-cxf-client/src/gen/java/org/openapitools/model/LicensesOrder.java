package org.openapitools.model;

import org.openapitools.model.LicensesOrderPackageCosts;
import org.openapitools.model.LicensesOrderServiceCategories;
import org.openapitools.model.LicensesOrderServiceTypes;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Available license packages and pricing for ordering a new software license.
 */
@ApiModel(description="Available license packages and pricing for ordering a new software license.")

public class LicensesOrder  {
  
  @ApiModelProperty(value = "")

  private LicensesOrderServiceCategories serviceCategories;

  @ApiModelProperty(value = "")

  private LicensesOrderPackageCosts packageCosts;

  @ApiModelProperty(value = "")

  private LicensesOrderServiceTypes serviceTypes;
 /**
   * Get serviceCategories
   * @return serviceCategories
  **/
  @JsonProperty("serviceCategories")
  public LicensesOrderServiceCategories getServiceCategories() {
    return serviceCategories;
  }

  public void setServiceCategories(LicensesOrderServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
  }

  public LicensesOrder serviceCategories(LicensesOrderServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
    return this;
  }

 /**
   * Get packageCosts
   * @return packageCosts
  **/
  @JsonProperty("packageCosts")
  public LicensesOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(LicensesOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public LicensesOrder packageCosts(LicensesOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public LicensesOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(LicensesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public LicensesOrder serviceTypes(LicensesOrderServiceTypes serviceTypes) {
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
    LicensesOrder licensesOrder = (LicensesOrder) o;
    return Objects.equals(this.serviceCategories, licensesOrder.serviceCategories) &&
        Objects.equals(this.packageCosts, licensesOrder.packageCosts) &&
        Objects.equals(this.serviceTypes, licensesOrder.serviceTypes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceCategories, packageCosts, serviceTypes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrder {\n");
    
    sb.append("    serviceCategories: ").append(toIndentedString(serviceCategories)).append("\n");
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

