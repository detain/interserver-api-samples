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
  * A pre-configured asset server available for immediate provisioning.
 **/
@Schema(description="A pre-configured asset server available for immediate provisioning.")
public class AssetServer   {
  
  @Schema(description = "")
  private Integer id = null;
  
  @Schema(description = "")
  private String region = null;
  
  @Schema(description = "")
  private String price = null;
  
  @Schema(description = "")
  private List<OneOfAssetServerCPUItems> CPU = null;
  
  @Schema(description = "")
  private List<OneOfAssetServerMemoryItems> memory = null;
  
  @Schema(description = "")
  private List<OneOfAssetServerBandwidthItems> bandwidth = null;
  
  @Schema(description = "")
  private List<OneOfAssetServerIpsItems> ips = null;
  
  @Schema(description = "")
  private Map<String, String> HD = null;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
  public List<OneOfAssetServerCPUItems> getCPU() {
    return CPU;
  }

  public void setCPU(List<OneOfAssetServerCPUItems> CPU) {
    this.CPU = CPU;
  }

  public AssetServer CPU(List<OneOfAssetServerCPUItems> CPU) {
    this.CPU = CPU;
    return this;
  }

  public AssetServer addCPUItem(OneOfAssetServerCPUItems CPUItem) {
    this.CPU.add(CPUItem);
    return this;
  }

 /**
   * Get memory
   * @return memory
  **/
  @JsonProperty("Memory")
  @NotNull
  public List<OneOfAssetServerMemoryItems> getMemory() {
    return memory;
  }

  public void setMemory(List<OneOfAssetServerMemoryItems> memory) {
    this.memory = memory;
  }

  public AssetServer memory(List<OneOfAssetServerMemoryItems> memory) {
    this.memory = memory;
    return this;
  }

  public AssetServer addMemoryItem(OneOfAssetServerMemoryItems memoryItem) {
    this.memory.add(memoryItem);
    return this;
  }

 /**
   * Get bandwidth
   * @return bandwidth
  **/
  @JsonProperty("Bandwidth")
  @NotNull
  public List<OneOfAssetServerBandwidthItems> getBandwidth() {
    return bandwidth;
  }

  public void setBandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) {
    this.bandwidth = bandwidth;
  }

  public AssetServer bandwidth(List<OneOfAssetServerBandwidthItems> bandwidth) {
    this.bandwidth = bandwidth;
    return this;
  }

  public AssetServer addBandwidthItem(OneOfAssetServerBandwidthItems bandwidthItem) {
    this.bandwidth.add(bandwidthItem);
    return this;
  }

 /**
   * Get ips
   * @return ips
  **/
  @JsonProperty("IPs")
  @NotNull
  public List<OneOfAssetServerIpsItems> getIps() {
    return ips;
  }

  public void setIps(List<OneOfAssetServerIpsItems> ips) {
    this.ips = ips;
  }

  public AssetServer ips(List<OneOfAssetServerIpsItems> ips) {
    this.ips = ips;
    return this;
  }

  public AssetServer addIpsItem(OneOfAssetServerIpsItems ipsItem) {
    this.ips.add(ipsItem);
    return this;
  }

 /**
   * Get HD
   * @return HD
  **/
  @JsonProperty("HD")
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
