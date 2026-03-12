package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AccountInfoDataCcs;
import io.swagger.model.AccountInfoDataEmailSettings;
import io.swagger.model.AccountInfoDataExtra;
import io.swagger.model.AccountInfoDataFraudrecord;
import io.swagger.model.AccountInfoMaxMindResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Detailed account profile data including contact info, billing, API keys, and security settings.")

public class AccountInfoData   {
  private String group = null;
  private String address = null;
  private String city = null;
  private String country = null;
  private String disableCc = null;
  private String fraudrecordScore = null;
  private String ima = null;
  private String name = null;
  private String paymentMethod = null;
  private String phone = null;
  private String pin = null;
  private String state = null;
  private String status = null;
  private String zip = null;
  private String accountId = null;
  private String accountLid = null;
  private String address2 = null;
  private String affiliateDockDescription = null;
  private String affiliateDockTitle = null;
  private String affiliatePaymentMethod = null;
  private String affiliatePaypal = null;
  private String cc = null;
  private String ccAuto = null;
  private String ccExp = null;
  private String ccType = null;
  private String ccWhitelist = null;
  private AccountInfoDataCcs ccs = null;
  private String ccsAdded = null;
  private String company = null;
  private String currency = null;
  private String disableReinstall = null;
  private String disableReset = null;
  private String email = null;
  private String emailAbuse = null;
  private AccountInfoDataEmailSettings emailSettings = null;
  private AccountInfoDataExtra extra = null;
  private String facebookId = null;
  private String facebookUrl = null;
  private String firstname = null;
  private AccountInfoDataFraudrecord fraudrecord = null;
  private String githubId = null;
  private String githubUrl = null;
  private String googleId = null;
  private String googleUrl = null;
  private String innertellId = null;
  private String lastname = null;
  private String locale = null;
  private AccountInfoMaxMindResponse maxmind = null;
  private String maxmindScore = null;
  private String mbId = null;
  private String modernbillId = null;
  private String picture = null;
  private String referrerCoupon = null;
  private String resellerMarkup = null;
  private String username = null;
  private String sshKey = null;
  private String sshKeyWrapped = null;
  private String apiKey = null;
  private String apiKeyWrapped = null;
  private String _2faGoogleKey = null;
  private Boolean _2faGoogleEnabled = null;
  private Integer _2faGoogle = null;
  private String _2faGoogleSplit = null;
  private String _2faGoogleQr = null;

  /**
   **/
  public AccountInfoData group(String group) {
    this.group = group;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("group")
  @NotNull
  public String getGroup() {
    return group;
  }
  public void setGroup(String group) {
    this.group = group;
  }

  /**
   **/
  public AccountInfoData address(String address) {
    this.address = address;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("address")
  @NotNull
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  /**
   **/
  public AccountInfoData city(String city) {
    this.city = city;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("city")
  @NotNull
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  /**
   **/
  public AccountInfoData country(String country) {
    this.country = country;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("country")
  @NotNull
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   **/
  public AccountInfoData disableCc(String disableCc) {
    this.disableCc = disableCc;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("disable_cc")
  @NotNull
  public String getDisableCc() {
    return disableCc;
  }
  public void setDisableCc(String disableCc) {
    this.disableCc = disableCc;
  }

  /**
   **/
  public AccountInfoData fraudrecordScore(String fraudrecordScore) {
    this.fraudrecordScore = fraudrecordScore;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("fraudrecord_score")
  @NotNull
  public String getFraudrecordScore() {
    return fraudrecordScore;
  }
  public void setFraudrecordScore(String fraudrecordScore) {
    this.fraudrecordScore = fraudrecordScore;
  }

  /**
   **/
  public AccountInfoData ima(String ima) {
    this.ima = ima;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ima")
  @NotNull
  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  public AccountInfoData name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public AccountInfoData paymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("payment_method")
  @NotNull
  public String getPaymentMethod() {
    return paymentMethod;
  }
  public void setPaymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
  }

  /**
   **/
  public AccountInfoData phone(String phone) {
    this.phone = phone;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("phone")
  @NotNull
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  /**
   **/
  public AccountInfoData pin(String pin) {
    this.pin = pin;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("pin")
  @NotNull
  public String getPin() {
    return pin;
  }
  public void setPin(String pin) {
    this.pin = pin;
  }

  /**
   **/
  public AccountInfoData state(String state) {
    this.state = state;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("state")
  @NotNull
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   **/
  public AccountInfoData status(String status) {
    this.status = status;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public AccountInfoData zip(String zip) {
    this.zip = zip;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("zip")
  @NotNull
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  /**
   **/
  public AccountInfoData accountId(String accountId) {
    this.accountId = accountId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("account_id")
  @NotNull
  public String getAccountId() {
    return accountId;
  }
  public void setAccountId(String accountId) {
    this.accountId = accountId;
  }

  /**
   **/
  public AccountInfoData accountLid(String accountLid) {
    this.accountLid = accountLid;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("account_lid")
  @NotNull
  public String getAccountLid() {
    return accountLid;
  }
  public void setAccountLid(String accountLid) {
    this.accountLid = accountLid;
  }

  /**
   **/
  public AccountInfoData address2(String address2) {
    this.address2 = address2;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("address2")
  @NotNull
  public String getAddress2() {
    return address2;
  }
  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  /**
   **/
  public AccountInfoData affiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_description")
  @NotNull
  public String getAffiliateDockDescription() {
    return affiliateDockDescription;
  }
  public void setAffiliateDockDescription(String affiliateDockDescription) {
    this.affiliateDockDescription = affiliateDockDescription;
  }

  /**
   **/
  public AccountInfoData affiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("affiliate_dock_title")
  @NotNull
  public String getAffiliateDockTitle() {
    return affiliateDockTitle;
  }
  public void setAffiliateDockTitle(String affiliateDockTitle) {
    this.affiliateDockTitle = affiliateDockTitle;
  }

  /**
   **/
  public AccountInfoData affiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("affiliate_payment_method")
  @NotNull
  public String getAffiliatePaymentMethod() {
    return affiliatePaymentMethod;
  }
  public void setAffiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
  }

  /**
   **/
  public AccountInfoData affiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("affiliate_paypal")
  @NotNull
  public String getAffiliatePaypal() {
    return affiliatePaypal;
  }
  public void setAffiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
  }

  /**
   **/
  public AccountInfoData cc(String cc) {
    this.cc = cc;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cc")
  @NotNull
  public String getCc() {
    return cc;
  }
  public void setCc(String cc) {
    this.cc = cc;
  }

  /**
   **/
  public AccountInfoData ccAuto(String ccAuto) {
    this.ccAuto = ccAuto;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cc_auto")
  @NotNull
  public String getCcAuto() {
    return ccAuto;
  }
  public void setCcAuto(String ccAuto) {
    this.ccAuto = ccAuto;
  }

  /**
   **/
  public AccountInfoData ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cc_exp")
  @NotNull
  public String getCcExp() {
    return ccExp;
  }
  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  /**
   **/
  public AccountInfoData ccType(String ccType) {
    this.ccType = ccType;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cc_type")
  @NotNull
  public String getCcType() {
    return ccType;
  }
  public void setCcType(String ccType) {
    this.ccType = ccType;
  }

  /**
   **/
  public AccountInfoData ccWhitelist(String ccWhitelist) {
    this.ccWhitelist = ccWhitelist;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("cc_whitelist")
  @NotNull
  public String getCcWhitelist() {
    return ccWhitelist;
  }
  public void setCcWhitelist(String ccWhitelist) {
    this.ccWhitelist = ccWhitelist;
  }

  /**
   **/
  public AccountInfoData ccs(AccountInfoDataCcs ccs) {
    this.ccs = ccs;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ccs")
  @NotNull
  @Valid
  public AccountInfoDataCcs getCcs() {
    return ccs;
  }
  public void setCcs(AccountInfoDataCcs ccs) {
    this.ccs = ccs;
  }

  /**
   **/
  public AccountInfoData ccsAdded(String ccsAdded) {
    this.ccsAdded = ccsAdded;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ccs_added")
  @NotNull
  public String getCcsAdded() {
    return ccsAdded;
  }
  public void setCcsAdded(String ccsAdded) {
    this.ccsAdded = ccsAdded;
  }

  /**
   **/
  public AccountInfoData company(String company) {
    this.company = company;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("company")
  @NotNull
  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  /**
   **/
  public AccountInfoData currency(String currency) {
    this.currency = currency;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("currency")
  @NotNull
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  public AccountInfoData disableReinstall(String disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("disable_reinstall")
  @NotNull
  public String getDisableReinstall() {
    return disableReinstall;
  }
  public void setDisableReinstall(String disableReinstall) {
    this.disableReinstall = disableReinstall;
  }

  /**
   **/
  public AccountInfoData disableReset(String disableReset) {
    this.disableReset = disableReset;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("disable_reset")
  @NotNull
  public String getDisableReset() {
    return disableReset;
  }
  public void setDisableReset(String disableReset) {
    this.disableReset = disableReset;
  }

  /**
   **/
  public AccountInfoData email(String email) {
    this.email = email;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("email")
  @NotNull
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   **/
  public AccountInfoData emailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("email_abuse")
  @NotNull
  public String getEmailAbuse() {
    return emailAbuse;
  }
  public void setEmailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
  }

  /**
   **/
  public AccountInfoData emailSettings(AccountInfoDataEmailSettings emailSettings) {
    this.emailSettings = emailSettings;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("email_settings")
  @NotNull
  @Valid
  public AccountInfoDataEmailSettings getEmailSettings() {
    return emailSettings;
  }
  public void setEmailSettings(AccountInfoDataEmailSettings emailSettings) {
    this.emailSettings = emailSettings;
  }

  /**
   **/
  public AccountInfoData extra(AccountInfoDataExtra extra) {
    this.extra = extra;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("extra")
  @NotNull
  @Valid
  public AccountInfoDataExtra getExtra() {
    return extra;
  }
  public void setExtra(AccountInfoDataExtra extra) {
    this.extra = extra;
  }

  /**
   **/
  public AccountInfoData facebookId(String facebookId) {
    this.facebookId = facebookId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("facebook_id")
  @NotNull
  public String getFacebookId() {
    return facebookId;
  }
  public void setFacebookId(String facebookId) {
    this.facebookId = facebookId;
  }

  /**
   **/
  public AccountInfoData facebookUrl(String facebookUrl) {
    this.facebookUrl = facebookUrl;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("facebook_url")
  @NotNull
  public String getFacebookUrl() {
    return facebookUrl;
  }
  public void setFacebookUrl(String facebookUrl) {
    this.facebookUrl = facebookUrl;
  }

  /**
   **/
  public AccountInfoData firstname(String firstname) {
    this.firstname = firstname;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("firstname")
  @NotNull
  public String getFirstname() {
    return firstname;
  }
  public void setFirstname(String firstname) {
    this.firstname = firstname;
  }

  /**
   **/
  public AccountInfoData fraudrecord(AccountInfoDataFraudrecord fraudrecord) {
    this.fraudrecord = fraudrecord;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("fraudrecord")
  @NotNull
  @Valid
  public AccountInfoDataFraudrecord getFraudrecord() {
    return fraudrecord;
  }
  public void setFraudrecord(AccountInfoDataFraudrecord fraudrecord) {
    this.fraudrecord = fraudrecord;
  }

  /**
   **/
  public AccountInfoData githubId(String githubId) {
    this.githubId = githubId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("github_id")
  @NotNull
  public String getGithubId() {
    return githubId;
  }
  public void setGithubId(String githubId) {
    this.githubId = githubId;
  }

  /**
   **/
  public AccountInfoData githubUrl(String githubUrl) {
    this.githubUrl = githubUrl;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("github_url")
  @NotNull
  public String getGithubUrl() {
    return githubUrl;
  }
  public void setGithubUrl(String githubUrl) {
    this.githubUrl = githubUrl;
  }

  /**
   **/
  public AccountInfoData googleId(String googleId) {
    this.googleId = googleId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("google_id")
  @NotNull
  public String getGoogleId() {
    return googleId;
  }
  public void setGoogleId(String googleId) {
    this.googleId = googleId;
  }

  /**
   **/
  public AccountInfoData googleUrl(String googleUrl) {
    this.googleUrl = googleUrl;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("google_url")
  @NotNull
  public String getGoogleUrl() {
    return googleUrl;
  }
  public void setGoogleUrl(String googleUrl) {
    this.googleUrl = googleUrl;
  }

  /**
   **/
  public AccountInfoData innertellId(String innertellId) {
    this.innertellId = innertellId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("innertell_id")
  @NotNull
  public String getInnertellId() {
    return innertellId;
  }
  public void setInnertellId(String innertellId) {
    this.innertellId = innertellId;
  }

  /**
   **/
  public AccountInfoData lastname(String lastname) {
    this.lastname = lastname;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("lastname")
  @NotNull
  public String getLastname() {
    return lastname;
  }
  public void setLastname(String lastname) {
    this.lastname = lastname;
  }

  /**
   **/
  public AccountInfoData locale(String locale) {
    this.locale = locale;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("locale")
  @NotNull
  public String getLocale() {
    return locale;
  }
  public void setLocale(String locale) {
    this.locale = locale;
  }

  /**
   **/
  public AccountInfoData maxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("maxmind")
  @NotNull
  @Valid
  public AccountInfoMaxMindResponse getMaxmind() {
    return maxmind;
  }
  public void setMaxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
  }

  /**
   **/
  public AccountInfoData maxmindScore(String maxmindScore) {
    this.maxmindScore = maxmindScore;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("maxmind_score")
  @NotNull
  public String getMaxmindScore() {
    return maxmindScore;
  }
  public void setMaxmindScore(String maxmindScore) {
    this.maxmindScore = maxmindScore;
  }

  /**
   **/
  public AccountInfoData mbId(String mbId) {
    this.mbId = mbId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("mb_id")
  @NotNull
  public String getMbId() {
    return mbId;
  }
  public void setMbId(String mbId) {
    this.mbId = mbId;
  }

  /**
   **/
  public AccountInfoData modernbillId(String modernbillId) {
    this.modernbillId = modernbillId;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("modernbill_id")
  @NotNull
  public String getModernbillId() {
    return modernbillId;
  }
  public void setModernbillId(String modernbillId) {
    this.modernbillId = modernbillId;
  }

  /**
   **/
  public AccountInfoData picture(String picture) {
    this.picture = picture;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("picture")
  @NotNull
  public String getPicture() {
    return picture;
  }
  public void setPicture(String picture) {
    this.picture = picture;
  }

  /**
   **/
  public AccountInfoData referrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("referrer_coupon")
  @NotNull
  public String getReferrerCoupon() {
    return referrerCoupon;
  }
  public void setReferrerCoupon(String referrerCoupon) {
    this.referrerCoupon = referrerCoupon;
  }

  /**
   **/
  public AccountInfoData resellerMarkup(String resellerMarkup) {
    this.resellerMarkup = resellerMarkup;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("reseller_markup")
  @NotNull
  public String getResellerMarkup() {
    return resellerMarkup;
  }
  public void setResellerMarkup(String resellerMarkup) {
    this.resellerMarkup = resellerMarkup;
  }

  /**
   **/
  public AccountInfoData username(String username) {
    this.username = username;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("username")
  @NotNull
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  /**
   **/
  public AccountInfoData sshKey(String sshKey) {
    this.sshKey = sshKey;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ssh_key")
  @NotNull
  public String getSshKey() {
    return sshKey;
  }
  public void setSshKey(String sshKey) {
    this.sshKey = sshKey;
  }

  /**
   **/
  public AccountInfoData sshKeyWrapped(String sshKeyWrapped) {
    this.sshKeyWrapped = sshKeyWrapped;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("ssh_key_wrapped")
  @NotNull
  public String getSshKeyWrapped() {
    return sshKeyWrapped;
  }
  public void setSshKeyWrapped(String sshKeyWrapped) {
    this.sshKeyWrapped = sshKeyWrapped;
  }

  /**
   **/
  public AccountInfoData apiKey(String apiKey) {
    this.apiKey = apiKey;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("api_key")
  @NotNull
  public String getApiKey() {
    return apiKey;
  }
  public void setApiKey(String apiKey) {
    this.apiKey = apiKey;
  }

  /**
   **/
  public AccountInfoData apiKeyWrapped(String apiKeyWrapped) {
    this.apiKeyWrapped = apiKeyWrapped;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("api_key_wrapped")
  @NotNull
  public String getApiKeyWrapped() {
    return apiKeyWrapped;
  }
  public void setApiKeyWrapped(String apiKeyWrapped) {
    this.apiKeyWrapped = apiKeyWrapped;
  }

  /**
   **/
  public AccountInfoData _2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("2fa_google_key")
  @NotNull
  public String get2faGoogleKey() {
    return _2faGoogleKey;
  }
  public void set2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
  }

  /**
   **/
  public AccountInfoData _2faGoogleEnabled(Boolean _2faGoogleEnabled) {
    this._2faGoogleEnabled = _2faGoogleEnabled;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("2fa_google_enabled")
  @NotNull
  public Boolean is2faGoogleEnabled() {
    return _2faGoogleEnabled;
  }
  public void set2faGoogleEnabled(Boolean _2faGoogleEnabled) {
    this._2faGoogleEnabled = _2faGoogleEnabled;
  }

  /**
   **/
  public AccountInfoData _2faGoogle(Integer _2faGoogle) {
    this._2faGoogle = _2faGoogle;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("2fa_google")
  @NotNull
  public Integer get2faGoogle() {
    return _2faGoogle;
  }
  public void set2faGoogle(Integer _2faGoogle) {
    this._2faGoogle = _2faGoogle;
  }

  /**
   **/
  public AccountInfoData _2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("2fa_google_split")
  @NotNull
  public String get2faGoogleSplit() {
    return _2faGoogleSplit;
  }
  public void set2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
  }

  /**
   **/
  public AccountInfoData _2faGoogleQr(String _2faGoogleQr) {
    this._2faGoogleQr = _2faGoogleQr;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("2fa_google_qr")
  @NotNull
  public String get2faGoogleQr() {
    return _2faGoogleQr;
  }
  public void set2faGoogleQr(String _2faGoogleQr) {
    this._2faGoogleQr = _2faGoogleQr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoData accountInfoData = (AccountInfoData) o;
    return Objects.equals(group, accountInfoData.group) &&
        Objects.equals(address, accountInfoData.address) &&
        Objects.equals(city, accountInfoData.city) &&
        Objects.equals(country, accountInfoData.country) &&
        Objects.equals(disableCc, accountInfoData.disableCc) &&
        Objects.equals(fraudrecordScore, accountInfoData.fraudrecordScore) &&
        Objects.equals(ima, accountInfoData.ima) &&
        Objects.equals(name, accountInfoData.name) &&
        Objects.equals(paymentMethod, accountInfoData.paymentMethod) &&
        Objects.equals(phone, accountInfoData.phone) &&
        Objects.equals(pin, accountInfoData.pin) &&
        Objects.equals(state, accountInfoData.state) &&
        Objects.equals(status, accountInfoData.status) &&
        Objects.equals(zip, accountInfoData.zip) &&
        Objects.equals(accountId, accountInfoData.accountId) &&
        Objects.equals(accountLid, accountInfoData.accountLid) &&
        Objects.equals(address2, accountInfoData.address2) &&
        Objects.equals(affiliateDockDescription, accountInfoData.affiliateDockDescription) &&
        Objects.equals(affiliateDockTitle, accountInfoData.affiliateDockTitle) &&
        Objects.equals(affiliatePaymentMethod, accountInfoData.affiliatePaymentMethod) &&
        Objects.equals(affiliatePaypal, accountInfoData.affiliatePaypal) &&
        Objects.equals(cc, accountInfoData.cc) &&
        Objects.equals(ccAuto, accountInfoData.ccAuto) &&
        Objects.equals(ccExp, accountInfoData.ccExp) &&
        Objects.equals(ccType, accountInfoData.ccType) &&
        Objects.equals(ccWhitelist, accountInfoData.ccWhitelist) &&
        Objects.equals(ccs, accountInfoData.ccs) &&
        Objects.equals(ccsAdded, accountInfoData.ccsAdded) &&
        Objects.equals(company, accountInfoData.company) &&
        Objects.equals(currency, accountInfoData.currency) &&
        Objects.equals(disableReinstall, accountInfoData.disableReinstall) &&
        Objects.equals(disableReset, accountInfoData.disableReset) &&
        Objects.equals(email, accountInfoData.email) &&
        Objects.equals(emailAbuse, accountInfoData.emailAbuse) &&
        Objects.equals(emailSettings, accountInfoData.emailSettings) &&
        Objects.equals(extra, accountInfoData.extra) &&
        Objects.equals(facebookId, accountInfoData.facebookId) &&
        Objects.equals(facebookUrl, accountInfoData.facebookUrl) &&
        Objects.equals(firstname, accountInfoData.firstname) &&
        Objects.equals(fraudrecord, accountInfoData.fraudrecord) &&
        Objects.equals(githubId, accountInfoData.githubId) &&
        Objects.equals(githubUrl, accountInfoData.githubUrl) &&
        Objects.equals(googleId, accountInfoData.googleId) &&
        Objects.equals(googleUrl, accountInfoData.googleUrl) &&
        Objects.equals(innertellId, accountInfoData.innertellId) &&
        Objects.equals(lastname, accountInfoData.lastname) &&
        Objects.equals(locale, accountInfoData.locale) &&
        Objects.equals(maxmind, accountInfoData.maxmind) &&
        Objects.equals(maxmindScore, accountInfoData.maxmindScore) &&
        Objects.equals(mbId, accountInfoData.mbId) &&
        Objects.equals(modernbillId, accountInfoData.modernbillId) &&
        Objects.equals(picture, accountInfoData.picture) &&
        Objects.equals(referrerCoupon, accountInfoData.referrerCoupon) &&
        Objects.equals(resellerMarkup, accountInfoData.resellerMarkup) &&
        Objects.equals(username, accountInfoData.username) &&
        Objects.equals(sshKey, accountInfoData.sshKey) &&
        Objects.equals(sshKeyWrapped, accountInfoData.sshKeyWrapped) &&
        Objects.equals(apiKey, accountInfoData.apiKey) &&
        Objects.equals(apiKeyWrapped, accountInfoData.apiKeyWrapped) &&
        Objects.equals(_2faGoogleKey, accountInfoData._2faGoogleKey) &&
        Objects.equals(_2faGoogleEnabled, accountInfoData._2faGoogleEnabled) &&
        Objects.equals(_2faGoogle, accountInfoData._2faGoogle) &&
        Objects.equals(_2faGoogleSplit, accountInfoData._2faGoogleSplit) &&
        Objects.equals(_2faGoogleQr, accountInfoData._2faGoogleQr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(group, address, city, country, disableCc, fraudrecordScore, ima, name, paymentMethod, phone, pin, state, status, zip, accountId, accountLid, address2, affiliateDockDescription, affiliateDockTitle, affiliatePaymentMethod, affiliatePaypal, cc, ccAuto, ccExp, ccType, ccWhitelist, ccs, ccsAdded, company, currency, disableReinstall, disableReset, email, emailAbuse, emailSettings, extra, facebookId, facebookUrl, firstname, fraudrecord, githubId, githubUrl, googleId, googleUrl, innertellId, lastname, locale, maxmind, maxmindScore, mbId, modernbillId, picture, referrerCoupon, resellerMarkup, username, sshKey, sshKeyWrapped, apiKey, apiKeyWrapped, _2faGoogleKey, _2faGoogleEnabled, _2faGoogle, _2faGoogleSplit, _2faGoogleQr);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
