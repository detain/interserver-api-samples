package org.openapitools.model;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.QuickserverBillingDetails;
import org.openapitools.model.QuickserverClientLink;
import org.openapitools.model.QuickserverExtraInfoTables;
import org.openapitools.model.QuickserverServiceExtra;
import org.openapitools.model.QuickserverServiceInfo;
import org.openapitools.model.QuickserverServiceMaster;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class Quickserver  {
  
  @ApiModelProperty(required = true, value = "")

  private QuickserverServiceInfo serviceInfo;

  @ApiModelProperty(required = true, value = "")

  private List<QuickserverClientLink> clientLinks = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private QuickserverBillingDetails billingDetails;

 /**
  * Currency of the customer
  */
  @ApiModelProperty(example = "USD", required = true, value = "Currency of the customer")

  private String custCurrency;

 /**
  * Currency symbol of the customer
  */
  @ApiModelProperty(example = "$", required = true, value = "Currency symbol of the customer")

  private String custCurrencySymbol;

  @ApiModelProperty(required = true, value = "")

  private QuickserverServiceMaster serviceMaster;

 /**
  * Package name
  */
  @ApiModelProperty(example = "Rapid Deploy Server", required = true, value = "Package name")

  private String _package;

 /**
  * Operating system template
  */
  @ApiModelProperty(example = "Ubuntu 22.04", required = true, value = "Operating system template")

  private String osTemplate;

  @ApiModelProperty(required = true, value = "")

  private QuickserverServiceExtra serviceExtra;

  @ApiModelProperty(required = true, value = "")

  private QuickserverExtraInfoTables extraInfoTables;

 /**
  * CPU graph data
  */
  @ApiModelProperty(example = "{\"labels\":[],\"value\":[]}", required = true, value = "CPU graph data")

  private String cpuGraphData;

 /**
  * Bandwidth x-axis data
  */
  @ApiModelProperty(example = "[]", required = true, value = "Bandwidth x-axis data")

  private String bandwidthXaxis;

 /**
  * Bandwidth y-axis data
  */
  @ApiModelProperty(example = "[]", required = true, value = "Bandwidth y-axis data")

  private String bandwidthYaxis;

 /**
  * Module information
  */
  @ApiModelProperty(example = "quickservers", required = true, value = "Module information")

  private String module;

 /**
  * Authentication token
  */
  @ApiModelProperty(example = "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI", required = true, value = "Authentication token")

  private String token;

 /**
  * Used disk space
  */
  @ApiModelProperty(example = "0.00 GB", required = true, value = "Used disk space")

  private String serviceDiskUsed;

 /**
  * Total disk space
  */
  @ApiModelProperty(example = "0.00 GB", required = true, value = "Total disk space")

  private String serviceDiskTotal;

 /**
  * Disk usage percentage
  */
  @ApiModelProperty(example = "32.27", required = true, value = "Disk usage percentage")

  private BigDecimal diskPercentage;

 /**
  * Memory information
  */
  @ApiModelProperty(example = "0GB", required = true, value = "Memory information")

  private String memory;

 /**
  * HDD information
  */
  @ApiModelProperty(example = "0GB", required = true, value = "HDD information")

  private String hdd;

  @ApiModelProperty(required = true, value = "")

  private List<String> serviceOverviewExtra = new ArrayList<>();
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public QuickserverServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(QuickserverServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Quickserver serviceInfo(QuickserverServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<QuickserverClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<QuickserverClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Quickserver clientLinks(List<QuickserverClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Quickserver addClientLinksItem(QuickserverClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public QuickserverBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(QuickserverBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Quickserver billingDetails(QuickserverBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Currency of the customer
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Quickserver custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Currency symbol of the customer
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Quickserver custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get serviceMaster
   * @return serviceMaster
  **/
  @JsonProperty("serviceMaster")
  public QuickserverServiceMaster getServiceMaster() {
    return serviceMaster;
  }

  public void setServiceMaster(QuickserverServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  public Quickserver serviceMaster(QuickserverServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

 /**
   * Package name
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public Quickserver _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Operating system template
   * @return osTemplate
  **/
  @JsonProperty("os_template")
  public String getOsTemplate() {
    return osTemplate;
  }

  public void setOsTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
  }

  public Quickserver osTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public QuickserverServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Quickserver serviceExtra(QuickserverServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public QuickserverExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(QuickserverExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Quickserver extraInfoTables(QuickserverExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * CPU graph data
   * @return cpuGraphData
  **/
  @JsonProperty("cpu_graph_data")
  public String getCpuGraphData() {
    return cpuGraphData;
  }

  public void setCpuGraphData(String cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
  }

  public Quickserver cpuGraphData(String cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
    return this;
  }

 /**
   * Bandwidth x-axis data
   * @return bandwidthXaxis
  **/
  @JsonProperty("bandwidth_xaxis")
  public String getBandwidthXaxis() {
    return bandwidthXaxis;
  }

  public void setBandwidthXaxis(String bandwidthXaxis) {
    this.bandwidthXaxis = bandwidthXaxis;
  }

  public Quickserver bandwidthXaxis(String bandwidthXaxis) {
    this.bandwidthXaxis = bandwidthXaxis;
    return this;
  }

 /**
   * Bandwidth y-axis data
   * @return bandwidthYaxis
  **/
  @JsonProperty("bandwidth_yaxis")
  public String getBandwidthYaxis() {
    return bandwidthYaxis;
  }

  public void setBandwidthYaxis(String bandwidthYaxis) {
    this.bandwidthYaxis = bandwidthYaxis;
  }

  public Quickserver bandwidthYaxis(String bandwidthYaxis) {
    this.bandwidthYaxis = bandwidthYaxis;
    return this;
  }

 /**
   * Module information
   * @return module
  **/
  @JsonProperty("module")
  public String getModule() {
    return module;
  }

  public void setModule(String module) {
    this.module = module;
  }

  public Quickserver module(String module) {
    this.module = module;
    return this;
  }

 /**
   * Authentication token
   * @return token
  **/
  @JsonProperty("token")
  public String getToken() {
    return token;
  }

  public void setToken(String token) {
    this.token = token;
  }

  public Quickserver token(String token) {
    this.token = token;
    return this;
  }

 /**
   * Used disk space
   * @return serviceDiskUsed
  **/
  @JsonProperty("service_disk_used")
  public String getServiceDiskUsed() {
    return serviceDiskUsed;
  }

  public void setServiceDiskUsed(String serviceDiskUsed) {
    this.serviceDiskUsed = serviceDiskUsed;
  }

  public Quickserver serviceDiskUsed(String serviceDiskUsed) {
    this.serviceDiskUsed = serviceDiskUsed;
    return this;
  }

 /**
   * Total disk space
   * @return serviceDiskTotal
  **/
  @JsonProperty("service_disk_total")
  public String getServiceDiskTotal() {
    return serviceDiskTotal;
  }

  public void setServiceDiskTotal(String serviceDiskTotal) {
    this.serviceDiskTotal = serviceDiskTotal;
  }

  public Quickserver serviceDiskTotal(String serviceDiskTotal) {
    this.serviceDiskTotal = serviceDiskTotal;
    return this;
  }

 /**
   * Disk usage percentage
   * @return diskPercentage
  **/
  @JsonProperty("disk_percentage")
  public BigDecimal getDiskPercentage() {
    return diskPercentage;
  }

  public void setDiskPercentage(BigDecimal diskPercentage) {
    this.diskPercentage = diskPercentage;
  }

  public Quickserver diskPercentage(BigDecimal diskPercentage) {
    this.diskPercentage = diskPercentage;
    return this;
  }

 /**
   * Memory information
   * @return memory
  **/
  @JsonProperty("memory")
  public String getMemory() {
    return memory;
  }

  public void setMemory(String memory) {
    this.memory = memory;
  }

  public Quickserver memory(String memory) {
    this.memory = memory;
    return this;
  }

 /**
   * HDD information
   * @return hdd
  **/
  @JsonProperty("hdd")
  public String getHdd() {
    return hdd;
  }

  public void setHdd(String hdd) {
    this.hdd = hdd;
  }

  public Quickserver hdd(String hdd) {
    this.hdd = hdd;
    return this;
  }

 /**
   * Get serviceOverviewExtra
   * @return serviceOverviewExtra
  **/
  @JsonProperty("service_overview_extra")
  public List<String> getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }

  public void setServiceOverviewExtra(List<String> serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }

  public Quickserver serviceOverviewExtra(List<String> serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

  public Quickserver addServiceOverviewExtraItem(String serviceOverviewExtraItem) {
    this.serviceOverviewExtra.add(serviceOverviewExtraItem);
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
    Quickserver quickserver = (Quickserver) o;
    return Objects.equals(this.serviceInfo, quickserver.serviceInfo) &&
        Objects.equals(this.clientLinks, quickserver.clientLinks) &&
        Objects.equals(this.billingDetails, quickserver.billingDetails) &&
        Objects.equals(this.custCurrency, quickserver.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, quickserver.custCurrencySymbol) &&
        Objects.equals(this.serviceMaster, quickserver.serviceMaster) &&
        Objects.equals(this._package, quickserver._package) &&
        Objects.equals(this.osTemplate, quickserver.osTemplate) &&
        Objects.equals(this.serviceExtra, quickserver.serviceExtra) &&
        Objects.equals(this.extraInfoTables, quickserver.extraInfoTables) &&
        Objects.equals(this.cpuGraphData, quickserver.cpuGraphData) &&
        Objects.equals(this.bandwidthXaxis, quickserver.bandwidthXaxis) &&
        Objects.equals(this.bandwidthYaxis, quickserver.bandwidthYaxis) &&
        Objects.equals(this.module, quickserver.module) &&
        Objects.equals(this.token, quickserver.token) &&
        Objects.equals(this.serviceDiskUsed, quickserver.serviceDiskUsed) &&
        Objects.equals(this.serviceDiskTotal, quickserver.serviceDiskTotal) &&
        Objects.equals(this.diskPercentage, quickserver.diskPercentage) &&
        Objects.equals(this.memory, quickserver.memory) &&
        Objects.equals(this.hdd, quickserver.hdd) &&
        Objects.equals(this.serviceOverviewExtra, quickserver.serviceOverviewExtra);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

