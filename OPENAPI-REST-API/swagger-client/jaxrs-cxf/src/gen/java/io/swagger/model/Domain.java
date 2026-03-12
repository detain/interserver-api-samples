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
  * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 **/
@Schema(description="Full detail view of a domain service including billing, contacts, DNS, and configuration.")
public class Domain   {
  
  @Schema(description = "")
  private DomainServiceInfo serviceInfo = null;
  
  @Schema(description = "")
  private Map<String, DomainServiceType> serviceTypes = null;
  
  @Schema(description = "")
  private List<DomainClientLink> clientLinks = null;
  
  @Schema(description = "")
  private DomainBillingDetails billingDetails = null;
  
  @Schema(description = "")
  private String custCurrency = null;
  
  @Schema(description = "")
  private String custCurrencySymbol = null;
  
  @Schema(description = "")
  private DomainBillingExtra serviceExtra = null;
  
  @Schema(description = "")
  private BackupExtraInfoTables extraInfoTables = null;
  
  @Schema(description = "")
  private DomainServiceType serviceType = null;
  
  @Schema(description = "")
  private DomainContactDetails contactDetails = null;
  
  @Schema(description = "")
  private String pwarning = null;
  
  @Schema(description = "")
  private String transferInfo = null;
  
  @Schema(description = "")
  private Boolean errors = null;
  
  @Schema(description = "")
  private List<String> domainLogs = null;
  
  @Schema(description = "")
  private DomainAllInfo allInfo = null;
  
  @Schema(description = "")
  private String registrarStatus = null;
  
  @Schema(description = "")
  private String locked = null;
  
  @Schema(description = "")
  private String whoisPrivacy = null;
  
  @Schema(description = "")
  private String autoRenew = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  @NotNull
  public DomainServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(DomainServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Domain serviceInfo(DomainServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  @NotNull
  public Map<String, DomainServiceType> getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(Map<String, DomainServiceType> serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public Domain serviceTypes(Map<String, DomainServiceType> serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  public Domain putServiceTypesItem(String key, DomainServiceType serviceTypesItem) {
    this.serviceTypes.put(key, serviceTypesItem);
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  @NotNull
  public List<DomainClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<DomainClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Domain clientLinks(List<DomainClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Domain addClientLinksItem(DomainClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  @NotNull
  public DomainBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(DomainBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Domain billingDetails(DomainBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Get custCurrency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  @NotNull
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Domain custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Get custCurrencySymbol
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  @NotNull
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Domain custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  @NotNull
  public DomainBillingExtra getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Domain serviceExtra(DomainBillingExtra serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  @NotNull
  public BackupExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Domain extraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  @NotNull
  public DomainServiceType getServiceType() {
    return serviceType;
  }

  public void setServiceType(DomainServiceType serviceType) {
    this.serviceType = serviceType;
  }

  public Domain serviceType(DomainServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * Get contactDetails
   * @return contactDetails
  **/
  @JsonProperty("contact_details")
  @NotNull
  public DomainContactDetails getContactDetails() {
    return contactDetails;
  }

  public void setContactDetails(DomainContactDetails contactDetails) {
    this.contactDetails = contactDetails;
  }

  public Domain contactDetails(DomainContactDetails contactDetails) {
    this.contactDetails = contactDetails;
    return this;
  }

 /**
   * Get pwarning
   * @return pwarning
  **/
  @JsonProperty("pwarning")
  @NotNull
  public String getPwarning() {
    return pwarning;
  }

  public void setPwarning(String pwarning) {
    this.pwarning = pwarning;
  }

  public Domain pwarning(String pwarning) {
    this.pwarning = pwarning;
    return this;
  }

 /**
   * Get transferInfo
   * @return transferInfo
  **/
  @JsonProperty("transfer_info")
  @NotNull
  public String getTransferInfo() {
    return transferInfo;
  }

  public void setTransferInfo(String transferInfo) {
    this.transferInfo = transferInfo;
  }

  public Domain transferInfo(String transferInfo) {
    this.transferInfo = transferInfo;
    return this;
  }

 /**
   * Get errors
   * @return errors
  **/
  @JsonProperty("errors")
  @NotNull
  public Boolean isErrors() {
    return errors;
  }

  public void setErrors(Boolean errors) {
    this.errors = errors;
  }

  public Domain errors(Boolean errors) {
    this.errors = errors;
    return this;
  }

 /**
   * Get domainLogs
   * @return domainLogs
  **/
  @JsonProperty("domain_logs")
  @NotNull
  public List<String> getDomainLogs() {
    return domainLogs;
  }

  public void setDomainLogs(List<String> domainLogs) {
    this.domainLogs = domainLogs;
  }

  public Domain domainLogs(List<String> domainLogs) {
    this.domainLogs = domainLogs;
    return this;
  }

  public Domain addDomainLogsItem(String domainLogsItem) {
    this.domainLogs.add(domainLogsItem);
    return this;
  }

 /**
   * Get allInfo
   * @return allInfo
  **/
  @JsonProperty("allInfo")
  @NotNull
  public DomainAllInfo getAllInfo() {
    return allInfo;
  }

  public void setAllInfo(DomainAllInfo allInfo) {
    this.allInfo = allInfo;
  }

  public Domain allInfo(DomainAllInfo allInfo) {
    this.allInfo = allInfo;
    return this;
  }

 /**
   * Get registrarStatus
   * @return registrarStatus
  **/
  @JsonProperty("registrarStatus")
  @NotNull
  public String getRegistrarStatus() {
    return registrarStatus;
  }

  public void setRegistrarStatus(String registrarStatus) {
    this.registrarStatus = registrarStatus;
  }

  public Domain registrarStatus(String registrarStatus) {
    this.registrarStatus = registrarStatus;
    return this;
  }

 /**
   * Get locked
   * @return locked
  **/
  @JsonProperty("locked")
  @NotNull
  public String getLocked() {
    return locked;
  }

  public void setLocked(String locked) {
    this.locked = locked;
  }

  public Domain locked(String locked) {
    this.locked = locked;
    return this;
  }

 /**
   * Get whoisPrivacy
   * @return whoisPrivacy
  **/
  @JsonProperty("whoisPrivacy")
  @NotNull
  public String getWhoisPrivacy() {
    return whoisPrivacy;
  }

  public void setWhoisPrivacy(String whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
  }

  public Domain whoisPrivacy(String whoisPrivacy) {
    this.whoisPrivacy = whoisPrivacy;
    return this;
  }

 /**
   * Get autoRenew
   * @return autoRenew
  **/
  @JsonProperty("autoRenew")
  @NotNull
  public String getAutoRenew() {
    return autoRenew;
  }

  public void setAutoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
  }

  public Domain autoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
