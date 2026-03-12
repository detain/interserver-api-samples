package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerOrderBandwidthLi;
import io.swagger.model.ServerOrderConfigIds;
import io.swagger.model.ServerOrderCpLi;
import io.swagger.model.ServerOrderCpuLi;
import io.swagger.model.ServerOrderFieldLabels;
import io.swagger.model.ServerOrderFormValues;
import io.swagger.model.ServerOrderIpsLi;
import io.swagger.model.ServerOrderMemoryLi;
import io.swagger.model.ServerOrderOsLi;
import io.swagger.model.ServerOrderRAID;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Object representing a server order.")

public class ServerOrder   {
  private ServerOrderFormValues formValues = null;  private ServerOrderConfigIds configIds = null;  private Integer cpu = null;  private ServerOrderFieldLabels fieldLabel = null;  private ServerOrderCpuLi cpuLi = null;  private ServerOrderMemoryLi memoryLi = null;  private ServerOrderBandwidthLi bandwidthLi = null;  private ServerOrderIpsLi ipsLi = null;  private ServerOrderOsLi osLi = null;  private ServerOrderCpLi cpLi = null;  private List<ServerOrderRAID> raidLi = new ArrayList<ServerOrderRAID>();

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("form_values")
  @NotNull
  public ServerOrderFormValues getFormValues() {
    return formValues;
  }
  public void setFormValues(ServerOrderFormValues formValues) {
    this.formValues = formValues;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("config_ids")
  @NotNull
  public ServerOrderConfigIds getConfigIds() {
    return configIds;
  }
  public void setConfigIds(ServerOrderConfigIds configIds) {
    this.configIds = configIds;
  }

  /**
   * Number of CPUs for the server order.
   **/
  
  @Schema(example = "184", description = "Number of CPUs for the server order.")
  @JsonProperty("cpu")
  @NotNull
  public Integer getCpu() {
    return cpu;
  }
  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("field_label")
  @NotNull
  public ServerOrderFieldLabels getFieldLabel() {
    return fieldLabel;
  }
  public void setFieldLabel(ServerOrderFieldLabels fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("cpu_li")
  @NotNull
  public ServerOrderCpuLi getCpuLi() {
    return cpuLi;
  }
  public void setCpuLi(ServerOrderCpuLi cpuLi) {
    this.cpuLi = cpuLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("memory_li")
  @NotNull
  public ServerOrderMemoryLi getMemoryLi() {
    return memoryLi;
  }
  public void setMemoryLi(ServerOrderMemoryLi memoryLi) {
    this.memoryLi = memoryLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("bandwidth_li")
  @NotNull
  public ServerOrderBandwidthLi getBandwidthLi() {
    return bandwidthLi;
  }
  public void setBandwidthLi(ServerOrderBandwidthLi bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ips_li")
  @NotNull
  public ServerOrderIpsLi getIpsLi() {
    return ipsLi;
  }
  public void setIpsLi(ServerOrderIpsLi ipsLi) {
    this.ipsLi = ipsLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("os_li")
  @NotNull
  public ServerOrderOsLi getOsLi() {
    return osLi;
  }
  public void setOsLi(ServerOrderOsLi osLi) {
    this.osLi = osLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("cp_li")
  @NotNull
  public ServerOrderCpLi getCpLi() {
    return cpLi;
  }
  public void setCpLi(ServerOrderCpLi cpLi) {
    this.cpLi = cpLi;
  }

  /**
   * RAID options for the server order.
   **/
  
  @Schema(description = "RAID options for the server order.")
  @JsonProperty("raid_li")
  @NotNull
  public List<ServerOrderRAID> getRaidLi() {
    return raidLi;
  }
  public void setRaidLi(List<ServerOrderRAID> raidLi) {
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
    ServerOrder serverOrder = (ServerOrder) o;
    return Objects.equals(formValues, serverOrder.formValues) &&
        Objects.equals(configIds, serverOrder.configIds) &&
        Objects.equals(cpu, serverOrder.cpu) &&
        Objects.equals(fieldLabel, serverOrder.fieldLabel) &&
        Objects.equals(cpuLi, serverOrder.cpuLi) &&
        Objects.equals(memoryLi, serverOrder.memoryLi) &&
        Objects.equals(bandwidthLi, serverOrder.bandwidthLi) &&
        Objects.equals(ipsLi, serverOrder.ipsLi) &&
        Objects.equals(osLi, serverOrder.osLi) &&
        Objects.equals(cpLi, serverOrder.cpLi) &&
        Objects.equals(raidLi, serverOrder.raidLi);
  }

  @Override
  public int hashCode() {
    return Objects.hash(formValues, configIds, cpu, fieldLabel, cpuLi, memoryLi, bandwidthLi, ipsLi, osLi, cpLi, raidLi);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrder {\n");
    
    sb.append("    formValues: ").append(toIndentedString(formValues)).append("\n");
    sb.append("    configIds: ").append(toIndentedString(configIds)).append("\n");
    sb.append("    cpu: ").append(toIndentedString(cpu)).append("\n");
    sb.append("    fieldLabel: ").append(toIndentedString(fieldLabel)).append("\n");
    sb.append("    cpuLi: ").append(toIndentedString(cpuLi)).append("\n");
    sb.append("    memoryLi: ").append(toIndentedString(memoryLi)).append("\n");
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
