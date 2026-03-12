package io.swagger.model;

import io.swagger.model.VpsSnapshot;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class VpsServiceExtra   {
  
  @Schema(example = "5903", description = "Spice")
 /**
   * Spice  
  **/
  private Integer spice = null;
  
  @Schema(description = "")
  private List<VpsSnapshot> snapshots = null;
 /**
   * Spice
   * @return spice
  **/
  @JsonProperty("spice")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
