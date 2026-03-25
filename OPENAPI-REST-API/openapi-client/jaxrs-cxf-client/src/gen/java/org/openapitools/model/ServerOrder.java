package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ServerOrderBandwidthLi;
import org.openapitools.model.ServerOrderConfigIds;
import org.openapitools.model.ServerOrderCpLi;
import org.openapitools.model.ServerOrderCpuLi;
import org.openapitools.model.ServerOrderFieldLabels;
import org.openapitools.model.ServerOrderFormValues;
import org.openapitools.model.ServerOrderIpsLi;
import org.openapitools.model.ServerOrderMemoryLi;
import org.openapitools.model.ServerOrderOsLi;
import org.openapitools.model.ServerOrderRAID;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Object representing a server order.
 */
@ApiModel(description="Object representing a server order.")

public class ServerOrder  {
  
  @ApiModelProperty(value = "")

  private ServerOrderFormValues formValues;

  @ApiModelProperty(value = "")

  private ServerOrderConfigIds configIds;

 /**
  * Number of CPUs for the server order.
  */
  @ApiModelProperty(example = "184", value = "Number of CPUs for the server order.")

  private Integer cpu;

  @ApiModelProperty(value = "")

  private ServerOrderFieldLabels fieldLabel;

  @ApiModelProperty(value = "")

  private ServerOrderCpuLi cpuLi;

  @ApiModelProperty(value = "")

  private ServerOrderMemoryLi memoryLi;

  @ApiModelProperty(value = "")

  private ServerOrderBandwidthLi bandwidthLi;

  @ApiModelProperty(value = "")

  private ServerOrderIpsLi ipsLi;

  @ApiModelProperty(value = "")

  private ServerOrderOsLi osLi;

  @ApiModelProperty(value = "")

  private ServerOrderCpLi cpLi;

 /**
  * RAID options for the server order.
  */
  @ApiModelProperty(value = "RAID options for the server order.")

  private List<ServerOrderRAID> raidLi = new ArrayList<>();
 /**
   * Get formValues
   * @return formValues
  **/
  @JsonProperty("form_values")
  public ServerOrderFormValues getFormValues() {
    return formValues;
  }

  public void setFormValues(ServerOrderFormValues formValues) {
    this.formValues = formValues;
  }

  public ServerOrder formValues(ServerOrderFormValues formValues) {
    this.formValues = formValues;
    return this;
  }

 /**
   * Get configIds
   * @return configIds
  **/
  @JsonProperty("config_ids")
  public ServerOrderConfigIds getConfigIds() {
    return configIds;
  }

  public void setConfigIds(ServerOrderConfigIds configIds) {
    this.configIds = configIds;
  }

  public ServerOrder configIds(ServerOrderConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

 /**
   * Number of CPUs for the server order.
   * @return cpu
  **/
  @JsonProperty("cpu")
  public Integer getCpu() {
    return cpu;
  }

  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  public ServerOrder cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

 /**
   * Get fieldLabel
   * @return fieldLabel
  **/
  @JsonProperty("field_label")
  public ServerOrderFieldLabels getFieldLabel() {
    return fieldLabel;
  }

  public void setFieldLabel(ServerOrderFieldLabels fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  public ServerOrder fieldLabel(ServerOrderFieldLabels fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

 /**
   * Get cpuLi
   * @return cpuLi
  **/
  @JsonProperty("cpu_li")
  public ServerOrderCpuLi getCpuLi() {
    return cpuLi;
  }

  public void setCpuLi(ServerOrderCpuLi cpuLi) {
    this.cpuLi = cpuLi;
  }

  public ServerOrder cpuLi(ServerOrderCpuLi cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

 /**
   * Get memoryLi
   * @return memoryLi
  **/
  @JsonProperty("memory_li")
  public ServerOrderMemoryLi getMemoryLi() {
    return memoryLi;
  }

  public void setMemoryLi(ServerOrderMemoryLi memoryLi) {
    this.memoryLi = memoryLi;
  }

  public ServerOrder memoryLi(ServerOrderMemoryLi memoryLi) {
    this.memoryLi = memoryLi;
    return this;
  }

 /**
   * Get bandwidthLi
   * @return bandwidthLi
  **/
  @JsonProperty("bandwidth_li")
  public ServerOrderBandwidthLi getBandwidthLi() {
    return bandwidthLi;
  }

  public void setBandwidthLi(ServerOrderBandwidthLi bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
  }

  public ServerOrder bandwidthLi(ServerOrderBandwidthLi bandwidthLi) {
    this.bandwidthLi = bandwidthLi;
    return this;
  }

 /**
   * Get ipsLi
   * @return ipsLi
  **/
  @JsonProperty("ips_li")
  public ServerOrderIpsLi getIpsLi() {
    return ipsLi;
  }

  public void setIpsLi(ServerOrderIpsLi ipsLi) {
    this.ipsLi = ipsLi;
  }

  public ServerOrder ipsLi(ServerOrderIpsLi ipsLi) {
    this.ipsLi = ipsLi;
    return this;
  }

 /**
   * Get osLi
   * @return osLi
  **/
  @JsonProperty("os_li")
  public ServerOrderOsLi getOsLi() {
    return osLi;
  }

  public void setOsLi(ServerOrderOsLi osLi) {
    this.osLi = osLi;
  }

  public ServerOrder osLi(ServerOrderOsLi osLi) {
    this.osLi = osLi;
    return this;
  }

 /**
   * Get cpLi
   * @return cpLi
  **/
  @JsonProperty("cp_li")
  public ServerOrderCpLi getCpLi() {
    return cpLi;
  }

  public void setCpLi(ServerOrderCpLi cpLi) {
    this.cpLi = cpLi;
  }

  public ServerOrder cpLi(ServerOrderCpLi cpLi) {
    this.cpLi = cpLi;
    return this;
  }

 /**
   * RAID options for the server order.
   * @return raidLi
  **/
  @JsonProperty("raid_li")
  public List<ServerOrderRAID> getRaidLi() {
    return raidLi;
  }

  public void setRaidLi(List<ServerOrderRAID> raidLi) {
    this.raidLi = raidLi;
  }

  public ServerOrder raidLi(List<ServerOrderRAID> raidLi) {
    this.raidLi = raidLi;
    return this;
  }

  public ServerOrder addRaidLiItem(ServerOrderRAID raidLiItem) {
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
    ServerOrder serverOrder = (ServerOrder) o;
    return Objects.equals(this.formValues, serverOrder.formValues) &&
        Objects.equals(this.configIds, serverOrder.configIds) &&
        Objects.equals(this.cpu, serverOrder.cpu) &&
        Objects.equals(this.fieldLabel, serverOrder.fieldLabel) &&
        Objects.equals(this.cpuLi, serverOrder.cpuLi) &&
        Objects.equals(this.memoryLi, serverOrder.memoryLi) &&
        Objects.equals(this.bandwidthLi, serverOrder.bandwidthLi) &&
        Objects.equals(this.ipsLi, serverOrder.ipsLi) &&
        Objects.equals(this.osLi, serverOrder.osLi) &&
        Objects.equals(this.cpLi, serverOrder.cpLi) &&
        Objects.equals(this.raidLi, serverOrder.raidLi);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

