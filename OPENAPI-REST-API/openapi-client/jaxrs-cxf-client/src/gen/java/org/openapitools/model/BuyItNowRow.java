package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.BuyItNowRowCpuInner;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */
@ApiModel(description="A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.")

public class BuyItNowRow  {
  
 /**
  * Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
  */
  @ApiModelProperty(example = "11432", value = "Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.")

  private String serverId;

  @ApiModelProperty(value = "")

  private List<BuyItNowRowCpuInner> cpu = new ArrayList<>();

  @ApiModelProperty(example = "64GB", value = "")

  private String memory;

  @ApiModelProperty(value = "")

  private Map<String, String> disk = new HashMap<>();

  @ApiModelProperty(example = "1Gbps Unmetered", value = "")

  private String bandwidth;

  @ApiModelProperty(example = "1 Vlan Ip (/30)", value = "")

  private String ips;

  @ApiModelProperty(example = "NYC Region", value = "")

  private String location;

  @ApiModelProperty(example = "64", value = "")

  private Integer price;
 /**
   * Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;.
   * @return serverId
  **/
  @JsonProperty("server_id")
  public String getServerId() {
    return serverId;
  }

  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  public BuyItNowRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

 /**
   * Get cpu
   * @return cpu
  **/
  @JsonProperty("cpu")
  public List<BuyItNowRowCpuInner> getCpu() {
    return cpu;
  }

  public void setCpu(List<BuyItNowRowCpuInner> cpu) {
    this.cpu = cpu;
  }

  public BuyItNowRow cpu(List<BuyItNowRowCpuInner> cpu) {
    this.cpu = cpu;
    return this;
  }

  public BuyItNowRow addCpuItem(BuyItNowRowCpuInner cpuItem) {
    this.cpu.add(cpuItem);
    return this;
  }

 /**
   * Get memory
   * @return memory
  **/
  @JsonProperty("memory")
  public String getMemory() {
    return memory;
  }

  public void setMemory(String memory) {
    this.memory = memory;
  }

  public BuyItNowRow memory(String memory) {
    this.memory = memory;
    return this;
  }

 /**
   * Get disk
   * @return disk
  **/
  @JsonProperty("disk")
  public Map<String, String> getDisk() {
    return disk;
  }

  public void setDisk(Map<String, String> disk) {
    this.disk = disk;
  }

  public BuyItNowRow disk(Map<String, String> disk) {
    this.disk = disk;
    return this;
  }

  public BuyItNowRow putDiskItem(String key, String diskItem) {
    this.disk.put(key, diskItem);
    return this;
  }

 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("bandwidth")
  public String getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  public BuyItNowRow bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("ips")
  public String getIps() {
    return ips;
  }

  public void setIps(String ips) {
    this.ips = ips;
  }

  public BuyItNowRow ips(String ips) {
    this.ips = ips;
    return this;
  }

 /**
   * Get location
   * @return location
  **/
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public BuyItNowRow location(String location) {
    this.location = location;
    return this;
  }

 /**
   * Get price
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public BuyItNowRow price(Integer price) {
    this.price = price;
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
    BuyItNowRow buyItNowRow = (BuyItNowRow) o;
    return Objects.equals(this.serverId, buyItNowRow.serverId) &&
        Objects.equals(this.cpu, buyItNowRow.cpu) &&
        Objects.equals(this.memory, buyItNowRow.memory) &&
        Objects.equals(this.disk, buyItNowRow.disk) &&
        Objects.equals(this.bandwidth, buyItNowRow.bandwidth) &&
        Objects.equals(this.ips, buyItNowRow.ips) &&
        Objects.equals(this.location, buyItNowRow.location) &&
        Objects.equals(this.price, buyItNowRow.price);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serverId, cpu, memory, disk, bandwidth, ips, location, price);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowRow {\n");
    
    sb.append("    serverId: ").append(toIndentedString(serverId)).append("\n");
    sb.append("    cpu: ").append(toIndentedString(cpu)).append("\n");
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    disk: ").append(toIndentedString(disk)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

