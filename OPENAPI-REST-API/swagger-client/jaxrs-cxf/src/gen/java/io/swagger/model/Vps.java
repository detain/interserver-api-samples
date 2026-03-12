package io.swagger.model;

import io.swagger.model.VpsBillingDetails;
import io.swagger.model.VpsCPData;
import io.swagger.model.VpsClientLink;
import io.swagger.model.VpsDAData;
import io.swagger.model.VpsExtraInfoTables;
import io.swagger.model.VpsPlesk12Data;
import io.swagger.model.VpsServiceAddons;
import io.swagger.model.VpsServiceExtra;
import io.swagger.model.VpsServiceInfo;
import io.swagger.model.VpsServiceMaster;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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

public class Vps   {
  
  @Schema(required = true, description = "")
  private VpsServiceInfo serviceInfo = null;
  
  @Schema(required = true, description = "")
  private List<VpsClientLink> clientLinks = new ArrayList<VpsClientLink>();
  
  @Schema(required = true, description = "")
  private VpsBillingDetails billingDetails = null;
  
  @Schema(required = true, description = "")
  private String custCurrency = null;
  
  @Schema(required = true, description = "")
  private String custCurrencySymbol = null;
  
  @Schema(required = true, description = "")
  private VpsServiceMaster serviceMaster = null;
  
  @Schema(required = true, description = "")
  private String _package = null;
  
  @Schema(description = "")
  private String osTemplate = null;
  
  @Schema(required = true, description = "")
  private VpsServiceExtra serviceExtra = null;
  
  @Schema(required = true, description = "")
  private VpsExtraInfoTables extraInfoTables = null;
  
  @Schema(description = "")
  private Object cpuGraphData = null;
  
  @Schema(required = true, description = "")
  private String module = null;
  
  @Schema(required = true, description = "")
  private String token = null;
  
  @Schema(required = true, description = "")
  private Integer daLink = null;
  
  @Schema(required = true, description = "")
  private Integer srLink = null;
  
  @Schema(required = true, description = "")
  private VpsCPData cpData = null;
  
  @Schema(required = true, description = "")
  private VpsDAData daData = null;
  
  @Schema(required = true, description = "")
  private VpsPlesk12Data plesk12Data = null;
  
  @Schema(required = true, description = "")
  private VpsServiceAddons serviceAddons = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
   * Get osTemplate
   * @return osTemplate
  **/
  @JsonProperty("os_template")
  @NotNull
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
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  @NotNull
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
  @NotNull
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
   * Get cpuGraphData
   * @return cpuGraphData
  **/
  @JsonProperty("cpu_graph_data")
  @NotNull
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

 /**
   * Get module
   * @return module
  **/
  @JsonProperty("module")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
    sb.append("    osTemplate: ").append(toIndentedString(osTemplate)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    cpuGraphData: ").append(toIndentedString(cpuGraphData)).append("\n");
    sb.append("    module: ").append(toIndentedString(module)).append("\n");
    sb.append("    token: ").append(toIndentedString(token)).append("\n");
    sb.append("    daLink: ").append(toIndentedString(daLink)).append("\n");
    sb.append("    srLink: ").append(toIndentedString(srLink)).append("\n");
    sb.append("    cpData: ").append(toIndentedString(cpData)).append("\n");
    sb.append("    daData: ").append(toIndentedString(daData)).append("\n");
    sb.append("    plesk12Data: ").append(toIndentedString(plesk12Data)).append("\n");
    sb.append("    serviceAddons: ").append(toIndentedString(serviceAddons)).append("\n");
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
