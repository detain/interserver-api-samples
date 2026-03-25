package org.openapitools.model;

import org.openapitools.model.LicensesOrderServiceTypes11482;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Types of license services
 */
@ApiModel(description="Types of license services")

public class LicensesOrderServiceTypes  {
  
  @ApiModelProperty(value = "")

  private LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482;
 /**
   * Get licensesOrderServiceTypes11482
   * @return licensesOrderServiceTypes11482
  **/
  @JsonProperty("LicensesOrderServiceTypes11482")
  public LicensesOrderServiceTypes11482 getLicensesOrderServiceTypes11482() {
    return licensesOrderServiceTypes11482;
  }

  public void setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
  }

  public LicensesOrderServiceTypes licensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
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
    LicensesOrderServiceTypes licensesOrderServiceTypes = (LicensesOrderServiceTypes) o;
    return Objects.equals(this.licensesOrderServiceTypes11482, licensesOrderServiceTypes.licensesOrderServiceTypes11482);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licensesOrderServiceTypes11482);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceTypes {\n");
    
    sb.append("    licensesOrderServiceTypes11482: ").append(toIndentedString(licensesOrderServiceTypes11482)).append("\n");
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

