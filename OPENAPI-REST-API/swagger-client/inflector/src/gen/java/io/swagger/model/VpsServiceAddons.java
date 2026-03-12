package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 **/
@Schema(description = "Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.")


public class VpsServiceAddons   {
  @JsonProperty("has_cpanel")
  private Boolean hasCpanel = null;
  @JsonProperty("has_directadmin")
  private Boolean hasDirectadmin = null;
  @JsonProperty("has_fantastico")
  private Boolean hasFantastico = null;
  @JsonProperty("has_softaculous")
  private Boolean hasSoftaculous = null;
  @JsonProperty("has_hdspace")
  private Boolean hasHdspace = null;
  @JsonProperty("dedicated_ip")
  private Boolean dedicatedIp = null;
  @JsonProperty("extra_ips")
  private List<String> extraIps = null;
  @JsonProperty("extra_ips6")
  private List<String> extraIps6 = null;
  @JsonProperty("unpaid_ips")
  private List<String> unpaidIps = null;
  @JsonProperty("ips")
  private List<String> ips = null;
  @JsonProperty("ips6")
  private List<String> ips6 = null;
  @JsonProperty("cpanel_id")
  private Integer cpanelId = null;
  @JsonProperty("cost")
  private Integer cost = null;
  @JsonProperty("ids")
  private List<String> ids = null;
  @JsonProperty("rdata")
  private List<String> rdata = null;
  /**
   * Whether a cPanel license is active on this VPS.
   **/
  public VpsServiceAddons hasCpanel(Boolean hasCpanel) {
    this.hasCpanel = hasCpanel;
    return this;
  }

  
  @Schema(description = "Whether a cPanel license is active on this VPS.")
  @JsonProperty("has_cpanel")
  public Boolean isHasCpanel() {
    return hasCpanel;
  }
  public void setHasCpanel(Boolean hasCpanel) {
    this.hasCpanel = hasCpanel;
  }

  /**
   * Whether a DirectAdmin license is active on this VPS.
   **/
  public VpsServiceAddons hasDirectadmin(Boolean hasDirectadmin) {
    this.hasDirectadmin = hasDirectadmin;
    return this;
  }

  
  @Schema(description = "Whether a DirectAdmin license is active on this VPS.")
  @JsonProperty("has_directadmin")
  public Boolean isHasDirectadmin() {
    return hasDirectadmin;
  }
  public void setHasDirectadmin(Boolean hasDirectadmin) {
    this.hasDirectadmin = hasDirectadmin;
  }

  /**
   * Whether a Fantastico license is active on this VPS.
   **/
  public VpsServiceAddons hasFantastico(Boolean hasFantastico) {
    this.hasFantastico = hasFantastico;
    return this;
  }

  
  @Schema(description = "Whether a Fantastico license is active on this VPS.")
  @JsonProperty("has_fantastico")
  public Boolean isHasFantastico() {
    return hasFantastico;
  }
  public void setHasFantastico(Boolean hasFantastico) {
    this.hasFantastico = hasFantastico;
  }

  /**
   * Whether a Softaculous license is active on this VPS.
   **/
  public VpsServiceAddons hasSoftaculous(Boolean hasSoftaculous) {
    this.hasSoftaculous = hasSoftaculous;
    return this;
  }

  
  @Schema(description = "Whether a Softaculous license is active on this VPS.")
  @JsonProperty("has_softaculous")
  public Boolean isHasSoftaculous() {
    return hasSoftaculous;
  }
  public void setHasSoftaculous(Boolean hasSoftaculous) {
    this.hasSoftaculous = hasSoftaculous;
  }

  /**
   * Whether extra disk space has been added to this VPS.
   **/
  public VpsServiceAddons hasHdspace(Boolean hasHdspace) {
    this.hasHdspace = hasHdspace;
    return this;
  }

  
  @Schema(description = "Whether extra disk space has been added to this VPS.")
  @JsonProperty("has_hdspace")
  public Boolean isHasHdspace() {
    return hasHdspace;
  }
  public void setHasHdspace(Boolean hasHdspace) {
    this.hasHdspace = hasHdspace;
  }

  /**
   * Whether a dedicated IP address is assigned to this VPS.
   **/
  public VpsServiceAddons dedicatedIp(Boolean dedicatedIp) {
    this.dedicatedIp = dedicatedIp;
    return this;
  }

  
  @Schema(description = "Whether a dedicated IP address is assigned to this VPS.")
  @JsonProperty("dedicated_ip")
  public Boolean isDedicatedIp() {
    return dedicatedIp;
  }
  public void setDedicatedIp(Boolean dedicatedIp) {
    this.dedicatedIp = dedicatedIp;
  }

  /**
   * List of additional IPv4 addresses assigned to this VPS.
   **/
  public VpsServiceAddons extraIps(List<String> extraIps) {
    this.extraIps = extraIps;
    return this;
  }

  
  @Schema(description = "List of additional IPv4 addresses assigned to this VPS.")
  @JsonProperty("extra_ips")
  public List<String> getExtraIps() {
    return extraIps;
  }
  public void setExtraIps(List<String> extraIps) {
    this.extraIps = extraIps;
  }

  /**
   * List of additional IPv6 addresses assigned to this VPS.
   **/
  public VpsServiceAddons extraIps6(List<String> extraIps6) {
    this.extraIps6 = extraIps6;
    return this;
  }

  
  @Schema(description = "List of additional IPv6 addresses assigned to this VPS.")
  @JsonProperty("extra_ips6")
  public List<String> getExtraIps6() {
    return extraIps6;
  }
  public void setExtraIps6(List<String> extraIps6) {
    this.extraIps6 = extraIps6;
  }

  /**
   * List of IP addresses that have unpaid charges.
   **/
  public VpsServiceAddons unpaidIps(List<String> unpaidIps) {
    this.unpaidIps = unpaidIps;
    return this;
  }

  
  @Schema(description = "List of IP addresses that have unpaid charges.")
  @JsonProperty("unpaid_ips")
  public List<String> getUnpaidIps() {
    return unpaidIps;
  }
  public void setUnpaidIps(List<String> unpaidIps) {
    this.unpaidIps = unpaidIps;
  }

  /**
   * All IPv4 addresses assigned to this VPS.
   **/
  public VpsServiceAddons ips(List<String> ips) {
    this.ips = ips;
    return this;
  }

  
  @Schema(description = "All IPv4 addresses assigned to this VPS.")
  @JsonProperty("ips")
  public List<String> getIps() {
    return ips;
  }
  public void setIps(List<String> ips) {
    this.ips = ips;
  }

  /**
   * All IPv6 addresses assigned to this VPS.
   **/
  public VpsServiceAddons ips6(List<String> ips6) {
    this.ips6 = ips6;
    return this;
  }

  
  @Schema(description = "All IPv6 addresses assigned to this VPS.")
  @JsonProperty("ips6")
  public List<String> getIps6() {
    return ips6;
  }
  public void setIps6(List<String> ips6) {
    this.ips6 = ips6;
  }

  /**
   * The add-on service ID for the cPanel license.
   **/
  public VpsServiceAddons cpanelId(Integer cpanelId) {
    this.cpanelId = cpanelId;
    return this;
  }

  
  @Schema(description = "The add-on service ID for the cPanel license.")
  @JsonProperty("cpanel_id")
  public Integer getCpanelId() {
    return cpanelId;
  }
  public void setCpanelId(Integer cpanelId) {
    this.cpanelId = cpanelId;
  }

  /**
   * Total monthly add-on cost in cents.
   **/
  public VpsServiceAddons cost(Integer cost) {
    this.cost = cost;
    return this;
  }

  
  @Schema(description = "Total monthly add-on cost in cents.")
  @JsonProperty("cost")
  public Integer getCost() {
    return cost;
  }
  public void setCost(Integer cost) {
    this.cost = cost;
  }

  /**
   * List of add-on service IDs active on this VPS.
   **/
  public VpsServiceAddons ids(List<String> ids) {
    this.ids = ids;
    return this;
  }

  
  @Schema(description = "List of add-on service IDs active on this VPS.")
  @JsonProperty("ids")
  public List<String> getIds() {
    return ids;
  }
  public void setIds(List<String> ids) {
    this.ids = ids;
  }

  /**
   * Raw add-on data entries.
   **/
  public VpsServiceAddons rdata(List<String> rdata) {
    this.rdata = rdata;
    return this;
  }

  
  @Schema(description = "Raw add-on data entries.")
  @JsonProperty("rdata")
  public List<String> getRdata() {
    return rdata;
  }
  public void setRdata(List<String> rdata) {
    this.rdata = rdata;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsServiceAddons vpsServiceAddons = (VpsServiceAddons) o;
    return Objects.equals(hasCpanel, vpsServiceAddons.hasCpanel) &&
        Objects.equals(hasDirectadmin, vpsServiceAddons.hasDirectadmin) &&
        Objects.equals(hasFantastico, vpsServiceAddons.hasFantastico) &&
        Objects.equals(hasSoftaculous, vpsServiceAddons.hasSoftaculous) &&
        Objects.equals(hasHdspace, vpsServiceAddons.hasHdspace) &&
        Objects.equals(dedicatedIp, vpsServiceAddons.dedicatedIp) &&
        Objects.equals(extraIps, vpsServiceAddons.extraIps) &&
        Objects.equals(extraIps6, vpsServiceAddons.extraIps6) &&
        Objects.equals(unpaidIps, vpsServiceAddons.unpaidIps) &&
        Objects.equals(ips, vpsServiceAddons.ips) &&
        Objects.equals(ips6, vpsServiceAddons.ips6) &&
        Objects.equals(cpanelId, vpsServiceAddons.cpanelId) &&
        Objects.equals(cost, vpsServiceAddons.cost) &&
        Objects.equals(ids, vpsServiceAddons.ids) &&
        Objects.equals(rdata, vpsServiceAddons.rdata);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hasCpanel, hasDirectadmin, hasFantastico, hasSoftaculous, hasHdspace, dedicatedIp, extraIps, extraIps6, unpaidIps, ips, ips6, cpanelId, cost, ids, rdata);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsServiceAddons {\n");
    sb.append("    hasCpanel: ").append(toIndentedString(hasCpanel)).append("\n");
    sb.append("    hasDirectadmin: ").append(toIndentedString(hasDirectadmin)).append("\n");
    sb.append("    hasFantastico: ").append(toIndentedString(hasFantastico)).append("\n");
    sb.append("    hasSoftaculous: ").append(toIndentedString(hasSoftaculous)).append("\n");
    sb.append("    hasHdspace: ").append(toIndentedString(hasHdspace)).append("\n");
    sb.append("    dedicatedIp: ").append(toIndentedString(dedicatedIp)).append("\n");
    sb.append("    extraIps: ").append(toIndentedString(extraIps)).append("\n");
    sb.append("    extraIps6: ").append(toIndentedString(extraIps6)).append("\n");
    sb.append("    unpaidIps: ").append(toIndentedString(unpaidIps)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    ips6: ").append(toIndentedString(ips6)).append("\n");
    sb.append("    cpanelId: ").append(toIndentedString(cpanelId)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    ids: ").append(toIndentedString(ids)).append("\n");
    sb.append("    rdata: ").append(toIndentedString(rdata)).append("\n");
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
