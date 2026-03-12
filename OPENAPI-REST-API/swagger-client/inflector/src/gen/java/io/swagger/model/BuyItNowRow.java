package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 **/
@Schema(description = "A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.")


public class BuyItNowRow   {
  @JsonProperty("server_id")
  private String serverId = null;
  @JsonProperty("cpu")
  private List<OneOfBuyItNowRowCpuItems> cpu = null;
  @JsonProperty("memory")
  private String memory = null;
  @JsonProperty("disk")
  private Map<String, String> disk = null;
  @JsonProperty("bandwidth")
  private String bandwidth = null;
  @JsonProperty("ips")
  private String ips = null;
  @JsonProperty("location")
  private String location = null;
  @JsonProperty("price")
  private Integer price = null;
  /**
   * Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
   **/
  public BuyItNowRow serverId(String serverId) {
    this.serverId = serverId;
    return this;
  }

  
  @Schema(example = "11432", description = "Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.")
  @JsonProperty("server_id")
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
