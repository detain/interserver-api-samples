package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsitesOrderPackagesInfo;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="The packages data.")

public class WebsitesOrderPackges   {
  private WebsitesOrderPackagesInfo _11440 = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("11440")
  @NotNull
  public WebsitesOrderPackagesInfo get11440() {
    return _11440;
  }
  public void set11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderPackges websitesOrderPackges = (WebsitesOrderPackges) o;
    return Objects.equals(_11440, websitesOrderPackges._11440);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11440);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderPackges {\n");
    
    sb.append("    _11440: ").append(toIndentedString(_11440)).append("\n");
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
