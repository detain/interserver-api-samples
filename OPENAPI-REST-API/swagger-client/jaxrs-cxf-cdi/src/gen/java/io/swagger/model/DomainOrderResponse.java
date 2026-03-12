package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainOrderResponseAttributes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Registrar response metadata returned after a domain order.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Registrar response metadata returned after a domain order.")

public class DomainOrderResponse   {
  private String _oPSVersion = null;
  private String protocol = null;
  private String isSuccess = null;
  private String action = null;
  private DomainOrderResponseAttributes attributes = null;
  private String responseText = null;
  private String object = null;
  private String responseCode = null;

  /**
   **/
  public DomainOrderResponse _oPSVersion(String _oPSVersion) {
    this._oPSVersion = _oPSVersion;
    return this;
  }

  
  
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
  public DomainOrderResponse protocol(String protocol) {
    this.protocol = protocol;
    return this;
  }

  
  
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
  public DomainOrderResponse isSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("is_success")
  @NotNull
  public String getIsSuccess() {
    return isSuccess;
  }
  public void setIsSuccess(String isSuccess) {
    this.isSuccess = isSuccess;
  }

  /**
   **/
  public DomainOrderResponse action(String action) {
    this.action = action;
    return this;
  }

  
  
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
  public DomainOrderResponse attributes(DomainOrderResponseAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("attributes")
  @NotNull
  @Valid
  public DomainOrderResponseAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(DomainOrderResponseAttributes attributes) {
    this.attributes = attributes;
  }

  /**
   **/
  public DomainOrderResponse responseText(String responseText) {
    this.responseText = responseText;
    return this;
  }

  
  
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
  public DomainOrderResponse object(String object) {
    this.object = object;
    return this;
  }

  
  
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
  public DomainOrderResponse responseCode(String responseCode) {
    this.responseCode = responseCode;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("response_code")
  @NotNull
  public String getResponseCode() {
    return responseCode;
  }
  public void setResponseCode(String responseCode) {
    this.responseCode = responseCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderResponse domainOrderResponse = (DomainOrderResponse) o;
    return Objects.equals(_oPSVersion, domainOrderResponse._oPSVersion) &&
        Objects.equals(protocol, domainOrderResponse.protocol) &&
        Objects.equals(isSuccess, domainOrderResponse.isSuccess) &&
        Objects.equals(action, domainOrderResponse.action) &&
        Objects.equals(attributes, domainOrderResponse.attributes) &&
        Objects.equals(responseText, domainOrderResponse.responseText) &&
        Objects.equals(object, domainOrderResponse.object) &&
        Objects.equals(responseCode, domainOrderResponse.responseCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_oPSVersion, protocol, isSuccess, action, attributes, responseText, object, responseCode);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
