package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Detailed domain service record for a domain order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Detailed domain service record for a domain order.")

public class DomainServiceInfo   {

  private @Valid String domainId = null;

  private @Valid String domainHostname = null;

  private @Valid String domainUsername = null;

  private @Valid String domainPassword = null;

  private @Valid String domainType = null;

  private @Valid String domainCurrency = null;

  private @Valid String domainExpireDate = null;

  private @Valid String domainOrderDate = null;

  private @Valid String domainCustid = null;

  private @Valid String domainStatus = null;

  private @Valid String domainInvoice = null;

  private @Valid String domainCoupon = null;

  /**
   **/
  public DomainServiceInfo domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_id")
  @NotNull

  public String getDomainId() {
    return domainId;
  }
  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  /**
   **/
  public DomainServiceInfo domainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_hostname")
  @NotNull

  public String getDomainHostname() {
    return domainHostname;
  }
  public void setDomainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
  }

  /**
   **/
  public DomainServiceInfo domainUsername(String domainUsername) {
    this.domainUsername = domainUsername;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_username")
  @NotNull

  public String getDomainUsername() {
    return domainUsername;
  }
  public void setDomainUsername(String domainUsername) {
    this.domainUsername = domainUsername;
  }

  /**
   **/
  public DomainServiceInfo domainPassword(String domainPassword) {
    this.domainPassword = domainPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_password")
  @NotNull

  public String getDomainPassword() {
    return domainPassword;
  }
  public void setDomainPassword(String domainPassword) {
    this.domainPassword = domainPassword;
  }

  /**
   **/
  public DomainServiceInfo domainType(String domainType) {
    this.domainType = domainType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_type")
  @NotNull

  public String getDomainType() {
    return domainType;
  }
  public void setDomainType(String domainType) {
    this.domainType = domainType;
  }

  /**
   **/
  public DomainServiceInfo domainCurrency(String domainCurrency) {
    this.domainCurrency = domainCurrency;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_currency")
  @NotNull

  public String getDomainCurrency() {
    return domainCurrency;
  }
  public void setDomainCurrency(String domainCurrency) {
    this.domainCurrency = domainCurrency;
  }

  /**
   **/
  public DomainServiceInfo domainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_expire_date")
  @NotNull

  public String getDomainExpireDate() {
    return domainExpireDate;
  }
  public void setDomainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
  }

  /**
   **/
  public DomainServiceInfo domainOrderDate(String domainOrderDate) {
    this.domainOrderDate = domainOrderDate;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_order_date")
  @NotNull

  public String getDomainOrderDate() {
    return domainOrderDate;
  }
  public void setDomainOrderDate(String domainOrderDate) {
    this.domainOrderDate = domainOrderDate;
  }

  /**
   **/
  public DomainServiceInfo domainCustid(String domainCustid) {
    this.domainCustid = domainCustid;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_custid")
  @NotNull

  public String getDomainCustid() {
    return domainCustid;
  }
  public void setDomainCustid(String domainCustid) {
    this.domainCustid = domainCustid;
  }

  /**
   **/
  public DomainServiceInfo domainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_status")
  @NotNull

  public String getDomainStatus() {
    return domainStatus;
  }
  public void setDomainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
  }

  /**
   **/
  public DomainServiceInfo domainInvoice(String domainInvoice) {
    this.domainInvoice = domainInvoice;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_invoice")
  @NotNull

  public String getDomainInvoice() {
    return domainInvoice;
  }
  public void setDomainInvoice(String domainInvoice) {
    this.domainInvoice = domainInvoice;
  }

  /**
   **/
  public DomainServiceInfo domainCoupon(String domainCoupon) {
    this.domainCoupon = domainCoupon;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_coupon")
  @NotNull

  public String getDomainCoupon() {
    return domainCoupon;
  }
  public void setDomainCoupon(String domainCoupon) {
    this.domainCoupon = domainCoupon;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainServiceInfo domainServiceInfo = (DomainServiceInfo) o;
    return Objects.equals(domainId, domainServiceInfo.domainId) &&
        Objects.equals(domainHostname, domainServiceInfo.domainHostname) &&
        Objects.equals(domainUsername, domainServiceInfo.domainUsername) &&
        Objects.equals(domainPassword, domainServiceInfo.domainPassword) &&
        Objects.equals(domainType, domainServiceInfo.domainType) &&
        Objects.equals(domainCurrency, domainServiceInfo.domainCurrency) &&
        Objects.equals(domainExpireDate, domainServiceInfo.domainExpireDate) &&
        Objects.equals(domainOrderDate, domainServiceInfo.domainOrderDate) &&
        Objects.equals(domainCustid, domainServiceInfo.domainCustid) &&
        Objects.equals(domainStatus, domainServiceInfo.domainStatus) &&
        Objects.equals(domainInvoice, domainServiceInfo.domainInvoice) &&
        Objects.equals(domainCoupon, domainServiceInfo.domainCoupon);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domainId, domainHostname, domainUsername, domainPassword, domainType, domainCurrency, domainExpireDate, domainOrderDate, domainCustid, domainStatus, domainInvoice, domainCoupon);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainServiceInfo {\n");
    
    sb.append("    domainId: ").append(toIndentedString(domainId)).append("\n");
    sb.append("    domainHostname: ").append(toIndentedString(domainHostname)).append("\n");
    sb.append("    domainUsername: ").append(toIndentedString(domainUsername)).append("\n");
    sb.append("    domainPassword: ").append(toIndentedString(domainPassword)).append("\n");
    sb.append("    domainType: ").append(toIndentedString(domainType)).append("\n");
    sb.append("    domainCurrency: ").append(toIndentedString(domainCurrency)).append("\n");
    sb.append("    domainExpireDate: ").append(toIndentedString(domainExpireDate)).append("\n");
    sb.append("    domainOrderDate: ").append(toIndentedString(domainOrderDate)).append("\n");
    sb.append("    domainCustid: ").append(toIndentedString(domainCustid)).append("\n");
    sb.append("    domainStatus: ").append(toIndentedString(domainStatus)).append("\n");
    sb.append("    domainInvoice: ").append(toIndentedString(domainInvoice)).append("\n");
    sb.append("    domainCoupon: ").append(toIndentedString(domainCoupon)).append("\n");
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
