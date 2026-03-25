package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Map of license service IDs to their IP addresses for the account dashboard.
 */
@ApiModel(description="Map of license service IDs to their IP addresses for the account dashboard.")

public class HomeServicesLicensesLinks  {
  
 /**
  * Link to a license.
  */
  @ApiModelProperty(example = "1.2.3.4", value = "Link to a license.")

  private String _386522;
 /**
   * Link to a license.
   * @return _386522
  **/
  @JsonProperty("386522")
  public String get386522() {
    return _386522;
  }

  public void set386522(String _386522) {
    this._386522 = _386522;
  }

  public HomeServicesLicensesLinks _386522(String _386522) {
    this._386522 = _386522;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

