package io.swagger.model;

import io.swagger.model.LoginServiceCounts;
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
  * Basic information useful for rendering a login page.
 **/
@Schema(description="Basic information useful for rendering a login page.")
public class LoginInfo   {
  
  @Schema(example = "//my.interserver.net/images/logos/mystaging.png", description = "A logo image url.")
 /**
   * A logo image url.  
  **/
  private String logo = null;
  
  @Schema(example = "data:image/jpeg;base64,/9j/", required = true, description = "A base64 encoded image to use for rendering the alternateive captcha.")
 /**
   * A base64 encoded image to use for rendering the alternateive captcha.  
  **/
  private String captcha = null;
  
  @Schema(example = "en-US", description = "The desired langauge to render the site with.")
 /**
   * The desired langauge to render the site with.  
  **/
  private String language = null;
  
  @Schema(required = true, description = "")
  private LoginServiceCounts counts = null;
 /**
   * A logo image url.
   * @return logo
  **/
  @JsonProperty("logo")
  @NotNull
  public String getLogo() {
    return logo;
  }

  public void setLogo(String logo) {
    this.logo = logo;
  }

  public LoginInfo logo(String logo) {
    this.logo = logo;
    return this;
  }

 /**
   * A base64 encoded image to use for rendering the alternateive captcha.
   * @return captcha
  **/
  @JsonProperty("captcha")
  @NotNull
  public String getCaptcha() {
    return captcha;
  }

  public void setCaptcha(String captcha) {
    this.captcha = captcha;
  }

  public LoginInfo captcha(String captcha) {
    this.captcha = captcha;
    return this;
  }

 /**
   * The desired langauge to render the site with.
   * @return language
  **/
  @JsonProperty("language")
  @NotNull
  public String getLanguage() {
    return language;
  }

  public void setLanguage(String language) {
    this.language = language;
  }

  public LoginInfo language(String language) {
    this.language = language;
    return this;
  }

 /**
   * Get counts
   * @return counts
  **/
  @JsonProperty("counts")
  @NotNull
  public LoginServiceCounts getCounts() {
    return counts;
  }

  public void setCounts(LoginServiceCounts counts) {
    this.counts = counts;
  }

  public LoginInfo counts(LoginServiceCounts counts) {
    this.counts = counts;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginInfo {\n");
    
    sb.append("    logo: ").append(toIndentedString(logo)).append("\n");
    sb.append("    captcha: ").append(toIndentedString(captcha)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    counts: ").append(toIndentedString(counts)).append("\n");
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
