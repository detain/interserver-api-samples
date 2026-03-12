package io.swagger.model;

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

public class MailAlertsResponseInner   {
  
  @Schema(description = "")
  private Integer alertId = null;
  
  @Schema(description = "")
  private String alertType = null;
  
  @Schema(description = "")
  private String alertValue = null;
  
  @Schema(description = "")
  private String alertTo = null;
  
  @Schema(description = "")
  private String alertEnabled = null;
 /**
   * Get alertId
   * @return alertId
  **/
  @JsonProperty("alert_id")
  @NotNull
  public Integer getAlertId() {
    return alertId;
  }

  public void setAlertId(Integer alertId) {
    this.alertId = alertId;
  }

  public MailAlertsResponseInner alertId(Integer alertId) {
    this.alertId = alertId;
    return this;
  }

 /**
   * Get alertType
   * @return alertType
  **/
  @JsonProperty("alert_type")
  @NotNull
  public String getAlertType() {
    return alertType;
  }

  public void setAlertType(String alertType) {
    this.alertType = alertType;
  }

  public MailAlertsResponseInner alertType(String alertType) {
    this.alertType = alertType;
    return this;
  }

 /**
   * Get alertValue
   * @return alertValue
  **/
  @JsonProperty("alert_value")
  @NotNull
  public String getAlertValue() {
    return alertValue;
  }

  public void setAlertValue(String alertValue) {
    this.alertValue = alertValue;
  }

  public MailAlertsResponseInner alertValue(String alertValue) {
    this.alertValue = alertValue;
    return this;
  }

 /**
   * Get alertTo
   * @return alertTo
  **/
  @JsonProperty("alert_to")
  @NotNull
  public String getAlertTo() {
    return alertTo;
  }

  public void setAlertTo(String alertTo) {
    this.alertTo = alertTo;
  }

  public MailAlertsResponseInner alertTo(String alertTo) {
    this.alertTo = alertTo;
    return this;
  }

 /**
   * Get alertEnabled
   * @return alertEnabled
  **/
  @JsonProperty("alert_enabled")
  @NotNull
  public String getAlertEnabled() {
    return alertEnabled;
  }

  public void setAlertEnabled(String alertEnabled) {
    this.alertEnabled = alertEnabled;
  }

  public MailAlertsResponseInner alertEnabled(String alertEnabled) {
    this.alertEnabled = alertEnabled;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertsResponseInner {\n");
    
    sb.append("    alertId: ").append(toIndentedString(alertId)).append("\n");
    sb.append("    alertType: ").append(toIndentedString(alertType)).append("\n");
    sb.append("    alertValue: ").append(toIndentedString(alertValue)).append("\n");
    sb.append("    alertTo: ").append(toIndentedString(alertTo)).append("\n");
    sb.append("    alertEnabled: ").append(toIndentedString(alertEnabled)).append("\n");
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
