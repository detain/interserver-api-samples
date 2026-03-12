package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.")

public class BuyItNowRow   {
  private String serverId = null;
  private List<OneOfBuyItNowRowCpuItems> cpu = new ArrayList<OneOfBuyItNowRowCpuItems>();
  private String memory = null;
  private Map<String, String> disk = new HashMap<String, String>();
  private String bandwidth = null;
  private String ips = null;
  private String location = null;
  private Integer price = null;

  /**
   * Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;.
   **/
  public BuyItNowRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

  
  
  @Schema(example = "11432", description = "Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.")
  @JsonProperty("server_id")
  @NotNull
  public String getServerId() {
    return serverId;
  }
  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  /**
   **/
  public BuyItNowRow cpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cpu")
  @NotNull
  public List<OneOfBuyItNowRowCpuItems> getCpu() {
    return cpu;
  }
  public void setCpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
  }

  /**
   **/
  public BuyItNowRow memory(String memory) {
    this.memory = memory;
    return this;
  }

  
  
  @Schema(example = "64GB", description = "")
  @JsonProperty("memory")
  @NotNull
  public String getMemory() {
    return memory;
  }
  public void setMemory(String memory) {
    this.memory = memory;
  }

  /**
   **/
  public BuyItNowRow disk(Map<String, String> disk) {
    this.disk = disk;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("disk")
  @NotNull
  public Map<String, String> getDisk() {
    return disk;
  }
  public void setDisk(Map<String, String> disk) {
    this.disk = disk;
  }

  /**
   **/
  public BuyItNowRow bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  
  @Schema(example = "1Gbps Unmetered", description = "")
  @JsonProperty("bandwidth")
  @NotNull
  public String getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   **/
  public BuyItNowRow ips(String ips) {
    this.ips = ips;
    return this;
  }

  
  
  @Schema(example = "1 Vlan Ip (/30)", description = "")
  @JsonProperty("ips")
  @NotNull
  public String getIps() {
    return ips;
  }
  public void setIps(String ips) {
    this.ips = ips;
  }

  /**
   **/
  public BuyItNowRow location(String location) {
    this.location = location;
    return this;
  }

  
  
  @Schema(example = "NYC Region", description = "")
  @JsonProperty("location")
  @NotNull
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }

  /**
   **/
  public BuyItNowRow price(Integer price) {
    this.price = price;
    return this;
  }

  
  
  @Schema(example = "64", description = "")
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BuyItNowRow buyItNowRow = (BuyItNowRow) o;
    return Objects.equals(serverId, buyItNowRow.serverId) &&
        Objects.equals(cpu, buyItNowRow.cpu) &&
        Objects.equals(memory, buyItNowRow.memory) &&
        Objects.equals(disk, buyItNowRow.disk) &&
        Objects.equals(bandwidth, buyItNowRow.bandwidth) &&
        Objects.equals(ips, buyItNowRow.ips) &&
        Objects.equals(location, buyItNowRow.location) &&
        Objects.equals(price, buyItNowRow.price);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
