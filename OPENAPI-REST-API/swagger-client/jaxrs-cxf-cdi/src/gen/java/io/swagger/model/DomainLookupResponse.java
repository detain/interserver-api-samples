package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Availability, pricing, and order-field metadata for a domain lookup.")

public class DomainLookupResponse   {
  private Boolean available = null;
  private Boolean premium = null;
  private Boolean website = null;
  private Boolean domainService = null;
  private Object service = null;
  private Boolean whoisPrivacy = null;
  private String _new = null;
  private String renewal = null;
  private String transfer = null;
  private Object fields = null;
  private Object currencies = null;

  /**
   * Whether the domain is available to register.
   **/
  public DomainLookupResponse available(Boolean available) {
    this.available = available;
    return this;
  }

  
  
  @Schema(description = "Whether the domain is available to register.")
  @JsonProperty("available")
  @NotNull
  public Boolean isAvailable() {
    return available;
  }
  public void setAvailable(Boolean available) {
    this.available = available;
  }

  /**
   * Whether the domain is marked as premium by the registrar.
   **/
  public DomainLookupResponse premium(Boolean premium) {
    this.premium = premium;
    return this;
  }

  
  
  @Schema(description = "Whether the domain is marked as premium by the registrar.")
  @JsonProperty("premium")
  @NotNull
  public Boolean isPremium() {
    return premium;
  }
  public void setPremium(Boolean premium) {
    this.premium = premium;
  }

  /**
   * Indicates if the domain is already used by a website service.
   **/
  public DomainLookupResponse website(Boolean website) {
    this.website = website;
    return this;
  }

  
  
  @Schema(description = "Indicates if the domain is already used by a website service.")
  @JsonProperty("website")
  @NotNull
  public Boolean isWebsite() {
    return website;
  }
  public void setWebsite(Boolean website) {
    this.website = website;
  }

  /**
   * Indicates if the domain already exists as a domain service on the account.
   **/
  public DomainLookupResponse domainService(Boolean domainService) {
    this.domainService = domainService;
    return this;
  }

  
  
  @Schema(description = "Indicates if the domain already exists as a domain service on the account.")
  @JsonProperty("domain_service")
  @NotNull
  public Boolean isDomainService() {
    return domainService;
  }
  public void setDomainService(Boolean domainService) {
    this.domainService = domainService;
  }

  /**
   * Service catalog details for the domain&#x27;s TLD.
   **/
  public DomainLookupResponse service(Object service) {
    this.service = service;
    return this;
  }

  
  
  @Schema(description = "Service catalog details for the domain's TLD.")
  @JsonProperty("service")
  @NotNull
  public Object getService() {
    return service;
  }
  public void setService(Object service) {
    this.service = service;
  }

  /**
   * Whether Whois privacy is available for the TLD.
   **/
  public DomainLookupResponse whoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
    return this;
  }

  
  
  @Schema(description = "Whether Whois privacy is available for the TLD.")
  @JsonProperty("whois_privacy")
  @NotNull
  public Boolean isWhoisPrivacy() {
    return whoisPrivacy;
  }
  public void setWhoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
  }

  /**
   * Calculated registration price, when available.
   **/
  public DomainLookupResponse _new(String _new) {
    this._new = _new;
    return this;
  }

  
  
  @Schema(description = "Calculated registration price, when available.")
  @JsonProperty("new")
  @NotNull
  public String getNew() {
    return _new;
  }
  public void setNew(String _new) {
    this._new = _new;
  }

  /**
   * Calculated renewal price, when available.
   **/
  public DomainLookupResponse renewal(String renewal) {
    this.renewal = renewal;
    return this;
  }

  
  
  @Schema(description = "Calculated renewal price, when available.")
  @JsonProperty("renewal")
  @NotNull
  public String getRenewal() {
    return renewal;
  }
  public void setRenewal(String renewal) {
    this.renewal = renewal;
  }

  /**
   * Calculated transfer price, when available.
   **/
  public DomainLookupResponse transfer(String transfer) {
    this.transfer = transfer;
    return this;
  }

  
  
  @Schema(description = "Calculated transfer price, when available.")
  @JsonProperty("transfer")
  @NotNull
  public String getTransfer() {
    return transfer;
  }
  public void setTransfer(String transfer) {
    this.transfer = transfer;
  }

  /**
   * Registrar field requirements for this domain/TLD.
   **/
  public DomainLookupResponse fields(Object fields) {
    this.fields = fields;
    return this;
  }

  
  
  @Schema(description = "Registrar field requirements for this domain/TLD.")
  @JsonProperty("fields")
  @NotNull
  public Object getFields() {
    return fields;
  }
  public void setFields(Object fields) {
    this.fields = fields;
  }

  /**
   * Pricing information normalized to supported currencies.
   **/
  public DomainLookupResponse currencies(Object currencies) {
    this.currencies = currencies;
    return this;
  }

  
  
  @Schema(description = "Pricing information normalized to supported currencies.")
  @JsonProperty("currencies")
  @NotNull
  public Object getCurrencies() {
    return currencies;
  }
  public void setCurrencies(Object currencies) {
    this.currencies = currencies;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainLookupResponse domainLookupResponse = (DomainLookupResponse) o;
    return Objects.equals(available, domainLookupResponse.available) &&
        Objects.equals(premium, domainLookupResponse.premium) &&
        Objects.equals(website, domainLookupResponse.website) &&
        Objects.equals(domainService, domainLookupResponse.domainService) &&
        Objects.equals(service, domainLookupResponse.service) &&
        Objects.equals(whoisPrivacy, domainLookupResponse.whoisPrivacy) &&
        Objects.equals(_new, domainLookupResponse._new) &&
        Objects.equals(renewal, domainLookupResponse.renewal) &&
        Objects.equals(transfer, domainLookupResponse.transfer) &&
        Objects.equals(fields, domainLookupResponse.fields) &&
        Objects.equals(currencies, domainLookupResponse.currencies);
  }

  @Override
  public int hashCode() {
    return Objects.hash(available, premium, website, domainService, service, whoisPrivacy, _new, renewal, transfer, fields, currencies);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainLookupResponse {\n");
    
    sb.append("    available: ").append(toIndentedString(available)).append("\n");
    sb.append("    premium: ").append(toIndentedString(premium)).append("\n");
    sb.append("    website: ").append(toIndentedString(website)).append("\n");
    sb.append("    domainService: ").append(toIndentedString(domainService)).append("\n");
    sb.append("    service: ").append(toIndentedString(service)).append("\n");
    sb.append("    whoisPrivacy: ").append(toIndentedString(whoisPrivacy)).append("\n");
    sb.append("    _new: ").append(toIndentedString(_new)).append("\n");
    sb.append("    renewal: ").append(toIndentedString(renewal)).append("\n");
    sb.append("    transfer: ").append(toIndentedString(transfer)).append("\n");
    sb.append("    fields: ").append(toIndentedString(fields)).append("\n");
    sb.append("    currencies: ").append(toIndentedString(currencies)).append("\n");
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
