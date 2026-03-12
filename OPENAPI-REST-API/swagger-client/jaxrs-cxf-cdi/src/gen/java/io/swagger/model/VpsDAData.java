package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsDALicense;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * DirectAdmin license options available for a VPS.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "DirectAdmin license options available for a VPS.")

public class VpsDAData   {
  private VpsDALicense free = null;

  /**
   **/
  public VpsDAData free(VpsDALicense free) {
    this.free = free;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("free")
  @NotNull
  @Valid
  public VpsDALicense getFree() {
    return free;
  }
  public void setFree(VpsDALicense free) {
    this.free = free;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsDAData vpsDAData = (VpsDAData) o;
    return Objects.equals(free, vpsDAData.free);
  }

  @Override
  public int hashCode() {
    return Objects.hash(free);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsDAData {\n");
    
    sb.append("    free: ").append(toIndentedString(free)).append("\n");
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
