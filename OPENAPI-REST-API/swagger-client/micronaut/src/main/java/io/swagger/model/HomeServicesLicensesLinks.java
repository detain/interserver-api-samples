package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Map of license service IDs to their IP addresses for the account dashboard.
 */
@Schema(description = "Map of license service IDs to their IP addresses for the account dashboard.")
@Validated
@Introspected

public class HomeServicesLicensesLinks   {
  @JsonProperty("386522")
  private String _386522 = null;

  public HomeServicesLicensesLinks _386522(String _386522) {
    this._386522 = _386522;
    return this;
  }

  /**
   * Link to a license.
   * @return _386522
  **/
  @Schema(example = "1.2.3.4", description = "Link to a license.")
  @NotNull

  public String get386522() {
    return _386522;
  }

  public void set386522(String _386522) {
    this._386522 = _386522;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesLicensesLinks homeServicesLicensesLinks = (HomeServicesLicensesLinks) o;
    return Objects.equals(this._386522, homeServicesLicensesLinks._386522);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_386522);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesLicensesLinks {\n");
    
    sb.append("    _386522: ").append(toIndentedString(_386522)).append("\n");
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
