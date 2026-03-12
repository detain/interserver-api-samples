package org.openapitools.model;

import org.openapitools.model.QuickserverOrderServerDetails381;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Server details.
 */
@ApiModel(description="Server details.")

public class QuickserverOrderServerDetails  {
  
  @ApiModelProperty(value = "")

  private QuickserverOrderServerDetails381 _381;
 /**
   * Get _381
   * @return _381
  **/
  @JsonProperty("381")
  public QuickserverOrderServerDetails381 get381() {
    return _381;
  }

  public void set381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
  }

  public QuickserverOrderServerDetails _381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
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
    QuickserverOrderServerDetails quickserverOrderServerDetails = (QuickserverOrderServerDetails) o;
    return Objects.equals(this._381, quickserverOrderServerDetails._381);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_381);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderServerDetails {\n");
    
    sb.append("    _381: ").append(toIndentedString(_381)).append("\n");
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

