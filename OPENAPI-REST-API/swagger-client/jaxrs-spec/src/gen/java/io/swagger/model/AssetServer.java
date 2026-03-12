package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A pre-configured asset server available for immediate provisioning.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A pre-configured asset server available for immediate provisioning.")

public class AssetServer   {

  private @Valid Integer id = null;

  private @Valid String region = null;

  private @Valid String price = null;

  private @Valid List<OneOfAssetServerCPUItems> CPU = new ArrayList<OneOfAssetServerCPUItems>();

  private @Valid List<OneOfAssetServerMemoryItems> memory = new ArrayList<OneOfAssetServerMemoryItems>();

  private @Valid List<OneOfAssetServerBandwidthItems> bandwidth = new ArrayList<OneOfAssetServerBandwidthItems>();

  private @Valid List<OneOfAssetServerIpsItems> ips = new ArrayList<OneOfAssetServerIpsItems>();

  private @Valid Map<String, String> HD = new HashMap<String, String>();

  /**
   **/
  public AssetServer id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  @NotNull

  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public AssetServer region(String region) {
    this.region = region;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Region")
  @NotNull

  public String getRegion() {
    return region;
  }
  public void setRegion(String region) {
    this.region = region;
  }

  /**
   **/
  public AssetServer price(String price) {
    this.price = price;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("price")
  @NotNull

  public String getPrice() {
    return price;
  }
  public void setPrice(String price) {
    this.price = price;
  }

  /**
   **/
  public AssetServer CPU(List<OneOfAssetServerCPUItems> CPU) {
    this.CPU = CPU;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("CPU")
  @NotNull

  public List<OneOfAssetServerCPUItems> getCPU() {
    return CPU;
  }
  public void setCPU(List<OneOfAssetServerCPUItems> CPU) {
    this.CPU = CPU;
  }

  /**
   **/
  public AssetServer memory(List<OneOfAssetServerMemoryItems> memory) {
    this.memory = memory;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Memory")
  @NotNull

  public List<OneOfAssetServerMemoryItems> getMemory() {
    return memory;
  }
  public void setMemory(List<OneOfAssetServerMemoryItems> memory) {
    this.memory = memory;
  }

  /**
   **/
  public AssetServer bandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("Bandwidth")
  @NotNull

  public List<OneOfAssetServerBandwidthItems> getBandwidth() {
    return bandwidth;
  }
  public void setBandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) {
    this.bandwidth = bandwidth;
  }

  /**
   **/
  public AssetServer ips(List<OneOfAssetServerIpsItems> ips) {
    this.ips = ips;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("IPs")
  @NotNull

  public List<OneOfAssetServerIpsItems> getIps() {
    return ips;
  }
  public void setIps(List<OneOfAssetServerIpsItems> ips) {
    this.ips = ips;
  }

  /**
   **/
  public AssetServer HD(Map<String, String> HD) {
    this.HD = HD;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("HD")
  @NotNull

  public Map<String, String> getHD() {
    return HD;
  }
  public void setHD(Map<String, String> HD) {
    this.HD = HD;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AssetServer assetServer = (AssetServer) o;
    return Objects.equals(id, assetServer.id) &&
        Objects.equals(region, assetServer.region) &&
        Objects.equals(price, assetServer.price) &&
        Objects.equals(CPU, assetServer.CPU) &&
        Objects.equals(memory, assetServer.memory) &&
        Objects.equals(bandwidth, assetServer.bandwidth) &&
        Objects.equals(ips, assetServer.ips) &&
        Objects.equals(HD, assetServer.HD);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
