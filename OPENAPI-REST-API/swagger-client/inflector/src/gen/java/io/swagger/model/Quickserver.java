package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverBillingDetails;
import io.swagger.model.QuickserverClientLink;
import io.swagger.model.QuickserverExtraInfoTables;
import io.swagger.model.QuickserverServiceExtra;
import io.swagger.model.QuickserverServiceInfo;
import io.swagger.model.QuickserverServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;





public class Quickserver   {
  @JsonProperty("serviceInfo")
  private QuickserverServiceInfo serviceInfo = null;
  @JsonProperty("client_links")
  private List<QuickserverClientLink> clientLinks = new ArrayList<QuickserverClientLink>();
  @JsonProperty("billingDetails")
  private QuickserverBillingDetails billingDetails = null;
  @JsonProperty("custCurrency")
  private String custCurrency = null;
  @JsonProperty("custCurrencySymbol")
  private String custCurrencySymbol = null;
  @JsonProperty("serviceMaster")
  private QuickserverServiceMaster serviceMaster = null;
  @JsonProperty("package")
  private String _package = null;
  @JsonProperty("os_template")
  private String osTemplate = null;
  @JsonProperty("serviceExtra")
  private QuickserverServiceExtra serviceExtra = null;
  @JsonProperty("extraInfoTables")
  private QuickserverExtraInfoTables extraInfoTables = null;
  @JsonProperty("cpu_graph_data")
  private String cpuGraphData = null;
  @JsonProperty("bandwidth_xaxis")
  private String bandwidthXaxis = null;
  @JsonProperty("bandwidth_yaxis")
  private String bandwidthYaxis = null;
  @JsonProperty("module")
  private String module = null;
  @JsonProperty("token")
  private String token = null;
  @JsonProperty("service_disk_used")
  private String serviceDiskUsed = null;
  @JsonProperty("service_disk_total")
  private String serviceDiskTotal = null;
  @JsonProperty("disk_percentage")
  private BigDecimal diskPercentage = null;
  @JsonProperty("memory")
  private String memory = null;
  @JsonProperty("hdd")
  private String hdd = null;
  @JsonProperty("service_overview_extra")
  private List<String> serviceOverviewExtra = new ArrayList<String>();
  /**
   **/
  public Quickserver serviceInfo(QuickserverServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
  public QuickserverServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(QuickserverServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public Quickserver clientLinks(List<QuickserverClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("client_links")
  public List<QuickserverClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<QuickserverClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public Quickserver billingDetails(QuickserverBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("billingDetails")
  public QuickserverBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(QuickserverBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Currency of the customer
   **/
  public Quickserver custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @Schema(example = "USD", required = true, description = "Currency of the customer")
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Currency symbol of the customer
   **/
  public Quickserver custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @Schema(example = "$", required = true, description = "Currency symbol of the customer")
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   **/
  public Quickserver serviceMaster(QuickserverServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceMaster")
  public QuickserverServiceMaster getServiceMaster() {
    return serviceMaster;
  }
  public void setServiceMaster(QuickserverServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  /**
   * Package name
   **/
  public Quickserver _package(String _package) {
    this._package = _package;
    return this;
  }

  
  @Schema(example = "Rapid Deploy Server", required = true, description = "Package name")
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   * Operating system template
   **/
  public Quickserver osTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
    return this;
  }

  
  @Schema(example = "Ubuntu 22.04", required = true, description = "Operating system template")
  @JsonProperty("os_template")
  public String getOsTemplate() {
    return osTemplate;
  }
  public void setOsTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
  }

  /**
   **/
  public Quickserver serviceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceExtra")
  public QuickserverServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public Quickserver extraInfoTables(QuickserverExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("extraInfoTables")
  public QuickserverExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(QuickserverExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   * CPU graph data
   **/
  public Quickserver cpuGraphData(String cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
    return this;
  }

  
  @Schema(example = "{\"labels\":[],\"value\":[]}", required = true, description = "CPU graph data")
  @JsonProperty("cpu_graph_data")
  public String getCpuGraphData() {
    return cpuGraphData;
  }
  public void setCpuGraphData(String cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
  }

  /**
   * Bandwidth x-axis data
   **/
  public Quickserver bandwidthXaxis(String bandwidthXaxis) {
    this.bandwidthXaxis = bandwidthXaxis;
    return this;
  }

  
  @Schema(example = "[]", required = true, description = "Bandwidth x-axis data")
  @JsonProperty("bandwidth_xaxis")
  public String getBandwidthXaxis() {
    return bandwidthXaxis;
  }
  public void setBandwidthXaxis(String bandwidthXaxis) {
    this.bandwidthXaxis = bandwidthXaxis;
  }

  /**
   * Bandwidth y-axis data
   **/
  public Quickserver bandwidthYaxis(String bandwidthYaxis) {
    this.bandwidthYaxis = bandwidthYaxis;
    return this;
  }

  
  @Schema(example = "[]", required = true, description = "Bandwidth y-axis data")
  @JsonProperty("bandwidth_yaxis")
  public String getBandwidthYaxis() {
    return bandwidthYaxis;
  }
  public void setBandwidthYaxis(String bandwidthYaxis) {
    this.bandwidthYaxis = bandwidthYaxis;
  }

  /**
   * Module information
   **/
  public Quickserver module(String module) {
    this.module = module;
    return this;
  }

  
  @Schema(example = "quickservers", required = true, description = "Module information")
  @JsonProperty("module")
  public String getModule() {
    return module;
  }
  public void setModule(String module) {
    this.module = module;
  }

  /**
   * Authentication token
   **/
  public Quickserver token(String token) {
    this.token = token;
    return this;
  }

  
  @Schema(example = "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI", required = true, description = "Authentication token")
  @JsonProperty("token")
  public String getToken() {
    return token;
  }
  public void setToken(String token) {
    this.token = token;
  }

  /**
   * Used disk space
   **/
  public Quickserver serviceDiskUsed(String serviceDiskUsed) {
    this.serviceDiskUsed = serviceDiskUsed;
    return this;
  }

  
  @Schema(example = "0.00 GB", required = true, description = "Used disk space")
  @JsonProperty("service_disk_used")
  public String getServiceDiskUsed() {
    return serviceDiskUsed;
  }
  public void setServiceDiskUsed(String serviceDiskUsed) {
    this.serviceDiskUsed = serviceDiskUsed;
  }

  /**
   * Total disk space
   **/
  public Quickserver serviceDiskTotal(String serviceDiskTotal) {
    this.serviceDiskTotal = serviceDiskTotal;
    return this;
  }

  
  @Schema(example = "0.00 GB", required = true, description = "Total disk space")
  @JsonProperty("service_disk_total")
  public String getServiceDiskTotal() {
    return serviceDiskTotal;
  }
  public void setServiceDiskTotal(String serviceDiskTotal) {
    this.serviceDiskTotal = serviceDiskTotal;
  }

  /**
   * Disk usage percentage
   **/
  public Quickserver diskPercentage(BigDecimal diskPercentage) {
    this.diskPercentage = diskPercentage;
    return this;
  }

  
  @Schema(example = "32.27", required = true, description = "Disk usage percentage")
  @JsonProperty("disk_percentage")
  public BigDecimal getDiskPercentage() {
    return diskPercentage;
  }
  public void setDiskPercentage(BigDecimal diskPercentage) {
    this.diskPercentage = diskPercentage;
  }

  /**
   * Memory information
   **/
  public Quickserver memory(String memory) {
    this.memory = memory;
    return this;
  }

  
  @Schema(example = "0GB", required = true, description = "Memory information")
  @JsonProperty("memory")
  public String getMemory() {
    return memory;
  }
  public void setMemory(String memory) {
    this.memory = memory;
  }

  /**
   * HDD information
   **/
  public Quickserver hdd(String hdd) {
    this.hdd = hdd;
    return this;
  }

  
  @Schema(example = "0GB", required = true, description = "HDD information")
  @JsonProperty("hdd")
  public String getHdd() {
    return hdd;
  }
  public void setHdd(String hdd) {
    this.hdd = hdd;
  }

  /**
   **/
  public Quickserver serviceOverviewExtra(List<String> serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("service_overview_extra")
  public List<String> getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }
  public void setServiceOverviewExtra(List<String> serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
