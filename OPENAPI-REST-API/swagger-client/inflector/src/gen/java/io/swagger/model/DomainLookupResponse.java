package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 **/
@Schema(description = "Availability, pricing, and order-field metadata for a domain lookup.")


public class DomainLookupResponse   {
  @JsonProperty("available")
  private Boolean available = null;
  @JsonProperty("premium")
  private Boolean premium = null;
  @JsonProperty("website")
  private Boolean website = null;
  @JsonProperty("domain_service")
  private Boolean domainService = null;
  @JsonProperty("service")
  private Object service = null;
  @JsonProperty("whois_privacy")
  private Boolean whoisPrivacy = null;
  @JsonProperty("new")
  private String _new = null;
  @JsonProperty("renewal")
  private String renewal = null;
  @JsonProperty("transfer")
  private String transfer = null;
  @JsonProperty("fields")
  private Object fields = null;
  @JsonProperty("currencies")
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
  public Boolean isDomainService() {
    return domainService;
  }
  public void setDomainService(Boolean domainService) {
    this.domainService = domainService;
  }

  /**
   * Service catalog details for the domain's TLD.
   **/
  public DomainLookupResponse service(Object service) {
    this.service = service;
    return this;
  }

  
  @Schema(description = "Service catalog details for the domain's TLD.")
  @JsonProperty("service")
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
