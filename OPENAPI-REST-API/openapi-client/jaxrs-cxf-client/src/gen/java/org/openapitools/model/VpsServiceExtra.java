package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.VpsSnapshot;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class VpsServiceExtra  {
  
 /**
  * Spice
  */
  @ApiModelProperty(example = "5903", value = "Spice")

  private Integer spice;

  @ApiModelProperty(value = "")

  private List<VpsSnapshot> snapshots = new ArrayList<>();
 /**
   * Spice
   * @return spice
  **/
  @JsonProperty("spice")
  public Integer getSpice() {
    return spice;
  }

  public void setSpice(Integer spice) {
    this.spice = spice;
  }

  public VpsServiceExtra spice(Integer spice) {
    this.spice = spice;
    return this;
  }

 /**
   * Get snapshots
   * @return snapshots
  **/
  @JsonProperty("snapshots")
  public List<VpsSnapshot> getSnapshots() {
    return snapshots;
  }

  public void setSnapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
  }

  public VpsServiceExtra snapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
    return this;
  }

  public VpsServiceExtra addSnapshotsItem(VpsSnapshot snapshotsItem) {
    this.snapshots.add(snapshotsItem);
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
    VpsServiceExtra vpsServiceExtra = (VpsServiceExtra) o;
    return Objects.equals(this.spice, vpsServiceExtra.spice) &&
        Objects.equals(this.snapshots, vpsServiceExtra.snapshots);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

