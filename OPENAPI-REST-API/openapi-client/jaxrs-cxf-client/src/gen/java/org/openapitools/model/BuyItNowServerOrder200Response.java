package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.BuyItNowServerOrder200ResponseBandwidthInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseCpInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseIpsInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseOsInner;
import org.openapitools.model.BuyItNowServerOrder200ResponseRaidInner;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowServerOrder200Response  {
  
  @ApiModelProperty(value = "")

  private List<BuyItNowServerOrder200ResponseBandwidthInner> bandwidth = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<BuyItNowServerOrder200ResponseIpsInner> ips = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<BuyItNowServerOrder200ResponseOsInner> os = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<BuyItNowServerOrder200ResponseCpInner> cp = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<BuyItNowServerOrder200ResponseRaidInner> raid = new ArrayList<>();
 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public List<BuyItNowServerOrder200ResponseBandwidthInner> getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(List<BuyItNowServerOrder200ResponseBandwidthInner> bandwidth) {
    this.bandwidth = bandwidth;
  }

  public BuyItNowServerOrder200Response bandwidth(List<BuyItNowServerOrder200ResponseBandwidthInner> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  public BuyItNowServerOrder200Response addBandwidthItem(BuyItNowServerOrder200ResponseBandwidthInner bandwidthItem) {
    this.bandwidth.add(bandwidthItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("ips")
  public List<BuyItNowServerOrder200ResponseIpsInner> getIps() {
    return ips;
  }

  public void setIps(List<BuyItNowServerOrder200ResponseIpsInner> ips) {
    this.ips = ips;
  }

  public BuyItNowServerOrder200Response ips(List<BuyItNowServerOrder200ResponseIpsInner> ips) {
    this.ips = ips;
    return this;
  }

  public BuyItNowServerOrder200Response addIpsItem(BuyItNowServerOrder200ResponseIpsInner ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * Get os
   * @return os
  **/
  @JsonProperty("os")
  public List<BuyItNowServerOrder200ResponseOsInner> getOs() {
    return os;
  }

  public void setOs(List<BuyItNowServerOrder200ResponseOsInner> os) {
    this.os = os;
  }

  public BuyItNowServerOrder200Response os(List<BuyItNowServerOrder200ResponseOsInner> os) {
    this.os = os;
    return this;
  }

  public BuyItNowServerOrder200Response addOsItem(BuyItNowServerOrder200ResponseOsInner osItem) {
    this.os.add(osItem);
    return this;
  }

 /**
   * Get cp
   * @return cp
  **/
  @JsonProperty("cp")
  public List<BuyItNowServerOrder200ResponseCpInner> getCp() {
    return cp;
  }

  public void setCp(List<BuyItNowServerOrder200ResponseCpInner> cp) {
    this.cp = cp;
  }

  public BuyItNowServerOrder200Response cp(List<BuyItNowServerOrder200ResponseCpInner> cp) {
    this.cp = cp;
    return this;
  }

  public BuyItNowServerOrder200Response addCpItem(BuyItNowServerOrder200ResponseCpInner cpItem) {
    this.cp.add(cpItem);
    return this;
  }

 /**
   * Get raid
   * @return raid
  **/
  @JsonProperty("raid")
  public List<BuyItNowServerOrder200ResponseRaidInner> getRaid() {
    return raid;
  }

  public void setRaid(List<BuyItNowServerOrder200ResponseRaidInner> raid) {
    this.raid = raid;
  }

  public BuyItNowServerOrder200Response raid(List<BuyItNowServerOrder200ResponseRaidInner> raid) {
    this.raid = raid;
    return this;
  }

  public BuyItNowServerOrder200Response addRaidItem(BuyItNowServerOrder200ResponseRaidInner raidItem) {
    this.raid.add(raidItem);
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
    BuyItNowServerOrder200Response buyItNowServerOrder200Response = (BuyItNowServerOrder200Response) o;
    return Objects.equals(this.bandwidth, buyItNowServerOrder200Response.bandwidth) &&
        Objects.equals(this.ips, buyItNowServerOrder200Response.ips) &&
        Objects.equals(this.os, buyItNowServerOrder200Response.os) &&
        Objects.equals(this.cp, buyItNowServerOrder200Response.cp) &&
        Objects.equals(this.raid, buyItNowServerOrder200Response.raid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bandwidth, ips, os, cp, raid);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowServerOrder200Response {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

