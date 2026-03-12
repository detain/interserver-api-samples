package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */




public class BuyItNowRow   {
  private String serverId = null;

  
  private List<OneOfBuyItNowRowCpuItems> cpu = null;

  private String memory = null;

  
  private Map<String, String> disk = null;

  private String bandwidth = null;

  private String ips = null;

  private String location = null;

  private Integer price = null;

  public BuyItNowRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

  /**
   * Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
   * @return serverId
   **/
    public String getServerId() {
    return serverId;
  }

  public void setServerId(String serverId) {
    this.serverId = serverId;
  }

  public BuyItNowRow cpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
    return this;
  }

  public BuyItNowRow addCpuItem(OneOfBuyItNowRowCpuItems cpuItem) {
    if (this.cpu == null) {
      this.cpu = new ArrayList<OneOfBuyItNowRowCpuItems>();
    }
    this.cpu.add(cpuItem);
    return this;
  }

  /**
   * Get cpu
   * @return cpu
   **/
    public List<OneOfBuyItNowRowCpuItems> getCpu() {
    return cpu;
  }

  public void setCpu(List<OneOfBuyItNowRowCpuItems> cpu) {
    this.cpu = cpu;
  }

  public BuyItNowRow memory(String memory) {
    this.memory = memory;
    return this;
  }

  /**
   * Get memory
   * @return memory
   **/
    public String getMemory() {
    return memory;
  }

  public void setMemory(String memory) {
    this.memory = memory;
  }

  public BuyItNowRow disk(Map<String, String> disk) {
    this.disk = disk;
    return this;
  }

  public BuyItNowRow putDiskItem(String key, String diskItem) {
    if (this.disk == null) {
      this.disk = new HashMap<String, String>();
    }
    this.disk.put(key, diskItem);
    return this;
  }

  /**
   * Get disk
   * @return disk
   **/
    public Map<String, String> getDisk() {
    return disk;
  }

  public void setDisk(Map<String, String> disk) {
    this.disk = disk;
  }

  public BuyItNowRow bandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  /**
   * Get bandwidth
   * @return bandwidth
   **/
    public String getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(String bandwidth) {
    this.bandwidth = bandwidth;
  }

  public BuyItNowRow ips(String ips) {
    this.ips = ips;
    return this;
  }

  /**
   * Get ips
   * @return ips
   **/
    public String getIps() {
    return ips;
  }

  public void setIps(String ips) {
    this.ips = ips;
  }

  public BuyItNowRow location(String location) {
    this.location = location;
    return this;
  }

  /**
   * Get location
   * @return location
   **/
    public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public BuyItNowRow price(Integer price) {
    this.price = price;
    return this;
  }

  /**
   * Get price
   * @return price
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
