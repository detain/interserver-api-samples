package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20027Bandwidth;
import io.swagger.model.InlineResponse20027Cp;
import io.swagger.model.InlineResponse20027Ips;
import io.swagger.model.InlineResponse20027Os;
import io.swagger.model.InlineResponse20027Raid;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class InlineResponse20027   {
  @JsonProperty("bandwidth")
  private List<InlineResponse20027Bandwidth> bandwidth = null;
  @JsonProperty("ips")
  private List<InlineResponse20027Ips> ips = null;
  @JsonProperty("os")
  private List<InlineResponse20027Os> os = null;
  @JsonProperty("cp")
  private List<InlineResponse20027Cp> cp = null;
  @JsonProperty("raid")
  private List<InlineResponse20027Raid> raid = null;
  /**
   **/
  public InlineResponse20027 bandwidth(List<InlineResponse20027Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("bandwidth")
  public List<InlineResponse20027Bandwidth> getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(List<InlineResponse20027Bandwidth> bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   **/
  public InlineResponse20027 ips(List<InlineResponse20027Ips> ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ips")
  public List<InlineResponse20027Ips> getIps() {
    return ips;
  }
  public void setIps(List<InlineResponse20027Ips> ips) {
    this.ips = ips;
  }

  /**
   **/
  public InlineResponse20027 os(List<InlineResponse20027Os> os) {
    this.os = os;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("os")
  public List<InlineResponse20027Os> getOs() {
    return os;
  }
  public void setOs(List<InlineResponse20027Os> os) {
    this.os = os;
  }

  /**
   **/
  public InlineResponse20027 cp(List<InlineResponse20027Cp> cp) {
    this.cp = cp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cp")
  public List<InlineResponse20027Cp> getCp() {
    return cp;
  }
  public void setCp(List<InlineResponse20027Cp> cp) {
    this.cp = cp;
  }

  /**
   **/
  public InlineResponse20027 raid(List<InlineResponse20027Raid> raid) {
    this.raid = raid;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("raid")
  public List<InlineResponse20027Raid> getRaid() {
    return raid;
  }
  public void setRaid(List<InlineResponse20027Raid> raid) {
    this.raid = raid;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20027 inlineResponse20027 = (InlineResponse20027) o;
    return Objects.equals(bandwidth, inlineResponse20027.bandwidth) &&
        Objects.equals(ips, inlineResponse20027.ips) &&
        Objects.equals(os, inlineResponse20027.os) &&
        Objects.equals(cp, inlineResponse20027.cp) &&
        Objects.equals(raid, inlineResponse20027.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20027 {\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    os: ").append(toIndentedString(os)).append("\n");
    sb.append("    cp: ").append(toIndentedString(cp)).append("\n");
    sb.append("    raid: ").append(toIndentedString(raid)).append("\n");
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
