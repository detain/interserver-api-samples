package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicensesOrderServiceTypes11482;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Types of license services
 **/
@Schema(description = "Types of license services")


public class LicensesOrderServiceTypes   {
  @JsonProperty("LicensesOrderServiceTypes11482")
  private LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = null;
  /**
   **/
  public LicensesOrderServiceTypes licensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482) {
    this.licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("LicensesOrderServiceTypes11482")
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
