package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
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
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.")

public class ConfigLists   {
  private Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();
  private Map<String, Map<String, MemoryOption>> memoryLi = new HashMap<String, Map<String, MemoryOption>>();
  private Map<String, Map<String, HardDrive>> hdLi = new HashMap<String, Map<String, HardDrive>>();
  private Map<String, Bandwidth> bandwidthLi = new HashMap<String, Bandwidth>();
  private Map<String, IpBlock> ipsLi = new HashMap<String, IpBlock>();
  private Map<String, OperatingSystem> osLi = new HashMap<String, OperatingSystem>();
  private Map<String, ControlPanel> cpLi = new HashMap<String, ControlPanel>();
  private List<RaidOption> raidLi = new ArrayList<RaidOption>();

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("raid_li")
  @NotNull
  public List<RaidOption> getRaidLi() {
    return raidLi;
  }
  public void setRaidLi(List<RaidOption> raidLi) {
    this.raidLi = raidLi;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
