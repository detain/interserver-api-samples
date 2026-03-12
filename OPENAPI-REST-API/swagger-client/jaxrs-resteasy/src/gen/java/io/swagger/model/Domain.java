package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
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
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Full detail view of a domain service including billing, contacts, DNS, and configuration.")

public class Domain   {
  private DomainServiceInfo serviceInfo = null;  private Map<String, DomainServiceType> serviceTypes = new HashMap<String, DomainServiceType>();  private List<DomainClientLink> clientLinks = new ArrayList<DomainClientLink>();  private DomainBillingDetails billingDetails = null;  private String custCurrency = null;  private String custCurrencySymbol = null;  private DomainBillingExtra serviceExtra = null;  private BackupExtraInfoTables extraInfoTables = null;  private DomainServiceType serviceType = null;  private DomainContactDetails contactDetails = null;  private String pwarning = null;  private String transferInfo = null;  private Boolean errors = null;  private List<String> domainLogs = new ArrayList<String>();  private DomainAllInfo allInfo = null;  private String registrarStatus = null;  private String locked = null;  private String whoisPrivacy = null;  private String autoRenew = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
