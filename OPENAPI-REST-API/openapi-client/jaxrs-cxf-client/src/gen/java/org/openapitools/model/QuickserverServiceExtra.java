package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverServiceExtra  {
  
 /**
  * Platform information
  */
  @ApiModelProperty(example = "kvm", value = "Platform information")

  private String platform;
 /**
   * Platform information
   * @return platform
  **/
  @JsonProperty("platform")
  public String getPlatform() {
    return platform;
  }

  public void setPlatform(String platform) {
    this.platform = platform;
  }

  public QuickserverServiceExtra platform(String platform) {
    this.platform = platform;
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
    QuickserverServiceExtra quickserverServiceExtra = (QuickserverServiceExtra) o;
    return Objects.equals(this.platform, quickserverServiceExtra.platform);
  }

  @Override
  public int hashCode() {
    return Objects.hash(platform);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverServiceExtra {\n");
    
    sb.append("    platform: ").append(toIndentedString(platform)).append("\n");
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

