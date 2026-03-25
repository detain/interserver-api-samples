package org.openapitools.model;

import org.openapitools.model.AccountInfoOauthConfigProviders;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * OAuth integration configuration including callback URL and available providers.
 */
@ApiModel(description="OAuth integration configuration including callback URL and available providers.")

public class AccountInfoOauthConfig  {
  
  @ApiModelProperty(required = true, value = "")

  private String callback;

  @ApiModelProperty(required = true, value = "")

  private AccountInfoOauthConfigProviders providers = new HashMap<>();
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoOauthConfig accountInfoOauthConfig = (AccountInfoOauthConfig) o;
    return Objects.equals(this.callback, accountInfoOauthConfig.callback) &&
        Objects.equals(this.providers, accountInfoOauthConfig.providers);
  }

  @Override
  public int hashCode() {
    return Objects.hash(callback, providers);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

