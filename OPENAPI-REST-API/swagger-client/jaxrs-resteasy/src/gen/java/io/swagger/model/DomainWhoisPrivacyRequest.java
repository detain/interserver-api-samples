package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request payload for enabling or disabling Whois privacy.")

public class DomainWhoisPrivacyRequest   {
  private String func = null;  private String csrfToken = null;  private String domainFirstname = null;  private String domainLastname = null;  private String domainEmail = null;  private String domainAddress = null;  private String domainAddress2 = null;  private String domainAddress3 = null;  private String domainCity = null;  private String domainState = null;  private String domainZip = null;  private String domainCountry = null;  private String domainPhone = null;  private String domainFax = null;  private String domainCompany = null;  private String domainExtra = null;

  /**
   * Action to perform (enable or disableCancel).
   **/
  
  @Schema(example = "enable", description = "Action to perform (enable or disableCancel).")
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
  
  @Schema(description = "CSRF token if the API requires it for the account.")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
