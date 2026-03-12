package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Costs of license packages
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Costs of license packages")

public class LicensesOrderPackageCosts   {

  private @Valid BigDecimal licensesOrderPackageCosts11468 = null;

  /**
   * Cost of package with ID 11468
   **/
  public LicensesOrderPackageCosts licensesOrderPackageCosts11468(BigDecimal licensesOrderPackageCosts11468) {
    this.licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
    return this;
  }

  
  @ApiModelProperty(example = "3.75", value = "Cost of package with ID 11468")
  @JsonProperty("LicensesOrderPackageCosts11468")
  @NotNull

  public BigDecimal getLicensesOrderPackageCosts11468() {
    return licensesOrderPackageCosts11468;
  }
  public void setLicensesOrderPackageCosts11468(BigDecimal licensesOrderPackageCosts11468) {
    this.licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicensesOrderPackageCosts licensesOrderPackageCosts = (LicensesOrderPackageCosts) o;
    return Objects.equals(licensesOrderPackageCosts11468, licensesOrderPackageCosts.licensesOrderPackageCosts11468);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
