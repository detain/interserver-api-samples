package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Availability, pricing, and order-field metadata for a domain lookup.
 **/
@Schema(description="Availability, pricing, and order-field metadata for a domain lookup.")
public class DomainLookupResponse   {
  
  @Schema(description = "Whether the domain is available to register.")
 /**
   * Whether the domain is available to register.  
  **/
  private Boolean available = null;
  
  @Schema(description = "Whether the domain is marked as premium by the registrar.")
 /**
   * Whether the domain is marked as premium by the registrar.  
  **/
  private Boolean premium = null;
  
  @Schema(description = "Indicates if the domain is already used by a website service.")
 /**
   * Indicates if the domain is already used by a website service.  
  **/
  private Boolean website = null;
  
  @Schema(description = "Indicates if the domain already exists as a domain service on the account.")
 /**
   * Indicates if the domain already exists as a domain service on the account.  
  **/
  private Boolean domainService = null;
  
  @Schema(description = "Service catalog details for the domain's TLD.")
 /**
   * Service catalog details for the domain's TLD.  
  **/
  private Object service = null;
  
  @Schema(description = "Whether Whois privacy is available for the TLD.")
 /**
   * Whether Whois privacy is available for the TLD.  
  **/
  private Boolean whoisPrivacy = null;
  
  @Schema(description = "Calculated registration price, when available.")
 /**
   * Calculated registration price, when available.  
  **/
  private String _new = null;
  
  @Schema(description = "Calculated renewal price, when available.")
 /**
   * Calculated renewal price, when available.  
  **/
  private String renewal = null;
  
  @Schema(description = "Calculated transfer price, when available.")
 /**
   * Calculated transfer price, when available.  
  **/
  private String transfer = null;
  
  @Schema(description = "Registrar field requirements for this domain/TLD.")
 /**
   * Registrar field requirements for this domain/TLD.  
  **/
  private Object fields = null;
  
  @Schema(description = "Pricing information normalized to supported currencies.")
 /**
   * Pricing information normalized to supported currencies.  
  **/
  private Object currencies = null;
 /**
   * Whether the domain is available to register.
   * @return available
  **/
  @JsonProperty("available")
  @NotNull
  public Boolean isAvailable() {
    return available;
  }

  public void setAvailable(Boolean available) {
    this.available = available;
  }

  public DomainLookupResponse available(Boolean available) {
    this.available = available;
    return this;
  }

 /**
   * Whether the domain is marked as premium by the registrar.
   * @return premium
  **/
  @JsonProperty("premium")
  @NotNull
  public Boolean isPremium() {
    return premium;
  }

  public void setPremium(Boolean premium) {
    this.premium = premium;
  }

  public DomainLookupResponse premium(Boolean premium) {
    this.premium = premium;
    return this;
  }

 /**
   * Indicates if the domain is already used by a website service.
   * @return website
  **/
  @JsonProperty("website")
  @NotNull
  public Boolean isWebsite() {
    return website;
  }

  public void setWebsite(Boolean website) {
    this.website = website;
  }

  public DomainLookupResponse website(Boolean website) {
    this.website = website;
    return this;
  }

 /**
   * Indicates if the domain already exists as a domain service on the account.
   * @return domainService
  **/
  @JsonProperty("domain_service")
  @NotNull
  public Boolean isDomainService() {
    return domainService;
  }

  public void setDomainService(Boolean domainService) {
    this.domainService = domainService;
  }

  public DomainLookupResponse domainService(Boolean domainService) {
    this.domainService = domainService;
    return this;
  }

 /**
   * Service catalog details for the domain&#x27;s TLD.
   * @return service
  **/
  @JsonProperty("service")
  @NotNull
  public Object getService() {
    return service;
  }

  public void setService(Object service) {
    this.service = service;
  }

  public DomainLookupResponse service(Object service) {
    this.service = service;
    return this;
  }

 /**
   * Whether Whois privacy is available for the TLD.
   * @return whoisPrivacy
  **/
  @JsonProperty("whois_privacy")
  @NotNull
  public Boolean isWhoisPrivacy() {
    return whoisPrivacy;
  }

  public void setWhoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
  }

  public DomainLookupResponse whoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
    return this;
  }

 /**
   * Calculated registration price, when available.
   * @return _new
  **/
  @JsonProperty("new")
  @NotNull
  public String getNew() {
    return _new;
  }

  public void setNew(String _new) {
    this._new = _new;
  }

  public DomainLookupResponse _new(String _new) {
    this._new = _new;
    return this;
  }

 /**
   * Calculated renewal price, when available.
   * @return renewal
  **/
  @JsonProperty("renewal")
  @NotNull
  public String getRenewal() {
    return renewal;
  }

  public void setRenewal(String renewal) {
    this.renewal = renewal;
  }

  public DomainLookupResponse renewal(String renewal) {
    this.renewal = renewal;
    return this;
  }

 /**
   * Calculated transfer price, when available.
   * @return transfer
  **/
  @JsonProperty("transfer")
  @NotNull
  public String getTransfer() {
    return transfer;
  }

  public void setTransfer(String transfer) {
    this.transfer = transfer;
  }

  public DomainLookupResponse transfer(String transfer) {
    this.transfer = transfer;
    return this;
  }

 /**
   * Registrar field requirements for this domain/TLD.
   * @return fields
  **/
  @JsonProperty("fields")
  @NotNull
  public Object getFields() {
    return fields;
  }

  public void setFields(Object fields) {
    this.fields = fields;
  }

  public DomainLookupResponse fields(Object fields) {
    this.fields = fields;
    return this;
  }

 /**
   * Pricing information normalized to supported currencies.
   * @return currencies
  **/
  @JsonProperty("currencies")
  @NotNull
  public Object getCurrencies() {
    return currencies;
  }

  public void setCurrencies(Object currencies) {
    this.currencies = currencies;
  }

  public DomainLookupResponse currencies(Object currencies) {
    this.currencies = currencies;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
