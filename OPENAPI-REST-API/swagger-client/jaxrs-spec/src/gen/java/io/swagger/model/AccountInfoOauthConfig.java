package io.swagger.model;

import io.swagger.model.AccountInfoOauthConfigProviders;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * OAuth integration configuration including callback URL and available providers.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "OAuth integration configuration including callback URL and available providers.")

public class AccountInfoOauthConfig   {

  private @Valid String callback = null;

  private @Valid AccountInfoOauthConfigProviders providers = null;

  /**
   **/
  public AccountInfoOauthConfig callback(String callback) {
    this.callback = callback;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("callback")
  @NotNull

  public String getCallback() {
    return callback;
  }
  public void setCallback(String callback) {
    this.callback = callback;
  }

  /**
   **/
  public AccountInfoOauthConfig providers(AccountInfoOauthConfigProviders providers) {
    this.providers = providers;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("providers")
  @NotNull

  public AccountInfoOauthConfigProviders getProviders() {
    return providers;
  }
  public void setProviders(AccountInfoOauthConfigProviders providers) {
    this.providers = providers;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoOauthConfig accountInfoOauthConfig = (AccountInfoOauthConfig) o;
    return Objects.equals(callback, accountInfoOauthConfig.callback) &&
        Objects.equals(providers, accountInfoOauthConfig.providers);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
