package io.swagger.model;

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
  * Object representing a server order.
 **/
@Schema(description="Object representing a server order.")
public class ServerOrder   {
  
  @Schema(description = "")
  private ServerOrderFormValues formValues = null;
  
  @Schema(description = "")
  private ServerOrderConfigIds configIds = null;
  
  @Schema(example = "184", description = "Number of CPUs for the server order.")
 /**
   * Number of CPUs for the server order.  
  **/
  private Integer cpu = null;
  
  @Schema(description = "")
  private ServerOrderFieldLabels fieldLabel = null;
  
  @Schema(description = "")
  private ServerOrderCpuLi cpuLi = null;
  
  @Schema(description = "")
  private ServerOrderMemoryLi memoryLi = null;
  
  @Schema(description = "")
  private ServerOrderBandwidthLi bandwidthLi = null;
  
  @Schema(description = "")
  private ServerOrderIpsLi ipsLi = null;
  
  @Schema(description = "")
  private ServerOrderOsLi osLi = null;
  
  @Schema(description = "")
  private ServerOrderCpLi cpLi = null;
  
  @Schema(description = "RAID options for the server order.")
 /**
   * RAID options for the server order.  
  **/
  private List<ServerOrderRAID> raidLi = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
