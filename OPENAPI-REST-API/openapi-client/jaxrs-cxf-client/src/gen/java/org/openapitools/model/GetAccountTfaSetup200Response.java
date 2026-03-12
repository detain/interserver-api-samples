package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetAccountTfaSetup200Response  {
  
 /**
  * Base64-encoded secret key for TOTP setup.
  */
  @ApiModelProperty(value = "Base64-encoded secret key for TOTP setup.")

  private String _2faGoogleKey;

 /**
  * Human-readable formatted key (chunks of 4 characters).
  */
  @ApiModelProperty(value = "Human-readable formatted key (chunks of 4 characters).")

  private String _2faGoogleSplit;
 /**
   * Base64-encoded secret key for TOTP setup.
   * @return _2faGoogleKey
  **/
  @JsonProperty("2fa_google_key")
  public String get2faGoogleKey() {
    return _2faGoogleKey;
  }

  public void set2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
  }

  public GetAccountTfaSetup200Response _2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
    return this;
  }

 /**
   * Human-readable formatted key (chunks of 4 characters).
   * @return _2faGoogleSplit
  **/
  @JsonProperty("2fa_google_split")
  public String get2faGoogleSplit() {
    return _2faGoogleSplit;
  }

  public void set2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
  }

  public GetAccountTfaSetup200Response _2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
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
    GetAccountTfaSetup200Response getAccountTfaSetup200Response = (GetAccountTfaSetup200Response) o;
    return Objects.equals(this._2faGoogleKey, getAccountTfaSetup200Response._2faGoogleKey) &&
        Objects.equals(this._2faGoogleSplit, getAccountTfaSetup200Response._2faGoogleSplit);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleKey, _2faGoogleSplit);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetAccountTfaSetup200Response {\n");
    
    sb.append("    _2faGoogleKey: ").append(toIndentedString(_2faGoogleKey)).append("\n");
    sb.append("    _2faGoogleSplit: ").append(toIndentedString(_2faGoogleSplit)).append("\n");
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

