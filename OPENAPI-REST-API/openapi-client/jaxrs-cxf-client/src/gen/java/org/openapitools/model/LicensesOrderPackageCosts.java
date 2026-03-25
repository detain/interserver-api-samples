package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Costs of license packages
 */
@ApiModel(description="Costs of license packages")

public class LicensesOrderPackageCosts  {
  
 /**
  * Cost of package with ID 11468
  */
  @ApiModelProperty(example = "3.75", value = "Cost of package with ID 11468")

  private BigDecimal licensesOrderPackageCosts11468;
 /**
   * Cost of package with ID 11468
   * @return licensesOrderPackageCosts11468
  **/
  @JsonProperty("LicensesOrderPackageCosts11468")
  public BigDecimal getLicensesOrderPackageCosts11468() {
    return licensesOrderPackageCosts11468;
  }

  public void setLicensesOrderPackageCosts11468(BigDecimal licensesOrderPackageCosts11468) {
    this.licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
  }

  public LicensesOrderPackageCosts licensesOrderPackageCosts11468(BigDecimal licensesOrderPackageCosts11468) {
    this.licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
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
    LicensesOrderPackageCosts licensesOrderPackageCosts = (LicensesOrderPackageCosts) o;
    return Objects.equals(this.licensesOrderPackageCosts11468, licensesOrderPackageCosts.licensesOrderPackageCosts11468);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licensesOrderPackageCosts11468);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderPackageCosts {\n");
    
    sb.append("    licensesOrderPackageCosts11468: ").append(toIndentedString(licensesOrderPackageCosts11468)).append("\n");
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

