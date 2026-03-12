package org.openapitools.model;

import org.openapitools.model.DomainAllInfoAttributes;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 */
@ApiModel(description="Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.")

public class DomainAllInfo  {
  
  @ApiModelProperty(value = "")

  private String oPSVersion;

  @ApiModelProperty(value = "")

  private DomainAllInfoAttributes attributes;

  @ApiModelProperty(value = "")

  private String _object;

  @ApiModelProperty(value = "")

  private String protocol;

  @ApiModelProperty(value = "")

  private String responseText;

  @ApiModelProperty(value = "")

  private String responseCode;

  @ApiModelProperty(value = "")

  private String action;

  @ApiModelProperty(value = "")

  private String isSuccess;
 /**
   * Get oPSVersion
   * @return oPSVersion
  **/
  @JsonProperty("_OPS_version")
  public String getoPSVersion() {
    return oPSVersion;
  }

  public void setoPSVersion(String oPSVersion) {
    this.oPSVersion = oPSVersion;
  }

  public DomainAllInfo oPSVersion(String oPSVersion) {
    this.oPSVersion = oPSVersion;
    return this;
  }

 /**
   * Get attributes
   * @return attributes
  **/
  @JsonProperty("attributes")
  public DomainAllInfoAttributes getAttributes() {
    return attributes;
  }

  public void setAttributes(DomainAllInfoAttributes attributes) {
    this.attributes = attributes;
  }

  public DomainAllInfo attributes(DomainAllInfoAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

 /**
   * Get _object
   * @return _object
  **/
  @JsonProperty("object")
  public String getObject() {
    return _object;
  }

  public void setObject(String _object) {
    this._object = _object;
  }

  public DomainAllInfo _object(String _object) {
    this._object = _object;
    return this;
  }

 /**
   * Get protocol
   * @return protocol
  **/
  @JsonProperty("protocol")
  public String getProtocol() {
    return protocol;
  }

  public void setProtocol(String protocol) {
    this.protocol = protocol;
  }

  public DomainAllInfo protocol(String protocol) {
    this.protocol = protocol;
    return this;
  }

 /**
   * Get responseText
   * @return responseText
  **/
  @JsonProperty("response_text")
  public String getResponseText() {
    return responseText;
  }

  public void setResponseText(String responseText) {
    this.responseText = responseText;
  }

  public DomainAllInfo responseText(String responseText) {
    this.responseText = responseText;
    return this;
  }

 /**
   * Get responseCode
   * @return responseCode
  **/
  @JsonProperty("response_code")
  public String getResponseCode() {
    return responseCode;
  }

  public void setResponseCode(String responseCode) {
    this.responseCode = responseCode;
  }

  public DomainAllInfo responseCode(String responseCode) {
    this.responseCode = responseCode;
    return this;
  }

 /**
   * Get action
   * @return action
  **/
  @JsonProperty("action")
  public String getAction() {
    return action;
  }

  public void setAction(String action) {
    this.action = action;
  }

  public DomainAllInfo action(String action) {
    this.action = action;
    return this;
  }

 /**
   * Get isSuccess
   * @return isSuccess
  **/
  @JsonProperty("is_success")
  public String getIsSuccess() {
    return isSuccess;
  }

  public void setIsSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
  }

  public DomainAllInfo isSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
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
    DomainAllInfo domainAllInfo = (DomainAllInfo) o;
    return Objects.equals(this.oPSVersion, domainAllInfo.oPSVersion) &&
        Objects.equals(this.attributes, domainAllInfo.attributes) &&
        Objects.equals(this._object, domainAllInfo._object) &&
        Objects.equals(this.protocol, domainAllInfo.protocol) &&
        Objects.equals(this.responseText, domainAllInfo.responseText) &&
        Objects.equals(this.responseCode, domainAllInfo.responseCode) &&
        Objects.equals(this.action, domainAllInfo.action) &&
        Objects.equals(this.isSuccess, domainAllInfo.isSuccess);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oPSVersion, attributes, _object, protocol, responseText, responseCode, action, isSuccess);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAllInfo {\n");
    
    sb.append("    oPSVersion: ").append(toIndentedString(oPSVersion)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    _object: ").append(toIndentedString(_object)).append("\n");
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

