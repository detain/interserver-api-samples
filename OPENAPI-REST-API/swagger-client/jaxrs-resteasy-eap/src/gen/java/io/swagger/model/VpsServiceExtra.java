package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsSnapshot;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class VpsServiceExtra   {
  private Integer spice = null;
  private List<VpsSnapshot> snapshots = new ArrayList<VpsSnapshot>();

  /**
   * Spice
   **/
  
  @Schema(example = "5903", description = "Spice")
  @JsonProperty("spice")
  @NotNull
  public Integer getSpice() {
    return spice;
  }
  public void setSpice(Integer spice) {
    this.spice = spice;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("snapshots")
  @NotNull
  public List<VpsSnapshot> getSnapshots() {
    return snapshots;
  }
  public void setSnapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceExtra vpsServiceExtra = (VpsServiceExtra) o;
    return Objects.equals(spice, vpsServiceExtra.spice) &&
        Objects.equals(snapshots, vpsServiceExtra.snapshots);
  }

  @Override
  public int hashCode() {
    return Objects.hash(spice, snapshots);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsServiceExtra {\n");
    
    sb.append("    spice: ").append(toIndentedString(spice)).append("\n");
    sb.append("    snapshots: ").append(toIndentedString(snapshots)).append("\n");
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
