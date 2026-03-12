package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AccountInfoCountryCurrencies;
import io.swagger.model.AccountInfoData;
import io.swagger.model.AccountInfoLimits;
import io.swagger.model.AccountInfoOauthConfig;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 **/
@Schema(description = "Contains the full account profile including personal info, billing details, OAuth connections, and security settings.")


public class AccountInfo   {
  @JsonProperty("custid")
  private String custid = null;
  @JsonProperty("ima")
  private String ima = null;
  @JsonProperty("data")
  private AccountInfoData data = null;
  @JsonProperty("ip")
  private String ip = null;
  @JsonProperty("oauthproviders")
  private OneOfAccountInfoOauthproviders oauthproviders = null;
  @JsonProperty("oauthconfig")
  private AccountInfoOauthConfig oauthconfig = null;
  @JsonProperty("oauthadapters")
  private List<String> oauthadapters = null;
  @JsonProperty("limits")
  private AccountInfoLimits limits = null;
  @JsonProperty("language")
  private String language = null;
  @JsonProperty("countryCurrencies")
  private AccountInfoCountryCurrencies countryCurrencies = null;
  @JsonProperty("enableLocales")
  private Boolean enableLocales = null;
  @JsonProperty("enableCurrencies")
  private Boolean enableCurrencies = null;
  @JsonProperty("gravatar")
  private String gravatar = null;
  /**
   **/
  public AccountInfo custid(String custid) {
    this.custid = custid;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custid")
  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  public AccountInfo ima(String ima) {
    this.ima = ima;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  public AccountInfo data(AccountInfoData data) {
    this.data = data;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("data")
  public AccountInfoData getData() {
    return data;
  }
  public void setData(AccountInfoData data) {
    this.data = data;
  }

  /**
   **/
  public AccountInfo ip(String ip) {
    this.ip = ip;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ip")
  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }

  /**
   **/
  public AccountInfo oauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("oauthproviders")
  public OneOfAccountInfoOauthproviders getOauthproviders() {
    return oauthproviders;
  }
  public void setOauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
  }

  /**
   **/
  public AccountInfo oauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("oauthconfig")
  public AccountInfoOauthConfig getOauthconfig() {
    return oauthconfig;
  }
  public void setOauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
  }

  /**
   **/
  public AccountInfo oauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("oauthadapters")
  public List<String> getOauthadapters() {
    return oauthadapters;
  }
  public void setOauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
  }

  /**
   **/
  public AccountInfo limits(AccountInfoLimits limits) {
    this.limits = limits;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("limits")
  public AccountInfoLimits getLimits() {
    return limits;
  }
  public void setLimits(AccountInfoLimits limits) {
    this.limits = limits;
  }

  /**
   **/
  public AccountInfo language(String language) {
    this.language = language;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("language")
  public String getLanguage() {
    return language;
  }
  public void setLanguage(String language) {
    this.language = language;
  }

  /**
   **/
  public AccountInfo countryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("countryCurrencies")
  public AccountInfoCountryCurrencies getCountryCurrencies() {
    return countryCurrencies;
  }
  public void setCountryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
  }

  /**
   **/
  public AccountInfo enableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("enableLocales")
  public Boolean isEnableLocales() {
    return enableLocales;
  }
  public void setEnableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
  }

  /**
   **/
  public AccountInfo enableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("enableCurrencies")
  public Boolean isEnableCurrencies() {
    return enableCurrencies;
  }
  public void setEnableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
  }

  /**
   **/
  public AccountInfo gravatar(String gravatar) {
    this.gravatar = gravatar;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("gravatar")
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
    return Objects.equals(custid, accountInfo.custid) &&
        Objects.equals(ima, accountInfo.ima) &&
        Objects.equals(data, accountInfo.data) &&
        Objects.equals(ip, accountInfo.ip) &&
        Objects.equals(oauthproviders, accountInfo.oauthproviders) &&
        Objects.equals(oauthconfig, accountInfo.oauthconfig) &&
        Objects.equals(oauthadapters, accountInfo.oauthadapters) &&
        Objects.equals(limits, accountInfo.limits) &&
        Objects.equals(language, accountInfo.language) &&
        Objects.equals(countryCurrencies, accountInfo.countryCurrencies) &&
        Objects.equals(enableLocales, accountInfo.enableLocales) &&
        Objects.equals(enableCurrencies, accountInfo.enableCurrencies) &&
        Objects.equals(gravatar, accountInfo.gravatar);
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
