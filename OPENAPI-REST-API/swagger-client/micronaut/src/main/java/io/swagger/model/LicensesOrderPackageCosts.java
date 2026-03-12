package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Costs of license packages
 */
@Schema(description = "Costs of license packages")
@Validated
@Introspected

public class LicensesOrderPackageCosts   {
  @JsonProperty("LicensesOrderPackageCosts11468")
  private BigDecimal licensesOrderPackageCosts11468 = null;

  public LicensesOrderPackageCosts licensesOrderPackageCosts11468(BigDecimal licensesOrderPackageCosts11468) {
    this.licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
    return this;
  }

  /**
   * Cost of package with ID 11468
   * @return licensesOrderPackageCosts11468
  **/
  @Schema(example = "3.75", description = "Cost of package with ID 11468")
  @NotNull

  @Valid
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
