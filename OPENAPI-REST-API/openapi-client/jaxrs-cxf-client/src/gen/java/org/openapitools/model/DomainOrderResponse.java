package org.openapitools.model;

import org.openapitools.model.DomainOrderResponseAttributes;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Registrar response metadata returned after a domain order.
 */
@ApiModel(description="Registrar response metadata returned after a domain order.")

public class DomainOrderResponse  {
  
  @ApiModelProperty(value = "")

  private String oPSVersion;

  @ApiModelProperty(value = "")

  private String protocol;

  @ApiModelProperty(value = "")

  private String isSuccess;

  @ApiModelProperty(value = "")

  private String action;

  @ApiModelProperty(value = "")

  private DomainOrderResponseAttributes attributes;

  @ApiModelProperty(value = "")

  private String responseText;

  @ApiModelProperty(value = "")

  private String _object;

  @ApiModelProperty(value = "")

  private String responseCode;
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

  public DomainOrderResponse oPSVersion(String oPSVersion) {
    this.oPSVersion = oPSVersion;
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

  public DomainOrderResponse protocol(String protocol) {
    this.protocol = protocol;
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

  public DomainOrderResponse isSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
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

  public DomainOrderResponse action(String action) {
    this.action = action;
    return this;
  }

 /**
   * Get attributes
   * @return attributes
  **/
  @JsonProperty("attributes")
  public DomainOrderResponseAttributes getAttributes() {
    return attributes;
  }

  public void setAttributes(DomainOrderResponseAttributes attributes) {
    this.attributes = attributes;
  }

  public DomainOrderResponse attributes(DomainOrderResponseAttributes attributes) {
    this.attributes = attributes;
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

  public DomainOrderResponse responseText(String responseText) {
    this.responseText = responseText;
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

  public DomainOrderResponse _object(String _object) {
    this._object = _object;
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

  public DomainOrderResponse responseCode(String responseCode) {
    this.responseCode = responseCode;
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
    DomainOrderResponse domainOrderResponse = (DomainOrderResponse) o;
    return Objects.equals(this.oPSVersion, domainOrderResponse.oPSVersion) &&
        Objects.equals(this.protocol, domainOrderResponse.protocol) &&
        Objects.equals(this.isSuccess, domainOrderResponse.isSuccess) &&
        Objects.equals(this.action, domainOrderResponse.action) &&
        Objects.equals(this.attributes, domainOrderResponse.attributes) &&
        Objects.equals(this.responseText, domainOrderResponse.responseText) &&
        Objects.equals(this._object, domainOrderResponse._object) &&
        Objects.equals(this.responseCode, domainOrderResponse.responseCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oPSVersion, protocol, isSuccess, action, attributes, responseText, _object, responseCode);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderResponse {\n");
    
    sb.append("    oPSVersion: ").append(toIndentedString(oPSVersion)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    isSuccess: ").append(toIndentedString(isSuccess)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    _object: ").append(toIndentedString(_object)).append("\n");
    sb.append("    responseCode: ").append(toIndentedString(responseCode)).append("\n");
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

