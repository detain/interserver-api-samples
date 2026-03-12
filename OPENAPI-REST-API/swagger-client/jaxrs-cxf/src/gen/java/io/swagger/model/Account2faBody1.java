package io.swagger.model;

import javax.validation.constraints.*;

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

public class Account2faBody1   {
  
  @Schema(required = true, description = "The 6-digit verification code from your authenticator app.")
 /**
   * The 6-digit verification code from your authenticator app.  
  **/
  private String _2faGoogleCode = null;
 /**
   * The 6-digit verification code from your authenticator app.
   * @return _2faGoogleCode
  **/
  @JsonProperty("2fa_google_code")
  @NotNull
  public String get2faGoogleCode() {
    return _2faGoogleCode;
  }

  public void set2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
  }

  public Account2faBody1 _2faGoogleCode(String _2faGoogleCode) {
    this._2faGoogleCode = _2faGoogleCode;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
