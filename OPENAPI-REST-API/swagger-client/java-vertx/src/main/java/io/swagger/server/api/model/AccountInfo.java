package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.AccountInfoCountryCurrencies;
import io.swagger.server.api.model.AccountInfoData;
import io.swagger.server.api.model.AccountInfoLimits;
import io.swagger.server.api.model.AccountInfoOauthConfig;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 */




public class AccountInfo   {
  private String custid = null;

  private String ima = null;

  private AccountInfoData data = null;

  private String ip = null;

  private OneOfAccountInfoOauthproviders oauthproviders = null;

  private AccountInfoOauthConfig oauthconfig = null;

  
  private List<String> oauthadapters = null;

  private AccountInfoLimits limits = null;

  private String language = null;

  private AccountInfoCountryCurrencies countryCurrencies = null;

  private Boolean enableLocales = null;

  private Boolean enableCurrencies = null;

  private String gravatar = null;

  public AccountInfo custid(String custid) {
    this.custid = custid;
    return this;
  }

  /**
   * Get custid
   * @return custid
   **/
    public String getCustid() {
    return custid;
  }

  public void setCustid(String custid) {
    this.custid = custid;
  }

  public AccountInfo ima(String ima) {
    this.ima = ima;
    return this;
  }

  /**
   * Get ima
   * @return ima
   **/
    public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public AccountInfo data(AccountInfoData data) {
    this.data = data;
    return this;
  }

  /**
   * Get data
   * @return data
   **/
    public AccountInfoData getData() {
    return data;
  }

  public void setData(AccountInfoData data) {
    this.data = data;
  }

  public AccountInfo ip(String ip) {
    this.ip = ip;
    return this;
  }

  /**
   * Get ip
   * @return ip
   **/
    public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public AccountInfo oauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
    return this;
  }

  /**
   * Get oauthproviders
   * @return oauthproviders
   **/
    public OneOfAccountInfoOauthproviders getOauthproviders() {
    return oauthproviders;
  }

  public void setOauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
  }

  public AccountInfo oauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
    return this;
  }

  /**
   * Get oauthconfig
   * @return oauthconfig
   **/
    public AccountInfoOauthConfig getOauthconfig() {
    return oauthconfig;
  }

  public void setOauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
  }

  public AccountInfo oauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
    return this;
  }

  public AccountInfo addOauthadaptersItem(String oauthadaptersItem) {
    if (this.oauthadapters == null) {
      this.oauthadapters = new ArrayList<String>();
    }
    this.oauthadapters.add(oauthadaptersItem);
    return this;
  }

  /**
   * Get oauthadapters
   * @return oauthadapters
   **/
    public List<String> getOauthadapters() {
    return oauthadapters;
  }

  public void setOauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
  }

  public AccountInfo limits(AccountInfoLimits limits) {
    this.limits = limits;
    return this;
  }

  /**
   * Get limits
   * @return limits
   **/
    public AccountInfoLimits getLimits() {
    return limits;
  }

  public void setLimits(AccountInfoLimits limits) {
    this.limits = limits;
  }

  public AccountInfo language(String language) {
    this.language = language;
    return this;
  }

  /**
   * Get language
   * @return language
   **/
    public String getLanguage() {
    return language;
  }

  public void setLanguage(String language) {
    this.language = language;
  }

  public AccountInfo countryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
    return this;
  }

  /**
   * Get countryCurrencies
   * @return countryCurrencies
   **/
    public AccountInfoCountryCurrencies getCountryCurrencies() {
    return countryCurrencies;
  }

  public void setCountryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
  }

  public AccountInfo enableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
    return this;
  }

  /**
   * Get enableLocales
   * @return enableLocales
   **/
    public Boolean isEnableLocales() {
    return enableLocales;
  }

  public void setEnableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
  }

  public AccountInfo enableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
    return this;
  }

  /**
   * Get enableCurrencies
   * @return enableCurrencies
   **/
    public Boolean isEnableCurrencies() {
    return enableCurrencies;
  }

  public void setEnableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
  }

  public AccountInfo gravatar(String gravatar) {
    this.gravatar = gravatar;
    return this;
  }

  /**
   * Get gravatar
   * @return gravatar
   **/
    public String getGravatar() {
    return gravatar;
  }

  public void setGravatar(String gravatar) {
    this.gravatar = gravatar;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfo accountInfo = (AccountInfo) o;
    return Objects.equals(this.custid, accountInfo.custid) &&
        Objects.equals(this.ima, accountInfo.ima) &&
        Objects.equals(this.data, accountInfo.data) &&
        Objects.equals(this.ip, accountInfo.ip) &&
        Objects.equals(this.oauthproviders, accountInfo.oauthproviders) &&
        Objects.equals(this.oauthconfig, accountInfo.oauthconfig) &&
        Objects.equals(this.oauthadapters, accountInfo.oauthadapters) &&
        Objects.equals(this.limits, accountInfo.limits) &&
        Objects.equals(this.language, accountInfo.language) &&
        Objects.equals(this.countryCurrencies, accountInfo.countryCurrencies) &&
        Objects.equals(this.enableLocales, accountInfo.enableLocales) &&
        Objects.equals(this.enableCurrencies, accountInfo.enableCurrencies) &&
        Objects.equals(this.gravatar, accountInfo.gravatar);
  }

  @Override
  public int hashCode() {
    return Objects.hash(custid, ima, data, ip, oauthproviders, oauthconfig, oauthadapters, limits, language, countryCurrencies, enableLocales, enableCurrencies, gravatar);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfo {\n");
    
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    ip: ").append(toIndentedString(ip)).append("\n");
    sb.append("    oauthproviders: ").append(toIndentedString(oauthproviders)).append("\n");
    sb.append("    oauthconfig: ").append(toIndentedString(oauthconfig)).append("\n");
    sb.append("    oauthadapters: ").append(toIndentedString(oauthadapters)).append("\n");
    sb.append("    limits: ").append(toIndentedString(limits)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    countryCurrencies: ").append(toIndentedString(countryCurrencies)).append("\n");
    sb.append("    enableLocales: ").append(toIndentedString(enableLocales)).append("\n");
    sb.append("    enableCurrencies: ").append(toIndentedString(enableCurrencies)).append("\n");
    sb.append("    gravatar: ").append(toIndentedString(gravatar)).append("\n");
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
