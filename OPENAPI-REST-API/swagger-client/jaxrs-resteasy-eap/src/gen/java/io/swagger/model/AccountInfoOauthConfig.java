package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AccountInfoOauthConfigProviders;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="OAuth integration configuration including callback URL and available providers.")

public class AccountInfoOauthConfig   {
  private String callback = null;
  private AccountInfoOauthConfigProviders providers = null;

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
  @JsonProperty("providers")
  @NotNull
  public AccountInfoOauthConfigProviders getProviders() {
    return providers;
  }
  public void setProviders(AccountInfoOauthConfigProviders providers) {
    this.providers = providers;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
