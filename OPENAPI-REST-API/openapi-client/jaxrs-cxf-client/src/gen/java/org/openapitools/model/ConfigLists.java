package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.Bandwidth;
import org.openapitools.model.ControlPanel;
import org.openapitools.model.Cpu;
import org.openapitools.model.HardDrive;
import org.openapitools.model.IpBlock;
import org.openapitools.model.MemoryOption;
import org.openapitools.model.OperatingSystem;
import org.openapitools.model.RaidOption;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */
@ApiModel(description="All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.")

public class ConfigLists  {
  
  @ApiModelProperty(value = "")

  private Map<String, Cpu> cpuLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, Map<String, MemoryOption>> memoryLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, Map<String, HardDrive>> hdLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, Bandwidth> bandwidthLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, IpBlock> ipsLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, OperatingSystem> osLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, ControlPanel> cpLi = new HashMap<>();

  @ApiModelProperty(value = "")

  private List<RaidOption> raidLi = new ArrayList<>();
 /**
   * Get cpuLi
   * @return cpuLi
  **/
  @JsonProperty("cpu_li")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConfigLists configLists = (ConfigLists) o;
    return Objects.equals(this.cpuLi, configLists.cpuLi) &&
        Objects.equals(this.memoryLi, configLists.memoryLi) &&
        Objects.equals(this.hdLi, configLists.hdLi) &&
        Objects.equals(this.bandwidthLi, configLists.bandwidthLi) &&
        Objects.equals(this.ipsLi, configLists.ipsLi) &&
        Objects.equals(this.osLi, configLists.osLi) &&
        Objects.equals(this.cpLi, configLists.cpLi) &&
        Objects.equals(this.raidLi, configLists.raidLi);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cpuLi, memoryLi, hdLi, bandwidthLi, ipsLi, osLi, cpLi, raidLi);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

