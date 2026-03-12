package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Map of domain service IDs to their hostnames for the account dashboard.
 */
@ApiModel(description="Map of domain service IDs to their hostnames for the account dashboard.")

public class HomeServicesDomainsLinks  {
  
 /**
  * Link to a domain.
  */
  @ApiModelProperty(example = "pimpmy.website", value = "Link to a domain.")

  private String _376114;

 /**
  * Link to a domain.
  */
  @ApiModelProperty(example = "hostingenuity.com", value = "Link to a domain.")

  private String _376503;

 /**
  * Link to a domain.
  */
  @ApiModelProperty(example = "detain.dev", value = "Link to a domain.")

  private String _592337;
 /**
   * Link to a domain.
   * @return _376114
  **/
  @JsonProperty("376114")
  public String get376114() {
    return _376114;
  }

  public void set376114(String _376114) {
    this._376114 = _376114;
  }

  public HomeServicesDomainsLinks _376114(String _376114) {
    this._376114 = _376114;
    return this;
  }

 /**
   * Link to a domain.
   * @return _376503
  **/
  @JsonProperty("376503")
  public String get376503() {
    return _376503;
  }

  public void set376503(String _376503) {
    this._376503 = _376503;
  }

  public HomeServicesDomainsLinks _376503(String _376503) {
    this._376503 = _376503;
    return this;
  }

 /**
   * Link to a domain.
   * @return _592337
  **/
  @JsonProperty("592337")
  public String get592337() {
    return _592337;
  }

  public void set592337(String _592337) {
    this._592337 = _592337;
  }

  public HomeServicesDomainsLinks _592337(String _592337) {
    this._592337 = _592337;
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
    HomeServicesDomainsLinks homeServicesDomainsLinks = (HomeServicesDomainsLinks) o;
    return Objects.equals(this._376114, homeServicesDomainsLinks._376114) &&
        Objects.equals(this._376503, homeServicesDomainsLinks._376503) &&
        Objects.equals(this._592337, homeServicesDomainsLinks._592337);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_376114, _376503, _592337);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesDomainsLinks {\n");
    
    sb.append("    _376114: ").append(toIndentedString(_376114)).append("\n");
    sb.append("    _376503: ").append(toIndentedString(_376503)).append("\n");
    sb.append("    _592337: ").append(toIndentedString(_592337)).append("\n");
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

