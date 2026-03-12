package io.swagger.model;

import io.swagger.model.LicensesOrderServiceTypes11482;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Types of license services
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Types of license services")

public class LicensesOrderServiceTypes   {

  private @Valid LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = null;

  /**
   **/
  public LicensesOrderServiceTypes licensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("LicensesOrderServiceTypes11482")
  @NotNull

  public LicensesOrderServiceTypes11482 getLicensesOrderServiceTypes11482() {
    return licensesOrderServiceTypes11482;
  }
  public void setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicensesOrderServiceTypes licensesOrderServiceTypes = (LicensesOrderServiceTypes) o;
    return Objects.equals(licensesOrderServiceTypes11482, licensesOrderServiceTypes.licensesOrderServiceTypes11482);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
