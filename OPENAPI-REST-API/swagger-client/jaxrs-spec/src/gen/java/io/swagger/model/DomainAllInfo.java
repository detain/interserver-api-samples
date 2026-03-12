package io.swagger.model;

import io.swagger.model.DomainAllInfoAttributes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.")

public class DomainAllInfo   {

  private @Valid String _oPSVersion = null;

  private @Valid DomainAllInfoAttributes attributes = null;

  private @Valid String object = null;

  private @Valid String protocol = null;

  private @Valid String responseText = null;

  private @Valid String responseCode = null;

  private @Valid String action = null;

  private @Valid String isSuccess = null;

  /**
   **/
  public DomainAllInfo _oPSVersion(String _oPSVersion) {
    this._oPSVersion = _oPSVersion;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo attributes(DomainAllInfoAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo object(String object) {
    this.object = object;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo protocol(String protocol) {
    this.protocol = protocol;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo responseText(String responseText) {
    this.responseText = responseText;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo responseCode(String responseCode) {
    this.responseCode = responseCode;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo action(String action) {
    this.action = action;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfo isSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
