package io.swagger.model;

import io.swagger.model.LoginSubmissionExampleGrecaptcharesponseDep;

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

public class LoginSubmissionExampleGrecaptcharesponse   {
  
  @Schema(description = "")
  private Boolean _vIsShallow = null;
  
  @Schema(description = "")
  private LoginSubmissionExampleGrecaptcharesponseDep dep = null;
  
  @Schema(description = "")
  private Boolean _vIsRef = null;
  
  @Schema(description = "")
  private String _rawValue = null;
  
  @Schema(description = "")
  private String _value = null;
 /**
   * Get _vIsShallow
   * @return _vIsShallow
  **/
  @JsonProperty("__v_isShallow")
  public Boolean isVIsShallow() {
    return _vIsShallow;
  }

  public void setVIsShallow(Boolean _vIsShallow) {
    this._vIsShallow = _vIsShallow;
  }

  public LoginSubmissionExampleGrecaptcharesponse _vIsShallow(Boolean _vIsShallow) {
    this._vIsShallow = _vIsShallow;
    return this;
  }

 /**
   * Get dep
   * @return dep
  **/
  @JsonProperty("dep")
  public LoginSubmissionExampleGrecaptcharesponseDep getDep() {
    return dep;
  }

  public void setDep(LoginSubmissionExampleGrecaptcharesponseDep dep) {
    this.dep = dep;
  }

  public LoginSubmissionExampleGrecaptcharesponse dep(LoginSubmissionExampleGrecaptcharesponseDep dep) {
    this.dep = dep;
    return this;
  }

 /**
   * Get _vIsRef
   * @return _vIsRef
  **/
  @JsonProperty("__v_isRef")
  public Boolean isVIsRef() {
    return _vIsRef;
  }

  public void setVIsRef(Boolean _vIsRef) {
    this._vIsRef = _vIsRef;
  }

  public LoginSubmissionExampleGrecaptcharesponse _vIsRef(Boolean _vIsRef) {
    this._vIsRef = _vIsRef;
    return this;
  }

 /**
   * Get _rawValue
   * @return _rawValue
  **/
  @JsonProperty("_rawValue")
  public String getRawValue() {
    return _rawValue;
  }

  public void setRawValue(String _rawValue) {
    this._rawValue = _rawValue;
  }

  public LoginSubmissionExampleGrecaptcharesponse _rawValue(String _rawValue) {
    this._rawValue = _rawValue;
    return this;
  }

 /**
   * Get _value
   * @return _value
  **/
  @JsonProperty("_value")
  public String getValue() {
    return _value;
  }

  public void setValue(String _value) {
    this._value = _value;
  }

  public LoginSubmissionExampleGrecaptcharesponse _value(String _value) {
    this._value = _value;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
