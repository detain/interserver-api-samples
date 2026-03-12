package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A pre-configured asset server available for immediate provisioning.
 */
@Schema(description = "A pre-configured asset server available for immediate provisioning.")
@Validated
@NotUndefined



public class AssetServer   {
  @JsonProperty("id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer id = null;

  @JsonProperty("Region")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String region = null;

  @JsonProperty("price")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String price = null;

  @JsonProperty("CPU")
  @Valid
  private List<OneOfAssetServerCPUItems> CPU = null;
  @JsonProperty("Memory")
  @Valid
  private List<OneOfAssetServerMemoryItems> memory = null;
  @JsonProperty("Bandwidth")
  @Valid
  private List<OneOfAssetServerBandwidthItems> bandwidth = null;
  @JsonProperty("IPs")
  @Valid
  private List<OneOfAssetServerIpsItems> ips = null;
  @JsonProperty("HD")
  @Valid
  private Map<String, String> HD = null;

  public AssetServer id(Integer id) { 

    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  
  @Schema(description = "")
  
  public Integer getId() {  
    return id;
  }



  public void setId(Integer id) { 
    this.id = id;
  }

  public AssetServer region(String region) { 

    this.region = region;
    return this;
  }

  /**
   * Get region
   * @return region
   **/
  
  @Schema(description = "")
  
  public String getRegion() {  
    return region;
  }



  public void setRegion(String region) { 
    this.region = region;
  }

  public AssetServer price(String price) { 

    this.price = price;
    return this;
  }

  /**
   * Get price
   * @return price
   **/
  
  @Schema(description = "")
  
  public String getPrice() {  
    return price;
  }



  public void setPrice(String price) { 
    this.price = price;
  }

  public AssetServer CPU(List<OneOfAssetServerCPUItems> CPU) { 

    this.CPU = CPU;
    return this;
  }

  public AssetServer addCPUItem(OneOfAssetServerCPUItems CPUItem) {
    if (this.CPU == null) {
      this.CPU = new ArrayList<OneOfAssetServerCPUItems>();
    }
    this.CPU.add(CPUItem);
    return this;
  }

  /**
   * Get CPU
   * @return CPU
   **/
  
  @Schema(description = "")
  
  public List<OneOfAssetServerCPUItems> getCPU() {  
    return CPU;
  }



  public void setCPU(List<OneOfAssetServerCPUItems> CPU) { 
    this.CPU = CPU;
  }

  public AssetServer memory(List<OneOfAssetServerMemoryItems> memory) { 

    this.memory = memory;
    return this;
  }

  public AssetServer addMemoryItem(OneOfAssetServerMemoryItems memoryItem) {
    if (this.memory == null) {
      this.memory = new ArrayList<OneOfAssetServerMemoryItems>();
    }
    this.memory.add(memoryItem);
    return this;
  }

  /**
   * Get memory
   * @return memory
   **/
  
  @Schema(description = "")
  
  public List<OneOfAssetServerMemoryItems> getMemory() {  
    return memory;
  }



  public void setMemory(List<OneOfAssetServerMemoryItems> memory) { 
    this.memory = memory;
  }

  public AssetServer bandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) { 

    this.bandwidth = bandwidth;
    return this;
  }

  public AssetServer addBandwidthItem(OneOfAssetServerBandwidthItems bandwidthItem) {
    if (this.bandwidth == null) {
      this.bandwidth = new ArrayList<OneOfAssetServerBandwidthItems>();
    }
    this.bandwidth.add(bandwidthItem);
    return this;
  }

  /**
   * Get bandwidth
   * @return bandwidth
   **/
  
  @Schema(description = "")
  
  public List<OneOfAssetServerBandwidthItems> getBandwidth() {  
    return bandwidth;
  }



  public void setBandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) { 
    this.bandwidth = bandwidth;
  }

  public AssetServer ips(List<OneOfAssetServerIpsItems> ips) { 

    this.ips = ips;
    return this;
  }

  public AssetServer addIpsItem(OneOfAssetServerIpsItems ipsItem) {
    if (this.ips == null) {
      this.ips = new ArrayList<OneOfAssetServerIpsItems>();
    }
    this.ips.add(ipsItem);
    return this;
  }

  /**
   * Get ips
   * @return ips
   **/
  
  @Schema(description = "")
  
  public List<OneOfAssetServerIpsItems> getIps() {  
    return ips;
  }



  public void setIps(List<OneOfAssetServerIpsItems> ips) { 
    this.ips = ips;
  }

  public AssetServer HD(Map<String, String> HD) { 

    this.HD = HD;
    return this;
  }

  public AssetServer putHDItem(String key, String HDItem) {
    if (this.HD == null) {
      this.HD = new HashMap<String, String>();
    }
    this.HD.put(key, HDItem);
    return this;
  }

  /**
   * Get HD
   * @return HD
   **/
  
  @Schema(description = "")
  
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
