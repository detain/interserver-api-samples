package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class UpdateAccountTfaRequest  {
  
 /**
  * The 6-digit verification code from your authenticator app.
  */
  @ApiModelProperty(required = true, value = "The 6-digit verification code from your authenticator app.")

  private String _2faGoogleCode;
 /**
   * The 6-digit verification code from your authenticator app.
   * @return _2faGoogleCode
  **/
  @JsonProperty("2fa_google_code")
  public String get2faGoogleCode() {
    return _2faGoogleCode;
  }

  public void set2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
  }

  public UpdateAccountTfaRequest _2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
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
    UpdateAccountTfaRequest updateAccountTfaRequest = (UpdateAccountTfaRequest) o;
    return Objects.equals(this._2faGoogleCode, updateAccountTfaRequest._2faGoogleCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UpdateAccountTfaRequest {\n");
    
    sb.append("    _2faGoogleCode: ").append(toIndentedString(_2faGoogleCode)).append("\n");
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

