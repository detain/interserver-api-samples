package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicensesOrderServiceCategories509;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * License service categories
 **/
@Schema(description = "License service categories")


public class LicensesOrderServiceCategories   {
  @JsonProperty("LicensesOrderServiceCategories509")
  private LicensesOrderServiceCategories509 licensesOrderServiceCategories509 = null;
  /**
   **/
  public LicensesOrderServiceCategories licensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("LicensesOrderServiceCategories509")
  public LicensesOrderServiceCategories509 getLicensesOrderServiceCategories509() {
    return licensesOrderServiceCategories509;
  }
  public void setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509) {
    this.licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicensesOrderServiceCategories licensesOrderServiceCategories = (LicensesOrderServiceCategories) o;
    return Objects.equals(licensesOrderServiceCategories509, licensesOrderServiceCategories.licensesOrderServiceCategories509);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
