package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.LoginServiceCounts;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Basic information useful for rendering a login page.
 **/
@Schema(description = "Basic information useful for rendering a login page.")


public class LoginInfo   {
  @JsonProperty("logo")
  private String logo = null;
  @JsonProperty("captcha")
  private String captcha = null;
  @JsonProperty("language")
  private String language = null;
  @JsonProperty("counts")
  private LoginServiceCounts counts = null;
  /**
   * A logo image url.
   **/
  public LoginInfo logo(String logo) {
    this.logo = logo;
    return this;
  }

  
  @Schema(example = "//my.interserver.net/images/logos/mystaging.png", description = "A logo image url.")
  @JsonProperty("logo")
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

  
  @Schema(example = "data:image/jpeg;base64,/9j/", required = true, description = "A base64 encoded image to use for rendering the alternateive captcha.")
  @JsonProperty("captcha")
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

  
  @Schema(example = "en-US", description = "The desired langauge to render the site with.")
  @JsonProperty("language")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("counts")
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
