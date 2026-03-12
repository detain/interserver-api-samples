package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsSnapshot;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class VpsServiceExtra   {
  private Integer spice = null;
  private List<VpsSnapshot> snapshots = new ArrayList<VpsSnapshot>();

  /**
   * Spice
   **/
  public VpsServiceExtra spice(Integer spice) {
    this.spice = spice;
    return this;
  }

  
  
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
  public VpsServiceExtra snapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("snapshots")
  @NotNull
  @Valid
  public List<VpsSnapshot> getSnapshots() {
    return snapshots;
  }
  public void setSnapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
