package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverServiceExtra   {

  private @Valid String platform = null;

  /**
   * Platform information
   **/
  public QuickserverServiceExtra platform(String platform) {
    this.platform = platform;
    return this;
  }

  
  @ApiModelProperty(example = "kvm", value = "Platform information")
  @JsonProperty("platform")
  @NotNull

  public String getPlatform() {
    return platform;
  }
  public void setPlatform(String platform) {
    this.platform = platform;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverServiceExtra quickserverServiceExtra = (QuickserverServiceExtra) o;
    return Objects.equals(platform, quickserverServiceExtra.platform);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
