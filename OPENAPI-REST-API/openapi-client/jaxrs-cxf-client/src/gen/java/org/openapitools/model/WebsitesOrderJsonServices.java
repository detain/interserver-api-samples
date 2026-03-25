package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Schema for the jsonServices field in WebsitesOrder
 */
@ApiModel(description="Schema for the jsonServices field in WebsitesOrder")

public class WebsitesOrderJsonServices  {
  
 /**
  * JSON services description
  */
  @ApiModelProperty(example = "5.00", required = true, value = "JSON services description")

  private String _11447;
 /**
   * JSON services description
   * @return _11447
  **/
  @JsonProperty("11447")
  public String get11447() {
    return _11447;
  }

  public void set11447(String _11447) {
    this._11447 = _11447;
  }

  public WebsitesOrderJsonServices _11447(String _11447) {
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
    WebsitesOrderJsonServices websitesOrderJsonServices = (WebsitesOrderJsonServices) o;
    return Objects.equals(this._11447, websitesOrderJsonServices._11447);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11447);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderJsonServices {\n");
    
    sb.append("    _11447: ").append(toIndentedString(_11447)).append("\n");
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

