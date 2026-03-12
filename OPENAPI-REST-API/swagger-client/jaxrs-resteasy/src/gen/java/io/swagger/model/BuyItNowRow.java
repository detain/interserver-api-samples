package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.")

public class BuyItNowRow   {
  private String serverId = null;  private List<OneOfBuyItNowRowCpuItems> cpu = new ArrayList<OneOfBuyItNowRowCpuItems>();  private String memory = null;  private Map<String, String> disk = new HashMap<String, String>();  private String bandwidth = null;  private String ips = null;  private String location = null;  private Integer price = null;

  /**
   * Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;.
   **/
  
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
