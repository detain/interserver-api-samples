package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainProvProcessPendingAttributes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Provisioning status data for a pending domain order.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Provisioning status data for a pending domain order.")

public class DomainProvProcessPending   {
  private String _oPSVersion = null;
  private String responseText = null;
  private String protocol = null;
  private String responseCode = null;
  private String action = null;
  private String object = null;
  private String isSuccess = null;
  private DomainProvProcessPendingAttributes attributes = null;

  /**
   **/
  public DomainProvProcessPending _oPSVersion(String _oPSVersion) {
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
  public DomainProvProcessPending responseText(String responseText) {
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
  public DomainProvProcessPending protocol(String protocol) {
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
  public DomainProvProcessPending responseCode(String responseCode) {
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

  /**
   **/
  public DomainProvProcessPending action(String action) {
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
  public DomainProvProcessPending object(String object) {
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
  public DomainProvProcessPending isSuccess(String isSuccess) {
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
  public DomainProvProcessPending attributes(DomainProvProcessPendingAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("attributes")
  @NotNull
  @Valid
  public DomainProvProcessPendingAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(DomainProvProcessPendingAttributes attributes) {
    this.attributes = attributes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainProvProcessPending domainProvProcessPending = (DomainProvProcessPending) o;
    return Objects.equals(_oPSVersion, domainProvProcessPending._oPSVersion) &&
        Objects.equals(responseText, domainProvProcessPending.responseText) &&
        Objects.equals(protocol, domainProvProcessPending.protocol) &&
        Objects.equals(responseCode, domainProvProcessPending.responseCode) &&
        Objects.equals(action, domainProvProcessPending.action) &&
        Objects.equals(object, domainProvProcessPending.object) &&
        Objects.equals(isSuccess, domainProvProcessPending.isSuccess) &&
        Objects.equals(attributes, domainProvProcessPending.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_oPSVersion, responseText, protocol, responseCode, action, object, isSuccess, attributes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainProvProcessPending {\n");
    
    sb.append("    _oPSVersion: ").append(toIndentedString(_oPSVersion)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    protocol: ").append(toIndentedString(protocol)).append("\n");
    sb.append("    responseCode: ").append(toIndentedString(responseCode)).append("\n");
    sb.append("    action: ").append(toIndentedString(action)).append("\n");
    sb.append("    object: ").append(toIndentedString(object)).append("\n");
    sb.append("    isSuccess: ").append(toIndentedString(isSuccess)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
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
