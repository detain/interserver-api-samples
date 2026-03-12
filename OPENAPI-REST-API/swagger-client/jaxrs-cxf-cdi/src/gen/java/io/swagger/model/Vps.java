package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
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
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class Vps   {
  private VpsServiceInfo serviceInfo = null;
  private List<VpsClientLink> clientLinks = new ArrayList<VpsClientLink>();
  private VpsBillingDetails billingDetails = null;
  private String custCurrency = null;
  private String custCurrencySymbol = null;
  private VpsServiceMaster serviceMaster = null;
  private String _package = null;
  private String osTemplate = null;
  private VpsServiceExtra serviceExtra = null;
  private VpsExtraInfoTables extraInfoTables = null;
  private Object cpuGraphData = null;
  private String module = null;
  private String token = null;
  private Integer daLink = null;
  private Integer srLink = null;
  private VpsCPData cpData = null;
  private VpsDAData daData = null;
  private VpsPlesk12Data plesk12Data = null;
  private VpsServiceAddons serviceAddons = null;

  /**
   **/
  public Vps serviceInfo(VpsServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
  @NotNull
  @Valid
  public VpsServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(VpsServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public Vps clientLinks(List<VpsClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("client_links")
  @NotNull
  @Valid
  public List<VpsClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<VpsClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public Vps billingDetails(VpsBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("billingDetails")
  @NotNull
  @Valid
  public VpsBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(VpsBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   **/
  public Vps custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("custCurrency")
  @NotNull
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   **/
  public Vps custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  
  @Schema(required = true, description = "")
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
  public Vps serviceMaster(VpsServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceMaster")
  @NotNull
  @Valid
  public VpsServiceMaster getServiceMaster() {
    return serviceMaster;
  }
  public void setServiceMaster(VpsServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  /**
   **/
  public Vps _package(String _package) {
    this._package = _package;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("package")
  @NotNull
  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   **/
  public Vps osTemplate(String osTemplate) {
    this.osTemplate = osTemplate;
    return this;
  }

  
  
  @Schema(description = "")
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
  public Vps serviceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceExtra")
  @NotNull
  @Valid
  public VpsServiceExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(VpsServiceExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public Vps extraInfoTables(VpsExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("extraInfoTables")
  @NotNull
  @Valid
  public VpsExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(VpsExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   **/
  public Vps cpuGraphData(Object cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cpu_graph_data")
  @NotNull
  public Object getCpuGraphData() {
    return cpuGraphData;
  }
  public void setCpuGraphData(Object cpuGraphData) {
    this.cpuGraphData = cpuGraphData;
  }

  /**
   **/
  public Vps module(String module) {
    this.module = module;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("module")
  @NotNull
  public String getModule() {
    return module;
  }
  public void setModule(String module) {
    this.module = module;
  }

  /**
   **/
  public Vps token(String token) {
    this.token = token;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("token")
  @NotNull
  public String getToken() {
    return token;
  }
  public void setToken(String token) {
    this.token = token;
  }

  /**
   **/
  public Vps daLink(Integer daLink) {
    this.daLink = daLink;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("da_link")
  @NotNull
  public Integer getDaLink() {
    return daLink;
  }
  public void setDaLink(Integer daLink) {
    this.daLink = daLink;
  }

  /**
   **/
  public Vps srLink(Integer srLink) {
    this.srLink = srLink;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("sr_link")
  @NotNull
  public Integer getSrLink() {
    return srLink;
  }
  public void setSrLink(Integer srLink) {
    this.srLink = srLink;
  }

  /**
   **/
  public Vps cpData(VpsCPData cpData) {
    this.cpData = cpData;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("cp_data")
  @NotNull
  @Valid
  public VpsCPData getCpData() {
    return cpData;
  }
  public void setCpData(VpsCPData cpData) {
    this.cpData = cpData;
  }

  /**
   **/
  public Vps daData(VpsDAData daData) {
    this.daData = daData;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("da_data")
  @NotNull
  @Valid
  public VpsDAData getDaData() {
    return daData;
  }
  public void setDaData(VpsDAData daData) {
    this.daData = daData;
  }

  /**
   **/
  public Vps plesk12Data(VpsPlesk12Data plesk12Data) {
    this.plesk12Data = plesk12Data;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("plesk12_data")
  @NotNull
  @Valid
  public VpsPlesk12Data getPlesk12Data() {
    return plesk12Data;
  }
  public void setPlesk12Data(VpsPlesk12Data plesk12Data) {
    this.plesk12Data = plesk12Data;
  }

  /**
   **/
  public Vps serviceAddons(VpsServiceAddons serviceAddons) {
    this.serviceAddons = serviceAddons;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceAddons")
  @NotNull
  @Valid
  public VpsServiceAddons getServiceAddons() {
    return serviceAddons;
  }
  public void setServiceAddons(VpsServiceAddons serviceAddons) {
    this.serviceAddons = serviceAddons;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Vps vps = (Vps) o;
    return Objects.equals(serviceInfo, vps.serviceInfo) &&
        Objects.equals(clientLinks, vps.clientLinks) &&
        Objects.equals(billingDetails, vps.billingDetails) &&
        Objects.equals(custCurrency, vps.custCurrency) &&
        Objects.equals(custCurrencySymbol, vps.custCurrencySymbol) &&
        Objects.equals(serviceMaster, vps.serviceMaster) &&
        Objects.equals(_package, vps._package) &&
        Objects.equals(osTemplate, vps.osTemplate) &&
        Objects.equals(serviceExtra, vps.serviceExtra) &&
        Objects.equals(extraInfoTables, vps.extraInfoTables) &&
        Objects.equals(cpuGraphData, vps.cpuGraphData) &&
        Objects.equals(module, vps.module) &&
        Objects.equals(token, vps.token) &&
        Objects.equals(daLink, vps.daLink) &&
        Objects.equals(srLink, vps.srLink) &&
        Objects.equals(cpData, vps.cpData) &&
        Objects.equals(daData, vps.daData) &&
        Objects.equals(plesk12Data, vps.plesk12Data) &&
        Objects.equals(serviceAddons, vps.serviceAddons);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceMaster, _package, osTemplate, serviceExtra, extraInfoTables, cpuGraphData, module, token, daLink, srLink, cpData, daData, plesk12Data, serviceAddons);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
