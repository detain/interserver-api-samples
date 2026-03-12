package io.swagger.model;

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
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Full detail view of a domain service including billing, contacts, DNS, and configuration.")

public class Domain   {

  private @Valid DomainServiceInfo serviceInfo = null;

  private @Valid Map<String, DomainServiceType> serviceTypes = new HashMap<String, DomainServiceType>();

  private @Valid List<DomainClientLink> clientLinks = new ArrayList<DomainClientLink>();

  private @Valid DomainBillingDetails billingDetails = null;

  private @Valid String custCurrency = null;

  private @Valid String custCurrencySymbol = null;

  private @Valid DomainBillingExtra serviceExtra = null;

  private @Valid BackupExtraInfoTables extraInfoTables = null;

  private @Valid DomainServiceType serviceType = null;

  private @Valid DomainContactDetails contactDetails = null;

  private @Valid String pwarning = null;

  private @Valid String transferInfo = null;

  private @Valid Boolean errors = null;

  private @Valid List<String> domainLogs = new ArrayList<String>();

  private @Valid DomainAllInfo allInfo = null;

  private @Valid String registrarStatus = null;

  private @Valid String locked = null;

  private @Valid String whoisPrivacy = null;

  private @Valid String autoRenew = null;

  /**
   **/
  public Domain serviceInfo(DomainServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceInfo")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceTypes")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("client_links")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("billingDetails")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("custCurrency")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("custCurrencySymbol")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceExtra")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("extraInfoTables")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceType")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("contact_details")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("pwarning")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("transfer_info")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("errors")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("domain_logs")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("allInfo")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("registrarStatus")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("locked")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("whoisPrivacy")
  @NotNull

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

  
  @ApiModelProperty(value = "")
  @JsonProperty("autoRenew")
  @NotNull

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
