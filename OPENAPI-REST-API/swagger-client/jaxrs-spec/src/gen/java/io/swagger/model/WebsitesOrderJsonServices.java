package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Schema for the jsonServices field in WebsitesOrder
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Schema for the jsonServices field in WebsitesOrder")

public class WebsitesOrderJsonServices   {

  private @Valid String _11447 = null;

  /**
   * JSON services description
   **/
  public WebsitesOrderJsonServices _11447(String _11447) {
    this._11447 = _11447;
    return this;
  }

  
  @ApiModelProperty(example = "5.00", required = true, value = "JSON services description")
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
    WebsitesOrderJsonServices websitesOrderJsonServices = (WebsitesOrderJsonServices) o;
    return Objects.equals(_11447, websitesOrderJsonServices._11447);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
