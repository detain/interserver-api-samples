package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicenseBillingDetails;
import io.swagger.model.LicenseClientLink;
import io.swagger.model.LicenseExtraInfoTables;
import io.swagger.model.LicenseServiceInfo;
import io.swagger.model.LicenseServiceType;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class License   {
  private LicenseServiceInfo serviceInfo = null;
  private List<LicenseClientLink> clientLinks = new ArrayList<LicenseClientLink>();
  private LicenseBillingDetails billingDetails = null;
  private String custCurrency = null;
  private String custCurrencySymbol = null;
  private String _package = null;
  private List<String> serviceExtra = new ArrayList<String>();
  private LicenseExtraInfoTables extraInfoTables = null;
  private String serviceOverviewExtra = null;
  private LicenseServiceType serviceType = null;
  private String licenseKey = null;

  /**
   **/
  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("client_links")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("billingDetails")
  @NotNull
  @Valid
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

  
  
  @Schema(example = "USD", required = true, description = "Customer's currency")
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

  
  
  @Schema(example = "$", required = true, description = "Currency symbol for customer")
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

  
  
  @Schema(example = "KernelCare License", required = true, description = "Package name")
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

  
  
  @Schema(required = true, description = "Extra service information")
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("extraInfoTables")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "Extra service overview information")
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceType")
  @NotNull
  @Valid
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

  
  
  @Schema(required = true, description = "License key")
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
