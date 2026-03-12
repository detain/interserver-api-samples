package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Schema for the packages field in WebsitesOrder")

public class WebsitesOrderPackages   {
  private String _11447 = null;

  /**
   * Package description
   **/
  
  @Schema(example = "Web Hosting Direct Admin (PriceLock)", required = true, description = "Package description")
  @JsonProperty("11447")
  @NotNull
  public String get11447() {
    return _11447;
  }
  public void set11447(String _11447) {
    this._11447 = _11447;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderPackages websitesOrderPackages = (WebsitesOrderPackages) o;
    return Objects.equals(_11447, websitesOrderPackages._11447);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11447);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderPackages {\n");
    
    sb.append("    _11447: ").append(toIndentedString(_11447)).append("\n");
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
