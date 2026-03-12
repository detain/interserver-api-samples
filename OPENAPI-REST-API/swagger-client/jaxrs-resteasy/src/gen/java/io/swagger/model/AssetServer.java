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

@Schema(description="A pre-configured asset server available for immediate provisioning.")

public class AssetServer   {
  private Integer id = null;  private String region = null;  private String price = null;  private List<OneOfAssetServerCPUItems> CPU = new ArrayList<OneOfAssetServerCPUItems>();  private List<OneOfAssetServerMemoryItems> memory = new ArrayList<OneOfAssetServerMemoryItems>();  private List<OneOfAssetServerBandwidthItems> bandwidth = new ArrayList<OneOfAssetServerBandwidthItems>();  private List<OneOfAssetServerIpsItems> ips = new ArrayList<OneOfAssetServerIpsItems>();  private Map<String, String> HD = new HashMap<String, String>();

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
