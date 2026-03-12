package io.swagger.model;

import io.swagger.model.WebsitesOrderPackagesInfo;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The packages data.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The packages data.")

public class WebsitesOrderPackges   {

  private @Valid WebsitesOrderPackagesInfo _11440 = null;

  /**
   **/
  public WebsitesOrderPackges _11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("11440")
  @NotNull

  public WebsitesOrderPackagesInfo get11440() {
    return _11440;
  }
  public void set11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
