package io.swagger.model;

import io.swagger.model.LicensesOrderPackageCosts;
import io.swagger.model.LicensesOrderServiceCategories;
import io.swagger.model.LicensesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * Available license packages and pricing for ordering a new software license.
 **/
@Schema(description="Available license packages and pricing for ordering a new software license.")
public class LicensesOrder   {
  
  @Schema(description = "")
  private LicensesOrderServiceCategories serviceCategories = null;
  
  @Schema(description = "")
  private LicensesOrderPackageCosts packageCosts = null;
  
  @Schema(description = "")
  private LicensesOrderServiceTypes serviceTypes = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
