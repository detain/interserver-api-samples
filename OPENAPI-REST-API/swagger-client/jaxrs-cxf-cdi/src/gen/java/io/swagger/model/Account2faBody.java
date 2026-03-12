package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class Account2faBody   {
  private String _2faGoogleCode = null;

  /**
   * The 6-digit verification code from your authenticator app.
   **/
  public Account2faBody _2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
    return this;
  }

  
  
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
    Account2faBody account2faBody = (Account2faBody) o;
    return Objects.equals(_2faGoogleCode, account2faBody._2faGoogleCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Account2faBody {\n");
    
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
