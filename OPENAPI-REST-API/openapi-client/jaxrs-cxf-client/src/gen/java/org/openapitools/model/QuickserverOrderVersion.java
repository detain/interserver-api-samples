package org.openapitools.model;

import org.openapitools.model.QuickserverOrderVersionCentosstream8;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Version details.
 */
@ApiModel(description="Version details.")

public class QuickserverOrderVersion  {
  
  @ApiModelProperty(value = "")

  private QuickserverOrderVersionCentosstream8 centosstream8;
 /**
   * Get centosstream8
   * @return centosstream8
  **/
  @JsonProperty("centosstream-8")
  public QuickserverOrderVersionCentosstream8 getCentosstream8() {
    return centosstream8;
  }

  public void setCentosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
  }

  public QuickserverOrderVersion centosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
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
    QuickserverOrderVersion quickserverOrderVersion = (QuickserverOrderVersion) o;
    return Objects.equals(this.centosstream8, quickserverOrderVersion.centosstream8);
  }

  @Override
  public int hashCode() {
    return Objects.hash(centosstream8);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderVersion {\n");
    
    sb.append("    centosstream8: ").append(toIndentedString(centosstream8)).append("\n");
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

