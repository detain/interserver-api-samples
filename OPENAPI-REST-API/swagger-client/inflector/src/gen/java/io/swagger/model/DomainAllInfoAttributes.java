package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainAllInfoAttributesContactSet;
import io.swagger.model.DomainNameServer;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class DomainAllInfoAttributes   {
  @JsonProperty("contact_set")
  private DomainAllInfoAttributesContactSet contactSet = null;
  @JsonProperty("registry_createdate")
  private String registryCreatedate = null;
  @JsonProperty("registry_expiredate")
  private String registryExpiredate = null;
  @JsonProperty("tld_data")
  private String tldData = null;
  @JsonProperty("let_expire")
  private String letExpire = null;
  @JsonProperty("auto_renew")
  private String autoRenew = null;
  @JsonProperty("sponsoring_rsp")
  private String sponsoringRsp = null;
  @JsonProperty("gdpr_consent_status")
  private String gdprConsentStatus = null;
  @JsonProperty("nameserver_list")
  private List<DomainNameServer> nameserverList = null;
  @JsonProperty("registry_updatedate")
  private String registryUpdatedate = null;
  @JsonProperty("affiliate_id")
  private String affiliateId = null;
  @JsonProperty("expiredate")
  private String expiredate = null;
  /**
   **/
  public DomainAllInfoAttributes contactSet(DomainAllInfoAttributesContactSet contactSet) {
    this.contactSet = contactSet;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("contact_set")
  public DomainAllInfoAttributesContactSet getContactSet() {
    return contactSet;
  }
  public void setContactSet(DomainAllInfoAttributesContactSet contactSet) {
    this.contactSet = contactSet;
  }

  /**
   **/
  public DomainAllInfoAttributes registryCreatedate(String registryCreatedate) {
    this.registryCreatedate = registryCreatedate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("registry_createdate")
  public String getRegistryCreatedate() {
    return registryCreatedate;
  }
  public void setRegistryCreatedate(String registryCreatedate) {
    this.registryCreatedate = registryCreatedate;
  }

  /**
   **/
  public DomainAllInfoAttributes registryExpiredate(String registryExpiredate) {
    this.registryExpiredate = registryExpiredate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("registry_expiredate")
  public String getRegistryExpiredate() {
    return registryExpiredate;
  }
  public void setRegistryExpiredate(String registryExpiredate) {
    this.registryExpiredate = registryExpiredate;
  }

  /**
   **/
  public DomainAllInfoAttributes tldData(String tldData) {
    this.tldData = tldData;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("tld_data")
  public String getTldData() {
    return tldData;
  }
  public void setTldData(String tldData) {
    this.tldData = tldData;
  }

  /**
   **/
  public DomainAllInfoAttributes letExpire(String letExpire) {
    this.letExpire = letExpire;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("let_expire")
  public String getLetExpire() {
    return letExpire;
  }
  public void setLetExpire(String letExpire) {
    this.letExpire = letExpire;
  }

  /**
   **/
  public DomainAllInfoAttributes autoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("auto_renew")
  public String getAutoRenew() {
    return autoRenew;
  }
  public void setAutoRenew(String autoRenew) {
    this.autoRenew = autoRenew;
  }

  /**
   **/
  public DomainAllInfoAttributes sponsoringRsp(String sponsoringRsp) {
    this.sponsoringRsp = sponsoringRsp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("sponsoring_rsp")
  public String getSponsoringRsp() {
    return sponsoringRsp;
  }
  public void setSponsoringRsp(String sponsoringRsp) {
    this.sponsoringRsp = sponsoringRsp;
  }

  /**
   **/
  public DomainAllInfoAttributes gdprConsentStatus(String gdprConsentStatus) {
    this.gdprConsentStatus = gdprConsentStatus;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("gdpr_consent_status")
  public String getGdprConsentStatus() {
    return gdprConsentStatus;
  }
  public void setGdprConsentStatus(String gdprConsentStatus) {
    this.gdprConsentStatus = gdprConsentStatus;
  }

  /**
   **/
  public DomainAllInfoAttributes nameserverList(List<DomainNameServer> nameserverList) {
    this.nameserverList = nameserverList;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("nameserver_list")
  public List<DomainNameServer> getNameserverList() {
    return nameserverList;
  }
  public void setNameserverList(List<DomainNameServer> nameserverList) {
    this.nameserverList = nameserverList;
  }

  /**
   **/
  public DomainAllInfoAttributes registryUpdatedate(String registryUpdatedate) {
    this.registryUpdatedate = registryUpdatedate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("registry_updatedate")
  public String getRegistryUpdatedate() {
    return registryUpdatedate;
  }
  public void setRegistryUpdatedate(String registryUpdatedate) {
    this.registryUpdatedate = registryUpdatedate;
  }

  /**
   **/
  public DomainAllInfoAttributes affiliateId(String affiliateId) {
    this.affiliateId = affiliateId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("affiliate_id")
  public String getAffiliateId() {
    return affiliateId;
  }
  public void setAffiliateId(String affiliateId) {
    this.affiliateId = affiliateId;
  }

  /**
   **/
  public DomainAllInfoAttributes expiredate(String expiredate) {
    this.expiredate = expiredate;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("expiredate")
  public String getExpiredate() {
    return expiredate;
  }
  public void setExpiredate(String expiredate) {
    this.expiredate = expiredate;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainAllInfoAttributes domainAllInfoAttributes = (DomainAllInfoAttributes) o;
    return Objects.equals(contactSet, domainAllInfoAttributes.contactSet) &&
        Objects.equals(registryCreatedate, domainAllInfoAttributes.registryCreatedate) &&
        Objects.equals(registryExpiredate, domainAllInfoAttributes.registryExpiredate) &&
        Objects.equals(tldData, domainAllInfoAttributes.tldData) &&
        Objects.equals(letExpire, domainAllInfoAttributes.letExpire) &&
        Objects.equals(autoRenew, domainAllInfoAttributes.autoRenew) &&
        Objects.equals(sponsoringRsp, domainAllInfoAttributes.sponsoringRsp) &&
        Objects.equals(gdprConsentStatus, domainAllInfoAttributes.gdprConsentStatus) &&
        Objects.equals(nameserverList, domainAllInfoAttributes.nameserverList) &&
        Objects.equals(registryUpdatedate, domainAllInfoAttributes.registryUpdatedate) &&
        Objects.equals(affiliateId, domainAllInfoAttributes.affiliateId) &&
        Objects.equals(expiredate, domainAllInfoAttributes.expiredate);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
