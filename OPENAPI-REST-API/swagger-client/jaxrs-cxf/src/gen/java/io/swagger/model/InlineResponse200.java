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

public class InlineResponse200   {
  
  @Schema(description = "Base64-encoded secret key for TOTP setup.")
 /**
   * Base64-encoded secret key for TOTP setup.  
  **/
  private String _2faGoogleKey = null;
  
  @Schema(description = "Human-readable formatted key (chunks of 4 characters).")
 /**
   * Human-readable formatted key (chunks of 4 characters).  
  **/
  private String _2faGoogleSplit = null;
 /**
   * Base64-encoded secret key for TOTP setup.
   * @return _2faGoogleKey
  **/
  @JsonProperty("2fa_google_key")
  @NotNull
  public String get2faGoogleKey() {
    return _2faGoogleKey;
  }

  public void set2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
  }

  public InlineResponse200 _2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
    return this;
  }

 /**
   * Human-readable formatted key (chunks of 4 characters).
   * @return _2faGoogleSplit
  **/
  @JsonProperty("2fa_google_split")
  @NotNull
  public String get2faGoogleSplit() {
    return _2faGoogleSplit;
  }

  public void set2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
  }

  public InlineResponse200 _2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse200 {\n");
    
    sb.append("    _2faGoogleKey: ").append(toIndentedString(_2faGoogleKey)).append("\n");
    sb.append("    _2faGoogleSplit: ").append(toIndentedString(_2faGoogleSplit)).append("\n");
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
