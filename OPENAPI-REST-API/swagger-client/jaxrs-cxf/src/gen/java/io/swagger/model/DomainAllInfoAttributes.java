package io.swagger.model;

import io.swagger.model.DomainAllInfoAttributesContactSet;
import io.swagger.model.DomainNameServer;
import java.util.ArrayList;
import java.util.List;
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

public class DomainAllInfoAttributes   {
  
  @Schema(description = "")
  private DomainAllInfoAttributesContactSet contactSet = null;
  
  @Schema(description = "")
  private String registryCreatedate = null;
  
  @Schema(description = "")
  private String registryExpiredate = null;
  
  @Schema(description = "")
  private String tldData = null;
  
  @Schema(description = "")
  private String letExpire = null;
  
  @Schema(description = "")
  private String autoRenew = null;
  
  @Schema(description = "")
  private String sponsoringRsp = null;
  
  @Schema(description = "")
  private String gdprConsentStatus = null;
  
  @Schema(description = "")
  private List<DomainNameServer> nameserverList = null;
  
  @Schema(description = "")
  private String registryUpdatedate = null;
  
  @Schema(description = "")
  private String affiliateId = null;
  
  @Schema(description = "")
  private String expiredate = null;
 /**
   * Get contactSet
   * @return contactSet
  **/
  @JsonProperty("contact_set")
  @NotNull
  public DomainAllInfoAttributesContactSet getContactSet() {
    return contactSet;
  }

  public void setContactSet(DomainAllInfoAttributesContactSet contactSet) {
    this.contactSet = contactSet;
  }

  public DomainAllInfoAttributes contactSet(DomainAllInfoAttributesContactSet contactSet) {
    this.contactSet = contactSet;
    return this;
  }

 /**
   * Get registryCreatedate
   * @return registryCreatedate
  **/
  @JsonProperty("registry_createdate")
  @NotNull
  public String getRegistryCreatedate() {
    return registryCreatedate;
  }

  public void setRegistryCreatedate(String registryCreatedate) {
    this.registryCreatedate = registryCreatedate;
  }

  public DomainAllInfoAttributes registryCreatedate(String registryCreatedate) {
    this.registryCreatedate = registryCreatedate;
    return this;
  }

 /**
   * Get registryExpiredate
   * @return registryExpiredate
  **/
  @JsonProperty("registry_expiredate")
  @NotNull
  public String getRegistryExpiredate() {
    return registryExpiredate;
  }

  public void setRegistryExpiredate(String registryExpiredate) {
    this.registryExpiredate = registryExpiredate;
  }

  public DomainAllInfoAttributes registryExpiredate(String registryExpiredate) {
    this.registryExpiredate = registryExpiredate;
    return this;
  }

 /**
   * Get tldData
   * @return tldData
  **/
  @JsonProperty("tld_data")
  @NotNull
  public String getTldData() {
    return tldData;
  }

  public void setTldData(String tldData) {
    this.tldData = tldData;
  }

  public DomainAllInfoAttributes tldData(String tldData) {
    this.tldData = tldData;
    return this;
  }

 /**
   * Get letExpire
   * @return letExpire
  **/
  @JsonProperty("let_expire")
  @NotNull
  public String getLetExpire() {
    return letExpire;
  }

  public void setLetExpire(String letExpire) {
    this.letExpire = letExpire;
  }

  public DomainAllInfoAttributes letExpire(String letExpire) {
    this.letExpire = letExpire;
    return this;
  }

 /**
   * Get autoRenew
   * @return autoRenew
  **/
  @JsonProperty("auto_renew")
  @NotNull
  public String getAutoRenew() {
    return autoRenew;
  }

  public void setAutoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
  }

  public DomainAllInfoAttributes autoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
    return this;
  }

 /**
   * Get sponsoringRsp
   * @return sponsoringRsp
  **/
  @JsonProperty("sponsoring_rsp")
  @NotNull
  public String getSponsoringRsp() {
    return sponsoringRsp;
  }

  public void setSponsoringRsp(String sponsoringRsp) {
    this.sponsoringRsp = sponsoringRsp;
  }

  public DomainAllInfoAttributes sponsoringRsp(String sponsoringRsp) {
    this.sponsoringRsp = sponsoringRsp;
    return this;
  }

 /**
   * Get gdprConsentStatus
   * @return gdprConsentStatus
  **/
  @JsonProperty("gdpr_consent_status")
  @NotNull
  public String getGdprConsentStatus() {
    return gdprConsentStatus;
  }

  public void setGdprConsentStatus(String gdprConsentStatus) {
    this.gdprConsentStatus = gdprConsentStatus;
  }

  public DomainAllInfoAttributes gdprConsentStatus(String gdprConsentStatus) {
    this.gdprConsentStatus = gdprConsentStatus;
    return this;
  }

 /**
   * Get nameserverList
   * @return nameserverList
  **/
  @JsonProperty("nameserver_list")
  @NotNull
  public List<DomainNameServer> getNameserverList() {
    return nameserverList;
  }

  public void setNameserverList(List<DomainNameServer> nameserverList) {
    this.nameserverList = nameserverList;
  }

  public DomainAllInfoAttributes nameserverList(List<DomainNameServer> nameserverList) {
    this.nameserverList = nameserverList;
    return this;
  }

  public DomainAllInfoAttributes addNameserverListItem(DomainNameServer nameserverListItem) {
    this.nameserverList.add(nameserverListItem);
    return this;
  }

 /**
   * Get registryUpdatedate
   * @return registryUpdatedate
  **/
  @JsonProperty("registry_updatedate")
  @NotNull
  public String getRegistryUpdatedate() {
    return registryUpdatedate;
  }

  public void setRegistryUpdatedate(String registryUpdatedate) {
    this.registryUpdatedate = registryUpdatedate;
  }

  public DomainAllInfoAttributes registryUpdatedate(String registryUpdatedate) {
    this.registryUpdatedate = registryUpdatedate;
    return this;
  }

 /**
   * Get affiliateId
   * @return affiliateId
  **/
  @JsonProperty("affiliate_id")
  @NotNull
  public String getAffiliateId() {
    return affiliateId;
  }

  public void setAffiliateId(String affiliateId) {
    this.affiliateId = affiliateId;
  }

  public DomainAllInfoAttributes affiliateId(String affiliateId) {
    this.affiliateId = affiliateId;
    return this;
  }

 /**
   * Get expiredate
   * @return expiredate
  **/
  @JsonProperty("expiredate")
  @NotNull
  public String getExpiredate() {
    return expiredate;
  }

  public void setExpiredate(String expiredate) {
    this.expiredate = expiredate;
  }

  public DomainAllInfoAttributes expiredate(String expiredate) {
    this.expiredate = expiredate;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAllInfoAttributes {\n");
    
    sb.append("    contactSet: ").append(toIndentedString(contactSet)).append("\n");
    sb.append("    registryCreatedate: ").append(toIndentedString(registryCreatedate)).append("\n");
    sb.append("    registryExpiredate: ").append(toIndentedString(registryExpiredate)).append("\n");
    sb.append("    tldData: ").append(toIndentedString(tldData)).append("\n");
    sb.append("    letExpire: ").append(toIndentedString(letExpire)).append("\n");
    sb.append("    autoRenew: ").append(toIndentedString(autoRenew)).append("\n");
    sb.append("    sponsoringRsp: ").append(toIndentedString(sponsoringRsp)).append("\n");
    sb.append("    gdprConsentStatus: ").append(toIndentedString(gdprConsentStatus)).append("\n");
    sb.append("    nameserverList: ").append(toIndentedString(nameserverList)).append("\n");
    sb.append("    registryUpdatedate: ").append(toIndentedString(registryUpdatedate)).append("\n");
    sb.append("    affiliateId: ").append(toIndentedString(affiliateId)).append("\n");
    sb.append("    expiredate: ").append(toIndentedString(expiredate)).append("\n");
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
