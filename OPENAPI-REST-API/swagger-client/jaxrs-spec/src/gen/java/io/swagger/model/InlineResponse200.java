package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse200   {

  private @Valid String _2faGoogleKey = null;

  private @Valid String _2faGoogleSplit = null;

  /**
   * Base64-encoded secret key for TOTP setup.
   **/
  public InlineResponse200 _2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
    return this;
  }

  
  @ApiModelProperty(value = "Base64-encoded secret key for TOTP setup.")
  @JsonProperty("2fa_google_key")
  @NotNull

  public String get2faGoogleKey() {
    return _2faGoogleKey;
  }
  public void set2faGoogleKey(String _2faGoogleKey) {
    this._2faGoogleKey = _2faGoogleKey;
  }

  /**
   * Human-readable formatted key (chunks of 4 characters).
   **/
  public InlineResponse200 _2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
    return this;
  }

  
  @ApiModelProperty(value = "Human-readable formatted key (chunks of 4 characters).")
  @JsonProperty("2fa_google_split")
  @NotNull

  public String get2faGoogleSplit() {
    return _2faGoogleSplit;
  }
  public void set2faGoogleSplit(String _2faGoogleSplit) {
    this._2faGoogleSplit = _2faGoogleSplit;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse200 inlineResponse200 = (InlineResponse200) o;
    return Objects.equals(_2faGoogleKey, inlineResponse200._2faGoogleKey) &&
        Objects.equals(_2faGoogleSplit, inlineResponse200._2faGoogleSplit);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_2faGoogleKey, _2faGoogleSplit);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
