package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.LoginServiceCounts;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Basic information useful for rendering a login page.
 */




public class LoginInfo   {
  private String logo = null;

  private String captcha = null;

  private String language = null;

  private LoginServiceCounts counts = null;

  public LoginInfo logo(String logo) {
    this.logo = logo;
    return this;
  }

  /**
   * A logo image url.
   * @return logo
   **/
    public String getLogo() {
    return logo;
  }

  public void setLogo(String logo) {
    this.logo = logo;
  }

  public LoginInfo captcha(String captcha) {
    this.captcha = captcha;
    return this;
  }

  /**
   * A base64 encoded image to use for rendering the alternateive captcha.
   * @return captcha
   **/
    public String getCaptcha() {
    return captcha;
  }

  public void setCaptcha(String captcha) {
    this.captcha = captcha;
  }

  public LoginInfo language(String language) {
    this.language = language;
    return this;
  }

  /**
   * The desired langauge to render the site with.
   * @return language
   **/
    public String getLanguage() {
    return language;
  }

  public void setLanguage(String language) {
    this.language = language;
  }

  public LoginInfo counts(LoginServiceCounts counts) {
    this.counts = counts;
    return this;
  }

  /**
   * Get counts
   * @return counts
   **/
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
    return Objects.equals(this.logo, loginInfo.logo) &&
        Objects.equals(this.captcha, loginInfo.captcha) &&
        Objects.equals(this.language, loginInfo.language) &&
        Objects.equals(this.counts, loginInfo.counts);
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
