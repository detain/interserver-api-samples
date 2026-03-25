package org.openapitools.model;

import org.openapitools.model.WebsitesOrderPackagesInfo;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The packages data.
 */
@ApiModel(description="The packages data.")

public class WebsitesOrderPackges  {
  
  @ApiModelProperty(required = true, value = "")

  private WebsitesOrderPackagesInfo _11440;
 /**
   * Get _11440
   * @return _11440
  **/
  @JsonProperty("11440")
  public WebsitesOrderPackagesInfo get11440() {
    return _11440;
  }

  public void set11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
  }

  public WebsitesOrderPackges _11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
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
    WebsitesOrderPackges websitesOrderPackges = (WebsitesOrderPackges) o;
    return Objects.equals(this._11440, websitesOrderPackges._11440);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

