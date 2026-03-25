package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.DomainAllInfoAttributesContactSet;
import org.openapitools.model.DomainNameServer;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainAllInfoAttributes  {
  
  @ApiModelProperty(value = "")

  private DomainAllInfoAttributesContactSet contactSet;

  @ApiModelProperty(value = "")

  private String registryCreatedate;

  @ApiModelProperty(value = "")

  private String registryExpiredate;

  @ApiModelProperty(value = "")

  private String tldData;

  @ApiModelProperty(value = "")

  private String letExpire;

  @ApiModelProperty(value = "")

  private String autoRenew;

  @ApiModelProperty(value = "")

  private String sponsoringRsp;

  @ApiModelProperty(value = "")

  private String gdprConsentStatus;

  @ApiModelProperty(value = "")

  private List<DomainNameServer> nameserverList = new ArrayList<>();

  @ApiModelProperty(value = "")

  private String registryUpdatedate;

  @ApiModelProperty(value = "")

  private String affiliateId;

  @ApiModelProperty(value = "")

  private String expiredate;
 /**
   * Get contactSet
   * @return contactSet
  **/
  @JsonProperty("contact_set")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainAllInfoAttributes domainAllInfoAttributes = (DomainAllInfoAttributes) o;
    return Objects.equals(this.contactSet, domainAllInfoAttributes.contactSet) &&
        Objects.equals(this.registryCreatedate, domainAllInfoAttributes.registryCreatedate) &&
        Objects.equals(this.registryExpiredate, domainAllInfoAttributes.registryExpiredate) &&
        Objects.equals(this.tldData, domainAllInfoAttributes.tldData) &&
        Objects.equals(this.letExpire, domainAllInfoAttributes.letExpire) &&
        Objects.equals(this.autoRenew, domainAllInfoAttributes.autoRenew) &&
        Objects.equals(this.sponsoringRsp, domainAllInfoAttributes.sponsoringRsp) &&
        Objects.equals(this.gdprConsentStatus, domainAllInfoAttributes.gdprConsentStatus) &&
        Objects.equals(this.nameserverList, domainAllInfoAttributes.nameserverList) &&
        Objects.equals(this.registryUpdatedate, domainAllInfoAttributes.registryUpdatedate) &&
        Objects.equals(this.affiliateId, domainAllInfoAttributes.affiliateId) &&
        Objects.equals(this.expiredate, domainAllInfoAttributes.expiredate);
  }

  @Override
  public int hashCode() {
    return Objects.hash(contactSet, registryCreatedate, registryExpiredate, tldData, letExpire, autoRenew, sponsoringRsp, gdprConsentStatus, nameserverList, registryUpdatedate, affiliateId, expiredate);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

