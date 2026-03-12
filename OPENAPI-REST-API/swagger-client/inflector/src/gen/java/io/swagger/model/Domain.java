package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupExtraInfoTables;
import io.swagger.model.DomainAllInfo;
import io.swagger.model.DomainBillingDetails;
import io.swagger.model.DomainBillingExtra;
import io.swagger.model.DomainClientLink;
import io.swagger.model.DomainContactDetails;
import io.swagger.model.DomainServiceInfo;
import io.swagger.model.DomainServiceType;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


/**
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 **/
@Schema(description = "Full detail view of a domain service including billing, contacts, DNS, and configuration.")


public class Domain   {
  @JsonProperty("serviceInfo")
  private DomainServiceInfo serviceInfo = null;
  @JsonProperty("serviceTypes")
  private Map<String, DomainServiceType> serviceTypes = null;
  @JsonProperty("client_links")
  private List<DomainClientLink> clientLinks = null;
  @JsonProperty("billingDetails")
  private DomainBillingDetails billingDetails = null;
  @JsonProperty("custCurrency")
  private String custCurrency = null;
  @JsonProperty("custCurrencySymbol")
  private String custCurrencySymbol = null;
  @JsonProperty("serviceExtra")
  private DomainBillingExtra serviceExtra = null;
  @JsonProperty("extraInfoTables")
  private BackupExtraInfoTables extraInfoTables = null;
  @JsonProperty("serviceType")
  private DomainServiceType serviceType = null;
  @JsonProperty("contact_details")
  private DomainContactDetails contactDetails = null;
  @JsonProperty("pwarning")
  private String pwarning = null;
  @JsonProperty("transfer_info")
  private String transferInfo = null;
  @JsonProperty("errors")
  private Boolean errors = null;
  @JsonProperty("domain_logs")
  private List<String> domainLogs = null;
  @JsonProperty("allInfo")
  private DomainAllInfo allInfo = null;
  @JsonProperty("registrarStatus")
  private String registrarStatus = null;
  @JsonProperty("locked")
  private String locked = null;
  @JsonProperty("whoisPrivacy")
  private String whoisPrivacy = null;
  @JsonProperty("autoRenew")
  private String autoRenew = null;
  /**
   **/
  public Domain serviceInfo(DomainServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceInfo")
  public DomainServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(DomainServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public Domain serviceTypes(Map<String, DomainServiceType> serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceTypes")
  public Map<String, DomainServiceType> getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(Map<String, DomainServiceType> serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  /**
   **/
  public Domain clientLinks(List<DomainClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("client_links")
  public List<DomainClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<DomainClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public Domain billingDetails(DomainBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("billingDetails")
  public DomainBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(DomainBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   **/
  public Domain custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   **/
  public Domain custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   **/
  public Domain serviceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceExtra")
  public DomainBillingExtra getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public Domain extraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("extraInfoTables")
  public BackupExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   **/
  public Domain serviceType(DomainServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceType")
  public DomainServiceType getServiceType() {
    return serviceType;
  }
  public void setServiceType(DomainServiceType serviceType) {
    this.serviceType = serviceType;
  }

  /**
   **/
  public Domain contactDetails(DomainContactDetails contactDetails) {
    this.contactDetails = contactDetails;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("contact_details")
  public DomainContactDetails getContactDetails() {
    return contactDetails;
  }
  public void setContactDetails(DomainContactDetails contactDetails) {
    this.contactDetails = contactDetails;
  }

  /**
   **/
  public Domain pwarning(String pwarning) {
    this.pwarning = pwarning;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("pwarning")
  public String getPwarning() {
    return pwarning;
  }
  public void setPwarning(String pwarning) {
    this.pwarning = pwarning;
  }

  /**
   **/
  public Domain transferInfo(String transferInfo) {
    this.transferInfo = transferInfo;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("transfer_info")
  public String getTransferInfo() {
    return transferInfo;
  }
  public void setTransferInfo(String transferInfo) {
    this.transferInfo = transferInfo;
  }

  /**
   **/
  public Domain errors(Boolean errors) {
    this.errors = errors;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("errors")
  public Boolean isErrors() {
    return errors;
  }
  public void setErrors(Boolean errors) {
    this.errors = errors;
  }

  /**
   **/
  public Domain domainLogs(List<String> domainLogs) {
    this.domainLogs = domainLogs;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("domain_logs")
  public List<String> getDomainLogs() {
    return domainLogs;
  }
  public void setDomainLogs(List<String> domainLogs) {
    this.domainLogs = domainLogs;
  }

  /**
   **/
  public Domain allInfo(DomainAllInfo allInfo) {
    this.allInfo = allInfo;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("allInfo")
  public DomainAllInfo getAllInfo() {
    return allInfo;
  }
  public void setAllInfo(DomainAllInfo allInfo) {
    this.allInfo = allInfo;
  }

  /**
   **/
  public Domain registrarStatus(String registrarStatus) {
    this.registrarStatus = registrarStatus;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("registrarStatus")
  public String getRegistrarStatus() {
    return registrarStatus;
  }
  public void setRegistrarStatus(String registrarStatus) {
    this.registrarStatus = registrarStatus;
  }

  /**
   **/
  public Domain locked(String locked) {
    this.locked = locked;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("locked")
  public String getLocked() {
    return locked;
  }
  public void setLocked(String locked) {
    this.locked = locked;
  }

  /**
   **/
  public Domain whoisPrivacy(String whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("whoisPrivacy")
  public String getWhoisPrivacy() {
    return whoisPrivacy;
  }
  public void setWhoisPrivacy(String whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
  }

  /**
   **/
  public Domain autoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("autoRenew")
  public String getAutoRenew() {
    return autoRenew;
  }
  public void setAutoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Domain domain = (Domain) o;
    return Objects.equals(serviceInfo, domain.serviceInfo) &&
        Objects.equals(serviceTypes, domain.serviceTypes) &&
        Objects.equals(clientLinks, domain.clientLinks) &&
        Objects.equals(billingDetails, domain.billingDetails) &&
        Objects.equals(custCurrency, domain.custCurrency) &&
        Objects.equals(custCurrencySymbol, domain.custCurrencySymbol) &&
        Objects.equals(serviceExtra, domain.serviceExtra) &&
        Objects.equals(extraInfoTables, domain.extraInfoTables) &&
        Objects.equals(serviceType, domain.serviceType) &&
        Objects.equals(contactDetails, domain.contactDetails) &&
        Objects.equals(pwarning, domain.pwarning) &&
        Objects.equals(transferInfo, domain.transferInfo) &&
        Objects.equals(errors, domain.errors) &&
        Objects.equals(domainLogs, domain.domainLogs) &&
        Objects.equals(allInfo, domain.allInfo) &&
        Objects.equals(registrarStatus, domain.registrarStatus) &&
        Objects.equals(locked, domain.locked) &&
        Objects.equals(whoisPrivacy, domain.whoisPrivacy) &&
        Objects.equals(autoRenew, domain.autoRenew);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, serviceTypes, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceExtra, extraInfoTables, serviceType, contactDetails, pwarning, transferInfo, errors, domainLogs, allInfo, registrarStatus, locked, whoisPrivacy, autoRenew);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Domain {\n");
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    contactDetails: ").append(toIndentedString(contactDetails)).append("\n");
    sb.append("    pwarning: ").append(toIndentedString(pwarning)).append("\n");
    sb.append("    transferInfo: ").append(toIndentedString(transferInfo)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    domainLogs: ").append(toIndentedString(domainLogs)).append("\n");
    sb.append("    allInfo: ").append(toIndentedString(allInfo)).append("\n");
    sb.append("    registrarStatus: ").append(toIndentedString(registrarStatus)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    whoisPrivacy: ").append(toIndentedString(whoisPrivacy)).append("\n");
    sb.append("    autoRenew: ").append(toIndentedString(autoRenew)).append("\n");
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
