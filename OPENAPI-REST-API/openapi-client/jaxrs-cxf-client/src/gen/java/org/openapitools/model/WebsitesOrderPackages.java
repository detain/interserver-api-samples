package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Schema for the packages field in WebsitesOrder
 */
@ApiModel(description="Schema for the packages field in WebsitesOrder")

public class WebsitesOrderPackages  {
  
 /**
  * Package description
  */
  @ApiModelProperty(example = "Web Hosting Direct Admin (PriceLock)", required = true, value = "Package description")

  private String _11447;
 /**
   * Package description
   * @return _11447
  **/
  @JsonProperty("11447")
  public String get11447() {
    return _11447;
  }

  public void set11447(String _11447) {
    this._11447 = _11447;
  }

  public WebsitesOrderPackages _11447(String _11447) {
    this._11447 = _11447;
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
    WebsitesOrderPackages websitesOrderPackages = (WebsitesOrderPackages) o;
    return Objects.equals(this._11447, websitesOrderPackages._11447);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

