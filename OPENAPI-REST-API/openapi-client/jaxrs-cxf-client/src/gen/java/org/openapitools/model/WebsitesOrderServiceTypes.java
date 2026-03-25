package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The service types data.
 */
@ApiModel(description="The service types data.")

public class WebsitesOrderServiceTypes  {
  
  @ApiModelProperty(required = true, value = "")

  private WebsitesOrderServiceTypes _11447;
 /**
   * Get _11447
   * @return _11447
  **/
  @JsonProperty("11447")
  public WebsitesOrderServiceTypes get11447() {
    return _11447;
  }

  public void set11447(WebsitesOrderServiceTypes _11447) {
    this._11447 = _11447;
  }

  public WebsitesOrderServiceTypes _11447(WebsitesOrderServiceTypes _11447) {
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
    WebsitesOrderServiceTypes websitesOrderServiceTypes = (WebsitesOrderServiceTypes) o;
    return Objects.equals(this._11447, websitesOrderServiceTypes._11447);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11447);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderServiceTypes {\n");
    
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

