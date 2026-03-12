package io.swagger.model;

import io.swagger.model.LicenseBillingDetails;
import io.swagger.model.LicenseClientLink;
import io.swagger.model.LicenseExtraInfoTables;
import io.swagger.model.LicenseServiceInfo;
import io.swagger.model.LicenseServiceType;
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

public class License   {
  
  @Schema(required = true, description = "")
  private LicenseServiceInfo serviceInfo = null;
  
  @Schema(required = true, description = "")
  private List<LicenseClientLink> clientLinks = new ArrayList<LicenseClientLink>();
  
  @Schema(required = true, description = "")
  private LicenseBillingDetails billingDetails = null;
  
  @Schema(example = "USD", required = true, description = "Customer's currency")
 /**
   * Customer's currency  
  **/
  private String custCurrency = null;
  
  @Schema(example = "$", required = true, description = "Currency symbol for customer")
 /**
   * Currency symbol for customer  
  **/
  private String custCurrencySymbol = null;
  
  @Schema(example = "KernelCare License", required = true, description = "Package name")
 /**
   * Package name  
  **/
  private String _package = null;
  
  @Schema(required = true, description = "Extra service information")
 /**
   * Extra service information  
  **/
  private List<String> serviceExtra = new ArrayList<String>();
  
  @Schema(required = true, description = "")
  private LicenseExtraInfoTables extraInfoTables = null;
  
  @Schema(required = true, description = "Extra service overview information")
 /**
   * Extra service overview information  
  **/
  private String serviceOverviewExtra = null;
  
  @Schema(required = true, description = "")
  private LicenseServiceType serviceType = null;
  
  @Schema(required = true, description = "License key")
 /**
   * License key  
  **/
  private String licenseKey = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  @NotNull
  public LicenseServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  @NotNull
  public List<LicenseClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public License clientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public License addClientLinksItem(LicenseClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  @NotNull
  public LicenseBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public License billingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Customer&#x27;s currency
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

  public License custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Currency symbol for customer
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

  public License custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Package name
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

  public License _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Extra service information
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  @NotNull
  public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public License serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public License addServiceExtraItem(String serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  @NotNull
  public LicenseExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public License extraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Extra service overview information
   * @return serviceOverviewExtra
  **/
  @JsonProperty("service_overview_extra")
  @NotNull
  public String getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }

  public void setServiceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }

  public License serviceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  @NotNull
  public LicenseServiceType getServiceType() {
    return serviceType;
  }

  public void setServiceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
  }

  public License serviceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * License key
   * @return licenseKey
  **/
  @JsonProperty("license_key")
  @NotNull
  public String getLicenseKey() {
    return licenseKey;
  }

  public void setLicenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
  }

  public License licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class License {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceOverviewExtra: ").append(toIndentedString(serviceOverviewExtra)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    licenseKey: ").append(toIndentedString(licenseKey)).append("\n");
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
