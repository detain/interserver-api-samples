package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainAllInfoAttributes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.")

public class DomainAllInfo   {
  private String _oPSVersion = null;  private DomainAllInfoAttributes attributes = null;  private String object = null;  private String protocol = null;  private String responseText = null;  private String responseCode = null;  private String action = null;  private String isSuccess = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("_OPS_version")
  @NotNull
  public String getOPSVersion() {
    return _oPSVersion;
  }
  public void setOPSVersion(String _oPSVersion) {
    this._oPSVersion = _oPSVersion;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("attributes")
  @NotNull
  public DomainAllInfoAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(DomainAllInfoAttributes attributes) {
    this.attributes = attributes;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("object")
  @NotNull
  public String getObject() {
    return object;
  }
  public void setObject(String object) {
    this.object = object;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("protocol")
  @NotNull
  public String getProtocol() {
    return protocol;
  }
  public void setProtocol(String protocol) {
    this.protocol = protocol;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("response_text")
  @NotNull
  public String getResponseText() {
    return responseText;
  }
  public void setResponseText(String responseText) {
    this.responseText = responseText;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("response_code")
  @NotNull
  public String getResponseCode() {
    return responseCode;
  }
  public void setResponseCode(String responseCode) {
    this.responseCode = responseCode;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("action")
  @NotNull
  public String getAction() {
    return action;
  }
  public void setAction(String action) {
    this.action = action;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("is_success")
  @NotNull
  public String getIsSuccess() {
    return isSuccess;
  }
  public void setIsSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainAllInfo domainAllInfo = (DomainAllInfo) o;
    return Objects.equals(_oPSVersion, domainAllInfo._oPSVersion) &&
        Objects.equals(attributes, domainAllInfo.attributes) &&
        Objects.equals(object, domainAllInfo.object) &&
        Objects.equals(protocol, domainAllInfo.protocol) &&
        Objects.equals(responseText, domainAllInfo.responseText) &&
        Objects.equals(responseCode, domainAllInfo.responseCode) &&
        Objects.equals(action, domainAllInfo.action) &&
        Objects.equals(isSuccess, domainAllInfo.isSuccess);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_oPSVersion, attributes, object, protocol, responseText, responseCode, action, isSuccess);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAllInfo {\n");
    
    sb.append("    _oPSVersion: ").append(toIndentedString(_oPSVersion)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    object: ").append(toIndentedString(object)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    responseCode: ").append(toIndentedString(responseCode)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
    sb.append("    isSuccess: ").append(toIndentedString(isSuccess)).append("\n");
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
