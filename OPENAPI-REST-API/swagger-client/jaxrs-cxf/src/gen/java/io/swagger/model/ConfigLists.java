package io.swagger.model;

import io.swagger.model.Bandwidth;
import io.swagger.model.ControlPanel;
import io.swagger.model.Cpu;
import io.swagger.model.HardDrive;
import io.swagger.model.IpBlock;
import io.swagger.model.MemoryOption;
import io.swagger.model.OperatingSystem;
import io.swagger.model.RaidOption;
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
  * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 **/
@Schema(description="All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.")
public class ConfigLists   {
  
  @Schema(description = "")
  private Map<String, Cpu> cpuLi = null;
  
  @Schema(description = "")
  private Map<String, Map<String, MemoryOption>> memoryLi = null;
  
  @Schema(description = "")
  private Map<String, Map<String, HardDrive>> hdLi = null;
  
  @Schema(description = "")
  private Map<String, Bandwidth> bandwidthLi = null;
  
  @Schema(description = "")
  private Map<String, IpBlock> ipsLi = null;
  
  @Schema(description = "")
  private Map<String, OperatingSystem> osLi = null;
  
  @Schema(description = "")
  private Map<String, ControlPanel> cpLi = null;
  
  @Schema(description = "")
  private List<RaidOption> raidLi = null;
 /**
   * Get cpuLi
   * @return cpuLi
  **/
  @JsonProperty("cpu_li")
  @NotNull
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }

  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  public ConfigLists cpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  public ConfigLists putCpuLiItem(String key, Cpu cpuLiItem) {
    this.cpuLi.put(key, cpuLiItem);
    return this;
  }

 /**
   * Get memoryLi
   * @return memoryLi
  **/
  @JsonProperty("memory_li")
  @NotNull
  public Map<String, Map<String, MemoryOption>> getMemoryLi() {
    return memoryLi;
  }

  public void setMemoryLi(Map<String, Map<String, MemoryOption>> memoryLi) {
    this.memoryLi = memoryLi;
  }

  public ConfigLists memoryLi(Map<String, Map<String, MemoryOption>> memoryLi) {
    this.memoryLi = memoryLi;
    return this;
  }

  public ConfigLists putMemoryLiItem(String key, Map<String, MemoryOption> memoryLiItem) {
    this.memoryLi.put(key, memoryLiItem);
    return this;
  }

 /**
   * Get hdLi
   * @return hdLi
  **/
  @JsonProperty("hd_li")
  @NotNull
  public Map<String, Map<String, HardDrive>> getHdLi() {
    return hdLi;
  }

  public void setHdLi(Map<String, Map<String, HardDrive>> hdLi) {
    this.hdLi = hdLi;
  }

  public ConfigLists hdLi(Map<String, Map<String, HardDrive>> hdLi) {
    this.hdLi = hdLi;
    return this;
  }

  public ConfigLists putHdLiItem(String key, Map<String, HardDrive> hdLiItem) {
    this.hdLi.put(key, hdLiItem);
    return this;
  }

 /**
   * Get bandwidthLi
   * @return bandwidthLi
  **/
  @JsonProperty("bandwidth_li")
  @NotNull
  public Map<String, Bandwidth> getBandwidthLi() {
    return bandwidthLi;
  }

  public void setBandwidthLi(Map<String, Bandwidth> bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
  }

  public ConfigLists bandwidthLi(Map<String, Bandwidth> bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
    return this;
  }

  public ConfigLists putBandwidthLiItem(String key, Bandwidth bandwidthLiItem) {
    this.bandwidthLi.put(key, bandwidthLiItem);
    return this;
  }

 /**
   * Get ipsLi
   * @return ipsLi
  **/
  @JsonProperty("ips_li")
  @NotNull
  public Map<String, IpBlock> getIpsLi() {
    return ipsLi;
  }

  public void setIpsLi(Map<String, IpBlock> ipsLi) {
    this.ipsLi = ipsLi;
  }

  public ConfigLists ipsLi(Map<String, IpBlock> ipsLi) {
    this.ipsLi = ipsLi;
    return this;
  }

  public ConfigLists putIpsLiItem(String key, IpBlock ipsLiItem) {
    this.ipsLi.put(key, ipsLiItem);
    return this;
  }

 /**
   * Get osLi
   * @return osLi
  **/
  @JsonProperty("os_li")
  @NotNull
  public Map<String, OperatingSystem> getOsLi() {
    return osLi;
  }

  public void setOsLi(Map<String, OperatingSystem> osLi) {
    this.osLi = osLi;
  }

  public ConfigLists osLi(Map<String, OperatingSystem> osLi) {
    this.osLi = osLi;
    return this;
  }

  public ConfigLists putOsLiItem(String key, OperatingSystem osLiItem) {
    this.osLi.put(key, osLiItem);
    return this;
  }

 /**
   * Get cpLi
   * @return cpLi
  **/
  @JsonProperty("cp_li")
  @NotNull
  public Map<String, ControlPanel> getCpLi() {
    return cpLi;
  }

  public void setCpLi(Map<String, ControlPanel> cpLi) {
    this.cpLi = cpLi;
  }

  public ConfigLists cpLi(Map<String, ControlPanel> cpLi) {
    this.cpLi = cpLi;
    return this;
  }

  public ConfigLists putCpLiItem(String key, ControlPanel cpLiItem) {
    this.cpLi.put(key, cpLiItem);
    return this;
  }

 /**
   * Get raidLi
   * @return raidLi
  **/
  @JsonProperty("raid_li")
  @NotNull
  public List<RaidOption> getRaidLi() {
    return raidLi;
  }

  public void setRaidLi(List<RaidOption> raidLi) {
    this.raidLi = raidLi;
  }

  public ConfigLists raidLi(List<RaidOption> raidLi) {
    this.raidLi = raidLi;
    return this;
  }

  public ConfigLists addRaidLiItem(RaidOption raidLiItem) {
    this.raidLi.add(raidLiItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConfigLists {\n");
    
    sb.append("    cpuLi: ").append(toIndentedString(cpuLi)).append("\n");
    sb.append("    memoryLi: ").append(toIndentedString(memoryLi)).append("\n");
    sb.append("    hdLi: ").append(toIndentedString(hdLi)).append("\n");
    sb.append("    bandwidthLi: ").append(toIndentedString(bandwidthLi)).append("\n");
    sb.append("    ipsLi: ").append(toIndentedString(ipsLi)).append("\n");
    sb.append("    osLi: ").append(toIndentedString(osLi)).append("\n");
    sb.append("    cpLi: ").append(toIndentedString(cpLi)).append("\n");
    sb.append("    raidLi: ").append(toIndentedString(raidLi)).append("\n");
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
