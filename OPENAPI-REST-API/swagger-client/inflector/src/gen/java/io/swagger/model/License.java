package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LicenseBillingDetails;
import io.swagger.model.LicenseClientLink;
import io.swagger.model.LicenseExtraInfoTables;
import io.swagger.model.LicenseServiceInfo;
import io.swagger.model.LicenseServiceType;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class License   {
  @JsonProperty("serviceInfo")
  private LicenseServiceInfo serviceInfo = null;
  @JsonProperty("client_links")
  private List<LicenseClientLink> clientLinks = new ArrayList<LicenseClientLink>();
  @JsonProperty("billingDetails")
  private LicenseBillingDetails billingDetails = null;
  @JsonProperty("custCurrency")
  private String custCurrency = null;
  @JsonProperty("custCurrencySymbol")
  private String custCurrencySymbol = null;
  @JsonProperty("package")
  private String _package = null;
  @JsonProperty("serviceExtra")
  private List<String> serviceExtra = new ArrayList<String>();
  @JsonProperty("extraInfoTables")
  private LicenseExtraInfoTables extraInfoTables = null;
  @JsonProperty("service_overview_extra")
  private String serviceOverviewExtra = null;
  @JsonProperty("serviceType")
  private LicenseServiceType serviceType = null;
  @JsonProperty("license_key")
  private String licenseKey = null;
  /**
   **/
  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
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
  public LicenseBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer's currency
   **/
  public License custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @Schema(example = "USD", required = true, description = "Customer's currency")
  @JsonProperty("custCurrency")
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
