package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * Payload for updating an existing mail alert.
 **/
@Schema(description="Payload for updating an existing mail alert.")
public class MailAlertUpdateRequest   {
  
  @Schema(description = "Alert ID to update.")
 /**
   * Alert ID to update.  
  **/
  private Integer alertId = null;
  
  @Schema(description = "Alert type identifier.")
 /**
   * Alert type identifier.  
  **/
  private String type = null;
  
  @Schema(description = "Alert value or threshold.")
 /**
   * Alert value or threshold.  
  **/
  private String value = null;
  
  @Schema(description = "Email address to notify.")
 /**
   * Email address to notify.  
  **/
  private String to = null;
  
  @Schema(description = "Whether the alert is enabled.")
 /**
   * Whether the alert is enabled.  
  **/
  private String enabled = null;
 /**
   * Alert ID to update.
   * @return alertId
  **/
  @JsonProperty("alert_id")
  public Integer getAlertId() {
    return alertId;
  }

  public void setAlertId(Integer alertId) {
    this.alertId = alertId;
  }

  public MailAlertUpdateRequest alertId(Integer alertId) {
    this.alertId = alertId;
    return this;
  }

 /**
   * Alert type identifier.
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public MailAlertUpdateRequest type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Alert value or threshold.
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public MailAlertUpdateRequest value(String value) {
    this.value = value;
    return this;
  }

 /**
   * Email address to notify.
   * @return to
  **/
  @JsonProperty("to")
  public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }

  public MailAlertUpdateRequest to(String to) {
    this.to = to;
    return this;
  }

 /**
   * Whether the alert is enabled.
   * @return enabled
  **/
  @JsonProperty("enabled")
  public String getEnabled() {
    return enabled;
  }

  public void setEnabled(String enabled) {
    this.enabled = enabled;
  }

  public MailAlertUpdateRequest enabled(String enabled) {
    this.enabled = enabled;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertUpdateRequest {\n");
    
    sb.append("    alertId: ").append(toIndentedString(alertId)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
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
