package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverBillingDetails;
import io.swagger.model.QuickserverClientLink;
import io.swagger.model.QuickserverExtraInfoTables;
import io.swagger.model.QuickserverServiceExtra;
import io.swagger.model.QuickserverServiceInfo;
import io.swagger.model.QuickserverServiceMaster;
import java.math.BigDecimal;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class Quickserver   {
  private QuickserverServiceInfo serviceInfo = null;
  private List<QuickserverClientLink> clientLinks = new ArrayList<QuickserverClientLink>();
  private QuickserverBillingDetails billingDetails = null;
  private String custCurrency = null;
  private String custCurrencySymbol = null;
  private QuickserverServiceMaster serviceMaster = null;
  private String _package = null;
  private String osTemplate = null;
  private QuickserverServiceExtra serviceExtra = null;
  private QuickserverExtraInfoTables extraInfoTables = null;
  private String cpuGraphData = null;
  private String bandwidthXaxis = null;
  private String bandwidthYaxis = null;
  private String module = null;
  private String token = null;
  private String serviceDiskUsed = null;
  private String serviceDiskTotal = null;
  private BigDecimal diskPercentage = null;
  private String memory = null;
  private String hdd = null;
  private List<String> serviceOverviewExtra = new ArrayList<String>();

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
  @NotNull
  public QuickserverServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(QuickserverServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("client_links")
  @NotNull
  public List<QuickserverClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<QuickserverClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("billingDetails")
  @NotNull
  public QuickserverBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(QuickserverBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Currency of the customer
   **/
  
  @Schema(example = "USD", required = true, description = "Currency of the customer")
  @JsonProperty("custCurrency")
  @NotNull
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Currency symbol of the customer
   **/
  
  @Schema(example = "$", required = true, description = "Currency symbol of the customer")
  @JsonProperty("custCurrencySymbol")
  @NotNull
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceMaster")
  @NotNull
  public QuickserverServiceMaster getServiceMaster() {
    return serviceMaster;
  }
  public void setServiceMaster(QuickserverServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  /**
   * Package name
   **/
  
  @Schema(example = "Rapid Deploy Server", required = true, description = "Package name")
  @JsonProperty("package")
  @NotNull
  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   * Operating system template
   **/
  
  @Schema(example = "Ubuntu 22.04", required = true, description = "Operating system template")
  @JsonProperty("os_template")
  @NotNull
  public String getOsTemplate() {
    return osTemplate;
  }
  public void setOsTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceExtra")
  @NotNull
  public QuickserverServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("extraInfoTables")
  @NotNull
  public QuickserverExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(QuickserverExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   * CPU graph data
   **/
  
  @Schema(example = "{\"labels\":[],\"value\":[]}", required = true, description = "CPU graph data")
  @JsonProperty("cpu_graph_data")
  @NotNull
  public String getCpuGraphData() {
    return cpuGraphData;
  }
  public void setCpuGraphData(String cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
  }

  /**
   * Bandwidth x-axis data
   **/
  
  @Schema(example = "[]", required = true, description = "Bandwidth x-axis data")
  @JsonProperty("bandwidth_xaxis")
  @NotNull
  public String getBandwidthXaxis() {
    return bandwidthXaxis;
  }
  public void setBandwidthXaxis(String bandwidthXaxis) {
    this.bandwidthXaxis = bandwidthXaxis;
  }

  /**
   * Bandwidth y-axis data
   **/
  
  @Schema(example = "[]", required = true, description = "Bandwidth y-axis data")
  @JsonProperty("bandwidth_yaxis")
  @NotNull
  public String getBandwidthYaxis() {
    return bandwidthYaxis;
  }
  public void setBandwidthYaxis(String bandwidthYaxis) {
    this.bandwidthYaxis = bandwidthYaxis;
  }

  /**
   * Module information
   **/
  
  @Schema(example = "quickservers", required = true, description = "Module information")
  @JsonProperty("module")
  @NotNull
  public String getModule() {
    return module;
  }
  public void setModule(String module) {
    this.module = module;
  }

  /**
   * Authentication token
   **/
  
  @Schema(example = "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI", required = true, description = "Authentication token")
  @JsonProperty("token")
  @NotNull
  public String getToken() {
    return token;
  }
  public void setToken(String token) {
    this.token = token;
  }

  /**
   * Used disk space
   **/
  
  @Schema(example = "0.00 GB", required = true, description = "Used disk space")
  @JsonProperty("service_disk_used")
  @NotNull
  public String getServiceDiskUsed() {
    return serviceDiskUsed;
  }
  public void setServiceDiskUsed(String serviceDiskUsed) {
    this.serviceDiskUsed = serviceDiskUsed;
  }

  /**
   * Total disk space
   **/
  
  @Schema(example = "0.00 GB", required = true, description = "Total disk space")
  @JsonProperty("service_disk_total")
  @NotNull
  public String getServiceDiskTotal() {
    return serviceDiskTotal;
  }
  public void setServiceDiskTotal(String serviceDiskTotal) {
    this.serviceDiskTotal = serviceDiskTotal;
  }

  /**
   * Disk usage percentage
   **/
  
  @Schema(example = "32.27", required = true, description = "Disk usage percentage")
  @JsonProperty("disk_percentage")
  @NotNull
  public BigDecimal getDiskPercentage() {
    return diskPercentage;
  }
  public void setDiskPercentage(BigDecimal diskPercentage) {
    this.diskPercentage = diskPercentage;
  }

  /**
   * Memory information
   **/
  
  @Schema(example = "0GB", required = true, description = "Memory information")
  @JsonProperty("memory")
  @NotNull
  public String getMemory() {
    return memory;
  }
  public void setMemory(String memory) {
    this.memory = memory;
  }

  /**
   * HDD information
   **/
  
  @Schema(example = "0GB", required = true, description = "HDD information")
  @JsonProperty("hdd")
  @NotNull
  public String getHdd() {
    return hdd;
  }
  public void setHdd(String hdd) {
    this.hdd = hdd;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("service_overview_extra")
  @NotNull
  public List<String> getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }
  public void setServiceOverviewExtra(List<String> serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Quickserver quickserver = (Quickserver) o;
    return Objects.equals(serviceInfo, quickserver.serviceInfo) &&
        Objects.equals(clientLinks, quickserver.clientLinks) &&
        Objects.equals(billingDetails, quickserver.billingDetails) &&
        Objects.equals(custCurrency, quickserver.custCurrency) &&
        Objects.equals(custCurrencySymbol, quickserver.custCurrencySymbol) &&
        Objects.equals(serviceMaster, quickserver.serviceMaster) &&
        Objects.equals(_package, quickserver._package) &&
        Objects.equals(osTemplate, quickserver.osTemplate) &&
        Objects.equals(serviceExtra, quickserver.serviceExtra) &&
        Objects.equals(extraInfoTables, quickserver.extraInfoTables) &&
        Objects.equals(cpuGraphData, quickserver.cpuGraphData) &&
        Objects.equals(bandwidthXaxis, quickserver.bandwidthXaxis) &&
        Objects.equals(bandwidthYaxis, quickserver.bandwidthYaxis) &&
        Objects.equals(module, quickserver.module) &&
        Objects.equals(token, quickserver.token) &&
        Objects.equals(serviceDiskUsed, quickserver.serviceDiskUsed) &&
        Objects.equals(serviceDiskTotal, quickserver.serviceDiskTotal) &&
        Objects.equals(diskPercentage, quickserver.diskPercentage) &&
        Objects.equals(memory, quickserver.memory) &&
        Objects.equals(hdd, quickserver.hdd) &&
        Objects.equals(serviceOverviewExtra, quickserver.serviceOverviewExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceMaster, _package, osTemplate, serviceExtra, extraInfoTables, cpuGraphData, bandwidthXaxis, bandwidthYaxis, module, token, serviceDiskUsed, serviceDiskTotal, diskPercentage, memory, hdd, serviceOverviewExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Quickserver {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    serviceMaster: ").append(toIndentedString(serviceMaster)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    osTemplate: ").append(toIndentedString(osTemplate)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    cpuGraphData: ").append(toIndentedString(cpuGraphData)).append("\n");
    sb.append("    bandwidthXaxis: ").append(toIndentedString(bandwidthXaxis)).append("\n");
    sb.append("    bandwidthYaxis: ").append(toIndentedString(bandwidthYaxis)).append("\n");
    sb.append("    module: ").append(toIndentedString(module)).append("\n");
    sb.append("    token: ").append(toIndentedString(token)).append("\n");
    sb.append("    serviceDiskUsed: ").append(toIndentedString(serviceDiskUsed)).append("\n");
    sb.append("    serviceDiskTotal: ").append(toIndentedString(serviceDiskTotal)).append("\n");
    sb.append("    diskPercentage: ").append(toIndentedString(diskPercentage)).append("\n");
    sb.append("    memory: ").append(toIndentedString(memory)).append("\n");
    sb.append("    hdd: ").append(toIndentedString(hdd)).append("\n");
    sb.append("    serviceOverviewExtra: ").append(toIndentedString(serviceOverviewExtra)).append("\n");
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
