package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.AssetServerCPUInner;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A pre-configured asset server available for immediate provisioning.
 */
@ApiModel(description="A pre-configured asset server available for immediate provisioning.")

public class AssetServer  {
  
  @ApiModelProperty(value = "")

  private Integer id;

  @ApiModelProperty(value = "")

  private String region;

  @ApiModelProperty(value = "")

  private String price;

  @ApiModelProperty(value = "")

  private List<AssetServerCPUInner> CPU = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<AssetServerCPUInner> memory = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<AssetServerCPUInner> bandwidth = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<AssetServerCPUInner> ips = new ArrayList<>();

  @ApiModelProperty(value = "")

  private Map<String, String> HD = new HashMap<>();
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public AssetServer id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * Get region
   * @return region
  **/
  @JsonProperty("Region")
  public String getRegion() {
    return region;
  }

  public void setRegion(String region) {
    this.region = region;
  }

  public AssetServer region(String region) {
    this.region = region;
    return this;
  }

 /**
   * Get price
   * @return price
  **/
  @JsonProperty("price")
  public String getPrice() {
    return price;
  }

  public void setPrice(String price) {
    this.price = price;
  }

  public AssetServer price(String price) {
    this.price = price;
    return this;
  }

 /**
   * Get CPU
   * @return CPU
  **/
  @JsonProperty("CPU")
  public List<AssetServerCPUInner> getCPU() {
    return CPU;
  }

  public void setCPU(List<AssetServerCPUInner> CPU) {
    this.CPU = CPU;
  }

  public AssetServer CPU(List<AssetServerCPUInner> CPU) {
    this.CPU = CPU;
    return this;
  }

  public AssetServer addCPUItem(AssetServerCPUInner CPUItem) {
    this.CPU.add(CPUItem);
    return this;
  }

 /**
   * Get memory
   * @return memory
  **/
  @JsonProperty("Memory")
  public List<AssetServerCPUInner> getMemory() {
    return memory;
  }

  public void setMemory(List<AssetServerCPUInner> memory) {
    this.memory = memory;
  }

  public AssetServer memory(List<AssetServerCPUInner> memory) {
    this.memory = memory;
    return this;
  }

  public AssetServer addMemoryItem(AssetServerCPUInner memoryItem) {
    this.memory.add(memoryItem);
    return this;
  }

 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("Bandwidth")
  public List<AssetServerCPUInner> getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(List<AssetServerCPUInner> bandwidth) {
    this.bandwidth = bandwidth;
  }

  public AssetServer bandwidth(List<AssetServerCPUInner> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  public AssetServer addBandwidthItem(AssetServerCPUInner bandwidthItem) {
    this.bandwidth.add(bandwidthItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("IPs")
  public List<AssetServerCPUInner> getIps() {
    return ips;
  }

  public void setIps(List<AssetServerCPUInner> ips) {
    this.ips = ips;
  }

  public AssetServer ips(List<AssetServerCPUInner> ips) {
    this.ips = ips;
    return this;
  }

  public AssetServer addIpsItem(AssetServerCPUInner ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * Get HD
   * @return HD
  **/
  @JsonProperty("HD")
  public Map<String, String> getHD() {
    return HD;
  }

  public void setHD(Map<String, String> HD) {
    this.HD = HD;
  }

  public AssetServer HD(Map<String, String> HD) {
    this.HD = HD;
    return this;
  }

  public AssetServer putHDItem(String key, String HDItem) {
    this.HD.put(key, HDItem);
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
    AssetServer assetServer = (AssetServer) o;
    return Objects.equals(this.id, assetServer.id) &&
        Objects.equals(this.region, assetServer.region) &&
        Objects.equals(this.price, assetServer.price) &&
        Objects.equals(this.CPU, assetServer.CPU) &&
        Objects.equals(this.memory, assetServer.memory) &&
        Objects.equals(this.bandwidth, assetServer.bandwidth) &&
        Objects.equals(this.ips, assetServer.ips) &&
        Objects.equals(this.HD, assetServer.HD);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, region, price, CPU, memory, bandwidth, ips, HD);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AssetServer {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    region: ").append(toIndentedString(region)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    CPU: ").append(toIndentedString(CPU)).append("\n");
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    bandwidth: ").append(toIndentedString(bandwidth)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
    sb.append("    HD: ").append(toIndentedString(HD)).append("\n");
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

