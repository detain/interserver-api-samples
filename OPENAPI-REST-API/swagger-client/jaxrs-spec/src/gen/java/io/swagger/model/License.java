package io.swagger.model;

import io.swagger.model.LicenseBillingDetails;
import io.swagger.model.LicenseClientLink;
import io.swagger.model.LicenseExtraInfoTables;
import io.swagger.model.LicenseServiceInfo;
import io.swagger.model.LicenseServiceType;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class License   {

  private @Valid LicenseServiceInfo serviceInfo = null;

  private @Valid List<LicenseClientLink> clientLinks = new ArrayList<LicenseClientLink>();

  private @Valid LicenseBillingDetails billingDetails = null;

  private @Valid String custCurrency = null;

  private @Valid String custCurrencySymbol = null;

  private @Valid String _package = null;

  private @Valid List<String> serviceExtra = new ArrayList<String>();

  private @Valid LicenseExtraInfoTables extraInfoTables = null;

  private @Valid String serviceOverviewExtra = null;

  private @Valid LicenseServiceType serviceType = null;

  private @Valid String licenseKey = null;

  /**
   **/
  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("serviceInfo")
  @NotNull

  public LicenseServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public License clientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("client_links")
  @NotNull

  public List<LicenseClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public License billingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("billingDetails")
  @NotNull

  public LicenseBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer&#x27;s currency
   **/
  public License custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", required = true, value = "Customer's currency")
  @JsonProperty("custCurrency")
  @NotNull

  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Currency symbol for customer
   **/
  public License custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", required = true, value = "Currency symbol for customer")
  @JsonProperty("custCurrencySymbol")
  @NotNull

  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   * Package name
   **/
  public License _package(String _package) {
    this._package = _package;
    return this;
  }

  
  @ApiModelProperty(example = "KernelCare License", required = true, value = "Package name")
  @JsonProperty("package")
  @NotNull

  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   * Extra service information
   **/
  public License serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Extra service information")
  @JsonProperty("serviceExtra")
  @NotNull

  public List<String> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public License extraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("extraInfoTables")
  @NotNull

  public LicenseExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   * Extra service overview information
   **/
  public License serviceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Extra service overview information")
  @JsonProperty("service_overview_extra")
  @NotNull

  public String getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }
  public void setServiceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }

  /**
   **/
  public License serviceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("serviceType")
  @NotNull

  public LicenseServiceType getServiceType() {
    return serviceType;
  }
  public void setServiceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
  }

  /**
   * License key
   **/
  public License licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "License key")
  @JsonProperty("license_key")
  @NotNull

  public String getLicenseKey() {
    return licenseKey;
  }
  public void setLicenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    License license = (License) o;
    return Objects.equals(serviceInfo, license.serviceInfo) &&
        Objects.equals(clientLinks, license.clientLinks) &&
        Objects.equals(billingDetails, license.billingDetails) &&
        Objects.equals(custCurrency, license.custCurrency) &&
        Objects.equals(custCurrencySymbol, license.custCurrencySymbol) &&
        Objects.equals(_package, license._package) &&
        Objects.equals(serviceExtra, license.serviceExtra) &&
        Objects.equals(extraInfoTables, license.extraInfoTables) &&
        Objects.equals(serviceOverviewExtra, license.serviceOverviewExtra) &&
        Objects.equals(serviceType, license.serviceType) &&
        Objects.equals(licenseKey, license.licenseKey);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, serviceExtra, extraInfoTables, serviceOverviewExtra, serviceType, licenseKey);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
