package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * OS Names
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "OS Names")

public class VpsOrderOsNames   {
  private String opensuse = null;
  private String ubuntu = null;

  /**
   **/
  public VpsOrderOsNames opensuse(String opensuse) {
    this.opensuse = opensuse;
    return this;
  }

  
  
  @Schema(example = "OpenSUSE", description = "")
  @JsonProperty("opensuse")
  @NotNull
  public String getOpensuse() {
    return opensuse;
  }
  public void setOpensuse(String opensuse) {
    this.opensuse = opensuse;
  }

  /**
   **/
  public VpsOrderOsNames ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }

  
  
  @Schema(example = "Ubuntu", description = "")
  @JsonProperty("ubuntu")
  @NotNull
  public String getUbuntu() {
    return ubuntu;
  }
  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderOsNames vpsOrderOsNames = (VpsOrderOsNames) o;
    return Objects.equals(opensuse, vpsOrderOsNames.opensuse) &&
        Objects.equals(ubuntu, vpsOrderOsNames.ubuntu);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
