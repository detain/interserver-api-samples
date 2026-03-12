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
import javax.validation.Valid;

/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.")

public class ConfigLists   {

  private @Valid Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();

  private @Valid Map<String, Map<String, MemoryOption>> memoryLi = new HashMap<String, Map<String, MemoryOption>>();

  private @Valid Map<String, Map<String, HardDrive>> hdLi = new HashMap<String, Map<String, HardDrive>>();

  private @Valid Map<String, Bandwidth> bandwidthLi = new HashMap<String, Bandwidth>();

  private @Valid Map<String, IpBlock> ipsLi = new HashMap<String, IpBlock>();

  private @Valid Map<String, OperatingSystem> osLi = new HashMap<String, OperatingSystem>();

  private @Valid Map<String, ControlPanel> cpLi = new HashMap<String, ControlPanel>();

  private @Valid List<RaidOption> raidLi = new ArrayList<RaidOption>();

  /**
   **/
  public ConfigLists cpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cpu_li")
  @NotNull

  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }
  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  /**
   **/
  public ConfigLists memoryLi(Map<String, Map<String, MemoryOption>> memoryLi) {
    this.memoryLi = memoryLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("memory_li")
  @NotNull

  public Map<String, Map<String, MemoryOption>> getMemoryLi() {
    return memoryLi;
  }
  public void setMemoryLi(Map<String, Map<String, MemoryOption>> memoryLi) {
    this.memoryLi = memoryLi;
  }

  /**
   **/
  public ConfigLists hdLi(Map<String, Map<String, HardDrive>> hdLi) {
    this.hdLi = hdLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("hd_li")
  @NotNull

  public Map<String, Map<String, HardDrive>> getHdLi() {
    return hdLi;
  }
  public void setHdLi(Map<String, Map<String, HardDrive>> hdLi) {
    this.hdLi = hdLi;
  }

  /**
   **/
  public ConfigLists bandwidthLi(Map<String, Bandwidth> bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("bandwidth_li")
  @NotNull

  public Map<String, Bandwidth> getBandwidthLi() {
    return bandwidthLi;
  }
  public void setBandwidthLi(Map<String, Bandwidth> bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
  }

  /**
   **/
  public ConfigLists ipsLi(Map<String, IpBlock> ipsLi) {
    this.ipsLi = ipsLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ips_li")
  @NotNull

  public Map<String, IpBlock> getIpsLi() {
    return ipsLi;
  }
  public void setIpsLi(Map<String, IpBlock> ipsLi) {
    this.ipsLi = ipsLi;
  }

  /**
   **/
  public ConfigLists osLi(Map<String, OperatingSystem> osLi) {
    this.osLi = osLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("os_li")
  @NotNull

  public Map<String, OperatingSystem> getOsLi() {
    return osLi;
  }
  public void setOsLi(Map<String, OperatingSystem> osLi) {
    this.osLi = osLi;
  }

  /**
   **/
  public ConfigLists cpLi(Map<String, ControlPanel> cpLi) {
    this.cpLi = cpLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cp_li")
  @NotNull

  public Map<String, ControlPanel> getCpLi() {
    return cpLi;
  }
  public void setCpLi(Map<String, ControlPanel> cpLi) {
    this.cpLi = cpLi;
  }

  /**
   **/
  public ConfigLists raidLi(List<RaidOption> raidLi) {
    this.raidLi = raidLi;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("raid_li")
  @NotNull

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
    return Objects.equals(cpuLi, configLists.cpuLi) &&
        Objects.equals(memoryLi, configLists.memoryLi) &&
        Objects.equals(hdLi, configLists.hdLi) &&
        Objects.equals(bandwidthLi, configLists.bandwidthLi) &&
        Objects.equals(ipsLi, configLists.ipsLi) &&
        Objects.equals(osLi, configLists.osLi) &&
        Objects.equals(cpLi, configLists.cpLi) &&
        Objects.equals(raidLi, configLists.raidLi);
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
