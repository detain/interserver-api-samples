package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.VpsBillingDetails;
import org.openapitools.model.VpsCPData;
import org.openapitools.model.VpsClientLink;
import org.openapitools.model.VpsDAData;
import org.openapitools.model.VpsExtraInfoTables;
import org.openapitools.model.VpsPlesk12Data;
import org.openapitools.model.VpsServiceAddons;
import org.openapitools.model.VpsServiceExtra;
import org.openapitools.model.VpsServiceInfo;
import org.openapitools.model.VpsServiceMaster;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class Vps  {
  
  @ApiModelProperty(required = true, value = "")

  private VpsServiceInfo serviceInfo;

  @ApiModelProperty(required = true, value = "")

  private List<VpsClientLink> clientLinks = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private VpsBillingDetails billingDetails;

  @ApiModelProperty(required = true, value = "")

  private String custCurrency;

  @ApiModelProperty(required = true, value = "")

  private String custCurrencySymbol;

  @ApiModelProperty(required = true, value = "")

  private VpsServiceMaster serviceMaster;

  @ApiModelProperty(required = true, value = "")

  private String _package;

  @ApiModelProperty(required = true, value = "")

  private VpsServiceExtra serviceExtra;

  @ApiModelProperty(required = true, value = "")

  private VpsExtraInfoTables extraInfoTables;

  @ApiModelProperty(required = true, value = "")

  private String module;

  @ApiModelProperty(required = true, value = "")

  private String token;

  @ApiModelProperty(required = true, value = "")

  private Integer daLink;

  @ApiModelProperty(required = true, value = "")

  private Integer srLink;

  @ApiModelProperty(required = true, value = "")

  private VpsCPData cpData;

  @ApiModelProperty(required = true, value = "")

  private VpsDAData daData;

  @ApiModelProperty(required = true, value = "")

  private VpsPlesk12Data plesk12Data;

  @ApiModelProperty(required = true, value = "")

  private VpsServiceAddons serviceAddons;

  @ApiModelProperty(value = "")

  private String osTemplate;

  @ApiModelProperty(value = "")

  private Object cpuGraphData = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public VpsServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(VpsServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Vps serviceInfo(VpsServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<VpsClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<VpsClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Vps clientLinks(List<VpsClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Vps addClientLinksItem(VpsClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public VpsBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(VpsBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Vps billingDetails(VpsBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Get custCurrency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Vps custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Get custCurrencySymbol
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Vps custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get serviceMaster
   * @return serviceMaster
  **/
  @JsonProperty("serviceMaster")
  public VpsServiceMaster getServiceMaster() {
    return serviceMaster;
  }

  public void setServiceMaster(VpsServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  public Vps serviceMaster(VpsServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

 /**
   * Get _package
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public Vps _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public VpsServiceExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Vps serviceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public VpsExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(VpsExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Vps extraInfoTables(VpsExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get module
   * @return module
  **/
  @JsonProperty("module")
  public String getModule() {
    return module;
  }

  public void setModule(String module) {
    this.module = module;
  }

  public Vps module(String module) {
    this.module = module;
    return this;
  }

 /**
   * Get token
   * @return token
  **/
  @JsonProperty("token")
  public String getToken() {
    return token;
  }

  public void setToken(String token) {
    this.token = token;
  }

  public Vps token(String token) {
    this.token = token;
    return this;
  }

 /**
   * Get daLink
   * @return daLink
  **/
  @JsonProperty("da_link")
  public Integer getDaLink() {
    return daLink;
  }

  public void setDaLink(Integer daLink) {
    this.daLink = daLink;
  }

  public Vps daLink(Integer daLink) {
    this.daLink = daLink;
    return this;
  }

 /**
   * Get srLink
   * @return srLink
  **/
  @JsonProperty("sr_link")
  public Integer getSrLink() {
    return srLink;
  }

  public void setSrLink(Integer srLink) {
    this.srLink = srLink;
  }

  public Vps srLink(Integer srLink) {
    this.srLink = srLink;
    return this;
  }

 /**
   * Get cpData
   * @return cpData
  **/
  @JsonProperty("cp_data")
  public VpsCPData getCpData() {
    return cpData;
  }

  public void setCpData(VpsCPData cpData) {
    this.cpData = cpData;
  }

  public Vps cpData(VpsCPData cpData) {
    this.cpData = cpData;
    return this;
  }

 /**
   * Get daData
   * @return daData
  **/
  @JsonProperty("da_data")
  public VpsDAData getDaData() {
    return daData;
  }

  public void setDaData(VpsDAData daData) {
    this.daData = daData;
  }

  public Vps daData(VpsDAData daData) {
    this.daData = daData;
    return this;
  }

 /**
   * Get plesk12Data
   * @return plesk12Data
  **/
  @JsonProperty("plesk12_data")
  public VpsPlesk12Data getPlesk12Data() {
    return plesk12Data;
  }

  public void setPlesk12Data(VpsPlesk12Data plesk12Data) {
    this.plesk12Data = plesk12Data;
  }

  public Vps plesk12Data(VpsPlesk12Data plesk12Data) {
    this.plesk12Data = plesk12Data;
    return this;
  }

 /**
   * Get serviceAddons
   * @return serviceAddons
  **/
  @JsonProperty("serviceAddons")
  public VpsServiceAddons getServiceAddons() {
    return serviceAddons;
  }

  public void setServiceAddons(VpsServiceAddons serviceAddons) {
    this.serviceAddons = serviceAddons;
  }

  public Vps serviceAddons(VpsServiceAddons serviceAddons) {
    this.serviceAddons = serviceAddons;
    return this;
  }

 /**
   * Get osTemplate
   * @return osTemplate
  **/
  @JsonProperty("os_template")
  public String getOsTemplate() {
    return osTemplate;
  }

  public void setOsTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
  }

  public Vps osTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
    return this;
  }

 /**
   * Get cpuGraphData
   * @return cpuGraphData
  **/
  @JsonProperty("cpu_graph_data")
  public Object getCpuGraphData() {
    return cpuGraphData;
  }

  public void setCpuGraphData(Object cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
  }

  public Vps cpuGraphData(Object cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
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
    Vps vps = (Vps) o;
    return Objects.equals(this.serviceInfo, vps.serviceInfo) &&
        Objects.equals(this.clientLinks, vps.clientLinks) &&
        Objects.equals(this.billingDetails, vps.billingDetails) &&
        Objects.equals(this.custCurrency, vps.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, vps.custCurrencySymbol) &&
        Objects.equals(this.serviceMaster, vps.serviceMaster) &&
        Objects.equals(this._package, vps._package) &&
        Objects.equals(this.serviceExtra, vps.serviceExtra) &&
        Objects.equals(this.extraInfoTables, vps.extraInfoTables) &&
        Objects.equals(this.module, vps.module) &&
        Objects.equals(this.token, vps.token) &&
        Objects.equals(this.daLink, vps.daLink) &&
        Objects.equals(this.srLink, vps.srLink) &&
        Objects.equals(this.cpData, vps.cpData) &&
        Objects.equals(this.daData, vps.daData) &&
        Objects.equals(this.plesk12Data, vps.plesk12Data) &&
        Objects.equals(this.serviceAddons, vps.serviceAddons) &&
        Objects.equals(this.osTemplate, vps.osTemplate) &&
        Objects.equals(this.cpuGraphData, vps.cpuGraphData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceMaster, _package, serviceExtra, extraInfoTables, module, token, daLink, srLink, cpData, daData, plesk12Data, serviceAddons, osTemplate, cpuGraphData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Vps {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    serviceMaster: ").append(toIndentedString(serviceMaster)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    module: ").append(toIndentedString(module)).append("\n");
    sb.append("    token: ").append(toIndentedString(token)).append("\n");
    sb.append("    daLink: ").append(toIndentedString(daLink)).append("\n");
    sb.append("    srLink: ").append(toIndentedString(srLink)).append("\n");
    sb.append("    cpData: ").append(toIndentedString(cpData)).append("\n");
    sb.append("    daData: ").append(toIndentedString(daData)).append("\n");
    sb.append("    plesk12Data: ").append(toIndentedString(plesk12Data)).append("\n");
    sb.append("    serviceAddons: ").append(toIndentedString(serviceAddons)).append("\n");
    sb.append("    osTemplate: ").append(toIndentedString(osTemplate)).append("\n");
    sb.append("    cpuGraphData: ").append(toIndentedString(cpuGraphData)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

