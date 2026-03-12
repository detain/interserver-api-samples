package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Map of license service IDs to their IP addresses for the account dashboard.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Map of license service IDs to their IP addresses for the account dashboard.")

public class HomeServicesLicensesLinks   {
  private String _386522 = null;

  /**
   * Link to a license.
   **/
  public HomeServicesLicensesLinks _386522(String _386522) {
    this._386522 = _386522;
    return this;
  }

  
  
  @Schema(example = "1.2.3.4", description = "Link to a license.")
  @JsonProperty("386522")
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
    return Objects.equals(_386522, homeServicesLicensesLinks._386522);
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
