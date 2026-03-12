package io.swagger.model;

import io.swagger.model.DomainOrderResponseAttributes;
import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Registrar response metadata returned after a domain order.
 **/
@Schema(description="Registrar response metadata returned after a domain order.")
public class DomainOrderResponse   {
  
  @Schema(description = "")
  private String _oPSVersion = null;
  
  @Schema(description = "")
  private String protocol = null;
  
  @Schema(description = "")
  private String isSuccess = null;
  
  @Schema(description = "")
  private String action = null;
  
  @Schema(description = "")
  private DomainOrderResponseAttributes attributes = null;
  
  @Schema(description = "")
  private String responseText = null;
  
  @Schema(description = "")
  private String object = null;
  
  @Schema(description = "")
  private String responseCode = null;
 /**
   * Get _oPSVersion
   * @return _oPSVersion
  **/
  @JsonProperty("_OPS_version")
  @NotNull
  public String getOPSVersion() {
    return _oPSVersion;
  }

  public void setOPSVersion(String _oPSVersion) {
    this._oPSVersion = _oPSVersion;
  }

  public DomainOrderResponse _oPSVersion(String _oPSVersion) {
    this._oPSVersion = _oPSVersion;
    return this;
  }

 /**
   * Get protocol
   * @return protocol
  **/
  @JsonProperty("protocol")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
   * Get object
   * @return object
  **/
  @JsonProperty("object")
  @NotNull
  public String getObject() {
    return object;
  }

  public void setObject(String object) {
    this.object = object;
  }

  public DomainOrderResponse object(String object) {
    this.object = object;
    return this;
  }

 /**
   * Get responseCode
   * @return responseCode
  **/
  @JsonProperty("response_code")
  @NotNull
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
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderResponse {\n");
    
    sb.append("    _oPSVersion: ").append(toIndentedString(_oPSVersion)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    isSuccess: ").append(toIndentedString(isSuccess)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    object: ").append(toIndentedString(object)).append("\n");
    sb.append("    responseCode: ").append(toIndentedString(responseCode)).append("\n");
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
