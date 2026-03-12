package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Map of domain service IDs to their hostnames for the account dashboard.")

public class HomeServicesDomainsLinks   {
  private String _376114 = null;
  private String _376503 = null;
  private String _592337 = null;

  /**
   * Link to a domain.
   **/
  
  @Schema(example = "pimpmy.website", description = "Link to a domain.")
  @JsonProperty("376114")
  @NotNull
  public String get376114() {
    return _376114;
  }
  public void set376114(String _376114) {
    this._376114 = _376114;
  }

  /**
   * Link to a domain.
   **/
  
  @Schema(example = "hostingenuity.com", description = "Link to a domain.")
  @JsonProperty("376503")
  @NotNull
  public String get376503() {
    return _376503;
  }
  public void set376503(String _376503) {
    this._376503 = _376503;
  }

  /**
   * Link to a domain.
   **/
  
  @Schema(example = "detain.dev", description = "Link to a domain.")
  @JsonProperty("592337")
  @NotNull
  public String get592337() {
    return _592337;
  }
  public void set592337(String _592337) {
    this._592337 = _592337;
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
    return Objects.equals(_376114, homeServicesDomainsLinks._376114) &&
        Objects.equals(_376503, homeServicesDomainsLinks._376503) &&
        Objects.equals(_592337, homeServicesDomainsLinks._592337);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
