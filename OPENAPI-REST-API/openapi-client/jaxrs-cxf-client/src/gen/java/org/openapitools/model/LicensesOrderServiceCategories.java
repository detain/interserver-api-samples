package org.openapitools.model;

import org.openapitools.model.LicensesOrderServiceCategories509;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * License service categories
 */
@ApiModel(description="License service categories")

public class LicensesOrderServiceCategories  {
  
  @ApiModelProperty(value = "")

  private LicensesOrderServiceCategories509 licensesOrderServiceCategories509;
 /**
   * Get licensesOrderServiceCategories509
   * @return licensesOrderServiceCategories509
  **/
  @JsonProperty("LicensesOrderServiceCategories509")
  public LicensesOrderServiceCategories509 getLicensesOrderServiceCategories509() {
    return licensesOrderServiceCategories509;
  }

  public void setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
  }

  public LicensesOrderServiceCategories licensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
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
    LicensesOrderServiceCategories licensesOrderServiceCategories = (LicensesOrderServiceCategories) o;
    return Objects.equals(this.licensesOrderServiceCategories509, licensesOrderServiceCategories.licensesOrderServiceCategories509);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licensesOrderServiceCategories509);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceCategories {\n");
    
    sb.append("    licensesOrderServiceCategories509: ").append(toIndentedString(licensesOrderServiceCategories509)).append("\n");
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

