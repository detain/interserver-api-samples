package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * OS Names
 */
@ApiModel(description="OS Names")

public class VpsOrderOsNames  {
  
  @ApiModelProperty(example = "OpenSUSE", value = "")

  private String opensuse;

  @ApiModelProperty(example = "Ubuntu", value = "")

  private String ubuntu;
 /**
   * Get opensuse
   * @return opensuse
  **/
  @JsonProperty("opensuse")
  public String getOpensuse() {
    return opensuse;
  }

  public void setOpensuse(String opensuse) {
    this.opensuse = opensuse;
  }

  public VpsOrderOsNames opensuse(String opensuse) {
    this.opensuse = opensuse;
    return this;
  }

 /**
   * Get ubuntu
   * @return ubuntu
  **/
  @JsonProperty("ubuntu")
  public String getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }

  public VpsOrderOsNames ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
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
    VpsOrderOsNames vpsOrderOsNames = (VpsOrderOsNames) o;
    return Objects.equals(this.opensuse, vpsOrderOsNames.opensuse) &&
        Objects.equals(this.ubuntu, vpsOrderOsNames.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(opensuse, ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderOsNames {\n");
    
    sb.append("    opensuse: ").append(toIndentedString(opensuse)).append("\n");
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
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

