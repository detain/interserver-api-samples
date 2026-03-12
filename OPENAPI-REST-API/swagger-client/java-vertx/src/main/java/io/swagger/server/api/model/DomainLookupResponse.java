package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 */




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

  public DomainLookupResponse available(Boolean available) {
    this.available = available;
    return this;
  }

  /**
   * Whether the domain is available to register.
   * @return available
   **/
    public Boolean isAvailable() {
    return available;
  }

  public void setAvailable(Boolean available) {
    this.available = available;
  }

  public DomainLookupResponse premium(Boolean premium) {
    this.premium = premium;
    return this;
  }

  /**
   * Whether the domain is marked as premium by the registrar.
   * @return premium
   **/
    public Boolean isPremium() {
    return premium;
  }

  public void setPremium(Boolean premium) {
    this.premium = premium;
  }

  public DomainLookupResponse website(Boolean website) {
    this.website = website;
    return this;
  }

  /**
   * Indicates if the domain is already used by a website service.
   * @return website
   **/
    public Boolean isWebsite() {
    return website;
  }

  public void setWebsite(Boolean website) {
    this.website = website;
  }

  public DomainLookupResponse domainService(Boolean domainService) {
    this.domainService = domainService;
    return this;
  }

  /**
   * Indicates if the domain already exists as a domain service on the account.
   * @return domainService
   **/
    public Boolean isDomainService() {
    return domainService;
  }

  public void setDomainService(Boolean domainService) {
    this.domainService = domainService;
  }

  public DomainLookupResponse service(Object service) {
    this.service = service;
    return this;
  }

  /**
   * Service catalog details for the domain's TLD.
   * @return service
   **/
    public Object getService() {
    return service;
  }

  public void setService(Object service) {
    this.service = service;
  }

  public DomainLookupResponse whoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
    return this;
  }

  /**
   * Whether Whois privacy is available for the TLD.
   * @return whoisPrivacy
   **/
    public Boolean isWhoisPrivacy() {
    return whoisPrivacy;
  }

  public void setWhoisPrivacy(Boolean whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
  }

  public DomainLookupResponse _new(String _new) {
    this._new = _new;
    return this;
  }

  /**
   * Calculated registration price, when available.
   * @return _new
   **/
    public String getNew() {
    return _new;
  }

  public void setNew(String _new) {
    this._new = _new;
  }

  public DomainLookupResponse renewal(String renewal) {
    this.renewal = renewal;
    return this;
  }

  /**
   * Calculated renewal price, when available.
   * @return renewal
   **/
    public String getRenewal() {
    return renewal;
  }

  public void setRenewal(String renewal) {
    this.renewal = renewal;
  }

  public DomainLookupResponse transfer(String transfer) {
    this.transfer = transfer;
    return this;
  }

  /**
   * Calculated transfer price, when available.
   * @return transfer
   **/
    public String getTransfer() {
    return transfer;
  }

  public void setTransfer(String transfer) {
    this.transfer = transfer;
  }

  public DomainLookupResponse fields(Object fields) {
    this.fields = fields;
    return this;
  }

  /**
   * Registrar field requirements for this domain/TLD.
   * @return fields
   **/
    public Object getFields() {
    return fields;
  }

  public void setFields(Object fields) {
    this.fields = fields;
  }

  public DomainLookupResponse currencies(Object currencies) {
    this.currencies = currencies;
    return this;
  }

  /**
   * Pricing information normalized to supported currencies.
   * @return currencies
   **/
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
    return Objects.equals(this.available, domainLookupResponse.available) &&
        Objects.equals(this.premium, domainLookupResponse.premium) &&
        Objects.equals(this.website, domainLookupResponse.website) &&
        Objects.equals(this.domainService, domainLookupResponse.domainService) &&
        Objects.equals(this.service, domainLookupResponse.service) &&
        Objects.equals(this.whoisPrivacy, domainLookupResponse.whoisPrivacy) &&
        Objects.equals(this._new, domainLookupResponse._new) &&
        Objects.equals(this.renewal, domainLookupResponse.renewal) &&
        Objects.equals(this.transfer, domainLookupResponse.transfer) &&
        Objects.equals(this.fields, domainLookupResponse.fields) &&
        Objects.equals(this.currencies, domainLookupResponse.currencies);
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
