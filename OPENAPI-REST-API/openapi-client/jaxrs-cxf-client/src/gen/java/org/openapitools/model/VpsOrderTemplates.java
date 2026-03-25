package org.openapitools.model;

import org.openapitools.model.VpsOrderTemplatesHyperv;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Templates
 */
@ApiModel(description="Templates")

public class VpsOrderTemplates  {
  
  @ApiModelProperty(value = "")

  private VpsOrderTemplatesHyperv hyperv;
 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  public VpsOrderTemplatesHyperv getHyperv() {
    return hyperv;
  }

  public void setHyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderTemplates hyperv(VpsOrderTemplatesHyperv hyperv) {
    this.hyperv = hyperv;
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
    VpsOrderTemplates vpsOrderTemplates = (VpsOrderTemplates) o;
    return Objects.equals(this.hyperv, vpsOrderTemplates.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hyperv);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderTemplates {\n");
    
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
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

