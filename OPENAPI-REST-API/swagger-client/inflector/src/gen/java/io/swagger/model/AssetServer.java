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
 * A pre-configured asset server available for immediate provisioning.
 **/
@Schema(description = "A pre-configured asset server available for immediate provisioning.")


public class AssetServer   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("Region")
  private String region = null;
  @JsonProperty("price")
  private String price = null;
  @JsonProperty("CPU")
  private List<OneOfAssetServerCPUItems> CPU = null;
  @JsonProperty("Memory")
  private List<OneOfAssetServerMemoryItems> memory = null;
  @JsonProperty("Bandwidth")
  private List<OneOfAssetServerBandwidthItems> bandwidth = null;
  @JsonProperty("IPs")
  private List<OneOfAssetServerIpsItems> ips = null;
  @JsonProperty("HD")
  private Map<String, String> HD = null;
  /**
   **/
  public AssetServer id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("id")
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

  
  @Schema(description = "")
  @JsonProperty("Region")
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

  
  @Schema(description = "")
  @JsonProperty("price")
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

  
  @Schema(description = "")
  @JsonProperty("CPU")
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

  
  @Schema(description = "")
  @JsonProperty("Memory")
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

  
  @Schema(description = "")
  @JsonProperty("Bandwidth")
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

  
  @Schema(description = "")
  @JsonProperty("IPs")
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

  
  @Schema(description = "")
  @JsonProperty("HD")
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
