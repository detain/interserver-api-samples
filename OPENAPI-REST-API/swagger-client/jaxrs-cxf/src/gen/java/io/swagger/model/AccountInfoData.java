package io.swagger.model;

import io.swagger.model.AccountInfoDataCcs;
import io.swagger.model.AccountInfoDataEmailSettings;
import io.swagger.model.AccountInfoDataExtra;
import io.swagger.model.AccountInfoDataFraudrecord;
import io.swagger.model.AccountInfoMaxMindResponse;
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
  * Detailed account profile data including contact info, billing, API keys, and security settings.
 **/
@Schema(description="Detailed account profile data including contact info, billing, API keys, and security settings.")
public class AccountInfoData   {
  
  @Schema(description = "")
  private String group = null;
  
  @Schema(description = "")
  private String address = null;
  
  @Schema(description = "")
  private String city = null;
  
  @Schema(description = "")
  private String country = null;
  
  @Schema(description = "")
  private String disableCc = null;
  
  @Schema(description = "")
  private String fraudrecordScore = null;
  
  @Schema(description = "")
  private String ima = null;
  
  @Schema(description = "")
  private String name = null;
  
  @Schema(description = "")
  private String paymentMethod = null;
  
  @Schema(description = "")
  private String phone = null;
  
  @Schema(description = "")
  private String pin = null;
  
  @Schema(description = "")
  private String state = null;
  
  @Schema(description = "")
  private String status = null;
  
  @Schema(description = "")
  private String zip = null;
  
  @Schema(description = "")
  private String accountId = null;
  
  @Schema(description = "")
  private String accountLid = null;
  
  @Schema(description = "")
  private String address2 = null;
  
  @Schema(description = "")
  private String affiliateDockDescription = null;
  
  @Schema(description = "")
  private String affiliateDockTitle = null;
  
  @Schema(description = "")
  private String affiliatePaymentMethod = null;
  
  @Schema(description = "")
  private String affiliatePaypal = null;
  
  @Schema(description = "")
  private String cc = null;
  
  @Schema(description = "")
  private String ccAuto = null;
  
  @Schema(description = "")
  private String ccExp = null;
  
  @Schema(description = "")
  private String ccType = null;
  
  @Schema(description = "")
  private String ccWhitelist = null;
  
  @Schema(description = "")
  private AccountInfoDataCcs ccs = null;
  
  @Schema(description = "")
  private String ccsAdded = null;
  
  @Schema(description = "")
  private String company = null;
  
  @Schema(description = "")
  private String currency = null;
  
  @Schema(description = "")
  private String disableReinstall = null;
  
  @Schema(description = "")
  private String disableReset = null;
  
  @Schema(description = "")
  private String email = null;
  
  @Schema(description = "")
  private String emailAbuse = null;
  
  @Schema(description = "")
  private AccountInfoDataEmailSettings emailSettings = null;
  
  @Schema(description = "")
  private AccountInfoDataExtra extra = null;
  
  @Schema(description = "")
  private String facebookId = null;
  
  @Schema(description = "")
  private String facebookUrl = null;
  
  @Schema(description = "")
  private String firstname = null;
  
  @Schema(description = "")
  private AccountInfoDataFraudrecord fraudrecord = null;
  
  @Schema(description = "")
  private String githubId = null;
  
  @Schema(description = "")
  private String githubUrl = null;
  
  @Schema(description = "")
  private String googleId = null;
  
  @Schema(description = "")
  private String googleUrl = null;
  
  @Schema(description = "")
  private String innertellId = null;
  
  @Schema(description = "")
  private String lastname = null;
  
  @Schema(description = "")
  private String locale = null;
  
  @Schema(description = "")
  private AccountInfoMaxMindResponse maxmind = null;
  
  @Schema(description = "")
  private String maxmindScore = null;
  
  @Schema(description = "")
  private String mbId = null;
  
  @Schema(description = "")
  private String modernbillId = null;
  
  @Schema(description = "")
  private String picture = null;
  
  @Schema(description = "")
  private String referrerCoupon = null;
  
  @Schema(description = "")
  private String resellerMarkup = null;
  
  @Schema(description = "")
  private String username = null;
  
  @Schema(description = "")
  private String sshKey = null;
  
  @Schema(description = "")
  private String sshKeyWrapped = null;
  
  @Schema(description = "")
  private String apiKey = null;
  
  @Schema(description = "")
  private String apiKeyWrapped = null;
  
  @Schema(description = "")
  private String _2faGoogleKey = null;
  
  @Schema(description = "")
  private Boolean _2faGoogleEnabled = null;
  
  @Schema(description = "")
  private Integer _2faGoogle = null;
  
  @Schema(description = "")
  private String _2faGoogleSplit = null;
  
  @Schema(description = "")
  private String _2faGoogleQr = null;
 /**
   * Get group
   * @return group
  **/
  @JsonProperty("group")
  @NotNull
  public String getGroup() {
    return group;
  }

  public void setGroup(String group) {
    this.group = group;
  }

  public AccountInfoData group(String group) {
    this.group = group;
    return this;
  }

 /**
   * Get address
   * @return address
  **/
  @JsonProperty("address")
  @NotNull
  public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public AccountInfoData address(String address) {
    this.address = address;
    return this;
  }

 /**
   * Get city
   * @return city
  **/
  @JsonProperty("city")
  @NotNull
  public String getCity() {
    return city;
  }

  public void setCity(String city) {
    this.city = city;
  }

  public AccountInfoData city(String city) {
    this.city = city;
    return this;
  }

 /**
   * Get country
   * @return country
  **/
  @JsonProperty("country")
  @NotNull
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public AccountInfoData country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get disableCc
   * @return disableCc
  **/
  @JsonProperty("disable_cc")
  @NotNull
  public String getDisableCc() {
    return disableCc;
  }

  public void setDisableCc(String disableCc) {
    this.disableCc = disableCc;
  }

  public AccountInfoData disableCc(String disableCc) {
    this.disableCc = disableCc;
    return this;
  }

 /**
   * Get fraudrecordScore
   * @return fraudrecordScore
  **/
  @JsonProperty("fraudrecord_score")
  @NotNull
  public String getFraudrecordScore() {
    return fraudrecordScore;
  }

  public void setFraudrecordScore(String fraudrecordScore) {
    this.fraudrecordScore = fraudrecordScore;
  }

  public AccountInfoData fraudrecordScore(String fraudrecordScore) {
    this.fraudrecordScore = fraudrecordScore;
    return this;
  }

 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  @NotNull
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public AccountInfoData ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AccountInfoData name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get paymentMethod
   * @return paymentMethod
  **/
  @JsonProperty("payment_method")
  @NotNull
  public String getPaymentMethod() {
    return paymentMethod;
  }

  public void setPaymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
  }

  public AccountInfoData paymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
    return this;
  }

 /**
   * Get phone
   * @return phone
  **/
  @JsonProperty("phone")
  @NotNull
  public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public AccountInfoData phone(String phone) {
    this.phone = phone;
    return this;
  }

 /**
   * Get pin
   * @return pin
  **/
  @JsonProperty("pin")
  @NotNull
  public String getPin() {
    return pin;
  }

  public void setPin(String pin) {
    this.pin = pin;
  }

  public AccountInfoData pin(String pin) {
    this.pin = pin;
    return this;
  }

 /**
   * Get state
   * @return state
  **/
  @JsonProperty("state")
  @NotNull
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public AccountInfoData state(String state) {
    this.state = state;
    return this;
  }

 /**
   * Get status
   * @return status
  **/
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public AccountInfoData status(String status) {
    this.status = status;
    return this;
  }

 /**
   * Get zip
   * @return zip
  **/
  @JsonProperty("zip")
  @NotNull
  public String getZip() {
    return zip;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public AccountInfoData zip(String zip) {
    this.zip = zip;
    return this;
  }

 /**
   * Get accountId
   * @return accountId
  **/
  @JsonProperty("account_id")
  @NotNull
  public String getAccountId() {
    return accountId;
  }

  public void setAccountId(String accountId) {
    this.accountId = accountId;
  }

  public AccountInfoData accountId(String accountId) {
    this.accountId = accountId;
    return this;
  }

 /**
   * Get accountLid
   * @return accountLid
  **/
  @JsonProperty("account_lid")
  @NotNull
  public String getAccountLid() {
    return accountLid;
  }

  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  public AccountInfoData accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

 /**
   * Get address2
   * @return address2
  **/
  @JsonProperty("address2")
  @NotNull
  public String getAddress2() {
    return address2;
  }

  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  public AccountInfoData address2(String address2) {
    this.address2 = address2;
    return this;
  }

 /**
   * Get affiliateDockDescription
   * @return affiliateDockDescription
  **/
  @JsonProperty("affiliate_dock_description")
  @NotNull
  public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }

  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  public AccountInfoData affiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
    return this;
  }

 /**
   * Get affiliateDockTitle
   * @return affiliateDockTitle
  **/
  @JsonProperty("affiliate_dock_title")
  @NotNull
  public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }

  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  public AccountInfoData affiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
    return this;
  }

 /**
   * Get affiliatePaymentMethod
   * @return affiliatePaymentMethod
  **/
  @JsonProperty("affiliate_payment_method")
  @NotNull
  public String getAffiliatePaymentMethod() {
    return affiliatePaymentMethod;
  }

  public void setAffiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
  }

  public AccountInfoData affiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
    return this;
  }

 /**
   * Get affiliatePaypal
   * @return affiliatePaypal
  **/
  @JsonProperty("affiliate_paypal")
  @NotNull
  public String getAffiliatePaypal() {
    return affiliatePaypal;
  }

  public void setAffiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
  }

  public AccountInfoData affiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
    return this;
  }

 /**
   * Get cc
   * @return cc
  **/
  @JsonProperty("cc")
  @NotNull
  public String getCc() {
    return cc;
  }

  public void setCc(String cc) {
    this.cc = cc;
  }

  public AccountInfoData cc(String cc) {
    this.cc = cc;
    return this;
  }

 /**
   * Get ccAuto
   * @return ccAuto
  **/
  @JsonProperty("cc_auto")
  @NotNull
  public String getCcAuto() {
    return ccAuto;
  }

  public void setCcAuto(String ccAuto) {
    this.ccAuto = ccAuto;
  }

  public AccountInfoData ccAuto(String ccAuto) {
    this.ccAuto = ccAuto;
    return this;
  }

 /**
   * Get ccExp
   * @return ccExp
  **/
  @JsonProperty("cc_exp")
  @NotNull
  public String getCcExp() {
    return ccExp;
  }

  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  public AccountInfoData ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

 /**
   * Get ccType
   * @return ccType
  **/
  @JsonProperty("cc_type")
  @NotNull
  public String getCcType() {
    return ccType;
  }

  public void setCcType(String ccType) {
    this.ccType = ccType;
  }

  public AccountInfoData ccType(String ccType) {
    this.ccType = ccType;
    return this;
  }

 /**
   * Get ccWhitelist
   * @return ccWhitelist
  **/
  @JsonProperty("cc_whitelist")
  @NotNull
  public String getCcWhitelist() {
    return ccWhitelist;
  }

  public void setCcWhitelist(String ccWhitelist) {
    this.ccWhitelist = ccWhitelist;
  }

  public AccountInfoData ccWhitelist(String ccWhitelist) {
    this.ccWhitelist = ccWhitelist;
    return this;
  }

 /**
   * Get ccs
   * @return ccs
  **/
  @JsonProperty("ccs")
  @NotNull
  public AccountInfoDataCcs getCcs() {
    return ccs;
  }

  public void setCcs(AccountInfoDataCcs ccs) {
    this.ccs = ccs;
  }

  public AccountInfoData ccs(AccountInfoDataCcs ccs) {
    this.ccs = ccs;
    return this;
  }

 /**
   * Get ccsAdded
   * @return ccsAdded
  **/
  @JsonProperty("ccs_added")
  @NotNull
  public String getCcsAdded() {
    return ccsAdded;
  }

  public void setCcsAdded(String ccsAdded) {
    this.ccsAdded = ccsAdded;
  }

  public AccountInfoData ccsAdded(String ccsAdded) {
    this.ccsAdded = ccsAdded;
    return this;
  }

 /**
   * Get company
   * @return company
  **/
  @JsonProperty("company")
  @NotNull
  public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public AccountInfoData company(String company) {
    this.company = company;
    return this;
  }

 /**
   * Get currency
   * @return currency
  **/
  @JsonProperty("currency")
  @NotNull
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public AccountInfoData currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Get disableReinstall
   * @return disableReinstall
  **/
  @JsonProperty("disable_reinstall")
  @NotNull
  public String getDisableReinstall() {
    return disableReinstall;
  }

  public void setDisableReinstall(String disableReinstall) {
    this.disableReinstall = disableReinstall;
  }

  public AccountInfoData disableReinstall(String disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }

 /**
   * Get disableReset
   * @return disableReset
  **/
  @JsonProperty("disable_reset")
  @NotNull
  public String getDisableReset() {
    return disableReset;
  }

  public void setDisableReset(String disableReset) {
    this.disableReset = disableReset;
  }

  public AccountInfoData disableReset(String disableReset) {
    this.disableReset = disableReset;
    return this;
  }

 /**
   * Get email
   * @return email
  **/
  @JsonProperty("email")
  @NotNull
  public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public AccountInfoData email(String email) {
    this.email = email;
    return this;
  }

 /**
   * Get emailAbuse
   * @return emailAbuse
  **/
  @JsonProperty("email_abuse")
  @NotNull
  public String getEmailAbuse() {
    return emailAbuse;
  }

  public void setEmailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
  }

  public AccountInfoData emailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
    return this;
  }

 /**
   * Get emailSettings
   * @return emailSettings
  **/
  @JsonProperty("email_settings")
  @NotNull
  public AccountInfoDataEmailSettings getEmailSettings() {
    return emailSettings;
  }

  public void setEmailSettings(AccountInfoDataEmailSettings emailSettings) {
    this.emailSettings = emailSettings;
  }

  public AccountInfoData emailSettings(AccountInfoDataEmailSettings emailSettings) {
    this.emailSettings = emailSettings;
    return this;
  }

 /**
   * Get extra
   * @return extra
  **/
  @JsonProperty("extra")
  @NotNull
  public AccountInfoDataExtra getExtra() {
    return extra;
  }

  public void setExtra(AccountInfoDataExtra extra) {
    this.extra = extra;
  }

  public AccountInfoData extra(AccountInfoDataExtra extra) {
    this.extra = extra;
    return this;
  }

 /**
   * Get facebookId
   * @return facebookId
  **/
  @JsonProperty("facebook_id")
  @NotNull
  public String getFacebookId() {
    return facebookId;
  }

  public void setFacebookId(String facebookId) {
    this.facebookId = facebookId;
  }

  public AccountInfoData facebookId(String facebookId) {
    this.facebookId = facebookId;
    return this;
  }

 /**
   * Get facebookUrl
   * @return facebookUrl
  **/
  @JsonProperty("facebook_url")
  @NotNull
  public String getFacebookUrl() {
    return facebookUrl;
  }

  public void setFacebookUrl(String facebookUrl) {
    this.facebookUrl = facebookUrl;
  }

  public AccountInfoData facebookUrl(String facebookUrl) {
    this.facebookUrl = facebookUrl;
    return this;
  }

 /**
   * Get firstname
   * @return firstname
  **/
  @JsonProperty("firstname")
  @NotNull
  public String getFirstname() {
    return firstname;
  }

  public void setFirstname(String firstname) {
    this.firstname = firstname;
  }

  public AccountInfoData firstname(String firstname) {
    this.firstname = firstname;
    return this;
  }

 /**
   * Get fraudrecord
   * @return fraudrecord
  **/
  @JsonProperty("fraudrecord")
  @NotNull
  public AccountInfoDataFraudrecord getFraudrecord() {
    return fraudrecord;
  }

  public void setFraudrecord(AccountInfoDataFraudrecord fraudrecord) {
    this.fraudrecord = fraudrecord;
  }

  public AccountInfoData fraudrecord(AccountInfoDataFraudrecord fraudrecord) {
    this.fraudrecord = fraudrecord;
    return this;
  }

 /**
   * Get githubId
   * @return githubId
  **/
  @JsonProperty("github_id")
  @NotNull
  public String getGithubId() {
    return githubId;
  }

  public void setGithubId(String githubId) {
    this.githubId = githubId;
  }

  public AccountInfoData githubId(String githubId) {
    this.githubId = githubId;
    return this;
  }

 /**
   * Get githubUrl
   * @return githubUrl
  **/
  @JsonProperty("github_url")
  @NotNull
  public String getGithubUrl() {
    return githubUrl;
  }

  public void setGithubUrl(String githubUrl) {
    this.githubUrl = githubUrl;
  }

  public AccountInfoData githubUrl(String githubUrl) {
    this.githubUrl = githubUrl;
    return this;
  }

 /**
   * Get googleId
   * @return googleId
  **/
  @JsonProperty("google_id")
  @NotNull
  public String getGoogleId() {
    return googleId;
  }

  public void setGoogleId(String googleId) {
    this.googleId = googleId;
  }

  public AccountInfoData googleId(String googleId) {
    this.googleId = googleId;
    return this;
  }

 /**
   * Get googleUrl
   * @return googleUrl
  **/
  @JsonProperty("google_url")
  @NotNull
  public String getGoogleUrl() {
    return googleUrl;
  }

  public void setGoogleUrl(String googleUrl) {
    this.googleUrl = googleUrl;
  }

  public AccountInfoData googleUrl(String googleUrl) {
    this.googleUrl = googleUrl;
    return this;
  }

 /**
   * Get innertellId
   * @return innertellId
  **/
  @JsonProperty("innertell_id")
  @NotNull
  public String getInnertellId() {
    return innertellId;
  }

  public void setInnertellId(String innertellId) {
    this.innertellId = innertellId;
  }

  public AccountInfoData innertellId(String innertellId) {
    this.innertellId = innertellId;
    return this;
  }

 /**
   * Get lastname
   * @return lastname
  **/
  @JsonProperty("lastname")
  @NotNull
  public String getLastname() {
    return lastname;
  }

  public void setLastname(String lastname) {
    this.lastname = lastname;
  }

  public AccountInfoData lastname(String lastname) {
    this.lastname = lastname;
    return this;
  }

 /**
   * Get locale
   * @return locale
  **/
  @JsonProperty("locale")
  @NotNull
  public String getLocale() {
    return locale;
  }

  public void setLocale(String locale) {
    this.locale = locale;
  }

  public AccountInfoData locale(String locale) {
    this.locale = locale;
    return this;
  }

 /**
   * Get maxmind
   * @return maxmind
  **/
  @JsonProperty("maxmind")
  @NotNull
  public AccountInfoMaxMindResponse getMaxmind() {
    return maxmind;
  }

  public void setMaxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
  }

  public AccountInfoData maxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
    return this;
  }

 /**
   * Get maxmindScore
   * @return maxmindScore
  **/
  @JsonProperty("maxmind_score")
  @NotNull
  public String getMaxmindScore() {
    return maxmindScore;
  }

  public void setMaxmindScore(String maxmindScore) {
    this.maxmindScore = maxmindScore;
  }

  public AccountInfoData maxmindScore(String maxmindScore) {
    this.maxmindScore = maxmindScore;
    return this;
  }

 /**
   * Get mbId
   * @return mbId
  **/
  @JsonProperty("mb_id")
  @NotNull
  public String getMbId() {
    return mbId;
  }

  public void setMbId(String mbId) {
    this.mbId = mbId;
  }

  public AccountInfoData mbId(String mbId) {
    this.mbId = mbId;
    return this;
  }

 /**
   * Get modernbillId
   * @return modernbillId
  **/
  @JsonProperty("modernbill_id")
  @NotNull
  public String getModernbillId() {
    return modernbillId;
  }

  public void setModernbillId(String modernbillId) {
    this.modernbillId = modernbillId;
  }

  public AccountInfoData modernbillId(String modernbillId) {
    this.modernbillId = modernbillId;
    return this;
  }

 /**
   * Get picture
   * @return picture
  **/
  @JsonProperty("picture")
  @NotNull
  public String getPicture() {
    return picture;
  }

  public void setPicture(String picture) {
    this.picture = picture;
  }

  public AccountInfoData picture(String picture) {
    this.picture = picture;
    return this;
  }

 /**
   * Get referrerCoupon
   * @return referrerCoupon
  **/
  @JsonProperty("referrer_coupon")
  @NotNull
  public String getReferrerCoupon() {
    return referrerCoupon;
  }

  public void setReferrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
  }

  public AccountInfoData referrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
    return this;
  }

 /**
   * Get resellerMarkup
   * @return resellerMarkup
  **/
  @JsonProperty("reseller_markup")
  @NotNull
  public String getResellerMarkup() {
    return resellerMarkup;
  }

  public void setResellerMarkup(String resellerMarkup) {
    this.resellerMarkup = resellerMarkup;
  }

  public AccountInfoData resellerMarkup(String resellerMarkup) {
    this.resellerMarkup = resellerMarkup;
    return this;
  }

 /**
   * Get username
   * @return username
  **/
  @JsonProperty("username")
  @NotNull
  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }

  public AccountInfoData username(String username) {
    this.username = username;
    return this;
  }

 /**
   * Get sshKey
   * @return sshKey
  **/
  @JsonProperty("ssh_key")
  @NotNull
  public String getSshKey() {
    return sshKey;
  }

  public void setSshKey(String sshKey) {
    this.sshKey = sshKey;
  }

  public AccountInfoData sshKey(String sshKey) {
    this.sshKey = sshKey;
    return this;
  }

 /**
   * Get sshKeyWrapped
   * @return sshKeyWrapped
  **/
  @JsonProperty("ssh_key_wrapped")
  @NotNull
  public String getSshKeyWrapped() {
    return sshKeyWrapped;
  }

  public void setSshKeyWrapped(String sshKeyWrapped) {
    this.sshKeyWrapped = sshKeyWrapped;
  }

  public AccountInfoData sshKeyWrapped(String sshKeyWrapped) {
    this.sshKeyWrapped = sshKeyWrapped;
    return this;
  }

 /**
   * Get apiKey
   * @return apiKey
  **/
  @JsonProperty("api_key")
  @NotNull
  public String getApiKey() {
    return apiKey;
  }

  public void setApiKey(String apiKey) {
    this.apiKey = apiKey;
  }

  public AccountInfoData apiKey(String apiKey) {
    this.apiKey = apiKey;
    return this;
  }

 /**
   * Get apiKeyWrapped
   * @return apiKeyWrapped
  **/
  @JsonProperty("api_key_wrapped")
  @NotNull
  public String getApiKeyWrapped() {
    return apiKeyWrapped;
  }

  public void setApiKeyWrapped(String apiKeyWrapped) {
    this.apiKeyWrapped = apiKeyWrapped;
  }

  public AccountInfoData apiKeyWrapped(String apiKeyWrapped) {
    this.apiKeyWrapped = apiKeyWrapped;
    return this;
  }

 /**
   * Get _2faGoogleKey
   * @return _2faGoogleKey
  **/
  @JsonProperty("2fa_google_key")
  @NotNull
  public String get2faGoogleKey() {
    return _2faGoogleKey;
  }

  public void set2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
  }

  public AccountInfoData _2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
    return this;
  }

 /**
   * Get _2faGoogleEnabled
   * @return _2faGoogleEnabled
  **/
  @JsonProperty("2fa_google_enabled")
  @NotNull
  public Boolean is2faGoogleEnabled() {
    return _2faGoogleEnabled;
  }

  public void set2faGoogleEnabled(Boolean _2faGoogleEnabled) {
    this._2faGoogleEnabled = _2faGoogleEnabled;
  }

  public AccountInfoData _2faGoogleEnabled(Boolean _2faGoogleEnabled) {
    this._2faGoogleEnabled = _2faGoogleEnabled;
    return this;
  }

 /**
   * Get _2faGoogle
   * @return _2faGoogle
  **/
  @JsonProperty("2fa_google")
  @NotNull
  public Integer get2faGoogle() {
    return _2faGoogle;
  }

  public void set2faGoogle(Integer _2faGoogle) {
    this._2faGoogle = _2faGoogle;
  }

  public AccountInfoData _2faGoogle(Integer _2faGoogle) {
    this._2faGoogle = _2faGoogle;
    return this;
  }

 /**
   * Get _2faGoogleSplit
   * @return _2faGoogleSplit
  **/
  @JsonProperty("2fa_google_split")
  @NotNull
  public String get2faGoogleSplit() {
    return _2faGoogleSplit;
  }

  public void set2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
  }

  public AccountInfoData _2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
    return this;
  }

 /**
   * Get _2faGoogleQr
   * @return _2faGoogleQr
  **/
  @JsonProperty("2fa_google_qr")
  @NotNull
  public String get2faGoogleQr() {
    return _2faGoogleQr;
  }

  public void set2faGoogleQr(String _2faGoogleQr) {
    this._2faGoogleQr = _2faGoogleQr;
  }

  public AccountInfoData _2faGoogleQr(String _2faGoogleQr) {
    this._2faGoogleQr = _2faGoogleQr;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoData {\n");
    
    sb.append("    group: ").append(toIndentedString(group)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    disableCc: ").append(toIndentedString(disableCc)).append("\n");
    sb.append("    fraudrecordScore: ").append(toIndentedString(fraudrecordScore)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    paymentMethod: ").append(toIndentedString(paymentMethod)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    pin: ").append(toIndentedString(pin)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    zip: ").append(toIndentedString(zip)).append("\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    accountLid: ").append(toIndentedString(accountLid)).append("\n");
    sb.append("    address2: ").append(toIndentedString(address2)).append("\n");
    sb.append("    affiliateDockDescription: ").append(toIndentedString(affiliateDockDescription)).append("\n");
    sb.append("    affiliateDockTitle: ").append(toIndentedString(affiliateDockTitle)).append("\n");
    sb.append("    affiliatePaymentMethod: ").append(toIndentedString(affiliatePaymentMethod)).append("\n");
    sb.append("    affiliatePaypal: ").append(toIndentedString(affiliatePaypal)).append("\n");
    sb.append("    cc: ").append(toIndentedString(cc)).append("\n");
    sb.append("    ccAuto: ").append(toIndentedString(ccAuto)).append("\n");
    sb.append("    ccExp: ").append(toIndentedString(ccExp)).append("\n");
    sb.append("    ccType: ").append(toIndentedString(ccType)).append("\n");
    sb.append("    ccWhitelist: ").append(toIndentedString(ccWhitelist)).append("\n");
    sb.append("    ccs: ").append(toIndentedString(ccs)).append("\n");
    sb.append("    ccsAdded: ").append(toIndentedString(ccsAdded)).append("\n");
    sb.append("    company: ").append(toIndentedString(company)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    disableReinstall: ").append(toIndentedString(disableReinstall)).append("\n");
    sb.append("    disableReset: ").append(toIndentedString(disableReset)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    emailAbuse: ").append(toIndentedString(emailAbuse)).append("\n");
    sb.append("    emailSettings: ").append(toIndentedString(emailSettings)).append("\n");
    sb.append("    extra: ").append(toIndentedString(extra)).append("\n");
    sb.append("    facebookId: ").append(toIndentedString(facebookId)).append("\n");
    sb.append("    facebookUrl: ").append(toIndentedString(facebookUrl)).append("\n");
    sb.append("    firstname: ").append(toIndentedString(firstname)).append("\n");
    sb.append("    fraudrecord: ").append(toIndentedString(fraudrecord)).append("\n");
    sb.append("    githubId: ").append(toIndentedString(githubId)).append("\n");
    sb.append("    githubUrl: ").append(toIndentedString(githubUrl)).append("\n");
    sb.append("    googleId: ").append(toIndentedString(googleId)).append("\n");
    sb.append("    googleUrl: ").append(toIndentedString(googleUrl)).append("\n");
    sb.append("    innertellId: ").append(toIndentedString(innertellId)).append("\n");
    sb.append("    lastname: ").append(toIndentedString(lastname)).append("\n");
    sb.append("    locale: ").append(toIndentedString(locale)).append("\n");
    sb.append("    maxmind: ").append(toIndentedString(maxmind)).append("\n");
    sb.append("    maxmindScore: ").append(toIndentedString(maxmindScore)).append("\n");
    sb.append("    mbId: ").append(toIndentedString(mbId)).append("\n");
    sb.append("    modernbillId: ").append(toIndentedString(modernbillId)).append("\n");
    sb.append("    picture: ").append(toIndentedString(picture)).append("\n");
    sb.append("    referrerCoupon: ").append(toIndentedString(referrerCoupon)).append("\n");
    sb.append("    resellerMarkup: ").append(toIndentedString(resellerMarkup)).append("\n");
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
    sb.append("    sshKey: ").append(toIndentedString(sshKey)).append("\n");
    sb.append("    sshKeyWrapped: ").append(toIndentedString(sshKeyWrapped)).append("\n");
    sb.append("    apiKey: ").append(toIndentedString(apiKey)).append("\n");
    sb.append("    apiKeyWrapped: ").append(toIndentedString(apiKeyWrapped)).append("\n");
    sb.append("    _2faGoogleKey: ").append(toIndentedString(_2faGoogleKey)).append("\n");
    sb.append("    _2faGoogleEnabled: ").append(toIndentedString(_2faGoogleEnabled)).append("\n");
    sb.append("    _2faGoogle: ").append(toIndentedString(_2faGoogle)).append("\n");
    sb.append("    _2faGoogleSplit: ").append(toIndentedString(_2faGoogleSplit)).append("\n");
    sb.append("    _2faGoogleQr: ").append(toIndentedString(_2faGoogleQr)).append("\n");
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
