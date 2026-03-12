package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class QuickserverServiceExtra   {
  private String platform = null;

  /**
   * Platform information
   **/
  
  @Schema(example = "kvm", description = "Platform information")
  @JsonProperty("platform")
  @NotNull
  public String getPlatform() {
    return platform;
  }
  public void setPlatform(String platform) {
    this.platform = platform;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
