package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.Valid;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class LicenseServiceInfo   {
  private String licenseId = null;
  private String licenseType = null;
  private String licenseCurrency = null;
  private java.util.Date licenseOrderDate = null;
  private String licenseCustid = null;
  private String licenseIp = null;
  private String licenseStatus = null;
  private String licenseHostname = null;
  private String licenseKey = null;
  private String licenseInvoice = null;
  private String licenseCoupon = null;
  private String licenseExtra = null;

  /**
   * License ID
   **/
  public LicenseServiceInfo licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

  
  
  @Schema(example = "386522", required = true, description = "License ID")
  @JsonProperty("license_id")
  @NotNull
  public String getLicenseId() {
    return licenseId;
  }
  public void setLicenseId(String licenseId) {
    this.licenseId = licenseId;
  }

  /**
   * License type
   **/
  public LicenseServiceInfo licenseType(String licenseType) {
    this.licenseType = licenseType;
    return this;
  }

  
  
  @Schema(example = "5034", required = true, description = "License type")
  @JsonProperty("license_type")
  @NotNull
  public String getLicenseType() {
    return licenseType;
  }
  public void setLicenseType(String licenseType) {
    this.licenseType = licenseType;
  }

  /**
   * License currency
   **/
  public LicenseServiceInfo licenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
    return this;
  }

  
  
  @Schema(example = "USD", required = true, description = "License currency")
  @JsonProperty("license_currency")
  @NotNull
  public String getLicenseCurrency() {
    return licenseCurrency;
  }
  public void setLicenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
  }

  /**
   * License order date
   **/
  public LicenseServiceInfo licenseOrderDate(java.util.Date licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
    return this;
  }

  
  
  @Schema(example = "2020-01-14T10:48:14Z", required = true, description = "License order date")
  @JsonProperty("license_order_date")
  @NotNull
  @Valid
  public java.util.Date getLicenseOrderDate() {
    return licenseOrderDate;
  }
  public void setLicenseOrderDate(java.util.Date licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
  }

  /**
   * Customer ID
   **/
  public LicenseServiceInfo licenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
    return this;
  }

  
  
  @Schema(example = "771282", required = true, description = "Customer ID")
  @JsonProperty("license_custid")
  @NotNull
  public String getLicenseCustid() {
    return licenseCustid;
  }
  public void setLicenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
  }

  /**
   * License IP
   **/
  public LicenseServiceInfo licenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
    return this;
  }

  
  
  @Schema(example = "1.2.3.4", required = true, description = "License IP")
  @JsonProperty("license_ip")
  @NotNull
  public String getLicenseIp() {
    return licenseIp;
  }
  public void setLicenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
  }

  /**
   * License status
   **/
  public LicenseServiceInfo licenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
    return this;
  }

  
  
  @Schema(example = "active", required = true, description = "License status")
  @JsonProperty("license_status")
  @NotNull
  public String getLicenseStatus() {
    return licenseStatus;
  }
  public void setLicenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
  }

  /**
   * License hostname
   **/
  public LicenseServiceInfo licenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
    return this;
  }

  
  
  @Schema(description = "License hostname")
  @JsonProperty("license_hostname")
  @NotNull
  public String getLicenseHostname() {
    return licenseHostname;
  }
  public void setLicenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
  }

  /**
   * License key
   **/
  public LicenseServiceInfo licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }

  
  
  @Schema(description = "License key")
  @JsonProperty("license_key")
  @NotNull
  public String getLicenseKey() {
    return licenseKey;
  }
  public void setLicenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
  }

  /**
   * License invoice
   **/
  public LicenseServiceInfo licenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
    return this;
  }

  
  
  @Schema(example = "18704419", required = true, description = "License invoice")
  @JsonProperty("license_invoice")
  @NotNull
  public String getLicenseInvoice() {
    return licenseInvoice;
  }
  public void setLicenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
  }

  /**
   * License coupon
   **/
  public LicenseServiceInfo licenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
    return this;
  }

  
  
  @Schema(example = "1836", required = true, description = "License coupon")
  @JsonProperty("license_coupon")
  @NotNull
  public String getLicenseCoupon() {
    return licenseCoupon;
  }
  public void setLicenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
  }

  /**
   * Additional license information
   **/
  public LicenseServiceInfo licenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
    return this;
  }

  
  
  @Schema(description = "Additional license information")
  @JsonProperty("license_extra")
  @NotNull
  public String getLicenseExtra() {
    return licenseExtra;
  }
  public void setLicenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseServiceInfo licenseServiceInfo = (LicenseServiceInfo) o;
    return Objects.equals(licenseId, licenseServiceInfo.licenseId) &&
        Objects.equals(licenseType, licenseServiceInfo.licenseType) &&
        Objects.equals(licenseCurrency, licenseServiceInfo.licenseCurrency) &&
        Objects.equals(licenseOrderDate, licenseServiceInfo.licenseOrderDate) &&
        Objects.equals(licenseCustid, licenseServiceInfo.licenseCustid) &&
        Objects.equals(licenseIp, licenseServiceInfo.licenseIp) &&
        Objects.equals(licenseStatus, licenseServiceInfo.licenseStatus) &&
        Objects.equals(licenseHostname, licenseServiceInfo.licenseHostname) &&
        Objects.equals(licenseKey, licenseServiceInfo.licenseKey) &&
        Objects.equals(licenseInvoice, licenseServiceInfo.licenseInvoice) &&
        Objects.equals(licenseCoupon, licenseServiceInfo.licenseCoupon) &&
        Objects.equals(licenseExtra, licenseServiceInfo.licenseExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licenseId, licenseType, licenseCurrency, licenseOrderDate, licenseCustid, licenseIp, licenseStatus, licenseHostname, licenseKey, licenseInvoice, licenseCoupon, licenseExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseServiceInfo {\n");
    
    sb.append("    licenseId: ").append(toIndentedString(licenseId)).append("\n");
    sb.append("    licenseType: ").append(toIndentedString(licenseType)).append("\n");
    sb.append("    licenseCurrency: ").append(toIndentedString(licenseCurrency)).append("\n");
    sb.append("    licenseOrderDate: ").append(toIndentedString(licenseOrderDate)).append("\n");
    sb.append("    licenseCustid: ").append(toIndentedString(licenseCustid)).append("\n");
    sb.append("    licenseIp: ").append(toIndentedString(licenseIp)).append("\n");
    sb.append("    licenseStatus: ").append(toIndentedString(licenseStatus)).append("\n");
    sb.append("    licenseHostname: ").append(toIndentedString(licenseHostname)).append("\n");
    sb.append("    licenseKey: ").append(toIndentedString(licenseKey)).append("\n");
    sb.append("    licenseInvoice: ").append(toIndentedString(licenseInvoice)).append("\n");
    sb.append("    licenseCoupon: ").append(toIndentedString(licenseCoupon)).append("\n");
    sb.append("    licenseExtra: ").append(toIndentedString(licenseExtra)).append("\n");
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
