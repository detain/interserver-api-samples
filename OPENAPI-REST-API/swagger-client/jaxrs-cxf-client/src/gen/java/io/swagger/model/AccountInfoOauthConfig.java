package io.swagger.model;

import io.swagger.model.AccountInfoOauthConfigProviders;
import io.swagger.v3.oas.annotations.media.Schema;

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
  * OAuth integration configuration including callback URL and available providers.
 **/
@Schema(description="OAuth integration configuration including callback URL and available providers.")
public class AccountInfoOauthConfig   {
  
  @Schema(required = true, description = "")
  private String callback = null;
  
  @Schema(required = true, description = "")
  private AccountInfoOauthConfigProviders providers = null;
 /**
   * Get callback
   * @return callback
  **/
  @JsonProperty("callback")
  public String getCallback() {
    return callback;
  }

  public void setCallback(String callback) {
    this.callback = callback;
  }

  public AccountInfoOauthConfig callback(String callback) {
    this.callback = callback;
    return this;
  }

 /**
   * Get providers
   * @return providers
  **/
  @JsonProperty("providers")
  public AccountInfoOauthConfigProviders getProviders() {
    return providers;
  }

  public void setProviders(AccountInfoOauthConfigProviders providers) {
    this.providers = providers;
  }

  public AccountInfoOauthConfig providers(AccountInfoOauthConfigProviders providers) {
    this.providers = providers;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoOauthConfig {\n");
    
    sb.append("    callback: ").append(toIndentedString(callback)).append("\n");
    sb.append("    providers: ").append(toIndentedString(providers)).append("\n");
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
