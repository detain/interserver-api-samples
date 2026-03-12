package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailAlertsResponseInner  {
  
  @ApiModelProperty(value = "")

  private Integer alertId;

  @ApiModelProperty(value = "")

  private String alertType;

  @ApiModelProperty(value = "")

  private String alertValue;

  @ApiModelProperty(value = "")

  private String alertTo;

  @ApiModelProperty(value = "")

  private String alertEnabled;
 /**
   * Get alertId
   * @return alertId
  **/
  @JsonProperty("alert_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailAlertsResponseInner mailAlertsResponseInner = (MailAlertsResponseInner) o;
    return Objects.equals(this.alertId, mailAlertsResponseInner.alertId) &&
        Objects.equals(this.alertType, mailAlertsResponseInner.alertType) &&
        Objects.equals(this.alertValue, mailAlertsResponseInner.alertValue) &&
        Objects.equals(this.alertTo, mailAlertsResponseInner.alertTo) &&
        Objects.equals(this.alertEnabled, mailAlertsResponseInner.alertEnabled);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

