package io.swagger.model;

import io.swagger.model.LoginSubmissionExampleGrecaptcharesponseDep;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LoginSubmissionExampleGrecaptcharesponse   {

  private @Valid Boolean _vIsShallow = null;

  private @Valid LoginSubmissionExampleGrecaptcharesponseDep dep = null;

  private @Valid Boolean _vIsRef = null;

  private @Valid String _rawValue = null;

  private @Valid String _value = null;

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponse _vIsShallow(Boolean _vIsShallow) {
    this._vIsShallow = _vIsShallow;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("__v_isShallow")
  @NotNull

  public Boolean isVIsShallow() {
    return _vIsShallow;
  }
  public void setVIsShallow(Boolean _vIsShallow) {
    this._vIsShallow = _vIsShallow;
  }

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponse dep(LoginSubmissionExampleGrecaptcharesponseDep dep) {
    this.dep = dep;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("dep")
  @NotNull

  public LoginSubmissionExampleGrecaptcharesponseDep getDep() {
    return dep;
  }
  public void setDep(LoginSubmissionExampleGrecaptcharesponseDep dep) {
    this.dep = dep;
  }

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponse _vIsRef(Boolean _vIsRef) {
    this._vIsRef = _vIsRef;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("__v_isRef")
  @NotNull

  public Boolean isVIsRef() {
    return _vIsRef;
  }
  public void setVIsRef(Boolean _vIsRef) {
    this._vIsRef = _vIsRef;
  }

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponse _rawValue(String _rawValue) {
    this._rawValue = _rawValue;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("_rawValue")
  @NotNull

  public String getRawValue() {
    return _rawValue;
  }
  public void setRawValue(String _rawValue) {
    this._rawValue = _rawValue;
  }

  /**
   **/
  public LoginSubmissionExampleGrecaptcharesponse _value(String _value) {
    this._value = _value;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("_value")
  @NotNull

  public String getValue() {
    return _value;
  }
  public void setValue(String _value) {
    this._value = _value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LoginSubmissionExampleGrecaptcharesponse loginSubmissionExampleGrecaptcharesponse = (LoginSubmissionExampleGrecaptcharesponse) o;
    return Objects.equals(_vIsShallow, loginSubmissionExampleGrecaptcharesponse._vIsShallow) &&
        Objects.equals(dep, loginSubmissionExampleGrecaptcharesponse.dep) &&
        Objects.equals(_vIsRef, loginSubmissionExampleGrecaptcharesponse._vIsRef) &&
        Objects.equals(_rawValue, loginSubmissionExampleGrecaptcharesponse._rawValue) &&
        Objects.equals(_value, loginSubmissionExampleGrecaptcharesponse._value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_vIsShallow, dep, _vIsRef, _rawValue, _value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LoginSubmissionExampleGrecaptcharesponse {\n");
    
    sb.append("    _vIsShallow: ").append(toIndentedString(_vIsShallow)).append("\n");
    sb.append("    dep: ").append(toIndentedString(dep)).append("\n");
    sb.append("    _vIsRef: ").append(toIndentedString(_vIsRef)).append("\n");
    sb.append("    _rawValue: ").append(toIndentedString(_rawValue)).append("\n");
    sb.append("    _value: ").append(toIndentedString(_value)).append("\n");
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
