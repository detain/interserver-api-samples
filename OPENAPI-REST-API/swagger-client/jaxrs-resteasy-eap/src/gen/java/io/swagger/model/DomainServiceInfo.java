package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Detailed domain service record for a domain order.")

public class DomainServiceInfo   {
  private String domainId = null;
  private String domainHostname = null;
  private String domainUsername = null;
  private String domainPassword = null;
  private String domainType = null;
  private String domainCurrency = null;
  private String domainExpireDate = null;
  private String domainOrderDate = null;
  private String domainCustid = null;
  private String domainStatus = null;
  private String domainInvoice = null;
  private String domainCoupon = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("domain_coupon")
  @NotNull
  public String getDomainCoupon() {
    return domainCoupon;
  }
  public void setDomainCoupon(String domainCoupon) {
    this.domainCoupon = domainCoupon;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
