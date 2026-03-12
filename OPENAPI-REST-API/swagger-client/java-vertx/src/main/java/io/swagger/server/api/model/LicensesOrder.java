package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.LicensesOrderPackageCosts;
import io.swagger.server.api.model.LicensesOrderServiceCategories;
import io.swagger.server.api.model.LicensesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Available license packages and pricing for ordering a new software license.
 */




public class LicensesOrder   {
  private LicensesOrderServiceCategories serviceCategories = null;

  private LicensesOrderPackageCosts packageCosts = null;

  private LicensesOrderServiceTypes serviceTypes = null;

  public LicensesOrder serviceCategories(LicensesOrderServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
    return this;
  }

  /**
   * Get serviceCategories
   * @return serviceCategories
   **/
    public LicensesOrderServiceCategories getServiceCategories() {
    return serviceCategories;
  }

  public void setServiceCategories(LicensesOrderServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
  }

  public LicensesOrder packageCosts(LicensesOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  /**
   * Get packageCosts
   * @return packageCosts
   **/
    public LicensesOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(LicensesOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public LicensesOrder serviceTypes(LicensesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  /**
   * Get serviceTypes
   * @return serviceTypes
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
