package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsSnapshot;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * VpsServiceExtra
 */
@Validated
@Introspected

public class VpsServiceExtra   {
  @JsonProperty("spice")
  private Integer spice = null;

  @JsonProperty("snapshots")
  @Valid
  private List<VpsSnapshot> snapshots = null;

  public VpsServiceExtra spice(Integer spice) {
    this.spice = spice;
    return this;
  }

  /**
   * Spice
   * @return spice
  **/
  @Schema(example = "5903", description = "Spice")
  @NotNull

  public Integer getSpice() {
    return spice;
  }

  public void setSpice(Integer spice) {
    this.spice = spice;
  }

  public VpsServiceExtra snapshots(List<VpsSnapshot> snapshots) {
    this.snapshots = snapshots;
    return this;
  }

  public VpsServiceExtra addSnapshotsItem(VpsSnapshot snapshotsItem) {
    if (this.snapshots == null) {
      this.snapshots = new ArrayList<VpsSnapshot>();
    }
    this.snapshots.add(snapshotsItem);
    return this;
  }

  /**
   * Get snapshots
   * @return snapshots
  **/
  @Schema(description = "")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
