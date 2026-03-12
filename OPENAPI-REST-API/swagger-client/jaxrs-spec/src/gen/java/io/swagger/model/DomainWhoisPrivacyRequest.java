package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request payload for enabling or disabling Whois privacy.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Request payload for enabling or disabling Whois privacy.")

public class DomainWhoisPrivacyRequest   {

  private @Valid String func = null;

  private @Valid String csrfToken = null;

  private @Valid String domainFirstname = null;

  private @Valid String domainLastname = null;

  private @Valid String domainEmail = null;

  private @Valid String domainAddress = null;

  private @Valid String domainAddress2 = null;

  private @Valid String domainAddress3 = null;

  private @Valid String domainCity = null;

  private @Valid String domainState = null;

  private @Valid String domainZip = null;

  private @Valid String domainCountry = null;

  private @Valid String domainPhone = null;

  private @Valid String domainFax = null;

  private @Valid String domainCompany = null;

  private @Valid String domainExtra = null;

  /**
   * Action to perform (enable or disableCancel).
   **/
  public DomainWhoisPrivacyRequest func(String func) {
    this.func = func;
    return this;
  }

  
  @ApiModelProperty(example = "enable", value = "Action to perform (enable or disableCancel).")
  @JsonProperty("func")
  @NotNull

  public String getFunc() {
    return func;
  }
  public void setFunc(String func) {
    this.func = func;
  }

  /**
   * CSRF token if the API requires it for the account.
   **/
  public DomainWhoisPrivacyRequest csrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
    return this;
  }

  
  @ApiModelProperty(value = "CSRF token if the API requires it for the account.")
  @JsonProperty("csrf_token")
  @NotNull

  public String getCsrfToken() {
    return csrfToken;
  }
  public void setCsrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_firstname")
  @NotNull

  public String getDomainFirstname() {
    return domainFirstname;
  }
  public void setDomainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_lastname")
  @NotNull

  public String getDomainLastname() {
    return domainLastname;
  }
  public void setDomainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_email")
  @NotNull

  public String getDomainEmail() {
    return domainEmail;
  }
  public void setDomainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_address")
  @NotNull

  public String getDomainAddress() {
    return domainAddress;
  }
  public void setDomainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_address2")
  @NotNull

  public String getDomainAddress2() {
    return domainAddress2;
  }
  public void setDomainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_address3")
  @NotNull

  public String getDomainAddress3() {
    return domainAddress3;
  }
  public void setDomainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainCity(String domainCity) {
    this.domainCity = domainCity;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_city")
  @NotNull

  public String getDomainCity() {
    return domainCity;
  }
  public void setDomainCity(String domainCity) {
    this.domainCity = domainCity;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainState(String domainState) {
    this.domainState = domainState;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_state")
  @NotNull

  public String getDomainState() {
    return domainState;
  }
  public void setDomainState(String domainState) {
    this.domainState = domainState;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainZip(String domainZip) {
    this.domainZip = domainZip;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_zip")
  @NotNull

  public String getDomainZip() {
    return domainZip;
  }
  public void setDomainZip(String domainZip) {
    this.domainZip = domainZip;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_country")
  @NotNull

  public String getDomainCountry() {
    return domainCountry;
  }
  public void setDomainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_phone")
  @NotNull

  public String getDomainPhone() {
    return domainPhone;
  }
  public void setDomainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainFax(String domainFax) {
    this.domainFax = domainFax;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_fax")
  @NotNull

  public String getDomainFax() {
    return domainFax;
  }
  public void setDomainFax(String domainFax) {
    this.domainFax = domainFax;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_company")
  @NotNull

  public String getDomainCompany() {
    return domainCompany;
  }
  public void setDomainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
  }

  /**
   **/
  public DomainWhoisPrivacyRequest domainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_extra")
  @NotNull

  public String getDomainExtra() {
    return domainExtra;
  }
  public void setDomainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainWhoisPrivacyRequest domainWhoisPrivacyRequest = (DomainWhoisPrivacyRequest) o;
    return Objects.equals(func, domainWhoisPrivacyRequest.func) &&
        Objects.equals(csrfToken, domainWhoisPrivacyRequest.csrfToken) &&
        Objects.equals(domainFirstname, domainWhoisPrivacyRequest.domainFirstname) &&
        Objects.equals(domainLastname, domainWhoisPrivacyRequest.domainLastname) &&
        Objects.equals(domainEmail, domainWhoisPrivacyRequest.domainEmail) &&
        Objects.equals(domainAddress, domainWhoisPrivacyRequest.domainAddress) &&
        Objects.equals(domainAddress2, domainWhoisPrivacyRequest.domainAddress2) &&
        Objects.equals(domainAddress3, domainWhoisPrivacyRequest.domainAddress3) &&
        Objects.equals(domainCity, domainWhoisPrivacyRequest.domainCity) &&
        Objects.equals(domainState, domainWhoisPrivacyRequest.domainState) &&
        Objects.equals(domainZip, domainWhoisPrivacyRequest.domainZip) &&
        Objects.equals(domainCountry, domainWhoisPrivacyRequest.domainCountry) &&
        Objects.equals(domainPhone, domainWhoisPrivacyRequest.domainPhone) &&
        Objects.equals(domainFax, domainWhoisPrivacyRequest.domainFax) &&
        Objects.equals(domainCompany, domainWhoisPrivacyRequest.domainCompany) &&
        Objects.equals(domainExtra, domainWhoisPrivacyRequest.domainExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainWhoisPrivacyRequest {\n");
    
    sb.append("    func: ").append(toIndentedString(func)).append("\n");
    sb.append("    csrfToken: ").append(toIndentedString(csrfToken)).append("\n");
    sb.append("    domainFirstname: ").append(toIndentedString(domainFirstname)).append("\n");
    sb.append("    domainLastname: ").append(toIndentedString(domainLastname)).append("\n");
    sb.append("    domainEmail: ").append(toIndentedString(domainEmail)).append("\n");
    sb.append("    domainAddress: ").append(toIndentedString(domainAddress)).append("\n");
    sb.append("    domainAddress2: ").append(toIndentedString(domainAddress2)).append("\n");
    sb.append("    domainAddress3: ").append(toIndentedString(domainAddress3)).append("\n");
    sb.append("    domainCity: ").append(toIndentedString(domainCity)).append("\n");
    sb.append("    domainState: ").append(toIndentedString(domainState)).append("\n");
    sb.append("    domainZip: ").append(toIndentedString(domainZip)).append("\n");
    sb.append("    domainCountry: ").append(toIndentedString(domainCountry)).append("\n");
    sb.append("    domainPhone: ").append(toIndentedString(domainPhone)).append("\n");
    sb.append("    domainFax: ").append(toIndentedString(domainFax)).append("\n");
    sb.append("    domainCompany: ").append(toIndentedString(domainCompany)).append("\n");
    sb.append("    domainExtra: ").append(toIndentedString(domainExtra)).append("\n");
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
