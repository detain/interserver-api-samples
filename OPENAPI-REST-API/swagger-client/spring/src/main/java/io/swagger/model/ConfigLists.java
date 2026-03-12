package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
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
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */
@Schema(description = "All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.")
@Validated
@NotUndefined



public class ConfigLists   {
  @JsonProperty("cpu_li")
  @Valid
  private Map<String, Cpu> cpuLi = null;
  @JsonProperty("memory_li")
  @Valid
  private Map<String, Map<String, MemoryOption>> memoryLi = null;
  @JsonProperty("hd_li")
  @Valid
  private Map<String, Map<String, HardDrive>> hdLi = null;
  @JsonProperty("bandwidth_li")
  @Valid
  private Map<String, Bandwidth> bandwidthLi = null;
  @JsonProperty("ips_li")
  @Valid
  private Map<String, IpBlock> ipsLi = null;
  @JsonProperty("os_li")
  @Valid
  private Map<String, OperatingSystem> osLi = null;
  @JsonProperty("cp_li")
  @Valid
  private Map<String, ControlPanel> cpLi = null;
  @JsonProperty("raid_li")
  @Valid
  private List<RaidOption> raidLi = null;

  public ConfigLists cpuLi(Map<String, Cpu> cpuLi) { 

    this.cpuLi = cpuLi;
    return this;
  }

  public ConfigLists putCpuLiItem(String key, Cpu cpuLiItem) {
    if (this.cpuLi == null) {
      this.cpuLi = new HashMap<String, Cpu>();
    }
    this.cpuLi.put(key, cpuLiItem);
    return this;
  }

  /**
   * Get cpuLi
   * @return cpuLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, Cpu> getCpuLi() {  
    return cpuLi;
  }



  public void setCpuLi(Map<String, Cpu> cpuLi) { 
    this.cpuLi = cpuLi;
  }

  public ConfigLists memoryLi(Map<String, Map<String, MemoryOption>> memoryLi) { 

    this.memoryLi = memoryLi;
    return this;
  }

  public ConfigLists putMemoryLiItem(String key, Map<String, MemoryOption> memoryLiItem) {
    if (this.memoryLi == null) {
      this.memoryLi = new HashMap<String, Map<String, MemoryOption>>();
    }
    this.memoryLi.put(key, memoryLiItem);
    return this;
  }

  /**
   * Get memoryLi
   * @return memoryLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, Map<String, MemoryOption>> getMemoryLi() {  
    return memoryLi;
  }



  public void setMemoryLi(Map<String, Map<String, MemoryOption>> memoryLi) { 
    this.memoryLi = memoryLi;
  }

  public ConfigLists hdLi(Map<String, Map<String, HardDrive>> hdLi) { 

    this.hdLi = hdLi;
    return this;
  }

  public ConfigLists putHdLiItem(String key, Map<String, HardDrive> hdLiItem) {
    if (this.hdLi == null) {
      this.hdLi = new HashMap<String, Map<String, HardDrive>>();
    }
    this.hdLi.put(key, hdLiItem);
    return this;
  }

  /**
   * Get hdLi
   * @return hdLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, Map<String, HardDrive>> getHdLi() {  
    return hdLi;
  }



  public void setHdLi(Map<String, Map<String, HardDrive>> hdLi) { 
    this.hdLi = hdLi;
  }

  public ConfigLists bandwidthLi(Map<String, Bandwidth> bandwidthLi) { 

    this.bandwidthLi = bandwidthLi;
    return this;
  }

  public ConfigLists putBandwidthLiItem(String key, Bandwidth bandwidthLiItem) {
    if (this.bandwidthLi == null) {
      this.bandwidthLi = new HashMap<String, Bandwidth>();
    }
    this.bandwidthLi.put(key, bandwidthLiItem);
    return this;
  }

  /**
   * Get bandwidthLi
   * @return bandwidthLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, Bandwidth> getBandwidthLi() {  
    return bandwidthLi;
  }



  public void setBandwidthLi(Map<String, Bandwidth> bandwidthLi) { 
    this.bandwidthLi = bandwidthLi;
  }

  public ConfigLists ipsLi(Map<String, IpBlock> ipsLi) { 

    this.ipsLi = ipsLi;
    return this;
  }

  public ConfigLists putIpsLiItem(String key, IpBlock ipsLiItem) {
    if (this.ipsLi == null) {
      this.ipsLi = new HashMap<String, IpBlock>();
    }
    this.ipsLi.put(key, ipsLiItem);
    return this;
  }

  /**
   * Get ipsLi
   * @return ipsLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, IpBlock> getIpsLi() {  
    return ipsLi;
  }



  public void setIpsLi(Map<String, IpBlock> ipsLi) { 
    this.ipsLi = ipsLi;
  }

  public ConfigLists osLi(Map<String, OperatingSystem> osLi) { 

    this.osLi = osLi;
    return this;
  }

  public ConfigLists putOsLiItem(String key, OperatingSystem osLiItem) {
    if (this.osLi == null) {
      this.osLi = new HashMap<String, OperatingSystem>();
    }
    this.osLi.put(key, osLiItem);
    return this;
  }

  /**
   * Get osLi
   * @return osLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, OperatingSystem> getOsLi() {  
    return osLi;
  }



  public void setOsLi(Map<String, OperatingSystem> osLi) { 
    this.osLi = osLi;
  }

  public ConfigLists cpLi(Map<String, ControlPanel> cpLi) { 

    this.cpLi = cpLi;
    return this;
  }

  public ConfigLists putCpLiItem(String key, ControlPanel cpLiItem) {
    if (this.cpLi == null) {
      this.cpLi = new HashMap<String, ControlPanel>();
    }
    this.cpLi.put(key, cpLiItem);
    return this;
  }

  /**
   * Get cpLi
   * @return cpLi
   **/
  
  @Schema(description = "")
  @Valid
  public Map<String, ControlPanel> getCpLi() {  
    return cpLi;
  }



  public void setCpLi(Map<String, ControlPanel> cpLi) { 
    this.cpLi = cpLi;
  }

  public ConfigLists raidLi(List<RaidOption> raidLi) { 

    this.raidLi = raidLi;
    return this;
  }

  public ConfigLists addRaidLiItem(RaidOption raidLiItem) {
    if (this.raidLi == null) {
      this.raidLi = new ArrayList<RaidOption>();
    }
    this.raidLi.add(raidLiItem);
    return this;
  }

  /**
   * Get raidLi
   * @return raidLi
   **/
  
  @Schema(description = "")
  @Valid
  public List<RaidOption> getRaidLi() {  
    return raidLi;
  }



  public void setRaidLi(List<RaidOption> raidLi) { 
    this.raidLi = raidLi;
  }

  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
