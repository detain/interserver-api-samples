package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AccountInfoCountryCurrencies;
import io.swagger.model.AccountInfoData;
import io.swagger.model.AccountInfoLimits;
import io.swagger.model.AccountInfoOauthConfig;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Contains the full account profile including personal info, billing details, OAuth connections, and security settings.")

public class AccountInfo   {
  private String custid = null;
  private String ima = null;
  private AccountInfoData data = null;
  private String ip = null;
  private OneOfAccountInfoOauthproviders oauthproviders = null;
  private AccountInfoOauthConfig oauthconfig = null;
  private List<String> oauthadapters = new ArrayList<String>();
  private AccountInfoLimits limits = null;
  private String language = null;
  private AccountInfoCountryCurrencies countryCurrencies = null;
  private Boolean enableLocales = null;
  private Boolean enableCurrencies = null;
  private String gravatar = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("custid")
  @NotNull
  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  
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
  
  @Schema(description = "")
  @JsonProperty("data")
  @NotNull
  public AccountInfoData getData() {
    return data;
  }
  public void setData(AccountInfoData data) {
    this.data = data;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ip")
  @NotNull
  public String getIp() {
    return ip;
  }
  public void setIp(String ip) {
    this.ip = ip;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("oauthproviders")
  @NotNull
  public OneOfAccountInfoOauthproviders getOauthproviders() {
    return oauthproviders;
  }
  public void setOauthproviders(OneOfAccountInfoOauthproviders oauthproviders) {
    this.oauthproviders = oauthproviders;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("oauthconfig")
  @NotNull
  public AccountInfoOauthConfig getOauthconfig() {
    return oauthconfig;
  }
  public void setOauthconfig(AccountInfoOauthConfig oauthconfig) {
    this.oauthconfig = oauthconfig;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("oauthadapters")
  @NotNull
  public List<String> getOauthadapters() {
    return oauthadapters;
  }
  public void setOauthadapters(List<String> oauthadapters) {
    this.oauthadapters = oauthadapters;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("limits")
  @NotNull
  public AccountInfoLimits getLimits() {
    return limits;
  }
  public void setLimits(AccountInfoLimits limits) {
    this.limits = limits;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("language")
  @NotNull
  public String getLanguage() {
    return language;
  }
  public void setLanguage(String language) {
    this.language = language;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("countryCurrencies")
  @NotNull
  public AccountInfoCountryCurrencies getCountryCurrencies() {
    return countryCurrencies;
  }
  public void setCountryCurrencies(AccountInfoCountryCurrencies countryCurrencies) {
    this.countryCurrencies = countryCurrencies;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("enableLocales")
  @NotNull
  public Boolean isEnableLocales() {
    return enableLocales;
  }
  public void setEnableLocales(Boolean enableLocales) {
    this.enableLocales = enableLocales;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("enableCurrencies")
  @NotNull
  public Boolean isEnableCurrencies() {
    return enableCurrencies;
  }
  public void setEnableCurrencies(Boolean enableCurrencies) {
    this.enableCurrencies = enableCurrencies;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("gravatar")
  @NotNull
  public String getGravatar() {
    return gravatar;
  }
  public void setGravatar(String gravatar) {
    this.gravatar = gravatar;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
