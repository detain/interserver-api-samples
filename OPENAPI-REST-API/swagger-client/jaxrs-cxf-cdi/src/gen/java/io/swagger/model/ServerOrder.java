package io.swagger.model;

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
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Object representing a server order.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Object representing a server order.")

public class ServerOrder   {
  private ServerOrderFormValues formValues = null;
  private ServerOrderConfigIds configIds = null;
  private Integer cpu = null;
  private ServerOrderFieldLabels fieldLabel = null;
  private ServerOrderCpuLi cpuLi = null;
  private ServerOrderMemoryLi memoryLi = null;
  private ServerOrderBandwidthLi bandwidthLi = null;
  private ServerOrderIpsLi ipsLi = null;
  private ServerOrderOsLi osLi = null;
  private ServerOrderCpLi cpLi = null;
  private List<ServerOrderRAID> raidLi = new ArrayList<ServerOrderRAID>();

  /**
   **/
  public ServerOrder formValues(ServerOrderFormValues formValues) {
    this.formValues = formValues;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("form_values")
  @NotNull
  @Valid
  public ServerOrderFormValues getFormValues() {
    return formValues;
  }
  public void setFormValues(ServerOrderFormValues formValues) {
    this.formValues = formValues;
  }

  /**
   **/
  public ServerOrder configIds(ServerOrderConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("config_ids")
  @NotNull
  @Valid
  public ServerOrderConfigIds getConfigIds() {
    return configIds;
  }
  public void setConfigIds(ServerOrderConfigIds configIds) {
    this.configIds = configIds;
  }

  /**
   * Number of CPUs for the server order.
   **/
  public ServerOrder cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

  
  
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
  public ServerOrder fieldLabel(ServerOrderFieldLabels fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("field_label")
  @NotNull
  @Valid
  public ServerOrderFieldLabels getFieldLabel() {
    return fieldLabel;
  }
  public void setFieldLabel(ServerOrderFieldLabels fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  /**
   **/
  public ServerOrder cpuLi(ServerOrderCpuLi cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cpu_li")
  @NotNull
  @Valid
  public ServerOrderCpuLi getCpuLi() {
    return cpuLi;
  }
  public void setCpuLi(ServerOrderCpuLi cpuLi) {
    this.cpuLi = cpuLi;
  }

  /**
   **/
  public ServerOrder memoryLi(ServerOrderMemoryLi memoryLi) {
    this.memoryLi = memoryLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("memory_li")
  @NotNull
  @Valid
  public ServerOrderMemoryLi getMemoryLi() {
    return memoryLi;
  }
  public void setMemoryLi(ServerOrderMemoryLi memoryLi) {
    this.memoryLi = memoryLi;
  }

  /**
   **/
  public ServerOrder bandwidthLi(ServerOrderBandwidthLi bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("bandwidth_li")
  @NotNull
  @Valid
  public ServerOrderBandwidthLi getBandwidthLi() {
    return bandwidthLi;
  }
  public void setBandwidthLi(ServerOrderBandwidthLi bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
  }

  /**
   **/
  public ServerOrder ipsLi(ServerOrderIpsLi ipsLi) {
    this.ipsLi = ipsLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ips_li")
  @NotNull
  @Valid
  public ServerOrderIpsLi getIpsLi() {
    return ipsLi;
  }
  public void setIpsLi(ServerOrderIpsLi ipsLi) {
    this.ipsLi = ipsLi;
  }

  /**
   **/
  public ServerOrder osLi(ServerOrderOsLi osLi) {
    this.osLi = osLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("os_li")
  @NotNull
  @Valid
  public ServerOrderOsLi getOsLi() {
    return osLi;
  }
  public void setOsLi(ServerOrderOsLi osLi) {
    this.osLi = osLi;
  }

  /**
   **/
  public ServerOrder cpLi(ServerOrderCpLi cpLi) {
    this.cpLi = cpLi;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cp_li")
  @NotNull
  @Valid
  public ServerOrderCpLi getCpLi() {
    return cpLi;
  }
  public void setCpLi(ServerOrderCpLi cpLi) {
    this.cpLi = cpLi;
  }

  /**
   * RAID options for the server order.
   **/
  public ServerOrder raidLi(List<ServerOrderRAID> raidLi) {
    this.raidLi = raidLi;
    return this;
  }

  
  
  @Schema(description = "RAID options for the server order.")
  @JsonProperty("raid_li")
  @NotNull
  @Valid
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
