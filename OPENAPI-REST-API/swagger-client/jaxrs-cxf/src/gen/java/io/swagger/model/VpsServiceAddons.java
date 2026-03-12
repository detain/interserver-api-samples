package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 **/
@Schema(description="Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.")
public class VpsServiceAddons   {
  
  @Schema(description = "Whether a cPanel license is active on this VPS.")
 /**
   * Whether a cPanel license is active on this VPS.  
  **/
  private Boolean hasCpanel = null;
  
  @Schema(description = "Whether a DirectAdmin license is active on this VPS.")
 /**
   * Whether a DirectAdmin license is active on this VPS.  
  **/
  private Boolean hasDirectadmin = null;
  
  @Schema(description = "Whether a Fantastico license is active on this VPS.")
 /**
   * Whether a Fantastico license is active on this VPS.  
  **/
  private Boolean hasFantastico = null;
  
  @Schema(description = "Whether a Softaculous license is active on this VPS.")
 /**
   * Whether a Softaculous license is active on this VPS.  
  **/
  private Boolean hasSoftaculous = null;
  
  @Schema(description = "Whether extra disk space has been added to this VPS.")
 /**
   * Whether extra disk space has been added to this VPS.  
  **/
  private Boolean hasHdspace = null;
  
  @Schema(description = "Whether a dedicated IP address is assigned to this VPS.")
 /**
   * Whether a dedicated IP address is assigned to this VPS.  
  **/
  private Boolean dedicatedIp = null;
  
  @Schema(description = "List of additional IPv4 addresses assigned to this VPS.")
 /**
   * List of additional IPv4 addresses assigned to this VPS.  
  **/
  private List<String> extraIps = null;
  
  @Schema(description = "List of additional IPv6 addresses assigned to this VPS.")
 /**
   * List of additional IPv6 addresses assigned to this VPS.  
  **/
  private List<String> extraIps6 = null;
  
  @Schema(description = "List of IP addresses that have unpaid charges.")
 /**
   * List of IP addresses that have unpaid charges.  
  **/
  private List<String> unpaidIps = null;
  
  @Schema(description = "All IPv4 addresses assigned to this VPS.")
 /**
   * All IPv4 addresses assigned to this VPS.  
  **/
  private List<String> ips = null;
  
  @Schema(description = "All IPv6 addresses assigned to this VPS.")
 /**
   * All IPv6 addresses assigned to this VPS.  
  **/
  private List<String> ips6 = null;
  
  @Schema(description = "The add-on service ID for the cPanel license.")
 /**
   * The add-on service ID for the cPanel license.  
  **/
  private Integer cpanelId = null;
  
  @Schema(description = "Total monthly add-on cost in cents.")
 /**
   * Total monthly add-on cost in cents.  
  **/
  private Integer cost = null;
  
  @Schema(description = "List of add-on service IDs active on this VPS.")
 /**
   * List of add-on service IDs active on this VPS.  
  **/
  private List<String> ids = null;
  
  @Schema(description = "Raw add-on data entries.")
 /**
   * Raw add-on data entries.  
  **/
  private List<String> rdata = null;
 /**
   * Whether a cPanel license is active on this VPS.
   * @return hasCpanel
  **/
  @JsonProperty("has_cpanel")
  @NotNull
  public Boolean isHasCpanel() {
    return hasCpanel;
  }

  public void setHasCpanel(Boolean hasCpanel) {
    this.hasCpanel = hasCpanel;
  }

  public VpsServiceAddons hasCpanel(Boolean hasCpanel) {
    this.hasCpanel = hasCpanel;
    return this;
  }

 /**
   * Whether a DirectAdmin license is active on this VPS.
   * @return hasDirectadmin
  **/
  @JsonProperty("has_directadmin")
  @NotNull
  public Boolean isHasDirectadmin() {
    return hasDirectadmin;
  }

  public void setHasDirectadmin(Boolean hasDirectadmin) {
    this.hasDirectadmin = hasDirectadmin;
  }

  public VpsServiceAddons hasDirectadmin(Boolean hasDirectadmin) {
    this.hasDirectadmin = hasDirectadmin;
    return this;
  }

 /**
   * Whether a Fantastico license is active on this VPS.
   * @return hasFantastico
  **/
  @JsonProperty("has_fantastico")
  @NotNull
  public Boolean isHasFantastico() {
    return hasFantastico;
  }

  public void setHasFantastico(Boolean hasFantastico) {
    this.hasFantastico = hasFantastico;
  }

  public VpsServiceAddons hasFantastico(Boolean hasFantastico) {
    this.hasFantastico = hasFantastico;
    return this;
  }

 /**
   * Whether a Softaculous license is active on this VPS.
   * @return hasSoftaculous
  **/
  @JsonProperty("has_softaculous")
  @NotNull
  public Boolean isHasSoftaculous() {
    return hasSoftaculous;
  }

  public void setHasSoftaculous(Boolean hasSoftaculous) {
    this.hasSoftaculous = hasSoftaculous;
  }

  public VpsServiceAddons hasSoftaculous(Boolean hasSoftaculous) {
    this.hasSoftaculous = hasSoftaculous;
    return this;
  }

 /**
   * Whether extra disk space has been added to this VPS.
   * @return hasHdspace
  **/
  @JsonProperty("has_hdspace")
  @NotNull
  public Boolean isHasHdspace() {
    return hasHdspace;
  }

  public void setHasHdspace(Boolean hasHdspace) {
    this.hasHdspace = hasHdspace;
  }

  public VpsServiceAddons hasHdspace(Boolean hasHdspace) {
    this.hasHdspace = hasHdspace;
    return this;
  }

 /**
   * Whether a dedicated IP address is assigned to this VPS.
   * @return dedicatedIp
  **/
  @JsonProperty("dedicated_ip")
  @NotNull
  public Boolean isDedicatedIp() {
    return dedicatedIp;
  }

  public void setDedicatedIp(Boolean dedicatedIp) {
    this.dedicatedIp = dedicatedIp;
  }

  public VpsServiceAddons dedicatedIp(Boolean dedicatedIp) {
    this.dedicatedIp = dedicatedIp;
    return this;
  }

 /**
   * List of additional IPv4 addresses assigned to this VPS.
   * @return extraIps
  **/
  @JsonProperty("extra_ips")
  @NotNull
  public List<String> getExtraIps() {
    return extraIps;
  }

  public void setExtraIps(List<String> extraIps) {
    this.extraIps = extraIps;
  }

  public VpsServiceAddons extraIps(List<String> extraIps) {
    this.extraIps = extraIps;
    return this;
  }

  public VpsServiceAddons addExtraIpsItem(String extraIpsItem) {
    this.extraIps.add(extraIpsItem);
    return this;
  }

 /**
   * List of additional IPv6 addresses assigned to this VPS.
   * @return extraIps6
  **/
  @JsonProperty("extra_ips6")
  @NotNull
  public List<String> getExtraIps6() {
    return extraIps6;
  }

  public void setExtraIps6(List<String> extraIps6) {
    this.extraIps6 = extraIps6;
  }

  public VpsServiceAddons extraIps6(List<String> extraIps6) {
    this.extraIps6 = extraIps6;
    return this;
  }

  public VpsServiceAddons addExtraIps6Item(String extraIps6Item) {
    this.extraIps6.add(extraIps6Item);
    return this;
  }

 /**
   * List of IP addresses that have unpaid charges.
   * @return unpaidIps
  **/
  @JsonProperty("unpaid_ips")
  @NotNull
  public List<String> getUnpaidIps() {
    return unpaidIps;
  }

  public void setUnpaidIps(List<String> unpaidIps) {
    this.unpaidIps = unpaidIps;
  }

  public VpsServiceAddons unpaidIps(List<String> unpaidIps) {
    this.unpaidIps = unpaidIps;
    return this;
  }

  public VpsServiceAddons addUnpaidIpsItem(String unpaidIpsItem) {
    this.unpaidIps.add(unpaidIpsItem);
    return this;
  }

 /**
   * All IPv4 addresses assigned to this VPS.
   * @return ips
  **/
  @JsonProperty("ips")
  @NotNull
  public List<String> getIps() {
    return ips;
  }

  public void setIps(List<String> ips) {
    this.ips = ips;
  }

  public VpsServiceAddons ips(List<String> ips) {
    this.ips = ips;
    return this;
  }

  public VpsServiceAddons addIpsItem(String ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * All IPv6 addresses assigned to this VPS.
   * @return ips6
  **/
  @JsonProperty("ips6")
  @NotNull
  public List<String> getIps6() {
    return ips6;
  }

  public void setIps6(List<String> ips6) {
    this.ips6 = ips6;
  }

  public VpsServiceAddons ips6(List<String> ips6) {
    this.ips6 = ips6;
    return this;
  }

  public VpsServiceAddons addIps6Item(String ips6Item) {
    this.ips6.add(ips6Item);
    return this;
  }

 /**
   * The add-on service ID for the cPanel license.
   * @return cpanelId
  **/
  @JsonProperty("cpanel_id")
  @NotNull
  public Integer getCpanelId() {
    return cpanelId;
  }

  public void setCpanelId(Integer cpanelId) {
    this.cpanelId = cpanelId;
  }

  public VpsServiceAddons cpanelId(Integer cpanelId) {
    this.cpanelId = cpanelId;
    return this;
  }

 /**
   * Total monthly add-on cost in cents.
   * @return cost
  **/
  @JsonProperty("cost")
  @NotNull
  public Integer getCost() {
    return cost;
  }

  public void setCost(Integer cost) {
    this.cost = cost;
  }

  public VpsServiceAddons cost(Integer cost) {
    this.cost = cost;
    return this;
  }

 /**
   * List of add-on service IDs active on this VPS.
   * @return ids
  **/
  @JsonProperty("ids")
  @NotNull
  public List<String> getIds() {
    return ids;
  }

  public void setIds(List<String> ids) {
    this.ids = ids;
  }

  public VpsServiceAddons ids(List<String> ids) {
    this.ids = ids;
    return this;
  }

  public VpsServiceAddons addIdsItem(String idsItem) {
    this.ids.add(idsItem);
    return this;
  }

 /**
   * Raw add-on data entries.
   * @return rdata
  **/
  @JsonProperty("rdata")
  @NotNull
  public List<String> getRdata() {
    return rdata;
  }

  public void setRdata(List<String> rdata) {
    this.rdata = rdata;
  }

  public VpsServiceAddons rdata(List<String> rdata) {
    this.rdata = rdata;
    return this;
  }

  public VpsServiceAddons addRdataItem(String rdataItem) {
    this.rdata.add(rdataItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
