package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailAlertsResponseInner   {

  private @Valid Integer alertId = null;

  private @Valid String alertType = null;

  private @Valid String alertValue = null;

  private @Valid String alertTo = null;

  private @Valid String alertEnabled = null;

  /**
   **/
  public MailAlertsResponseInner alertId(Integer alertId) {
    this.alertId = alertId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("alert_id")
  @NotNull

  public Integer getAlertId() {
    return alertId;
  }
  public void setAlertId(Integer alertId) {
    this.alertId = alertId;
  }

  /**
   **/
  public MailAlertsResponseInner alertType(String alertType) {
    this.alertType = alertType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("alert_type")
  @NotNull

  public String getAlertType() {
    return alertType;
  }
  public void setAlertType(String alertType) {
    this.alertType = alertType;
  }

  /**
   **/
  public MailAlertsResponseInner alertValue(String alertValue) {
    this.alertValue = alertValue;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("alert_value")
  @NotNull

  public String getAlertValue() {
    return alertValue;
  }
  public void setAlertValue(String alertValue) {
    this.alertValue = alertValue;
  }

  /**
   **/
  public MailAlertsResponseInner alertTo(String alertTo) {
    this.alertTo = alertTo;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("alert_to")
  @NotNull

  public String getAlertTo() {
    return alertTo;
  }
  public void setAlertTo(String alertTo) {
    this.alertTo = alertTo;
  }

  /**
   **/
  public MailAlertsResponseInner alertEnabled(String alertEnabled) {
    this.alertEnabled = alertEnabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("alert_enabled")
  @NotNull

  public String getAlertEnabled() {
    return alertEnabled;
  }
  public void setAlertEnabled(String alertEnabled) {
    this.alertEnabled = alertEnabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailAlertsResponseInner mailAlertsResponseInner = (MailAlertsResponseInner) o;
    return Objects.equals(alertId, mailAlertsResponseInner.alertId) &&
        Objects.equals(alertType, mailAlertsResponseInner.alertType) &&
        Objects.equals(alertValue, mailAlertsResponseInner.alertValue) &&
        Objects.equals(alertTo, mailAlertsResponseInner.alertTo) &&
        Objects.equals(alertEnabled, mailAlertsResponseInner.alertEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(alertId, alertType, alertValue, alertTo, alertEnabled);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
