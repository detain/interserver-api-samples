package org.openapitools.model;

import org.openapitools.model.LoginServiceCounts;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Basic information useful for rendering a login page.
 */
@ApiModel(description="Basic information useful for rendering a login page.")

public class LoginInfo  {
  
 /**
  * A base64 encoded image to use for rendering the alternateive captcha.
  */
  @ApiModelProperty(example = "data:image/jpeg;base64,/9j/", required = true, value = "A base64 encoded image to use for rendering the alternateive captcha.")

  private String captcha;

  @ApiModelProperty(required = true, value = "")

  private LoginServiceCounts counts;

 /**
  * A logo image url.
  */
  @ApiModelProperty(example = "//my.interserver.net/images/logos/mystaging.png", value = "A logo image url.")

  private String logo;

 /**
  * The desired langauge to render the site with.
  */
  @ApiModelProperty(example = "en-US", value = "The desired langauge to render the site with.")

  private String language;
 /**
   * A base64 encoded image to use for rendering the alternateive captcha.
   * @return captcha
  **/
  @JsonProperty("captcha")
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
   * Get counts
   * @return counts
  **/
  @JsonProperty("counts")
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

 /**
   * A logo image url.
   * @return logo
  **/
  @JsonProperty("logo")
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
   * The desired langauge to render the site with.
   * @return language
  **/
  @JsonProperty("language")
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

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginInfo loginInfo = (LoginInfo) o;
    return Objects.equals(this.captcha, loginInfo.captcha) &&
        Objects.equals(this.counts, loginInfo.counts) &&
        Objects.equals(this.logo, loginInfo.logo) &&
        Objects.equals(this.language, loginInfo.language);
  }

  @Override
  public int hashCode() {
    return Objects.hash(captcha, counts, logo, language);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginInfo {\n");
    
    sb.append("    captcha: ").append(toIndentedString(captcha)).append("\n");
    sb.append("    counts: ").append(toIndentedString(counts)).append("\n");
    sb.append("    logo: ").append(toIndentedString(logo)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

