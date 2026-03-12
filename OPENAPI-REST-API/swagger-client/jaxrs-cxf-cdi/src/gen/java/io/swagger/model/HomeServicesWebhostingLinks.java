package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Map of webhosting service IDs to their hostnames for the account dashboard.")

public class HomeServicesWebhostingLinks   {
  private String _376359 = null;
  private String _376473 = null;
  private String _386218 = null;

  /**
   * Link to a website.
   **/
  public HomeServicesWebhostingLinks _376359(String _376359) {
    this._376359 = _376359;
    return this;
  }

  
  
  @Schema(example = "Doefamily.com", description = "Link to a website.")
  @JsonProperty("376359")
  @NotNull
  public String get376359() {
    return _376359;
  }
  public void set376359(String _376359) {
    this._376359 = _376359;
  }

  /**
   * Link to a website.
   **/
  public HomeServicesWebhostingLinks _376473(String _376473) {
    this._376473 = _376473;
    return this;
  }

  
  
  @Schema(example = "fancytush.com", description = "Link to a website.")
  @JsonProperty("376473")
  @NotNull
  public String get376473() {
    return _376473;
  }
  public void set376473(String _376473) {
    this._376473 = _376473;
  }

  /**
   * Link to a website.
   **/
  public HomeServicesWebhostingLinks _386218(String _386218) {
    this._386218 = _386218;
    return this;
  }

  
  
  @Schema(example = "admincoded.net", description = "Link to a website.")
  @JsonProperty("386218")
  @NotNull
  public String get386218() {
    return _386218;
  }
  public void set386218(String _386218) {
    this._386218 = _386218;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesWebhostingLinks homeServicesWebhostingLinks = (HomeServicesWebhostingLinks) o;
    return Objects.equals(_376359, homeServicesWebhostingLinks._376359) &&
        Objects.equals(_376473, homeServicesWebhostingLinks._376473) &&
        Objects.equals(_386218, homeServicesWebhostingLinks._386218);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
