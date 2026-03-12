package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicensesOrderPackageCosts;
import io.swagger.model.LicensesOrderServiceCategories;
import io.swagger.model.LicensesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Available license packages and pricing for ordering a new software license.")

public class LicensesOrder   {
  private LicensesOrderServiceCategories serviceCategories = null;  private LicensesOrderPackageCosts packageCosts = null;  private LicensesOrderServiceTypes serviceTypes = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("serviceCategories")
  @NotNull
  public LicensesOrderServiceCategories getServiceCategories() {
    return serviceCategories;
  }
  public void setServiceCategories(LicensesOrderServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("packageCosts")
  @NotNull
  public LicensesOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }
  public void setPackageCosts(LicensesOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("serviceTypes")
  @NotNull
  public LicensesOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(LicensesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicensesOrder licensesOrder = (LicensesOrder) o;
    return Objects.equals(serviceCategories, licensesOrder.serviceCategories) &&
        Objects.equals(packageCosts, licensesOrder.packageCosts) &&
        Objects.equals(serviceTypes, licensesOrder.serviceTypes);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
