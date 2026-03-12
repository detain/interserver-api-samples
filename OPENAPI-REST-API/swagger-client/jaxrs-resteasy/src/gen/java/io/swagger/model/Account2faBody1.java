package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class Account2faBody1   {
  private String _2faGoogleCode = null;

  /**
   * The 6-digit verification code from your authenticator app.
   **/
  
  @Schema(required = true, description = "The 6-digit verification code from your authenticator app.")
  @JsonProperty("2fa_google_code")
  @NotNull
  public String get2faGoogleCode() {
    return _2faGoogleCode;
  }
  public void set2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Account2faBody1 account2faBody1 = (Account2faBody1) o;
    return Objects.equals(_2faGoogleCode, account2faBody1._2faGoogleCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Account2faBody1 {\n");
    
    sb.append("    _2faGoogleCode: ").append(toIndentedString(_2faGoogleCode)).append("\n");
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
