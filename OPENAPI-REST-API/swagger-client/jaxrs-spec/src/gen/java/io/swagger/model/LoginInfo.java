package io.swagger.model;

import io.swagger.model.LoginServiceCounts;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Basic information useful for rendering a login page.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Basic information useful for rendering a login page.")

public class LoginInfo   {

  private @Valid String logo = null;

  private @Valid String captcha = null;

  private @Valid String language = null;

  private @Valid LoginServiceCounts counts = null;

  /**
   * A logo image url.
   **/
  public LoginInfo logo(String logo) {
    this.logo = logo;
    return this;
  }

  
  @ApiModelProperty(example = "//my.interserver.net/images/logos/mystaging.png", value = "A logo image url.")
  @JsonProperty("logo")
  @NotNull

  public String getLogo() {
    return logo;
  }
  public void setLogo(String logo) {
    this.logo = logo;
  }

  /**
   * A base64 encoded image to use for rendering the alternateive captcha.
   **/
  public LoginInfo captcha(String captcha) {
    this.captcha = captcha;
    return this;
  }

  
  @ApiModelProperty(example = "data:image/jpeg;base64,/9j/", required = true, value = "A base64 encoded image to use for rendering the alternateive captcha.")
  @JsonProperty("captcha")
  @NotNull

  public String getCaptcha() {
    return captcha;
  }
  public void setCaptcha(String captcha) {
    this.captcha = captcha;
  }

  /**
   * The desired langauge to render the site with.
   **/
  public LoginInfo language(String language) {
    this.language = language;
    return this;
  }

  
  @ApiModelProperty(example = "en-US", value = "The desired langauge to render the site with.")
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
  public LoginInfo counts(LoginServiceCounts counts) {
    this.counts = counts;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("counts")
  @NotNull

  public LoginServiceCounts getCounts() {
    return counts;
  }
  public void setCounts(LoginServiceCounts counts) {
    this.counts = counts;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginInfo loginInfo = (LoginInfo) o;
    return Objects.equals(logo, loginInfo.logo) &&
        Objects.equals(captcha, loginInfo.captcha) &&
        Objects.equals(language, loginInfo.language) &&
        Objects.equals(counts, loginInfo.counts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(logo, captcha, language, counts);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
