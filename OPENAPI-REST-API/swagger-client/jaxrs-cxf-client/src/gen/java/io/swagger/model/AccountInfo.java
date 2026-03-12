package io.swagger.model;

import io.swagger.model.AccountInfoCountryCurrencies;
import io.swagger.model.AccountInfoData;
import io.swagger.model.AccountInfoLimits;
import io.swagger.model.AccountInfoOauthConfig;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;

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
  * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 **/
@Schema(description="Contains the full account profile including personal info, billing details, OAuth connections, and security settings.")
public class AccountInfo   {
  
  @Schema(description = "")
  private String custid = null;
  
  @Schema(description = "")
  private String ima = null;
  
  @Schema(description = "")
  private AccountInfoData data = null;
  
  @Schema(description = "")
  private String ip = null;
  
  @Schema(description = "")
  private OneOfAccountInfoOauthproviders oauthproviders = null;
  
  @Schema(description = "")
  private AccountInfoOauthConfig oauthconfig = null;
  
  @Schema(description = "")
  private List<String> oauthadapters = null;
  
  @Schema(description = "")
  private AccountInfoLimits limits = null;
  
  @Schema(description = "")
  private String language = null;
  
  @Schema(description = "")
  private AccountInfoCountryCurrencies countryCurrencies = null;
  
  @Schema(description = "")
  private Boolean enableLocales = null;
  
  @Schema(description = "")
  private Boolean enableCurrencies = null;
  
  @Schema(description = "")
  private String gravatar = null;
 /**
   * Get custid
   * @return custid
  **/
  @JsonProperty("custid")
  public String getCustid() {
    return custid;
  }

  public void setCustid(String custid) {
    this.custid = custid;
  }

  public AccountInfo custid(String custid) {
    this.custid = custid;
    return this;
  }

 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public AccountInfo ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  public AccountInfoData getData() {
    return data;
  }

  public void setData(AccountInfoData data) {
    this.data = data;
  }

  public AccountInfo data(AccountInfoData data) {
    this.data = data;
    return this;
  }

 /**
   * Get ip
   * @return ip
  **/
  @JsonProperty("ip")
  public String getIp() {
    return ip;
  }

  public void setIp(String ip) {
    this.ip = ip;
  }

  public AccountInfo ip(String ip) {
    this.ip = ip;
    return this;
  }

 /**
   * Get oauthproviders
   * @return oauthproviders
  **/
  @JsonProperty("oauthproviders")
  public OneOfAccountInfoOauthproviders getOauthproviders() {
    return oauthproviders;
  }

  public void setOauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
  }

  public AccountInfo oauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
    return this;
  }

 /**
   * Get oauthconfig
   * @return oauthconfig
  **/
  @JsonProperty("oauthconfig")
  public AccountInfoOauthConfig getOauthconfig() {
    return oauthconfig;
  }

  public void setOauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
  }

  public AccountInfo oauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
    return this;
  }

 /**
   * Get oauthadapters
   * @return oauthadapters
  **/
  @JsonProperty("oauthadapters")
  public List<String> getOauthadapters() {
    return oauthadapters;
  }

  public void setOauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
  }

  public AccountInfo oauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
    return this;
  }

  public AccountInfo addOauthadaptersItem(String oauthadaptersItem) {
    this.oauthadapters.add(oauthadaptersItem);
    return this;
  }

 /**
   * Get limits
   * @return limits
  **/
  @JsonProperty("limits")
  public AccountInfoLimits getLimits() {
    return limits;
  }

  public void setLimits(AccountInfoLimits limits) {
    this.limits = limits;
  }

  public AccountInfo limits(AccountInfoLimits limits) {
    this.limits = limits;
    return this;
  }

 /**
   * Get language
   * @return language
  **/
  @JsonProperty("language")
  public String getLanguage() {
    return language;
  }

  public void setLanguage(String language) {
    this.language = language;
  }

  public AccountInfo language(String language) {
    this.language = language;
    return this;
  }

 /**
   * Get countryCurrencies
   * @return countryCurrencies
  **/
  @JsonProperty("countryCurrencies")
  public AccountInfoCountryCurrencies getCountryCurrencies() {
    return countryCurrencies;
  }

  public void setCountryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
  }

  public AccountInfo countryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
    return this;
  }

 /**
   * Get enableLocales
   * @return enableLocales
  **/
  @JsonProperty("enableLocales")
  public Boolean isEnableLocales() {
    return enableLocales;
  }

  public void setEnableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
  }

  public AccountInfo enableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
    return this;
  }

 /**
   * Get enableCurrencies
   * @return enableCurrencies
  **/
  @JsonProperty("enableCurrencies")
  public Boolean isEnableCurrencies() {
    return enableCurrencies;
  }

  public void setEnableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
  }

  public AccountInfo enableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
    return this;
  }

 /**
   * Get gravatar
   * @return gravatar
  **/
  @JsonProperty("gravatar")
  public String getGravatar() {
    return gravatar;
  }

  public void setGravatar(String gravatar) {
    this.gravatar = gravatar;
  }

  public AccountInfo gravatar(String gravatar) {
    this.gravatar = gravatar;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
