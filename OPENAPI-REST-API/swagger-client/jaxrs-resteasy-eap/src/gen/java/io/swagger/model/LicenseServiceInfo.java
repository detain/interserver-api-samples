package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.Date;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class LicenseServiceInfo   {
  private String licenseId = null;
  private String licenseType = null;
  private String licenseCurrency = null;
  private Date licenseOrderDate = null;
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
  
  @Schema(example = "2020-01-14T10:48:14Z", required = true, description = "License order date")
  @JsonProperty("license_order_date")
  @NotNull
  public Date getLicenseOrderDate() {
    return licenseOrderDate;
  }
  public void setLicenseOrderDate(Date licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
  }

  /**
   * Customer ID
   **/
  
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
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
