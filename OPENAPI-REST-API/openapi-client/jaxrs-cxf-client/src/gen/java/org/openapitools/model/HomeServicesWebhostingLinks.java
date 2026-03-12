package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 */
@ApiModel(description="Map of webhosting service IDs to their hostnames for the account dashboard.")

public class HomeServicesWebhostingLinks  {
  
 /**
  * Link to a website.
  */
  @ApiModelProperty(example = "Doefamily.com", value = "Link to a website.")

  private String _376359;

 /**
  * Link to a website.
  */
  @ApiModelProperty(example = "fancytush.com", value = "Link to a website.")

  private String _376473;

 /**
  * Link to a website.
  */
  @ApiModelProperty(example = "admincoded.net", value = "Link to a website.")

  private String _386218;
 /**
   * Link to a website.
   * @return _376359
  **/
  @JsonProperty("376359")
  public String get376359() {
    return _376359;
  }

  public void set376359(String _376359) {
    this._376359 = _376359;
  }

  public HomeServicesWebhostingLinks _376359(String _376359) {
    this._376359 = _376359;
    return this;
  }

 /**
   * Link to a website.
   * @return _376473
  **/
  @JsonProperty("376473")
  public String get376473() {
    return _376473;
  }

  public void set376473(String _376473) {
    this._376473 = _376473;
  }

  public HomeServicesWebhostingLinks _376473(String _376473) {
    this._376473 = _376473;
    return this;
  }

 /**
   * Link to a website.
   * @return _386218
  **/
  @JsonProperty("386218")
  public String get386218() {
    return _386218;
  }

  public void set386218(String _386218) {
    this._386218 = _386218;
  }

  public HomeServicesWebhostingLinks _386218(String _386218) {
    this._386218 = _386218;
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
    HomeServicesWebhostingLinks homeServicesWebhostingLinks = (HomeServicesWebhostingLinks) o;
    return Objects.equals(this._376359, homeServicesWebhostingLinks._376359) &&
        Objects.equals(this._376473, homeServicesWebhostingLinks._376473) &&
        Objects.equals(this._386218, homeServicesWebhostingLinks._386218);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_376359, _376473, _386218);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesWebhostingLinks {\n");
    
    sb.append("    _376359: ").append(toIndentedString(_376359)).append("\n");
    sb.append("    _376473: ").append(toIndentedString(_376473)).append("\n");
    sb.append("    _386218: ").append(toIndentedString(_386218)).append("\n");
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

