package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
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
  * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 **/
@Schema(description="A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.")
public class BuyItNowRow   {
  
  @Schema(example = "11432", description = "Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.")
 /**
   * Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.  
  **/
  private String serverId = null;
  
  @Schema(description = "")
  private List<OneOfBuyItNowRowCpuItems> cpu = null;
  
  @Schema(example = "64GB", description = "")
  private String memory = null;
  
  @Schema(description = "")
  private Map<String, String> disk = null;
  
  @Schema(example = "1Gbps Unmetered", description = "")
  private String bandwidth = null;
  
  @Schema(example = "1 Vlan Ip (/30)", description = "")
  private String ips = null;
  
  @Schema(example = "NYC Region", description = "")
  private String location = null;
  
  @Schema(example = "64", description = "")
  private Integer price = null;
 /**
   * Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;.
   * @return serverId
  **/
  @JsonProperty("server_id")
  @NotNull
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
  @NotNull
  public List<OneOfBuyItNowRowCpuItems> getCpu() {
    return cpu;
  }

  public void setCpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
  }

  public BuyItNowRow cpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
    return this;
  }

  public BuyItNowRow addCpuItem(OneOfBuyItNowRowCpuItems cpuItem) {
    this.cpu.add(cpuItem);
    return this;
  }

 /**
   * Get memory
   * @return memory
  **/
  @JsonProperty("memory")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
