package org.openapitools.model;

import org.openapitools.model.DomainProvProcessPendingAttributes;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Provisioning status data for a pending domain order.
 */
@ApiModel(description="Provisioning status data for a pending domain order.")

public class DomainProvProcessPending  {
  
  @ApiModelProperty(value = "")

  private String oPSVersion;

  @ApiModelProperty(value = "")

  private String responseText;

  @ApiModelProperty(value = "")

  private String protocol;

  @ApiModelProperty(value = "")

  private String responseCode;

  @ApiModelProperty(value = "")

  private String action;

  @ApiModelProperty(value = "")

  private String _object;

  @ApiModelProperty(value = "")

  private String isSuccess;

  @ApiModelProperty(value = "")

  private DomainProvProcessPendingAttributes attributes;
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

  public DomainProvProcessPending oPSVersion(String oPSVersion) {
    this.oPSVersion = oPSVersion;
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

  public DomainProvProcessPending responseText(String responseText) {
    this.responseText = responseText;
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

  public DomainProvProcessPending protocol(String protocol) {
    this.protocol = protocol;
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

  public DomainProvProcessPending responseCode(String responseCode) {
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

  public DomainProvProcessPending action(String action) {
    this.action = action;
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

  public DomainProvProcessPending _object(String _object) {
    this._object = _object;
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

  public DomainProvProcessPending isSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
    return this;
  }

 /**
   * Get attributes
   * @return attributes
  **/
  @JsonProperty("attributes")
  public DomainProvProcessPendingAttributes getAttributes() {
    return attributes;
  }

  public void setAttributes(DomainProvProcessPendingAttributes attributes) {
    this.attributes = attributes;
  }

  public DomainProvProcessPending attributes(DomainProvProcessPendingAttributes attributes) {
    this.attributes = attributes;
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
    DomainProvProcessPending domainProvProcessPending = (DomainProvProcessPending) o;
    return Objects.equals(this.oPSVersion, domainProvProcessPending.oPSVersion) &&
        Objects.equals(this.responseText, domainProvProcessPending.responseText) &&
        Objects.equals(this.protocol, domainProvProcessPending.protocol) &&
        Objects.equals(this.responseCode, domainProvProcessPending.responseCode) &&
        Objects.equals(this.action, domainProvProcessPending.action) &&
        Objects.equals(this._object, domainProvProcessPending._object) &&
        Objects.equals(this.isSuccess, domainProvProcessPending.isSuccess) &&
        Objects.equals(this.attributes, domainProvProcessPending.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oPSVersion, responseText, protocol, responseCode, action, _object, isSuccess, attributes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainProvProcessPending {\n");
    
    sb.append("    oPSVersion: ").append(toIndentedString(oPSVersion)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    responseCode: ").append(toIndentedString(responseCode)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
    sb.append("    _object: ").append(toIndentedString(_object)).append("\n");
    sb.append("    isSuccess: ").append(toIndentedString(isSuccess)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

